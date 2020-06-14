#!/usr/bin/env bash
# grab the master's version number.
export url="https://raw.githubusercontent.com/DragonBuild/installer/master/vers"
export cmd='false -- curl/wget is missing'

check_for_command(){
  if ! command -v ${@} &>/dev/null; then
    return 1
  fi
  return 0
}

if check_for_command "curl"; then
 cmd="curl -s"
elif check_for_command "wget"; then
 cmd="wget >&2 -O -"
fi

${cmd} ${url}
if (( $? )); then
  printf -- '%s: %s\n%s\n' >&2 "${0}" "Failed to check for update." \
    " => Please check your internet connection or install curl/wget."
  printf -- '\t- %s (%s)' >&2 'Command used was' "${cmd}"
fi

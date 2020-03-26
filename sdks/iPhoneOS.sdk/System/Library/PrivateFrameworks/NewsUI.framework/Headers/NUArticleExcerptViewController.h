//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NewsUI/NULoadable-Protocol.h>

@class FCArticle, NUArticleExcerptTraits, NUArticleExcerptView;
@protocol NULoadingDelegate;

@interface NUArticleExcerptViewController : UIViewController <NULoadable>
{
    id <NULoadingDelegate> _loadingDelegate;
    FCArticle *_article;
    NUArticleExcerptTraits *_traits;
    NUArticleExcerptView *_excerptView;
}

@property(readonly, nonatomic) NUArticleExcerptView *excerptView; // @synthesize excerptView=_excerptView;
@property(retain, nonatomic) NUArticleExcerptTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) FCArticle *article; // @synthesize article=_article;
@property(nonatomic) __weak id <NULoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
// - (void).cxx_destruct;
- (void)loadExcerptFromArticle:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)loadHeadlineImageFromArticle:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithArticle:(id)arg1 traits:(id)arg2;

@end

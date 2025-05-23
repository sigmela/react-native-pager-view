#import <React/RCTEventDispatcher.h>
#import <React/RCTShadowView.h>
#import <React/UIView+React.h>
#import <UIKit/UIKit.h>
#import "UIView+isHorizontalRtlLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface RNCPagerView: UIView <RtlLayoutProtocol>

- (instancetype)initWithEventDispatcher:(id<RCTEventDispatcherProtocol> )eventDispatcher;

@property(nonatomic) NSInteger initialPage;
@property(nonatomic) NSInteger lastReportedIndex;
@property(nonatomic) NSInteger destinationIndex;
@property(nonatomic) NSInteger currentIndex;
@property(nonatomic) NSInteger pageMargin;
@property(nonatomic, readonly) BOOL scrollEnabled;
@property(nonatomic, readonly) BOOL scrollLeftEnabled;
@property(nonatomic, readonly) BOOL scrollRightEnabled;
#if !TARGET_OS_VISION
@property(nonatomic, readonly) UIScrollViewKeyboardDismissMode dismissKeyboard;
#endif
@property(nonatomic) UIPageViewControllerNavigationOrientation orientation;
@property(nonatomic, copy) RCTDirectEventBlock onPageSelected;
@property(nonatomic, copy) RCTDirectEventBlock onPageScroll;
@property(nonatomic, copy) RCTDirectEventBlock onPageScrollStateChanged;
@property(nonatomic) BOOL overdrag;
@property(nonatomic) NSString* layoutDirection;
@property(nonatomic, assign) BOOL animating;

- (void)goTo:(NSInteger)index animated:(BOOL)animated;
- (void)shouldScroll:(BOOL)scrollEnabled;
- (void)shouldLeftScroll:(BOOL)scrollEnabled;
- (void)shouldRightScroll:(BOOL)scrollEnabled;
- (void)shouldDismissKeyboard:(NSString *)dismissKeyboard;

@end

NS_ASSUME_NONNULL_END

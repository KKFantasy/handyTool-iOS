
#import <UIKit/UIKit.h>

@interface UIBarButtonItem (KKExtension)
+ (instancetype)itemWithImage:(NSString *)image highImage:(NSString *)highImage target:(id)target action:(SEL)action;
@end

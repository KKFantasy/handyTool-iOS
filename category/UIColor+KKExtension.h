
#import <UIKit/UIKit.h>


@interface UIColor (KKExtension)

//随机色
+ (instancetype)randomColor;

//十六进制颜色
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

@end

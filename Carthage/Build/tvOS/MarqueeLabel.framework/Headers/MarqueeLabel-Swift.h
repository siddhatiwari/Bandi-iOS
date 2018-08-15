// Generated by Apple Swift version 4.1 effective-3.3 (swiftlang-902.0.48 clang-902.0.37.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import QuartzCore;
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MarqueeLabel",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class UIViewController;
@class NSCoder;
@class UIWindow;
@class CAAnimation;
@class CALayer;
@class UIGestureRecognizer;
@class NSAttributedString;
@class UIFont;
@class UIColor;

SWIFT_CLASS("_TtC12MarqueeLabel12MarqueeLabel")
@interface MarqueeLabel : UILabel <CAAnimationDelegate>
/// Specifies the animation curve used in the scrolling motion of the labels.
/// Allowable options:
/// <ul>
///   <li>
///     <code>UIViewAnimationOptionCurveEaseInOut</code>
///   </li>
///   <li>
///     <code>UIViewAnimationOptionCurveEaseIn</code>
///   </li>
///   <li>
///     <code>UIViewAnimationOptionCurveEaseOut</code>
///   </li>
///   <li>
///     <code>UIViewAnimationOptionCurveLinear</code>
///   </li>
/// </ul>
/// Defaults to <code>UIViewAnimationOptionCurveEaseInOut</code>.
@property (nonatomic) UIViewAnimationCurve animationCurve;
/// A boolean property that sets whether the <code>MarqueeLabel</code> should behave like a normal <code>UILabel</code>.
/// When set to <code>true</code> the <code>MarqueeLabel</code> will behave and look like a normal <code>UILabel</code>, and  will not begin any scrolling animations.
/// Changes to this property take effect immediately, removing any in-flight animation as well as any edge fade. Note that <code>MarqueeLabel</code>
/// will respect the current values of the <code>lineBreakMode</code> and <code>textAlignment</code>properties while labelized.
/// To simply prevent automatic scrolling, use the <code>holdScrolling</code> property.
/// Defaults to <code>false</code>.
/// seealso:
/// holdScrolling
/// seealso:
/// lineBreakMode
/// note:
/// The label will not automatically scroll when this property is set to <code>true</code>.
/// warning:
/// The UILabel default setting for the <code>lineBreakMode</code> property is <code>NSLineBreakByTruncatingTail</code>, which truncates
/// the text adds an ellipsis glyph (…). Set the <code>lineBreakMode</code> property to <code>NSLineBreakByClipping</code> in order to avoid the
/// ellipsis, especially if using an edge transparency fade.
@property (nonatomic) BOOL labelize;
/// A boolean property that sets whether the <code>MarqueeLabel</code> should hold (prevent) automatic label scrolling.
/// When set to <code>true</code>, <code>MarqueeLabel</code> will not automatically scroll even its text is larger than the specified frame,
/// although the specified edge fades will remain.
/// To set <code>MarqueeLabel</code> to act like a normal UILabel, use the <code>labelize</code> property.
/// Defaults to <code>false</code>.
/// note:
/// The label will not automatically scroll when this property is set to <code>true</code>.
/// seealso:
/// labelize
@property (nonatomic) BOOL holdScrolling;
/// A boolean property that sets whether the <code>MarqueeLabel</code> should only begin a scroll when tapped.
/// If this property is set to <code>true</code>, the <code>MarqueeLabel</code> will only begin a scroll animation cycle when tapped. The label will
/// not automatically being a scroll. This setting overrides the setting of the <code>holdScrolling</code> property.
/// Defaults to <code>false</code>.
/// note:
/// The label will not automatically scroll when this property is set to <code>false</code>.
/// seealso:
/// holdScrolling
@property (nonatomic) BOOL tapToScroll;
/// A read-only boolean property that indicates if the label’s scroll animation has been paused.
/// seealso:
/// pauseLabel
/// seealso:
/// unpauseLabel
@property (nonatomic, readonly) BOOL isPaused;
/// A boolean property that indicates if the label is currently away from the home location.
/// The “home” location is the traditional location of <code>UILabel</code> text. This property essentially reflects if a scroll animation is underway.
@property (nonatomic, readonly) BOOL awayFromHome;
@property (nonatomic) CGFloat scrollDuration;
@property (nonatomic) CGFloat scrollRate;
/// A buffer (offset) between the leading edge of the label text and the label frame.
/// This property adds additional space between the leading edge of the label text and the label frame. The
/// leading edge is the edge of the label text facing the direction of scroll (i.e. the edge that animates
/// offscreen first during scrolling).
/// Defaults to <code>0</code>.
/// note:
/// The value set to this property affects label positioning at all times (including when <code>labelize</code> is set to <code>true</code>),
/// including when the text string length is short enough that the label does not need to scroll.
/// note:
/// For Continuous-type labels, the smallest value of <code>leadingBuffer</code>, <code>trailingBuffer</code>, and <code>fadeLength</code>
/// is used as spacing between the two label instances. Zero is an allowable value for all three properties.
/// seealso:
/// trailingBuffer
@property (nonatomic) CGFloat leadingBuffer;
/// A buffer (offset) between the trailing edge of the label text and the label frame.
/// This property adds additional space (buffer) between the trailing edge of the label text and the label frame. The
/// trailing edge is the edge of the label text facing away from the direction of scroll (i.e. the edge that animates
/// offscreen last during scrolling).
/// Defaults to <code>0</code>.
/// note:
/// The value set to this property has no effect when the <code>labelize</code> property is set to <code>true</code>.
/// note:
/// For Continuous-type labels, the smallest value of <code>leadingBuffer</code>, <code>trailingBuffer</code>, and <code>fadeLength</code>
/// is used as spacing between the two label instances. Zero is an allowable value for all three properties.
/// seealso:
/// leadingBuffer
@property (nonatomic) CGFloat trailingBuffer;
/// The length of transparency fade at the left and right edges of the frame.
/// This propery sets the size (in points) of the view edge transparency fades on the left and right edges of a <code>MarqueeLabel</code>. The
/// transparency fades from an alpha of 1.0 (fully visible) to 0.0 (fully transparent) over this distance. Values set to this property
/// will be sanitized to prevent a fade length greater than 1/2 of the frame width.
/// Defaults to <code>0</code>.
@property (nonatomic) CGFloat fadeLength;
/// The length of delay in seconds that the label pauses at the completion of a scroll.
@property (nonatomic) CGFloat animationDelay;
/// The read-only/computed duration of the scroll animation (not including delay).
/// \code
/// The value of this property is calculated from the value set to the `speed` property. If a duration-type speed is
/// used to set the label animation speed, `animationDuration` will be equivalent to that value.
///
/// \endcode
@property (nonatomic, readonly) CGFloat animationDuration;
/// Convenience method to restart all <code>MarqueeLabel</code> instances that have the specified view controller in their next responder chain.
/// warning:
/// View controllers that appear with animation (such as from underneath a modal-style controller) can cause some <code>MarqueeLabel</code> text
/// position “jumping” when this method is used in <code>viewDidAppear</code> if scroll animations are already underway. Use this method inside <code>viewWillAppear:</code>
/// instead to avoid this problem.
/// warning:
/// This method may not function properly if passed the parent view controller when using view controller containment.
/// seealso:
/// restartLabel
/// seealso:
/// controllerViewDidAppear:
/// seealso:
/// controllerViewWillAppear:
/// \param controller The view controller for which to restart all <code>MarqueeLabel</code> instances.
///
+ (void)restartLabelsOfController:(UIViewController * _Nonnull)controller;
/// Convenience method to restart all <code>MarqueeLabel</code> instances that have the specified view controller in their next responder chain.
/// Alternative to <code>restartLabelsOfController</code>. This method is retained for backwards compatibility and future enhancements.
/// seealso:
/// restartLabel
/// seealso:
/// controllerViewDidAppear
/// \param controller The view controller that will appear.
///
+ (void)controllerViewWillAppear:(UIViewController * _Nonnull)controller;
/// Convenience method to restart all <code>MarqueeLabel</code> instances that have the specified view controller in their next responder chain.
/// Alternative to <code>restartLabelsOfController</code>. This method is retained for backwards compatibility and future enhancements.
/// seealso:
/// restartLabel
/// seealso:
/// controllerViewWillAppear
/// \param controller The view controller that did appear.
///
+ (void)controllerViewDidAppear:(UIViewController * _Nonnull)controller;
/// Labelizes all <code>MarqueeLabel</code> instances that have the specified view controller in their next responder chain.
/// The <code>labelize</code> property of all recognized <code>MarqueeLabel</code> instances will be set to <code>true</code>.
/// seealso:
/// labelize
/// \param controller The view controller for which all <code>MarqueeLabel</code> instances should be labelized.
///
+ (void)controllerLabelsLabelize:(UIViewController * _Nonnull)controller;
/// De-labelizes all <code>MarqueeLabel</code> instances that have the specified view controller in their next responder chain.
/// The <code>labelize</code> property of all recognized <code>MarqueeLabel</code> instances will be set to <code>false</code>.
/// seealso:
/// labelize
/// \param controller The view controller for which all <code>MarqueeLabel</code> instances should be de-labelized.
///
+ (void)controllerLabelsAnimate:(UIViewController * _Nonnull)controller;
/// Returns a newly initialized <code>MarqueeLabel</code> instance with the specified scroll rate and edge transparency fade length.
/// seealso:
/// fadeLength
/// \param frame A rectangle specifying the initial location and size of the view in its superview’s coordinates. Text (for the given font, font size, etc.) that does not fit in this frame will automatically scroll.
///
/// \param pixelsPerSec A rate of scroll for the label scroll animation. Must be non-zero. Note that this will be the peak (mid-transition) rate for ease-type animation.
///
/// \param fadeLength A length of transparency fade at the left and right edges of the <code>MarqueeLabel</code> instance’s frame.
///
///
/// returns:
/// An initialized <code>MarqueeLabel</code> object or nil if the object couldn’t be created.
- (nonnull instancetype)initWithFrame:(CGRect)frame rate:(CGFloat)rate fadeLength:(CGFloat)fade OBJC_DESIGNATED_INITIALIZER;
/// Returns a newly initialized <code>MarqueeLabel</code> instance with the specified scroll rate and edge transparency fade length.
/// seealso:
/// fadeLength
/// \param frame A rectangle specifying the initial location and size of the view in its superview’s coordinates. Text (for the given font, font size, etc.) that does not fit in this frame will automatically scroll.
///
/// \param scrollDuration A scroll duration the label scroll animation. Must be non-zero. This will be the duration that the animation takes for one-half of the scroll cycle in the case of left-right and right-left marquee types, and for one loop of a continuous marquee type.
///
/// \param fadeLength A length of transparency fade at the left and right edges of the <code>MarqueeLabel</code> instance’s frame.
///
///
/// returns:
/// An initialized <code>MarqueeLabel</code> object or nil if the object couldn’t be created.
- (nonnull instancetype)initWithFrame:(CGRect)frame duration:(CGFloat)duration fadeLength:(CGFloat)fade OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Returns a newly initialized <code>MarqueeLabel</code> instance.
/// The default scroll duration of 7.0 seconds and fade length of 0.0 are used.
/// \param frame A rectangle specifying the initial location and size of the view in its superview’s coordinates. Text (for the given font, font size, etc.) that does not fit in this frame will automatically scroll.
///
///
/// returns:
/// An initialized <code>MarqueeLabel</code> object or nil if the object couldn’t be created.
- (nonnull instancetype)initWithFrame:(CGRect)frame;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder SWIFT_AVAILABILITY(ios,introduced=8.0);
- (void)layoutSubviews;
- (void)willMoveToWindow:(UIWindow * _Nullable)newWindow;
- (void)didMoveToWindow;
- (CGSize)sizeThatFits:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
- (BOOL)labelShouldScroll SWIFT_WARN_UNUSED_RESULT;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layerClass;)
+ (Class _Nonnull)layerClass SWIFT_WARN_UNUSED_RESULT;
- (void)drawLayer:(CALayer * _Nonnull)layer inContext:(CGContextRef _Nonnull)ctx;
- (void)restartForViewController:(NSNotification * _Nonnull)notification;
- (void)labelizeForController:(NSNotification * _Nonnull)notification;
- (void)animateForController:(NSNotification * _Nonnull)notification;
/// Overrides any non-size condition which is preventing the receiver from automatically scrolling, and begins a scroll animation.
/// Currently the only non-size conditions which can prevent a label from scrolling are the <code>tapToScroll</code> and <code>holdScrolling</code> properties. This
/// method will not force a label with a string that fits inside the label bounds (i.e. that would not automatically scroll) to begin a scroll
/// animation.
/// Upon the completion of the first forced scroll animation, the receiver will not automatically continue to scroll unless the conditions
/// preventing scrolling have been removed.
/// note:
/// This method has no effect if called during an already in-flight scroll animation.
/// seealso:
/// restartLabel
- (void)triggerScrollStart;
/// Immediately resets the label to the home position, cancelling any in-flight scroll animation, and restarts the scroll animation if the appropriate conditions are met.
/// seealso:
/// resetLabel
/// seealso:
/// triggerScrollStart
- (void)restartLabel;
/// Resets the label text, recalculating the scroll animation.
/// The text is immediately returned to the home position, and the scroll animation positions are cleared. Scrolling will not resume automatically after
/// a call to this method. To re-initiate scrolling, use either a call to <code>restartLabel</code> or make a change to a UILabel property such as text, bounds/frame,
/// font, font size, etc.
/// seealso:
/// restartLabel
- (void)resetLabel;
/// Immediately resets the label to the home position, cancelling any in-flight scroll animation.
/// The text is immediately returned to the home position. Scrolling will not resume automatically after a call to this method.
/// To re-initiate scrolling use a call to <code>restartLabel</code> or <code>triggerScrollStart</code>, or make a change to a UILabel property such as text, bounds/frame,
/// font, font size, etc.
/// seealso:
/// restartLabel
/// seealso:
/// triggerScrollStart
- (void)shutdownLabel;
/// Pauses the text scrolling animation, at any point during an in-progress animation.
/// note:
/// This method has no effect if a scroll animation is NOT already in progress. To prevent automatic scrolling on a newly-initialized label prior to its presentation onscreen, see the <code>holdScrolling</code> property.
/// seealso:
/// holdScrolling
/// seealso:
/// unpauseLabel
- (void)pauseLabel;
/// Un-pauses a previously paused text scrolling animation. This method has no effect if the label was not previously paused using <code>pauseLabel</code>.
/// seealso:
/// pauseLabel
- (void)unpauseLabel;
- (void)labelWasTapped:(UIGestureRecognizer * _Nonnull)recognizer;
/// Called when the label animation is about to begin.
/// The default implementation of this method does nothing. Subclasses may override this method in order to perform any custom actions just as
/// the label animation begins. This is only called in the event that the conditions for scrolling to begin are met.
- (void)labelWillBeginScroll;
/// Called when the label animation has finished, and the label is at the home position.
/// The default implementation of this method does nothing. Subclasses may override this method in order to perform any custom actions jas as
/// the label animation completes, and before the next animation would begin (assuming the scroll conditions are met).
/// warning:
/// This method will be called, and the <code>finished</code> parameter will be <code>NO</code>, when any property changes are made that would cause the label
/// scrolling to be automatically reset. This includes changes to label text and font/font size changes.
/// \param finished A Boolean that indicates whether or not the scroll animation actually finished before the completion handler was called.
///
- (void)labelReturnedToHome:(BOOL)finished;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) NSAttributedString * _Nullable attributedText;
@property (nonatomic, strong) UIFont * _Null_unspecified font;
@property (nonatomic, strong) UIColor * _Null_unspecified textColor;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
@property (nonatomic, strong) UIColor * _Nullable shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic, strong) UIColor * _Nullable highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) UIBaselineAdjustment baselineAdjustment;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
- (void)tintColorDidChange;
@property (nonatomic) UIViewContentMode contentMode;
@end



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop

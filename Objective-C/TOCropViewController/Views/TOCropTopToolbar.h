////
////  Header.h
////  
////
////  Created by heogj123 on 2021/08/29.
////
//
//#import <UIKit/UIKit.h>
//#import "TOCropViewConstants.h"
//
//NS_ASSUME_NONNULL_BEGIN
//
//@interface TOCropTopToolbar : UIView
//
///* In horizontal mode, offsets all of the buttons vertically by height of status bar. */
//@property (nonatomic, assign) CGFloat statusBarHeightInset;
//
///* Set an inset that will expand the background view beyond the bounds. */
//@property (nonatomic, assign) UIEdgeInsets backgroundViewOutsets;
//
//@property (nonatomic, assign) BOOL showOnlyIcons;
//
///* The cropper control buttons */
//@property (nonatomic, strong, readonly)  UIButton *rotateCounterclockwiseButton;
//@property (nonatomic, strong, readonly)  UIButton *resetButton;
//@property (nonatomic, strong, readonly)  UIButton *clampButton;
//@property (nullable, nonatomic, strong, readonly) UIButton *rotateClockwiseButton;
//
//@property (nonatomic, readonly) UIButton *rotateButton; // Points to `rotateCounterClockwiseButton`
//
///* Button feedback handler blocks */
//@property (nullable, nonatomic, copy) void (^rotateCounterclockwiseButtonTapped)(void);
//@property (nullable, nonatomic, copy) void (^rotateClockwiseButtonTapped)(void);
//@property (nullable, nonatomic, copy) void (^clampButtonTapped)(void);
//@property (nullable, nonatomic, copy) void (^resetButtonTapped)(void);
//
///* State management for the 'clamp' button */
//@property (nonatomic, assign) BOOL clampButtonGlowing;
//@property (nonatomic, readonly) CGRect clampButtonFrame;
//
///* Aspect ratio button visibility settings */
//@property (nonatomic, assign) BOOL clampButtonHidden;
//@property (nonatomic, assign) BOOL rotateCounterclockwiseButtonHidden;
//@property (nonatomic, assign) BOOL rotateClockwiseButtonHidden;
//@property (nonatomic, assign) BOOL resetButtonHidden;
//
///* Enable the reset button */
//@property (nonatomic, assign) BOOL resetButtonEnabled;
//
//@end
//
//NS_ASSUME_NONNULL_END
//

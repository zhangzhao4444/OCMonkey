//
//  Monkey.h
//  OCMonkey
//
//  Created by gogleyin on 02/03/2017.
//
//

#import <Foundation/Foundation.h>
#import "RandomAction.h"
#import <CoreGraphics/CoreGraphics.h>
#import "XCUIApplication.h"

@interface Monkey : NSObject

-(instancetype)initWithBundleID:(NSString*)bundleID;
-(instancetype)initWithBundleID:(NSString*)bundleID launchEnvironment:(NSDictionary *)launchEnv;
-(void)run:(int)steps;
-(void)run;
-(void)runOneStep;
-(void)preRun;
-(void)postRun;
-(void)addAction:(ActionBlock)action withWeight:(double)weight;
-(void)addAction:(ActionBlock)action withInterval:(int)interval;
-(CGPoint)randomPoint;
-(CGPoint)randomPointInRect:(CGRect)rect;
-(CGPoint)randomPointAvoidingPanelAreas;
-(CGRect)randomRect;
-(CGRect)randomRectWithSizeFraction:(CGFloat)sizeFraction;
+(XCUIApplication *)activeApplication;

@property (readonly) int actionCounter;
@property (readonly, nonatomic) NSString *testedAppBundleID;
@property (nonatomic, readonly) XCUIApplication *testedApp;
@property (nonatomic, readwrite) NSMutableDictionary *launchEnvironment;
@property (nonatomic, readonly) NSDate *startTime;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic, readonly) NSString *exitReason;
@property CGRect screenFrame;

@end

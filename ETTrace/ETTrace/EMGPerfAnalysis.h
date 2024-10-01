#ifndef EMGPerfAnalysis_h
#define EMGPerfAnalysis_h
#import "PerfAnalysis.h"

@interface EMGPerfAnalysis (Private)
+ (void)startRecording:(BOOL) recordAllThreads;
+(void)stopRecording;
@end


#endif /* EMGPerfAnalysis_h */

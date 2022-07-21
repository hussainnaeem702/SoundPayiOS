//
//  SoundPaySDK.h
//  SoundPay
//
//  Created by Naeem Hussain on 20/07/2022.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioQueue.h>

#define NUM_BUFFERS 3

typedef struct
{
    int ggwaveId;
    bool isCapturing;
    UILabel * labelReceived;

    AudioQueueRef queue;
    AudioStreamBasicDescription dataFormat;
    AudioQueueBufferRef buffers[NUM_BUFFERS];
} StateInp;

typedef struct
{
    bool isPlaying;
    int ggwaveId;
    int offset;
    int totalBytes;
    NSMutableData * waveform;
    UILabel * labelStatus;

    AudioQueueRef queue;
    AudioStreamBasicDescription dataFormat;
    AudioQueueBufferRef buffers[NUM_BUFFERS];
} StateOut;


@interface SoundPaySDK : NSObject
{
    StateInp stateInp;
    StateOut stateOut;
}

- (void)togglePlayback;
- (void)stopPlayback;
- (void)togglePlayback: (const char *) message;
- (void) stopCapturing;
- (void)config;


@end



//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXICustomRenderDelegate-Protocol.h"
#import "TXINotifyDelegate-Protocol.h"

@class NSString, TXCPlayerConfig, TXIPlayer, TXLivePlayConfig, UITextView, UIView;
@protocol TXLivePlayListener, TXVideoCustomProcessDelegate;

@interface TXLivePlayer : NSObject <TXINotifyDelegate, TXICustomRenderDelegate>
{
    TXIPlayer *_player;
    TXCPlayerConfig *_playerConfig;
    UIView *_containView;
    UITextView *_statusView;
    UITextView *_evtLogView;
    unsigned int _insertIndex;
    NSString *_playUrl;
    _Bool _mute;
    int _width;
    int _height;
    _Bool _enableHWAcceleration;
    _Bool _firstPlay;
    id <TXLivePlayListener> _delegate;
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate;
    TXLivePlayConfig *_config;
}

@property _Bool firstPlay; // @synthesize firstPlay=_firstPlay;
@property(copy, nonatomic) TXLivePlayConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool enableHWAcceleration; // @synthesize enableHWAcceleration=_enableHWAcceleration;
@property(nonatomic) __weak id <TXVideoCustomProcessDelegate> videoProcessDelegate; // @synthesize videoProcessDelegate=_videoProcessDelegate;
@property(nonatomic) __weak id <TXLivePlayListener> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)onCustomRender:(struct __CVBuffer *)arg1;
- (void)onNotifyEvent:(int)arg1 withParams:(id)arg2;
- (void)showVideoDebugLog:(_Bool)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)setMute:(_Bool)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setRenderRotation:(int)arg1;
- (int)seek:(float)arg1;
- (void)resume;
- (void)pause;
- (_Bool)isPlaying;
- (int)stopPlay;
- (int)startPlay:(id)arg1 type:(long long)arg2;
- (void)removeVideoWidget;
- (void)setupVideoWidget:(struct CGRect)arg1 containView:(id)arg2 insertIndex:(unsigned int)arg3;
- (void)applyConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


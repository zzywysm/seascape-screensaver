//
//  seascape_screensaverView.h
//  seascape-screensaver
//
//  Created by zzywysm on 6/27/19.
//

#import <ScreenSaver/ScreenSaver.h>
#import <MetalKit/MetalKit.h>
#import <Metal/Metal.h>

@interface seascape_screensaverView : ScreenSaverView <MTKViewDelegate>
{
    MTKView*                        metalView;
    id<MTLComputePipelineState>     computeState;
    
    id<MTLLibrary>                  library;
    
    id<MTLCommandQueue>             commandQueue;
    
    float                           time;
    float                           timespeed;
}

@end

	//
//  ofxIPaddress.h
//
//  Created by azuremous on 8/10/13.
//  Copyright (c) 2013 azuremous.net All rights reserved.
//

#pragma once

#import <Foundation/Foundation.h>
#import "ofMain.h"

inline static const char * NtoS(NSString *n_s){ return [n_s UTF8String]; }

@interface ofxIPaddressDelegate : NSObject{}
-(NSString*)getIPAddress;
@end

class ofxIPaddress {
private:
    ofxIPaddressDelegate *_ipAddress;
public:
    explicit ofxIPaddress(){ _ipAddress = [[ofxIPaddressDelegate alloc] init]; }
    string IP();
};
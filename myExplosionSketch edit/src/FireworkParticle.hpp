//
//  FireworkParticle.hpp
//  myExplosionSketch
//
//  Created by Danielle Beecham on 11/8/17.
//

#ifndef FireworkParticle_hpp
#define FireworkParticle_hpp

#include <stdio.h>

#include "ofMain.h"

class FireworkParticle {
    
public:
    void setup(int x, int y, ofColor _color);
    void update();
    void draw();
    
    ofPoint position;
    ofPoint velocity;
    ofPoint acceleration;
    ofColor color;
    int alpha;
    
};
#endif /* FireworkParticle_hpp */

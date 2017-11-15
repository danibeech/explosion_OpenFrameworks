//
//  FireworkParticle.cpp
//  myExplosionSketch
//
//  Created by Danielle Beecham on 11/8/17.
//

#include "FireworkParticle.hpp"

void FireworkParticle::setup(int x, int y, ofColor _color)  {
    position.set(x, y);
    color = _color;
    
    velocity.set(ofRandom(-1.6, 1.6), ofRandom(-5, 5));
    acceleration.set(0, ofRandom(0, 0.01));
    
    alpha = 255;
    
}


void FireworkParticle::update() {
    velocity += acceleration;
    position += velocity;
    
    alpha++;
}

void FireworkParticle::draw() {
    ofSetColor(color.r, color.g, color.b, alpha);
    ofDrawCircle(position, 20);
}

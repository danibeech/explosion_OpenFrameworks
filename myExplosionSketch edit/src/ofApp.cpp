#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    
    int numParticles = 300;
    for (int i = 0; i < numParticles; i++) {
        FireworkParticle firework;
        fireworks.push_back(firework);
    }
    
    fireworksRestart();
}
//-----------------------

void ofApp::fireworksRestart() {
    ofPoint position;
    position.set(ofGetWidth()/2, ofGetHeight()/2);//centered it to the middle of the screen
    ofColor fireworkColor;
    fireworkColor.setHsb(255, 255, 250);
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].setup(position.x, position.y, fireworkColor);
    }
}



//--------------------------------------------------------------
void ofApp::update(){
        for (int i = 0; i < fireworks.size(); i++) {
            fireworks[i].update();
        }
        if (fireworks[0].alpha <= 0) { //set this from < to >
            fireworksRestart();
        }
        
    }

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0, 5); //changed the last value from 18 to 5 makes it look more streaky
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
    for (int i = 0; i < fireworks.size(); i++) {
        fireworks[i].draw();
    }
    
}



//--------------------------------------------------------------
void ofApp::keyPressed(int key){
//    if (key == "b") {
//        ofSetColor(125, 125, 255);
   
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    if (mousePressed == true) {
    
    

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

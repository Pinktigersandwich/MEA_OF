//
//  Particle.cpp
//  MEA_OF2
//
//  Created by Alexandria Smith on 3/2/16.
//
//

#include "Particle.hpp"



void Branch::sphere(){
    ofSetColor(abs(sin(ofGetElapsedTimef()/2)*200),abs(cos(ofGetElapsedTimef()/2)*250),(sin(ofGetElapsedTimef()/5)*255), 30);
    
    //    ofSetColor(200, 100, 100);
    ofNoFill();
    ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2 , 130, 130);
    cout << "I'm sphere!"<< endl;
}
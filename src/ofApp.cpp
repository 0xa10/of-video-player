#include "ofApp.h"
#include <stdio.h>

void ofApp::setup()
{
    ofSetWindowTitle("/// shader viewer :::");
    ofToggleFullscreen();
}

void ofApp::setVideo(std::string video_file_path)
{
    videoPlayer.load(video_file_path);
    videoPlayer.play();
}

void ofApp::update()
{
    videoPlayer.update();
}

void ofApp::draw()
{
    videoPlayer.draw(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    if (key == 'q') {
        ofExit(0);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}

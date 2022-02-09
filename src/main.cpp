#include <iostream>

#include "ofApp.h"
#include "ofMain.h"

std::string default_vertex_shader(
    R"(
#version 120

void main()
{
    gl_Position = ftransform(); 
}
)");

void usage()
{
    std::cout << "ADfgadfg" << std::endl;
}

//========================================================================
int main(int argc, char* argv[])
{
    ofSetupOpenGL(1, 1, OF_WINDOW); // <-------- setup the GL context

    auto app = new ofApp();
    switch (argc) {
    case 2:
        app->setVideo(std::string(argv[1]));
        break;
    default:
        usage();
        return -1;
        break;
    }

    ofRunApp(app);
}

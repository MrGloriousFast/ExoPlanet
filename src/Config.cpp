#include "../include/Config.h"

//Screen dimension constants
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 780;

int Config::getWidth(){
    return SCREEN_WIDTH;
}

int Config::getHeight(){
    return SCREEN_HEIGHT;
}

Config::Config()
{
    //ctor
}

Config::~Config()
{
    //dtor
}

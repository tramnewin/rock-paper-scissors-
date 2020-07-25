#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "game.h"
using namespace std;

class play1: public game
{
private:
     string input1;
public:
     void attack();
     void setinput1(string inp1);
     string getinput1();

};


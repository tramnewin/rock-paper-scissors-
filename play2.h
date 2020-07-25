#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>
#include <ctime>
#include "game.h"
using namespace std;

class play2: public game
{
private:
     string input2;
     string filename;
     vector <string> tactics;
public:
     play2();
     void attack();
     void setinput2(string inp2);
     string getinput2();
     void AImode();
     void setfilename(string inputstring);
     void setvector();
     string getinput2fromset(int a);
     void setinput2fromset(int a);

};


#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
class thegame
{
public:
   void setWinner(string firstplayer, string secondplayer);
   thegame();
   ~thegame();
   void DisplayScore();
   bool errorchecking(string theinput);

private:
     int score1;
     int score2;

};


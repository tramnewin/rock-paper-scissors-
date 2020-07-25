#include "thegame.h"

void thegame::setWinner(string firstplayer, string secondplayer)
{
     if (firstplayer == secondplayer) {
          cout << "It's a tie!" << endl;
     }
     else {
          if (firstplayer == "rock") {
               if (secondplayer == "paper") {
                    cout << "Player 2 wins!" << endl;
                    
                    ++score2;
               }
               else {
                    cout << "Player 1 wins!" << endl;
                    ++score1;
               }
          }
          else if (firstplayer == "paper") {
               if (secondplayer == "rock") {
                    cout << "Player 1 wins!\n";
                    ++score1;
               }
               else {
                    cout << "Player 2 wins!\n";
                    ++score2;
               }
          }
          else if (firstplayer == "scissors") {
               if (secondplayer == "rock") {
                    cout << "Player 2 wins!\n";
                    ++score2;
               }
               else {
                    cout << "Player 1 wins!\n";
                    ++score1;
               }
          }
     }
}

thegame::thegame()
{
     score1 = 0;
     score2 = 0;
}

thegame::~thegame()
{
     score1 = 0;
     score2 = 0;

}

void thegame::DisplayScore()
{
     cout << "current score:\n";
     cout << "Player 1: " << score1 << endl;
     cout << "Player 2: " << score2 << endl;

}
bool thegame:: errorchecking(string theinput) {
     if (theinput != "rock" && theinput != "paper" && theinput != "scissors") {
          cout << "Invalid attack. Please enter another one\n";
          return false;
     }
     else {
          return true;
     }
}



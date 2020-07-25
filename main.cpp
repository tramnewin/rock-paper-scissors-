#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "play1.h"
#include "play2.h"
#include "game.h"
#include "thegame.h"
using namespace std;


int main()
{
     int pos = 0;
     int number;
     int cont;
     int continueornot;
     string astring = " ";
     bool correctinput;
     bool anotherround;
     bool gameover = true;
     play1 player1;
     play2 player2;
     game* first = &player1;
     game* second = &player2;
     thegame startgame;
     while (gameover) {
          cout << "Let's play rock paper scissors!" << endl;
          cout << "Please choose one of the modes to play" << endl;
          cout << "1. Human vs human" << endl;
          cout << "2. Human vs AI" << endl;
          cout << "3. Human vs a set input" << endl;
          cin >> number;

          switch (number)
          {
          case 1:
               cout << "Player 1, enter your attack: ";
               cin >> astring;
               correctinput = startgame.errorchecking(astring);
               while (correctinput == false) {
                    cout << "Enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
               }
               player1.setinput1(astring);
               cout << "Player 2, enter your attack: ";
               cin >> astring;
               correctinput = startgame.errorchecking(astring);
               while (correctinput == false) {
                    cout << "Enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
               }
               player2.setinput2(astring);
               for (int i = 0; i < 50; i++) {
                    cout << endl;
               }
               first->attack();
               second->attack();
               startgame.setWinner(player1.getinput1(), player2.getinput2());
               startgame.DisplayScore();
               cout << "Do you wish to play another round?\n";
               cout << "1. yes\t2. no\n Please choose your option: ";
               cin >> continueornot;
               while (continueornot == 1) {
                    cout << "Player 1, enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
                    while (correctinput == false) {
                         cout << "Enter your attack: ";
                         cin >> astring;
                         correctinput = startgame.errorchecking(astring);
                    }
                    player1.setinput1(astring);
                    cout << "Player 2, enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
                    while (correctinput == false) {
                         cout << "Enter your attack: ";
                         cin >> astring;
                         correctinput = startgame.errorchecking(astring);
                    }
                    player2.setinput2(astring);
                    for (int i = 0; i < 50; i++) {
                         cout << endl;
                    }
                    first->attack();
                    second->attack();
                    startgame.setWinner(player1.getinput1(), player2.getinput2());
                    startgame.DisplayScore();
                    cout << "Do you wish to play another round?\n";
                    cout << "1. yes\t2. no\n Please choose your option: ";
                    cin >> continueornot;
               }
               startgame.~thegame();
               break;
          case 2:
               cout << "Player 1, enter your attack: ";
               cin >> astring;
               correctinput = startgame.errorchecking(astring);
               while (correctinput == false) {
                    cout << "Enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
               }
               player1.setinput1(astring);
               player2.AImode();
               for (int i = 0; i < 50; i++) {
                    cout << endl;
               }
               first->attack();
               second->attack();
               startgame.setWinner(player1.getinput1(), player2.getinput2());
               startgame.DisplayScore();
               cout << "Do you wish to play another round?\n";
               cout << "1. yes\t2. no\n Please choose your option: ";
               cin >> continueornot;
               while (continueornot == 1) {
                    cout << "Player 1, enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
                    while (correctinput == false) {
                         cout << "Enter your attack: ";
                         cin >> astring;
                         correctinput = startgame.errorchecking(astring);
                    }
                    player1.setinput1(astring);
                    player2.AImode();
                    for (int i = 0; i < 50; i++) {
                         cout << endl;
                    }
                    first->attack();
                    second->attack();
                    startgame.setWinner(player1.getinput1(), player2.getinput2());
                    startgame.DisplayScore();
                    cout << "Do you wish to play another round?\n";
                    cout << "1. yes\t2. no\n Please choose your option: ";
                    cin >> continueornot;
               }
               startgame.~thegame();
               break;
          case 3:
               cout << "Player 1, enter your attack: ";
               cin >> astring;
               correctinput = startgame.errorchecking(astring);
               while (correctinput == false) {
                    cout << "Enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
               }
               player1.setinput1(astring);
               player2.setfilename("input.txt");
               player2.setvector();
               player2.setinput2fromset(pos);
               for (int i = 0; i < 50; i++) {
                    cout << endl;
               }
               first->attack();
               second->attack();
               startgame.setWinner(player1.getinput1(), player2.getinput2fromset(pos));
               startgame.DisplayScore();
               cout << "Do you wish to play another round?\n";
               cout << "1. yes\t2. no\n Please choose your option: ";
               cin >> continueornot;
               while (continueornot == 1) {
                    ++pos;
                    cout << "Player 1, enter your attack: ";
                    cin >> astring;
                    correctinput = startgame.errorchecking(astring);
                    while (correctinput == false) {
                         cout << "Enter your attack: ";
                         cin >> astring;
                         correctinput = startgame.errorchecking(astring);
                    }
                    player1.setinput1(astring);
                    player2.setinput2fromset(pos);
                    for (int i = 0; i < 50; i++) {
                         cout << endl;
                    }
                    first->attack();
                    second->attack();
                    startgame.setWinner(player1.getinput1(), player2.getinput2fromset(pos));
                    startgame.DisplayScore();
                    cout << "Do you wish to play another round?\n";
                    cout << "1. yes\t2. no\n Please choose your option: ";
                    cin >> continueornot;
               }
               startgame.~thegame();
               pos = 0;
               break;

          default:
               cout << "Invalid number. Please choose again" << endl;
               cin >> number;
               break;
          }

          cout << "Do you wish to replay the game? Choose a number of the options below" << endl;
          cout << "1. Yes\n2. No\n";
          cin >> cont;
          switch (cont)
          {
          case 1:
          {
               gameover = true;
               break;
          }
          case 2:
          {
               gameover = false;
               break;
          }
          default:
          {
               cout << "Please choose a valid option\n";
               cin >> cont;
               break;
          }
          }
     }
     return 0;

     
}


#include "play2.h"

play2::play2()
{
     input2 = " ";
     filename = " ";

}

void play2::attack()
{
     cout << "Player 2 chooses: " << input2 << endl;
}

void play2::setinput2(string inp2)
{
     input2 = inp2;
}

string play2::getinput2()
{
     return input2;
}

void play2::AImode()
{
     srand(time(NULL));
     int randominput = rand()%2+1;
     switch (randominput)
     {
     case 1:
          input2 = "rock";
          break;
     case 2:
          input2 = "paper";
          break;
     case 3:
          input2 = "scissors";
          break;
     default:
          break;
     }

}

void play2::setfilename(string inputstring)
{
     filename = inputstring;
}

void play2::setvector()
{
     stringstream ss;
     string substring;
     string anotherstring;
     ifstream inputfile;
     string temp;
     int count = 0;
     inputfile.open(filename);
     if (!inputfile.is_open()) {
          cout << "Unable to read file";
     }
     ss << inputfile.rdbuf();
     while (getline(ss, anotherstring)) {
          substring = anotherstring;
          stringstream iss(substring);
          getline(iss, temp, ' ');
          count = 0;
          while (count<3) {
               tactics.push_back(temp);
               getline(iss, temp, ' ');
               ++count;
          }
     }
     inputfile.close();

}

string play2::getinput2fromset(int a)
{
     return tactics.at(a);
}

void play2::setinput2fromset(int a)
{
     input2 = tactics.at(a);
}

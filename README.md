*******************************************************
*  Name      : Tram Nguyen         
* Education: : University of Colorado - Denver
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************
This is a rock paper scissors game with 3 playing options.
1. the first option is 2 users playing with each other
2. the second option is the user playing against the computer
3. Lastly, this option lets the user play against a pre-made set (up to 15 rounds)
For every round, the program will count the score as well as the winner/loser.
Moreover, you get to choose whether you want to continue playing in the chosen setting or exit out to main menu to switch to another option.
If the user changes to another mode, the scores are set back to 0.
The default of this game automatically set the user as the player 1 if he/she plays in mode 2 and 3.
*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
to read data from an input file, to generate random choices for the AI,
and to make a interfae game for 2 users. Also, this program detects any error from the user's input 
as well as monitors user's options of the game   

Name: play1.h
   Contains the prototypes for the play1.cpp functions.

Name: play1.cpp
   Includes functions to set the input and to display the input onto the console 

Name: play2.h
   Contains the prototypes for the play2.cpp functions.

Name: play2.cpp
   Includes functions to set the input and to display the input onto the console 
   
Name: game.h
   Contains the prototype for game.cpp function.
   
Name: game.cpp
   Include a function named attack that can be called by both play1 and play2's objects
Name: thegame.h
    Contains the prototypes fo thegame.cpp functions
    
Name: thegame.cpp
    Includes functions that can set the scores of the players, check errors from the inputs and 
display the scores onto the console

Name: input.txt
  Contains sets of prep choices to play againt the user
  
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on gnu g++ 6.1.x  It was 
   compiled, run, and tested on gcc csegrid server.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the zip file. 
   To uncompress it use the following commands 
       % unzip [rockpaperscissors]

   Now you should see a directory named homework with the files:
        main.cpp
        play1.h
        play1.cpp
        play2.h
        play2.cpp
        game.h
        game.cpp
        thegame.h
        thegame.cpp
	      makefile.txt
        Readme.txt
	

2. Build the program.

    Change to the directory that contains the file by:
    % cd [rockpaperscissors] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[rockpaperscissors]

4. Delete the obj files, executables, and core dump by
   %./make clean

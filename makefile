#Place this makefile in the same directory as your all .cpp and .h files
#at the command prompt
#make ./rockpaperscissors 

# for use with C++ files
.SUFFIXES: .cpp

SOURCES = main.cpp play1.cpp play2.cpp game.cpp thegame.cpp 

######Change from matrix to rockpaperscissors .#######
TARGET = rockpaperscissors

#-------Do Not Change below this line-------------
#Compile with g++
CC = g++

#use -g for gnu debugger and -std= for c++11 compiling
CXXFLAGS = -g -std=c++11

OBJS:= ${SOURCES:.cpp=.o}

######Do NOT change this...Tabs Matter!#########
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

.cpp.o:
	$(CC) -c $(CXXFLAGS) $(INCDIR) $<

#In order to get rid of all .o files create, at the command prompt
#make clean

clean:
	rm -f $(OBJS) $(TARGET) core

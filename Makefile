
ALL_THE_OS = Grid.o

THE_DOT_HS = Grid.h


all: Grid


%.o: %.cpp
	g++ -g -Wall -std=c++17 -Wpedantic -Wextra -Werror -c $<

grid_image: grid_image.o $(ALL_THE_OS) $(THE_DOT_HS)
	g++ -o grid_image grid_image.o $(ALL_THE_OS)

 

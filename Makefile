
ALL_THE_OS = Grid.o Gate.o

THE_DOT_HS = Grid.h Gate.h


all: grid_image


%.o: %.cpp
	g++ -g -fstack-protector-strong -Wall -std=c++17 -Wpedantic -Wextra -Werror -c $<

grid_image: grid_image.o $(ALL_THE_OS) $(THE_DOT_HS)
	g++ -o grid_image grid_image.o $(ALL_THE_OS)

clean:
	rm *.o grid_image


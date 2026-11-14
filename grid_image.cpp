#include "Grid.h"
#include <iostream>
int main()
{
int size;
std::cout << "What size?";
std::cin >> size;
Grid grid(size,size);


/*
grid.printGrid();
grid.getGrid()[grid.index(0,0)].openRight(true);
grid.getGrid()[grid.index(0,0)].openUp(true);
grid.getGrid()[grid.index(0,0)].openDown(true);
grid.getGrid()[grid.index(0,0)].openLeft(true);

grid.getGrid()[grid.index(2,0)].openRight(true);
grid.getGrid()[grid.index(0,3)].openUp(true);
grid.getGrid()[grid.index(4,5)].openDown(true);
grid.getGrid()[grid.index(5,5)].openRight(true);
*/
/*
 //This is all debug code to determine if the gates are properly set up
std::cout << grid.getGate(1,0).getLeft() << std::endl;
std::cout << grid.getGrid()[1].m_left << std::endl;
std::cout << grid.getGate(0,0).m_right<<std::endl;
//Gate hi = grid.getGate(1,0);
//hi.setLeft(grid.getGate(0,0).m_right);
grid.getGrid()[1].m_left = grid.getGrid()[0].m_right;
//grid.getGate(1,0).setUp(grid.getGate(0,0).m_right);
//grid.getGate(1,0).setDown(grid.getGate(0,0).m_right);
//grid.getGate(1,0).setRight(grid.getGate(0,0).m_right);

std::cout << (grid.getGate(1,0).getLeft()) << std::endl;
std::cout << (grid.getGrid()[1].m_left) << std::endl;
//std::cout << (grid.getGate(1,0).getRight()) << std::endl;
//std::cout << (grid.getGate(1,0).getUp()) << std::endl;
//std::cout << (grid.getGate(1,0).getDown()) << std::endl;
//std::cout << (hi.m_left) << std::endl;
//std::cout << *(grid.getGate(0,0).getLeft());

if((grid.getGate(0,0).m_right)==(grid.getGate(1,0).m_left))
{
	std::cout<<"these same";
}
if(grid.getGate(0,0).getRight()!=grid.getGate(1,0).getUp())
{
	std::cout<<"these not same"; 
}
if(grid.getGate(0,0).getRight()!=grid.getGate(0,0).getUp())
{
	std::cout<<"these not same";
}
*/


std::cout << std::endl;
grid.printGrid();
return 0;
}


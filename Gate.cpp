#include "Gate.h"
Gate::Gate()
{
up = False;
down = False;
right = False;
left = False;
}
bool getUp();
bool getDown();
bool getRight();
bool getLeft();
void setUp(bool &con);
void setDown(bool &con);
void setRight(bool &con);
void setLeft(bool &con);
ostream& operator<<(ostream& os, const MyClass& obj);


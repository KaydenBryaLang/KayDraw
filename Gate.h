#pragma once

class Gate
{
protected:
bool &up;
bool &down;
bool &right;
bool &left;


public:
Tile();
bool getUp();
bool getDown();
bool getRight();
bool getLeft();
void setUp(bool &con);
void setDown(bool &con);
void setRight(bool &con);
void setLeft(bool &con);
ostream& operator<<(ostream& os, const MyClass& obj);
};

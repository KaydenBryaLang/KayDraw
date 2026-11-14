#pragma once
#include <set>
#include <string>
#include <memory>

class Gate
{
protected:
//public:
bool *m_up;
bool *m_down;
bool *m_right;
bool *m_left;
int m_group;

public:
Gate();
~Gate();
bool* getUp();
bool* getDown();
bool* getRight();
bool* getLeft();
void setUp(bool *con);
void setDown(bool *con);
void setRight(bool *con);
void setLeft(bool *con);
void openUp(bool con);
void openDown(bool con);
void openRight(bool con);
void openLeft(bool con);
void textile(std::string &text);
void textileDown(std::string &text);
void textileUp(std::string &text);
};

#pragma once
#include <set>
#include <string>

class Gate
{
protected:
public:
bool *m_up;
bool *m_down;
bool *m_right;
bool *m_left;

//std::unique_ptr<std::set<int>> m_group;

//public:
Gate();
/*
Gate(int num);
*/
~Gate();
/*
std::unique_ptr<std::set<int>>& getGroup();
*/
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



/*
void setGroup(std::unique_ptr<std::set<int>>& group);
void addInd(const int ind);
void operator+=(Gate& rhs);
*/
void textile(std::string &text);
void textileDown(std::string &text);
void textileUp(std::string &text);
};

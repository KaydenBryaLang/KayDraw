#pragma once
#include <set>
#include <string>
#include <memory>

class Gate
{
protected:
// Pointer to boolean so that it can linked up with other objects by just assigning the pointer addresses to both object's datamembers.
bool *m_up;
bool *m_down;
bool *m_right;
bool *m_left;

public:
Gate(); // Initializes all pointers to false
~Gate();
bool* getUp(); //The getters. gives the pointers
bool* getDown();
bool* getRight();
bool* getLeft();
void setUp(bool *con); // The setters. sets the pointer addresses of the datamembers to the pointer passed in.
void setDown(bool *con);
void setRight(bool *con);
void setLeft(bool *con);
void openUp(bool con); // The openers. Sets value of value inside pointers. Can ironically also be used to close.
void openDown(bool con);
void openRight(bool con);
void openLeft(bool con);
void textile(std::string &text); //Pass in a string and adds 'X X' to the string, the left X is instead a space if m_left is true. same for right x and m_right
void textileDown(std::string &text); //adds "XXX" to string. middle x isn't there if m_down is true. 
void textileUp(std::string &text); // same as textileDown but with m_up instead
};

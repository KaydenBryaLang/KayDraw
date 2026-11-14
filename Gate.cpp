#include "Gate.h"
#include <iostream>
Gate::Gate()//: m_group(std::make_unique<std::set<int>>())//: m_up(falso),m_down(falso),m_right(falso),m_left(falso)
{
m_up = new bool(false);
m_down = new bool(false);
m_right = new bool(false);
m_left = new bool(false);
//m_group = new std::unique_ptr<std::set<int>()>;
}



/*
Gate::Gate(int num)//: m_up(falso),m_down(falso),m_right(falso),m_left(falso)
{
m_up = new bool(false);
m_down = new bool(false);
m_right = new bool(false);
m_left = new bool(false);
m_group = new std::set<int>({num});
}
*/


Gate::~Gate()
{
/*
if(m_up!=0){delete m_up;}
if(m_down!=0){delete m_down;}
if(m_right!=0){delete m_right;}
if(m_left!=0){delete m_left;}
*/
}


bool* Gate::getUp()
{
return m_up;
}
bool* Gate::getDown()
{
return m_down;
}
bool* Gate::getRight()
{
return m_right;
}
bool* Gate::getLeft()
{
return m_left;
}

void Gate::setUp(bool *con)
{
//delete m_up;
m_up = con;
return;
}
void Gate::setDown(bool *con)
{
//delete m_down;

m_down = con;
return;
}
void Gate::setRight(bool *con)
{
//delete m_right;
m_right = con;
return;
}
void Gate::setLeft(bool *con)
{
//delete m_left;
	std::cout << con << std::endl;
m_left = con;

	std::cout << m_left << std::endl;
return;
}
void Gate::openUp(bool con)
{
*m_up = con;
return;
}
void Gate::openDown(bool con)
{
*m_down = con;
return;
}
void Gate::openRight(bool con)
{
*m_right = con;
return;
}
void Gate::openLeft(bool con)
{
*m_left = con;
return;
}

//Start of fun functions
/*
std::unique_ptr<std::set<int>>& Gate::getGroup()
{
return m_group;
}

void Gate::setGroup(std::unique_ptr<std::set<int>>& group)
{
m_group.reset(group);
return;
}

void Gate::addInd(const int ind)
{
m_group->insert(ind);
return;
}

//void Gate::operator+=(Gate& rhs)
void Gate::operator+=(Gate& rhs)
{
m_group->insert(rhs.getGroup()->begin(),rhs.getGroup()->end());
return;
}
*/
// end of fun functions


void Gate::textile(std::string &text)
{
if(text == "")
{
	if(*getLeft())
	{
		text.append(" ");
	}
	else
	{
		text.append("X");
	}
}
else if(text.back() != ' ' && text.back() != 'X')
{
	if(*getLeft())
	{
		text.append(" ");
	}
	else
	{
		text.append("X");
	}
}

text.append(" ");

if(*getRight())
{
	text.append(" ");
}
else
{
	text.append("X");
}
}

void Gate::textileDown(std::string &text)
{
if(text == "")
{
text.append("X");
}
else if(text.back() != 'X')
{
	text.append("X");
}

if(*getDown())
{
	text.append(" ");
}
else
{
	text.append("X");
}

text.append("X");

}

void Gate::textileUp(std::string &text)
{
if(text == "")
{
text.append("X");
}
else if(text.back() != 'X')
{
	text.append("X");
}

if(*getUp())
{
	text.append(" ");
}
else
{
	text.append("X");
}

text.append("X");
}

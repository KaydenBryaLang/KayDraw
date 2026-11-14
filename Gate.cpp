#include "Gate.h"
#include <iostream>
Gate::Gate()
{
m_up = new bool(false);
m_down = new bool(false);
m_right = new bool(false);
m_left = new bool(false);
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
delete m_up;
m_up = con;
return;
}
void Gate::setDown(bool *con)
{
delete m_down;

m_down = con;
return;
}
void Gate::setRight(bool *con)
{
delete m_right;
m_right = con;
return;
}
void Gate::setLeft(bool *con)
{
delete m_left;
m_left = con;
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

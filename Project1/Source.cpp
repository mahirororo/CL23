#include<iostream>
#include"Source.h"
using namespace std;

CScreenPoint::CScreenPoint(void)
{
	x = 0;
	y = 0;
}

CScreenPoint::CScreenPoint(int _x, int _y)
{
	x = _x;
	y = _y;
}

void CScreenPoint::Display(void)
{
	cout << "x="<<x << "y="<<y << endl;
}

CScreenPoint CScreenPoint::operator+(int n)
{
	CScreenPoint tmp;
	tmp.x = x + n;
	if (tmp.x <= 0)tmp.x = 0;
	if (tmp.x >= 1919)tmp.x = 1919;
	tmp.y = y + n;
	if (tmp.y <= 0)tmp.y = 0;
	if (tmp.y >= 1079)tmp.y = 1079;
	return tmp;
}

CScreenPoint CScreenPoint::operator-(int n)
{
	CScreenPoint tmp;
	tmp.x = x - n;
	if (tmp.x <= 0)tmp.x = 0;
	if (tmp.x >= 1919)tmp.x = 1919;
	tmp.y = y - n;
	if (tmp.y <= 0)tmp.y = 0;
	if (tmp.y >= 1079)tmp.y = 1079;
	return tmp;
}

void CScreenPoint::operator+=(int n)
{
	x = x + n;
	if (x <= 0)x = 0;
	if (x >= 1919)x = 1919;
	y = y + n;
	if (y <= 0)y = 0;
	if (y >= 1079)y = 1079;
}

void CScreenPoint::operator-=(int n)
{
	x = x - n;
	if (x <= 0)x = 0;
	if (x >= 1919)x = 1919;
	y = y - n;
	if (y <= 0)y = 0;
	if (y >= 1079)y = 1079;
}

CScreenPoint CScreenPoint::operator+(CScreenPoint n)
{
	CScreenPoint tmp;
	tmp.x = x + n.x;
	if (tmp.x <= 0)tmp.x = 0;
	if (tmp.x >= 1919)tmp.x = 1919;
	tmp.y = y + n.y;
	if (tmp.y <= 0)tmp.y = 0;
	if (tmp.y >= 1079)tmp.y = 1079;
	return tmp;
}

CScreenPoint CScreenPoint::operator-(CScreenPoint n)
{
	CScreenPoint tmp;
	tmp.x = x - n.x;
	if (tmp.x <= 0)tmp.x = 0;
	if (tmp.x >= 1919)tmp.x = 1919;
	tmp.y = y - n.y;
	if (tmp.y <= 0)tmp.y = 0;
	if (tmp.y >= 1079)tmp.y = 1079;
	return tmp;
}

void CScreenPoint::operator+=(CScreenPoint n)
{
	x = x + n.x;
	if (x <= 0)x = 0;
	if (x >= 1919)x = 1919;
	y = y + n.y;
	if (y <= 0)y = 0;
	if (y >= 1079)y = 1079;
}

void CScreenPoint::operator-=(CScreenPoint n)
{
	x = x - n.x;
	if (x <= 0)x = 0;
	if (x >= 1919)x = 1919;
	y = y - n.y;
	if (y <= 0)y = 0;
	if (y >= 1079)y = 1079;
}

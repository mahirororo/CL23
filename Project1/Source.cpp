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
	cout << "x="<<x << "y"<<y << endl;
}

#pragma once

class CScreenPoint
{
private:
	int x;
	int y;
	

public:
	
	CScreenPoint(void);
	CScreenPoint(int _x, int _y);
	void Display(void);

	CScreenPoint operator+(int n);
	CScreenPoint operator-(int n);
	void operator+=(int n);
	void operator-=(int n);

	void operator=(int n);
	bool operator>(CScreenPoint obj);

};
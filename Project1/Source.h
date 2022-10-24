#pragma once

class CScreenPoint
{
private:
	int x;
	int y;
	CScreenPoint(void);

public:

	int Display+=(int n);

	
	CScreenPoint operator+(int n);
	CScreenPoint operator-(int n);
	void operator+=(int n);
	void operator-=(int n);

	void operator=(int n);
	bool operator>(CScreenPoint obj);

};
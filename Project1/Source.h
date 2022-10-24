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


	//整数との演算
	CScreenPoint operator+(int n);
	CScreenPoint operator-(int n);
	void operator+=(int n);
	void operator-=(int n);
	//オブジェクト同士の演算
	CScreenPoint operator+(CScreenPoint n);
	CScreenPoint operator-(CScreenPoint n);
	void operator+=(CScreenPoint n);
	void operator-=(CScreenPoint n);

};
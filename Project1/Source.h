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


	//�����Ƃ̉��Z
	CScreenPoint operator+(int n);
	CScreenPoint operator-(int n);
	void operator+=(int n);
	void operator-=(int n);
	//�I�u�W�F�N�g���m�̉��Z
	CScreenPoint operator+(CScreenPoint n);
	CScreenPoint operator-(CScreenPoint n);
	void operator+=(CScreenPoint n);
	void operator-=(CScreenPoint n);

};
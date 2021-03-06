#pragma once
#include "resource.h"
#include <vector>

class CDraw
{
public:
	int drawType;	// 타입
	Color color;
	int thick = 1;

	Gdiplus::Point pointOld;
	Gdiplus::Point pointCur;

	vector<Gdiplus::Point>	pntLine;	// 자유선

public:
	void Draw(Gdiplus::Graphics& g);
};

class CText
{
public:
	CString text;
	int fontSize;
	CPoint pointText;
	COLORREF textColor;
	int textAlpha;
public:
	CText();
	void Draw(Graphics& g, CWnd* cwnd);
	Color SetColor();
};
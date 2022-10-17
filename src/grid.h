#pragma once

#include "ofMain.h"
#include "point.h"

class Grid
{
	static constexpr int SHAPE_SIZE{ 60 };
	Point<int> m_coordinate;
	ofColor m_drawColor;
	bool m_isFilled;
public:
	static constexpr int GRID_SIZE{ 9 };

	void setupDrawing(const int& x, const int& y, ofColor color, bool isFilled);
	void drawRectangle(const int& x, const int& y) const;
	static int calculateScreenSize();
	void setFilled(bool isFilled);
};

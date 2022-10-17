#pragma once

#include "ofMain.h"
#include "point.h"

class Grid
{
	static constexpr int PIXEL_SIZE{ 60 };
	
	Point<int> m_coordinate;
	ofColor m_drawColor;
	bool m_isFilled;
public:
	static Point<int> pixelSize;
	static constexpr int GRID_SIZE{ 9 };
	static constexpr Point<int> grid_size{ 9,9 };

	void setupDrawing(const int& x, const int& y, ofColor color, bool isFilled);
	void drawRectangle(const int& x, const int& y) const;
	void setFilled(bool isFilled);

	static int calculateScreenSize();
	
	
};

static void calculatePixelSize();


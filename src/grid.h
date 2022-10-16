#pragma once

#include "ofMain.h"
#include "point.h"

class Grid
{
	static constexpr int SHAPE_SIZE{ 60 };
public:
	static constexpr int GRID_SIZE{ 9 };
	bool isCl

	void drawSettings(const int& x, const int& y, ofColor color, bool isFill);
	void drawRectangle(const int& x, const int& y) const;
	static int calculateScreenSize();
	
};

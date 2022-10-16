#include "grid.h"

void Grid::drawSettings (const int& x, const int& y, ofColor color, bool isFill)
{
	switch ( isFill ) {
		case true : 
			ofFill();
			ofSetColor(ofColor::gray);
			break;
		case false : 
			ofNoFill();
			ofSetColor(ofColor::gray);
			ofSetLineWidth(2);
			break;
	}

	drawRectangle(x, y);
}

void Grid::drawRectangle(const int& x, const int& y) const
{
	
    ofDrawRectangle(SHAPE_SIZE*x,SHAPE_SIZE*y,SHAPE_SIZE,SHAPE_SIZE);
}

int Grid::calculateScreenSize()
{
    return SHAPE_SIZE * GRID_SIZE;
}

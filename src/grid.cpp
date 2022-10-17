#include "grid.h"

void Grid::setupDrawing (const int& x, const int& y, ofColor color, bool isFilled)
{
	setFilled(isFilled);

	drawRectangle(x, y);
}

void Grid::setFilled(bool isFilled)
{
	m_isFilled = isFilled;
	switch (m_isFilled){
	case true:
		ofFill();
		ofSetColor(ofColor::black);
		break;
	case false:
		ofNoFill();
		ofSetColor(ofColor::gray);
		ofSetLineWidth(2);
		break;
	}
}
 
void Grid::drawRectangle(const int& x, const int& y) const
{
    ofDrawRectangle(SHAPE_SIZE*x,SHAPE_SIZE*y,SHAPE_SIZE,SHAPE_SIZE);
}

int Grid::calculateScreenSize()
{
    return SHAPE_SIZE * GRID_SIZE;
}


#include "grid.h"

void Grid::setupPixel (const int& x, const int& y, bool isFilled)
{
	pixelSize = calculatePixelSize();
	setStyle(isFilled);
	ofDrawRectangle(pixelSize.x * x, pixelSize.y * y, pixelSize.x, pixelSize.y);
}

void Grid::setStyle (bool state) const
{
	ofFill();
	switch (state) {
	case true: ofSetColor(active);
		break;
	default:
		ofNoFill();
		ofSetColor(inactive);
		break;
	}
}

Point<float> Grid::calculatePixelSize ()
{
	Point <float> output{
		static_cast <float> (ofGetWidth()) / gridSize.x,
		static_cast <float> (ofGetHeight()) / gridSize.y
	};

	return output;
}

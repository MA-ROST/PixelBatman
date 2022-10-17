#include "grid.h"

void Grid::setupDrawing (const int& x, const int& y, ofColor color, bool isFilled)
{
	setFilled(isFilled);
	drawRectangle(x, y);
}

/**
 * \brief Changes a pixel to either be white or black
 *		based on if isFilled is true or not
 *
 * \param isFilled A boolean to indicate weather the pixel is filled or not
 */
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
 
/**
 * \brief Draws a rectangle based on the given pixel size,
 *		using the x & y values for the location
 *
 * \param x The x index of the vector
 * \param y The y index of the vector
 */
void Grid::drawRectangle(const int& x, const int& y) const
{
    /*ofDrawRectangle(pixelSize.x * x, pixelSize.y * y, pixelSize.x, pixelSize.y);*/
	ofDrawRectangle(PIXEL_SIZE * x, PIXEL_SIZE * y, PIXEL_SIZE, PIXEL_SIZE);
}

/**
 * \brief Uses the present Pixel and Grid size to calculate a size for the screen.
 * This Function assumes that the rows and columns are equal in length
 *
 * \return Returns what the size of the screen should be
 */
int Grid::calculateScreenSize()
{
    return PIXEL_SIZE * GRID_SIZE;
}


/**
 * Using the size of the window and the size of the grid that will be made,
 * the height and width will be calculated for each pixel
 */
void calculatePixelSize()
{
	Grid::pixelSize.x = ofGetWidth() / Grid::grid_size.x;
	Grid::pixelSize.y = ofGetHeight() / Grid::grid_size.y;
}

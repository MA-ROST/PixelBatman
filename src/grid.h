#pragma once

#include "ofMain.h"
#include "point.h"

/**
 * @breif creates a grid and its incidences 
 */
class Grid
{
	bool m_isClicked = false;
	Point<float> pixelSize, pixelLocation;

	enum stateColor {
		inactive = 200,
		active = 0
	};

public:
	static constexpr Point<int> gridSize{ 9,9 };

	/**
	 * @brief sets up the pixel for drawing, and then draws it
	 *
	 * @param x The x index of the vector
	 * @param y The y index of the vector
	 * @param isFilled determines the style of the pixel
	 */
	void setupPixel(const int& x, const int& y, bool isFilled);

private:

	/**
	 * @brief Determines the visual look of a pixel based on a given number
	 * @param state changes the color of a pixel between stateColors
	 */
	void setStyle(bool state) const;

	/**
	 * @brief through the amount of pixels and size of the window,
	 * the height and width of a pixel is determined
	 *
	 * @return The calculated height and width for each pixel
	 */
	static Point<float> calculatePixelSize();
	
};


#pragma once

#include "grid.h"
#include "ofMain.h"
#include "point.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		
		void drawPixels(std::vector<std::vector<bool>> pixels);

		const string TITLE = "Pixel Batman";

		array<array<Grid, Grid::GRID_SIZE>, Grid::GRID_SIZE> grid;
		int totalGridSize{ Grid::GRID_SIZE * Grid::GRID_SIZE };

		const int SCREEN_SIZE = Grid::calculateScreenSize();
		// A Vector of booleans that will decide if a index is filled or not
		// If true the index will be filled with black. if not it will be filled with white
		std::vector<std::vector<bool>> image{
			{false, false, false, false, false, false, false, false, false},// 0
			{false, false, false, false, false, false, false, false, false},// 1
			{false, true, true, true, true, true, true, true, false},		  // 2
			{false, false, true, false, true, false, false, true, false},   // 3
			{false, false, true, true, true, true, false, true, false},	  // 4
			{false, false, true, false, true, false, false, true, false},   // 5
			{false, true, true, true, true, true, true, true, false},       // 6
			{false, false, false, false, false, false, false, false, false},// 7
			{false, false, false, false, false, false, false, false, false} // 8
		};
		//Point<int> screenSize{Grid::calculateScreenSize()};
		
};

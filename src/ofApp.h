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

		const string TITLE = "Pixel Batman";


		array<array<Grid, Grid::GRID_SIZE>, Grid::GRID_SIZE> grid;
		int totalGridSize{ Grid::GRID_SIZE * Grid::GRID_SIZE };

		const int SCREEN_SIZE = Grid::calculateScreenSize();
};

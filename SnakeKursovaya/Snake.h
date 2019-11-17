#pragma once
#include <vector>
#include "Sensor.h"

using namespace std;

class Snake{
public:
	int getCourse() { return course; }
	int getX() { return x; }
	int getY() { return y; }
	int getBody(){ return body; }
	void setX(int t) { x += t; }
	void setY(int t) { y += t; }
	void setBody() {  body++; }
	void SetCourse(int x) { course = x; };
	void setCourse(int x) { course = x; };
	int getTailX(int i) { return TailX[i]; }
	int getTailY(int i) { return TailY[i]; }
	void MoveTail();
	void setTail(int x, int y) { TailX.push_back(x); TailY.push_back(y); }
	Snake();
	Sensor sensor;

private:
	int body, x, y, course;

	vector<int> TailX;
	vector<int> TailY;
};

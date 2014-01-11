#include "WPILib.h"

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	Time();
	
	void Update();
	double long getMillisecondsPerFrame();
	double long getElapsedGameTime();
	
	~Time();
	
	
private:
	double long startTime, lastFrame, currFrame;
	
	Timer timer;
};

#endif 

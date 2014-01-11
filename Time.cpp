#include "Time.h"

Time::Time() :
	timer()
{
	//Begins the timer
	timer.Start();
	
	/*
	 * Set start time as current time in the PPC Timestamp and set same value for
	 * the last frame's time and current frame's time so all calls of
	 * getMillisecondsPerFrame are consistent
	 */
	
	startTime = timer.GetPPCTimestamp();
	lastFrame = startTime;
	currFrame = startTime;
}

Time::~Time()
{
	
}

void Time::Update()
{
	/*
	 * Updates by first setting the value of the last frame to current frame and
	 * updating the current frame time to the timestamp. This makes the lastFrame
	 * save the value of time from the last update call.
	 */
	lastFrame = currFrame;
	currFrame = timer.GetPPCTimestamp();
}

//Self-describing calculation
double long Time::getElapsedProgramTime() { return startTime - currFrame; }

//currentFrame - lastFrame should give the time passed since the last call of Update()
double long Time::getMillisecondsPerFrame() { return currFrame - lastFrame; }

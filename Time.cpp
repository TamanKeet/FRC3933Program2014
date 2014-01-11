#include "Time.h"

Time::Time() :
	timer()
{
	timer.Start();
	startTime = timer.GetPPCTimestamp();
	lastFrame = startTime;
	currFrame = startTime;
}

Time::~Time()
{
	
}

void Time::Update()
{
	lastFrame = currFrame;
	currFrame = timer.GetPPCTimestamp();
}

double long Time::getElapsedGameTime() { return startTime - currFrame; }

double long Time::getMillisecondsPerFrame() { return currFrame - lastFrame; }

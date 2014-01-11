#include "TimeKeeper.h"

TimeKeeper::TimeKeeper(double long totalTime)
//Constants need to be defined here
	: totalTime(totalTime)
{
	//Sets counter to 0 and pauses the counter
	this->counter = 0;
	this->paused = true;
}


void TimeKeeper::start()
{
	reset();
	paused = false;
}

void TimeKeeper::pause() { paused = true; }

void TimeKeeper::reset()
{
	counter = 0;
	paused = true;
}

void TimeKeeper::resume() { paused = false; }

bool TimeKeeper::isPaused() { return paused; }

bool TimeKeeper::hasFinished() { return finished; }

void TimeKeeper::Update(Time* time)
{
	if(!paused && !finished)
	{
		counter += time->getMillisecondsPerFrame();
		if(counter >= totalTime)
			finished = true;
	}
}

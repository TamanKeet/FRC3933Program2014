#include "WPILib.h"

#ifndef TIME_H
#define TIME_H

class Time
{
public:
	/*
	 * Standard constructor, begins the Time class and the count of the begining
	 * of the program
	 */
	Time();
	
	/* 
	 * To be called at intervals. Allows the currentFrame and last frame time to be 
	 * updated and updates the value returned by <code>getMillisecondsPerFrame()</code> 
	 */
	void Update();
	
	/*
	 * Gets the time passed between the last two calls of the Update method. If
	 * it not been called, it will return 0, and if it has only been called
	 * once it will return the time between that call and the begining of the
	 * program.
	 */
	double long getMillisecondsPerFrame();
	
	/*
	 * Gets the ammount of time passed since the instance of this class was 
	 * created (hopefully at the begining of the program).
	 */
	double long getElapsedProgramTime();
	
	~Time();
	
	
private:
	/*
	 * Variables for keeping track of time (start of the counter, time at the call
	 * of update two frames ago and the call of update one frame ago)
	 */
	double long startTime, lastFrame, currFrame;
	
	/*
	 * Class used to keep track of the time passed so far.
	 */
	Timer timer;
};

#endif 

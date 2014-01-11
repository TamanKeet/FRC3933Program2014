#include "Time.h"

#ifndef TIME_KEEPER_H
#define TIME_KEEPER_H

class TimeKeeper
{
public:
	/*
	 * Default constuctor. Asks for the time to count. The timer begins paused.
	 * IMPORTANT NOTE: To begin counter, the resume() method MUST be called
	 */
	TimeKeeper(double long totalTime);
	
	//Calls the reset method and begins counting
	void start();
	
	//Pauses the counter. To continue counting, call resume();
	void pause();
	
	//Resets the value, but mantains the counter paused
	void reset();
	
	//Resumes the counter when it is paused
	void resume();
	
	//Check if the counter is paused 
	bool isPaused();
	
	//Check if the counter has finished
	bool hasFinished();
	
	/*
	 * Update method can be called (and it is recomended) even if the timer is
	 * paused. Uses pointer to make sure any use of the class timer stays in the
	 * overall variable
	 */
	void Update(Time* time);
	
private:
	//Time to count for the counter
	const double long totalTime;
	
	//Variable used to save the counter
	double long counter;
	
	//Is the counter paused? and, Is the counter finished?
	bool paused, finished;
};

#endif

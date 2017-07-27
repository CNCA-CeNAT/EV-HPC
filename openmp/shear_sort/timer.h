/**
 * University of Pittsburgh
 * Department of Computer Science
 * CS1645: Introduction to HPC Systems
 * Instructor Esteban Meneses, PhD (emeneses@pitt.edu)
 * Timing operations.
 */

#include <sys/time.h>

double startTime;

// Starts timer and resets the elapsed time
void timerStart(){
	struct timeval tod;
	gettimeofday(&tod, NULL);
	startTime = (double)tod.tv_sec + ((double)tod.tv_usec * 1.0e-6); 
}

// Stops the timer and returns the elapsed time
double timerStop(){
	struct timeval tod;
	gettimeofday(&tod, NULL);
	return ((double)tod.tv_sec + ((double)tod.tv_usec * 1.0e-6)) - startTime;
}


//
//  stopwatch.cpp
//  CS202 Homework1
//
//  Created by Alden Ahern on 2/9/21.
//

#include "stopwatch.hpp"

// default initializer records time object was created.
Stopwatch::Stopwatch(){
    _starttime = std::chrono::steady_clock::now();
}

// replace recorded start time with current time.
void Stopwatch::restartwatch(){
    _starttime = std::chrono::steady_clock::now();
    // should reset _stoptime, otherwise calling endwatch, then restartwatch, then gettime without ending time again is a problem.
}

// records current time as endtime for calculating durations.
void Stopwatch::endwatch(){
    _stoptime = std::chrono::steady_clock::now();
}

// calculates time between start and stop times.
double Stopwatch::gettime(){
    // should do something to make sure no problems occur if you don't endwatch before using. same issue for millisecond.
    std::chrono::duration<double> duration = _stoptime - _starttime;
    return duration.count();
}
// calculates duration like gettime, then times by 1000. because 1 sec=1000 millisec
double Stopwatch::getmilliseconds(){
    std::chrono::duration<double> duration = (_stoptime - _starttime) * 1000;
    return duration.count();

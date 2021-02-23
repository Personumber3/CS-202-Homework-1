//
//  stopwatch.hpp
//  CS202 Homework1
//
//  Created by Alden Ahern on 2/9/21.
//
#include <chrono>

#ifndef stopwatch_hpp
#define stopwatch_hpp

#include <stdio.h>

// creates stopwatch class. only defines default initializer so it starts timing.
class Stopwatch{
public:
    Stopwatch();
    
    // creates member functions to restart timing, end timing, and get time between start and stop in seconds or milliseconds.
    void restartwatch();
    void endwatch();
    double gettime();
    double getmilliseconds();

    // member variables for start and stop times are defined and private.
private:
    std::chrono::steady_clock::time_point _starttime;
    std::chrono::steady_clock::time_point _stoptime;
};

#endif /* stopwatch_hpp */

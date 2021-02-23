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

class Stopwatch{
public:
    Stopwatch();
    
    void restartwatch();
    void endwatch();
    double gettime();
    double getmilliseconds();

    
private:
    std::chrono::steady_clock::time_point _starttime;
    std::chrono::steady_clock::time_point _stoptime;
};

#endif /* stopwatch_hpp */

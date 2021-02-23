//
//  stopwatch.cpp
//  CS202 Homework1
//
//  Created by Alden Ahern on 2/9/21.
//

#include "stopwatch.hpp"

Stopwatch::Stopwatch(){
    _starttime = std::chrono::steady_clock::now();
}

void Stopwatch::restartwatch(){
    _starttime = std::chrono::steady_clock::now();
}
void Stopwatch::endwatch(){
    _stoptime = std::chrono::steady_clock::now();
}
double Stopwatch::gettime(){
    std::chrono::duration<double> duration = _stoptime - _starttime;
    return duration.count();
}
double Stopwatch::getmilliseconds(){
    std::chrono::duration<double> duration = (_stoptime - _starttime) * 1000;
    return duration.count();

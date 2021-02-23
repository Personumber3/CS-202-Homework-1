//
//  main.cpp
//  CS202 Homework1
//
//  Created by Alden Ahern on 2/6/21.
//

/*
 chronos,stopwatch function.
 
 */
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include "stopwatch.hpp"
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    Stopwatch watchymcwatchface;

    cout << "meowth, that's right" << endl;
    watchymcwatchface.endwatch();
    cout << "time taken " << watchymcwatchface.gettime().count() << " seconds" << endl;
    cout << "time taken " << watchymcwatchface.getmilliseconds().count() << " milliseconds" << endl;

    Stopwatch watchface(watchymcwatchface);
    watchface.endwatch();
    Stopwatch watchy(watchymcwatchface);
    watchy.endwatch();
    
    // vector<int> nums;
    // algorithm.mt19937(0)
        
    cout << "time taken " << watchy.getmilliseconds().count() << " milliseconds" << endl;
    
    return 0;
}

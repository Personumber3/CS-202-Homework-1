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
#include <random>
using namespace std;

int main(int argc, const char * argv[]) {
    
    Stopwatch watchymcwatchface;

    cout << "meowth, that's right" << endl;
    watchymcwatchface.endwatch();
    cout << "time taken " << watchymcwatchface.gettime() << " seconds" << endl;
    cout << watchymcwatchface.getmilliseconds() << " milliseconds" << endl;

        auto seed = chrono::high_resolution_clock();
    mt19937 timeywimey(seed.now().time_since_epoch().count());
    
    vector<int> numberset;
    vector<int> searchset{42};
    int max = 10;
    int i = 0;
    for(int j = i; j < max; ++j){
        numberset.push_back(timeywimey());
    }
    Stopwatch watchy(watchymcwatchface);
    search(numberset.begin(),numberset.end(),searchset.begin(),searchset.end());
    watchy.endwatch();
    cout << max << " items search time " << watchy.gettime() << " seconds." << endl;
    
    Stopwatch watchface(watchymcwatchface);
        watchface.endwatch();
        
    cout << "time taken " << watchy.getmilliseconds() << " milliseconds" << endl;
        
        return 0;
}

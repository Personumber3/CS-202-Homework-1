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
    cout << "time taken " << watchymcwatchface.getmilliseconds() << " milliseconds" << endl;

    // vector<int> nums;
    auto meow = chrono::high_resolution_clock();
    mt19937 timeywimey(meow.now().time_since_epoch().count());
    
    vector<int> numberset;
    vector<int> searchset{42};
    int max;
    int i = 0;
    Stopwatch watchy(watchymcwatchface);
    watchy.endwatch();
    Stopwatch watchface(watchymcwatchface);
    watchface.endwatch();
    Stopwatch watchy_watch(watchymcwatchface);
    watchy_watch.endwatch();
    for(int k = 1; k < 10; ++k){
        max = pow(10,k);
        for(int j = i; j < max; ++j){
            numberset.push_back(timeywimey());
        }
        watchy.restartwatch();
        search(numberset.begin(),numberset.end(),searchset.begin(),searchset.end());
        watchy.endwatch();
        cout << max << " items search time: " << watchy.gettime() << " seconds." << endl;
        
        watchface.restartwatch();
        binary_search(numberset.begin(),numberset.end(),42);
        watchface.endwatch();
        cout << max << " items binary search: " << watchface.gettime() << " seconds." << endl;

        watchymcwatchface.restartwatch();
        max_element(numberset.begin(),numberset.end());
        watchymcwatchface.endwatch();
        cout << max << " items max element: " << watchymcwatchface.gettime() << " seconds." << endl;

        watchy_watch.restartwatch();
        shuffle(numberset.begin(),numberset.end(),timeywimey);
        watchy_watch.endwatch();
        cout << max << " items shuffle time: " << watchy_watch.gettime() << " seconds." << endl;

        
        i = max;
    }
    
        return 0;
}

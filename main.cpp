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
    watchymcwatchface.endwatch();

// setting up random seed, and using it with mt19937 to create a random number generator.
    auto seed = chrono::high_resolution_clock();
    mt19937 timeywimey(seed.now().time_since_epoch().count());
    
    // creates a vector for our random numbers.
    vector<int> numberset;
    // creates a number to search for in our random numbers.
    vector<int> searchset{42};
    // used to set upperbounds for updating vector
    int max;
    // used so the vector doesn't get more elements that we want. not very elegent, but it's what I used and I think it works. should give sizes 10,100,1000,... instead of 10,110,1110,11110,...
    int i = 0;
    // creates a separate stopwatch for each function
    Stopwatch watchy(watchymcwatchface);
    watchy.endwatch();
    Stopwatch watchface(watchymcwatchface);
    watchface.endwatch();
    Stopwatch watchy_watch(watchymcwatchface);
    watchy_watch.endwatch();
    // for each initial loop, increases the size of the vector by an order of magnitude. then tests 4 functions on it and sees how long each takes.
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

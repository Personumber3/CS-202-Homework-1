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

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    Stopwatch watchymcwatchface;
    
    cout << "meowth, that's right" << endl;
    watchymcwatchface.endwatch();
    cout << "time taken " << watchymcwatchface.gettime().count() << " seconds" << endl;
    cout << "time taken " << watchymcwatchface.getmilliseconds().count() << " milliseconds" << endl;

        
    //================================================================================
    
    cout << "Calc answers to some Questions." << endl << endl;
    vector<int> nums;
    
    for(int i = 0; i < 1000; ++i){
        nums.push_back(i);
    }
    
    cout << "creating list of 1000 elements took " << timeElapsed.count() << " seconds" << endl;
    
    
    find(nums.begin(),nums.end(),990);
    
    cout << "searching through 1000 elements took " << timeElapsed.count() << " seconds" << endl;
    
    
    sort(nums.begin(),nums.end(),greater<int> ());

    cout << "sorting 1000 elements took " << timeElapsed.count() << " seconds" << endl;
    

    cout << "creating list of 10000 elements took " << timeElapsed.count() << " seconds" << endl;
    
    return 0;
}

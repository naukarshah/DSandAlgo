//
//  LCSfast.cpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 10/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#include "LCSfast.hpp"

int LongestIncreasingSubsequenceLength(vector<int> & numbers, int n){
    vector<int> tail(n, 0);
    int length  = 1;
    tail[0] = numbers[0];

    for(int i = 0; i< n; i++){
        auto b  = tail.begin(), e= tail.begin()+length;
        auto it = lower_bound(b,e,numbers[i]);
        if(it == tail.begin()+length) {
            tail[length++] = numbers[i];
        }
        else {
            *it = numbers[i];
        }
    }
    return length;
}


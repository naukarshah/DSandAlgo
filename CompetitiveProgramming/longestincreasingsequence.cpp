//
//  longestincreasingsequence.cpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 09/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#include "longestincreasingsequence.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#define MAX2 1000
using namespace std;

void increasingSequence(std::vector<int> sequence, int n){
    int dp2[MAX2];
    for (int k = 0; k < n; k++) {
            dp2[k] = 1;
            for (int i = 0; i < k;  i++) {
                if (sequence[i] < sequence[k]) {
                    dp2[k] = max(dp2[k], dp2[i]+1);
                }
            }
        }
}


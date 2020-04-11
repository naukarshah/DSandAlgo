//
//  pathInGrid.cpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 09/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#include "pathInGrid.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#define MAX1 1000
using namespace std;



void summation(int n, vector<vector<int>>& values){
    int dp1[MAX1][MAX1];
    for (int x = 1; x <= n; x++) {
        for (int y = 1;  y<= n; y++) {
            //dp[x][y] stores the maximum value acheived till after visiting values[x][y] and time complexity is O(n^2)
            dp1[x][y] = max(dp1[x-1][y], dp1[x][y-1]) + values[x][y];
        }
    }
    printf("%d\n", dp1[n][n]);
}

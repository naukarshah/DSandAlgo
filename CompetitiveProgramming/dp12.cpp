//
//  dp1.cpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 11/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#include "dp12.hpp"



template<class T> T max(T a, T b, T c){
    return max(a, max(b,c));
}

long long solveMaximum(vector<int>& data){
    vector<pair<int, int>> v;
    map<int, int> m;
    
    for(auto x : data)
        m[x]++;
    
    for(map<int,int>::iterator it = m.begin(); it!= m.end(); it++){
        v.push_back(make_pair(it->first, it->second));
    }
    
    for(int i = 0; i < (int)v.size(); i++){
        int ptr = i-1;
        while (ptr>=0 && v[ptr].first + 1 == v[i].first) {
            ptr--;
        }
        if (ptr == -1) {
            f[i] = 1LL * v[i].first * v[i].second;
        }
        else{
            f[i] = f[ptr] + 1LL * v[i].first * v[i].second;
        }
        if(i !=0 )
            f[i] = max(f[i], f[i-1]);
    }
    return f[(int)v.size()-1];
}

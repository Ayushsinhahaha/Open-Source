// Q11. Container With Most Water

// Solution is based upon the explanation given in question

#include<bits/stdc++.h>
#include<string>
#include<math.h>
#include<string.h>
#include<sstream>
#include<iostream>
#include<vector>
using namespace std;
#define MOD 1000000007;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n=height.size();
        int large=0,l=0,r=n-1;
        
        while(l<r)
        {
            int x = min(height[l],height[r])*(r-l);
            large=max(large,x);
            
            if(height[l]<height[r])
                l++;
            else
                r--;
        
        }
        
        return large;
    }
};
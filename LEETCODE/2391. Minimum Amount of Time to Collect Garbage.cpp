//LEETCODE PROBLEM
//2391. Minimum Amount of Time to Collect Garbage
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int PickP = 0;
        int PickG = 0;
        int PickM = 0;
        
        
        int lastP = 0;
        int lastG = 0;
        int lastM = 0;
        
        int travelP = 0; 
        int travelG = 0; 
        int travelM = 0;

        for(int i=0;i<garbage.size();i++){
            string Current=garbage[i];

            for(int j=0;j<Current.length();j++){
                char ch = Current[j];

                if(ch == 'P'){
                    PickP++;
                    lastP = i;
                }
                else if(ch == 'G'){
                    PickG++;
                    lastG = i;
                    
                }
                else if(ch == 'M'){
                    PickM++;
                    lastM = i;

                }
            }
            //In this Loop We have Calculated Pickup timing and the
            //last Stop of the truck
            //Now we will calculate the Travel time using the Last stop 
            //For this we will use for loop over three trucks individually

        }
        for(int i=0;i<lastP;i++){
            travelP = travelP + travel[i];
        }
        for(int i=0;i<lastG;i++){
            travelG = travelG + travel[i];
        }
        for(int i=0;i<lastM;i++){
            travelM = travelM + travel[i];
        }
        //Now combining Pickp timing and the travel time to
        //get the final   answer that is total time

        int totalTime=(PickP+travelP)+(PickG+travelG)+(PickM+travelM);
        return totalTime;
    }
};
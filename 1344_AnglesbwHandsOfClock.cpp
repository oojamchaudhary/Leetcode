#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour = hour % 12;
        double min_deg, hour_deg;
        min_deg = double(minutes * 6);
        hour_deg = double(hour * 30) + double(minutes) * 0.5;
        if(min_deg > hour_deg) swap(min_deg, hour_deg);
        return min(hour_deg - min_deg, min_deg - hour_deg + 360);        
    }
};
int main(){
    
    return 0;
}
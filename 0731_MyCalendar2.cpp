
#include <bits\stdc++.h>
using namespace std;
class MyCalendarTwo {
public:
    vector<pair<int, int>> schedule;
    vector<pair<int, int>> overlaps;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(int i = 0; i< overlaps.size(); i++){
            if(start<overlaps[i].second && end>overlaps[i].first){
                return false;
            }
        }
        for(int i = 0; i < schedule.size(); i++){
            if(start<schedule[i].second && end>schedule[i].first){
                overlaps.push_back({max(start, schedule[i].first),min(end, schedule[i].second)});
            }
        }
        schedule.push_back({start, end});
        return true;
    }
};
int main(){
    
    return 0;
}
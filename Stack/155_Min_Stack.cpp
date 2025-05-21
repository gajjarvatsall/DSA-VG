#include<bits/stdc++.h>
using namespace std;
class MinStack {
public: 
    vector<pair<int,int>> vp;

    MinStack() {}

    void push(int val) {
        if (vp.empty()) {
            vp.push_back({val, val});
        } else {
            int currentMin = vp.back().second;
            vp.push_back({val, min(val, currentMin)});
        }
    }
    
    void pop() {
        vp.pop_back();
    }
    
    int top() {
        return vp.back().first;
    }
    
    int getMin() {
        return vp.back().second;
    }
};

int main()
{
    
    return 0;
}
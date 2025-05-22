#include<bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(st.empty()){
            st.push({price,0});
        }
        int temp = 1;
        while(!st.empty() && st.top().first <= price){
            temp += st.top().second;
            st.pop();
        }
        st.push({price,temp});

        return st.top().second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
int main()
{
    
    return 0;
}
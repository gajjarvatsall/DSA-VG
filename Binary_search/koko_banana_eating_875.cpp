// 875. Koko Eating Bananas

// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.



#include<bits/stdc++.h>
using namespace std;

bool isBanana(vector<int>& piles, int k, int h) {
        long long int total = 0;
        for (int i = 0; i < piles.size(); i++) {
            total += ceil((piles[i] / (double)k));
        }
        return total <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *max_element(piles.begin(), piles.end());
        int ans = 0;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            int k = mid;

            if (isBanana(piles, k, h)) {
                ans = k;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return ans;
    }


int main()
{
    
    return 0;
}
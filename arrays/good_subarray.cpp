#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int maxGoodSubarraySum(const vector<int>& A, int k) {
    int left = 0, maxSum = 0, currentSum = 0;
    unordered_map<int, int> freq;

    for (int right = 0; right < A.size(); ++right) {
        freq[A[right]]++;              // Add current element to freq map
        currentSum += A[right];        // Add it to current sum

        while (freq.size() > k) {      // If too many unique elements
            freq[A[left]]--;           // Reduce count of leftmost element
            currentSum -= A[left];     // Subtract it from current sum
            if (freq[A[left]] == 0)    // If count becomes zero, remove it
                freq.erase(A[left]);
            ++left;                    // Shrink window from left
        }

        maxSum = max(maxSum, currentSum); // Update max sum
    }

    return maxSum;
}

int main() {
    int n, k;
    cin >> n >> k;                   // Read size and k
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];                 // Read array

    cout << maxGoodSubarraySum(A, k) << endl;
    return 0;
}

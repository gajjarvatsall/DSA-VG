class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double c = 0;
        double m = 0;

        for(int i=0;i<k;i++){
            c += nums[i];
        }
        m = c;
        for(int i=k;i<nums.size();i++){
            c += nums[i] - nums[i-k];
            m = max(m,c);
        }
        return m/k;
    }
};
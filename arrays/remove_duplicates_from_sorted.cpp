class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int t=0;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        for (auto& str : st) {
            nums[t] = str;
            t++;
        }
        return st.size();
    }
};
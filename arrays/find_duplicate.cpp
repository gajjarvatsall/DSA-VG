class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }
        for (auto x : umap){
            if(x.second > 1 || x.second == nums.size()){
                ans = x.first;
            }
        }
            
        return ans;
    }
};
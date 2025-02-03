class Solution {
  public:
    // Function to find two elements such that their sum is equal to the given number
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
      
        // Creating visited vector of size n+1 with
        // initial values as false. Note that array
        // values will go upto n, that is why we 
        // have taken the size as n+1
        vector<bool> visited(n + 1, false); 
        int repeating = -1;
        int missing = -1;
      
        for (int i = 0; i < n; i++) {
            if (visited[arr[i]]) {
                repeating = arr[i];
            } else {
                visited[arr[i]] = true;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                missing = i;
                break;
            }
        }
        
        return {repeating, missing};
    
    }
};
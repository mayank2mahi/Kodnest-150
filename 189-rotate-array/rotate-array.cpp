class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k > n
        
        reverse(nums.begin(), nums.end()); // Reverse entire array
        reverse(nums.begin(), nums.begin() + k); // Reverse first k elements
        reverse(nums.begin() + k, nums.end()); // Reverse remaining n-k elements
    }
};
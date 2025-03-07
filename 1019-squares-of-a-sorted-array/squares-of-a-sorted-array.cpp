class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int b = n - 1;
        vector<int> v(n);
        for(int i = b; i >= 0; i--){
            if(abs(nums[a]) >= abs(nums[b])){
                v[i] = nums[a]*nums[a];
                a++;
            }
            else{
                v[i] = nums[b]*nums[b];
                b--;
            }
        }
        return v;
    }
};
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i=1; i<n; i++){
            if(nums[i]==nums[i-1] && res!=nums[i]){
                ans.push_back(nums[i]);
                res=nums[i];
            }
        }
        return ans;
    }
};

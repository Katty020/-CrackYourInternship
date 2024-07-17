class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while(s<e){
            int m=(s+e)/2;
            if(nums[m]==target) return m;
            if(nums[0]<=target && nums[0]>nums[m]) e=m-1;
            else if(nums[0] > target && nums[m]>= nums[0]) s=m+1;
            else{
                if(nums[m] < target) s=m+1;
                else e=m-1;
            }
        }
        return -1;
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int me=0;
        int n=nums.size();
        for(int i=0;i<n; i++){
            if(nums[i]==0){
                swap(nums[i],nums[me]);
                me++;
            }
        }
        me=n-1;
        for(int i=n-1;i>=0; i--){
            if(nums[i]==2){
                swap(nums[i],nums[me]);
                me--;
            }
        }
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt1 =0 , cnt2=0 , cnt3=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] ==0) cnt1++;
            else if(nums[i] ==1) cnt2++;
            else cnt3++;

        }
        for(int i = 0; i< cnt1; i++) nums[i] = 0;
        for(int i = cnt1; i< cnt1+cnt2; i++) nums[i] = 1;
        for(int i = cnt1+cnt2; i< nums.size(); i++) nums[i] = 2;

        
    }
};
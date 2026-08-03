class Solution {
public:
  int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt = 0;
        unordered_set<int> S(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(S.count(nums[i]-diff) && S.count(nums[i]+diff)) {
                cnt++;
            }
        }
        return cnt;
    }
};
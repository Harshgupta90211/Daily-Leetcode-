 class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        int presum = 0;
        int cnt = 0;

        mpp[0] = 1;

        for (int x : nums) {
            presum += x;
            cnt += mpp[presum - k];
            mpp[presum]++;
        }

        return cnt;
    }
};
            
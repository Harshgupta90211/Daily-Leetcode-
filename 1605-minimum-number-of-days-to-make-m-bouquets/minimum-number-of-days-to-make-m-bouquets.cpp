 class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        long long val = m * 1LL * k;

        if (val > bloomDay.size())
            return -1;

        int mini = INT_MAX, maxi = INT_MIN;

        for (int i = 0; i < bloomDay.size(); i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini, high = maxi;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (canMakeBouquets(bloomDay, mid, m, k)) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }

    bool canMakeBouquets(vector<int>& bloomDay, int day, int m, int k) {

        int consecutive = 0;
        int bouquets = 0;

        for (int bloom : bloomDay) {

            if (bloom <= day) {
                consecutive++;

                if (consecutive == k) {
                    bouquets++;
                    consecutive = 0;
                }
            }
            else {
                consecutive = 0;
            }
        }

        return bouquets >= m;
    }
};
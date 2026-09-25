class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
         int low = *max_element(weights.begin(), weights.end());
         int high = accumulate(weights.begin(), weights.end(), 0);
      while(low<=high){
        int mid=(low+high)/2;
        int numberofdays= requireddays(weights , mid);
        if(numberofdays<=days){
            high =mid-1;
        }
        else low = mid+1;
      }
       return low;   
    }

    int requireddays(vector<int>& weights, int capacity){
        int days =1 , load = 0;
        for(int i=0; i<weights.size(); i++){
            if(load + weights[i] > capacity){
                days = days+1;
                load = weights[i];
            }
            else load+=weights[i];
        }
        return days;
    }
    
};
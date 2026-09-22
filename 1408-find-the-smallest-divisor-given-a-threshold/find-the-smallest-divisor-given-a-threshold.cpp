class Solution {
public:
    int sumByd(vector<int>& arr, int div) {
        int sum=0;
        int n= arr.size();
        for(int i=0; i<n; i++){
            sum = sum + ceil((double) arr[i] / (double(div)));
         }
        return sum;
        
    }
    int smallestDivisor(vector<int>& arr, int threshold) {
        if(arr.size() > threshold) return -1;
    int low=1 , high = *max_element(arr.begin() , arr.end());
    while(low <=high){
        int mid = (low+high)/2;
        if(sumByd(arr,mid) <= threshold){
            high = mid-1;

        }
        else low = mid+1;
    }
    return low;
    }
};
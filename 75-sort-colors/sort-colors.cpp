class Solution {
public:
    void sortColors(vector<int>& n) {
        int low =0;
        int mid=0;
        int high = n.size()-1;
        while(mid<= high){
            if(n[mid] == 0){
                swap(n[low] , n[mid] );
                low++;
                mid++;
            }
            else if(n[mid] ==1){
                mid++;
            }
            else{
                swap(n[mid] , n[high]);
                high--;
            }
        }
    
        
    }
};
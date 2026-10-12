 class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> Ans(n+1,0);
        for(int i=0;i<=n;i++)
        {
            if(i%2==0)
            {
                Ans[i]=Ans[i/2];
            }
            else
            {
                Ans[i]=Ans[i/2]+1;
            }
        }    
        return Ans;
    }
};

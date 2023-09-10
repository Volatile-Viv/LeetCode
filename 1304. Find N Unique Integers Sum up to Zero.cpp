class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> ans(n);
        int x;
        if(n%2==0)
        {
            x=n/2;
            ans[n-1]=0;
        }
        else
            x=(n-1)/2; 
        
        for(int i=1; i<=x; i++)
        {    
            ans[i-1]=-1*i;          
            ans[i-1+x]=i;
        }

        return ans; 
    }
};
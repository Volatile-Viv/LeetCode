class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;

        while(num)
        {
            arr.push_back(num%10);
            num = num/10;
        }
        sort(arr.begin(),arr.end());

        int a = 0;
        int b = 0;

        a = 10*arr[0]+arr[2];
        b = 10*arr[1]+arr[3];
        
        return a + b;
    }
};
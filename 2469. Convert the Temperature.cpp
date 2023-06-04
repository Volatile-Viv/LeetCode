class Solution {
public:
    vector<double> convertTemperature(double celsius) 
    {
        vector<double> ans;
        double kelvin = celsius + 273.15;
        double faren = celsius * 1.80 + 32.00;
        ans.push_back(kelvin);
        ans.push_back(faren);
        return ans;    
    }
};
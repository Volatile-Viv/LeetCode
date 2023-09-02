class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        stack<int> st;

        for(int i = 0; i<operations.size(); i++)
        {
            string ch = operations[i];
            if(ch == "+" && !st.empty())
            {
                stack<int> t = st;
                t.pop();
                int temp = st.top() + t.top();
                st.push(temp);
            }
            else if(ch == "D" && !st.empty())
            {
                int temp = 2 * st.top();
                st.push(temp); 
            }
            else if(ch == "C" && !st.empty())
            {
                st.pop(); 
            }
            else 
            {
                int temp = stoi(ch);
                st.push(temp);
            }
            
            
        }
        int total = 0;
    
        while (!st.empty()) 
        {
            total += st.top();
            st.pop();
        }
    
        return total; 
    }
};
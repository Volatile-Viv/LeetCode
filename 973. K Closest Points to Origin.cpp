class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<vector<int>> ans;
        priority_queue<pair<double, vector<int>>> minHeap;

        for (int i = 0; i < points.size(); i++) {
            int x1 = 0, y1 = 0;
            int x2 = points[i][0], y2 = points[i][1];

            double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

            minHeap.push({distance, points[i]});

            if (minHeap.size() > k) 
                minHeap.pop();
        }

        while (!minHeap.empty()) 
        {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return ans;
    }
};

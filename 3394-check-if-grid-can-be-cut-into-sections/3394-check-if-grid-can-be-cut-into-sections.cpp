class Solution {
public:
    vector<vector<int>> merged(vector<vector<int>>& rectangles) {
        sort(rectangles.begin(), rectangles.end());

        vector<vector<int>> merged;
        merged.push_back(rectangles[0]);
        for (int i = 1; i < rectangles.size(); i++) {
            if (rectangles[i][0] < merged.back()[1]) {
                merged.back()[1] = max(merged.back()[1], rectangles[i][1]);
            } else {
                merged.push_back(rectangles[i]);
            }
        }
        return merged;
    }

        bool checkValidCuts(int n, vector<vector<int>>& rectangles) {

            vector<vector<int>> hor;
            vector<vector<int>> vert;
            for (auto &coord : rectangles) {
                int x1 = coord[0];
                int y1 = coord[1];
                int x2 = coord[2];
                int y2 = coord[3];

                hor.push_back({x1, x2});
                vert.push_back({y1, y2});
            }

            vector<vector<int>> result1 = merged(hor);
            vector<vector<int>> result2 = merged(vert);

            return result1.size() >= 3 || result2.size() >= 3;
        }
    };
class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(m[i][j], m[j][i]);
            }
        }
        for(int i = 0; i < n; i++) {
            reverse(m[i].begin(), m[i].end());
        }
    }
    
    bool isEqual(vector<vector<int>>& a, vector<vector<int>>& b) {
        int n = a.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(a[i][j] != b[i][j]) return false;
            }
        }
        return true;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0; i < 4; i++) {
            if(isEqual(mat, target)) return true;
            rotate(mat);
        }
        return false;
    }
};
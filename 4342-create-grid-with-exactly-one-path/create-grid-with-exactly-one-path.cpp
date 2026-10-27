class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>mat(m);
        mat[0] = string(n, '.');
        string row = string(n-1, '#')+'.';
        for(int i=1;i<m;i++){
            mat[i] = row;
        }
        return mat;
    }
};
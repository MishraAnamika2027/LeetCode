class Solution {
public:
int countOverLaps(vector<vector<int>>& img1, vector<vector<int>>& img2, int i, int j){
    int n = img1.size();
    int cnt =0;
    for(int k=0;k<n;k++){
        for(int m=0;m<n;m++){
            int a = i+k;
            int b = j+m;
            if(a<0 || a>=n || b<0 || b>=n)
            continue;
            if(img1[k][m]==1 && img2[a][b]==1) 
            cnt++;
        }
    }
      return cnt;
}
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        int maxLap = 0;
        for(int i=1-n;i<n;i++){
            for(int j=1-n;j<n;j++){
               int cnt = countOverLaps(img1, img2,i, j);
               maxLap = max(maxLap, cnt);
            }
        }
        return maxLap;
    }
};
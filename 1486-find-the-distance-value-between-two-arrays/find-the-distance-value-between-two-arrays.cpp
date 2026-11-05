class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size(); int m = arr2.size();
        sort(arr2.begin(), arr2.end());
        int count =0;
          for(auto& x : arr1) {
            unsigned p =
                lower_bound(arr2.begin(), arr2.end(), x) - arr2.begin();
            bool ok = true;
            if (p<m) {
                ok &=(arr2[p]-x>d);
            }
            if (p -1>=0&&p-1<=m) {
                ok &= (x - arr2[p - 1] > d);
            }
            count += ok;
        }
        return count;
    }
};
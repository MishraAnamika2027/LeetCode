class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        string a = s.substr(0, n/2);
        string b = s.substr(n/2);
        int c1 =0; int c2 =0;
          for(int i=0;i<n/2;i++){
            a.push_back(s[i]);
        } for(int i=n/2;i<n;i++){
            b.push_back(s[i]);
        }
     vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
     for(int i=0;i<n/2;i++){
          if (find(vowels.begin(), vowels.end(), a[i]) != vowels.end()) c1++;
         if (find(vowels.begin(), vowels.end(), b[i]) != vowels.end())  c2++;
     }
  return c1==c2;         
    }
};
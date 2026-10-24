class Solution {
public:
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int convert(string &s){
    string m, d;
    m += s[0];
    m += s[1];
    d += s[3];
    d+= s[4];
    int count =0;
    int mm, dd;
    mm = stoi(m);
    dd = stoi(d);
    for(int i=0;i<mm;i++){ 
        count += month[i];
}
      count+= dd;
    return count;

}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
      int a1 = convert(arriveAlice);
      int a2 = convert(arriveBob);
      int b1 = convert(leaveAlice);
      int b2 = convert(leaveBob);
      int ar = max(a1, a2);
      int arr = min(b1, b2);
      if(ar>arr){
        return 0;
      }
        return arr-ar+1;
    }
};
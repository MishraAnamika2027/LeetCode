class Solution {
public:
    const long long MOD = 1000000007;
    long long power(long long base, long long pwr){
    if(pwr==0){
        return 1;
    } 
    long long half = power(base, pwr / 2);
    half = (half * half) % MOD;
    if (pwr % 2 == 1)
        half = (half * base) % MOD;
    return half;
    }
    int countGoodNumbers(long long n) {
          long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long ans1 = power(5, even);
        long long ans2 = power(4, odd);
        return (ans1 * ans2) % MOD;
    }
};
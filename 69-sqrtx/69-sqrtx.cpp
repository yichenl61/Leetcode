class Solution {
public:
    int mySqrt(int x) {
        long ans = 0;
        while (ans * ans <= x)
        {
            ans ++;
        }
        return int(ans - 1);
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        long long int temp, backward = 0;
        if(x < 0)
        {
            return false;
        }
        temp = x;
        while(temp != 0)
        {
            int rem = temp % 10;
            backward = 10 * backward + rem;
            temp /= 10;
        }
        
        if(backward == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
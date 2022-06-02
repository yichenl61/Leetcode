// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {\
//         int num = 0;
//         int n = digits.size() - 1;
//         for(int i = 0; i < digits.size(); ++i)
//         {
//             num += digits[i] * 10^n;
//             n--;
//         }
//         num++;
//         vector<int> ans;                                      
//         while(num > 0)
//         {
//             int temp = num % 10;
//             num /= 10;
//             ans.insert(ans.begin(), temp);
//         }
//         return ans;                                           
//     }
// };

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size() - 1;
     
      for (int i = n; i >= 0; --i) { 
        if (digits[i] == 9) {  
          digits[i] = 0;
        } else {  
          digits[i] += 1;
          return digits;
        }
      }
     
      digits.push_back(0);
      digits[0] = 1;
        
      return digits;
    }
};
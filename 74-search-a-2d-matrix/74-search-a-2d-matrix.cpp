class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size() - 1;
        
        while(l < r)
        {
            int mid = l + (r - l) / 2;
            
            if(matrix[mid][0] == target)
            {
                return true;
            }
            
            if(matrix[mid][0] < target && matrix[mid + 1][0] > target)
            {
                l = mid;
                break;
            }
            
            if(matrix[mid][0] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        
        int ll = 0;
        int rr = matrix[l].size() - 1;
        while(ll <= rr)
        {
            int midd = ll + (rr - ll) / 2;
            if(matrix[l][midd] < target)
            {
                ll = midd + 1;
            }
            
            else if (matrix[l][midd] > target)
            {
                rr = midd - 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
class Solution {
private:
    priority_queue <int, vector<int>> heap;
    
public:
    int lastStoneWeight(vector<int>& stones) {
        for(int temp:stones)
        {
            heap.push(temp);
        }
        while(heap.size() > 1)
        {
            int y = heap.top();
            heap.pop();
            
            int x = heap.top();
            heap.pop();
            
            if(x != y)
            {
                y -= x;
                heap.push(y);
            }
        }
        
        if(heap.size() == 0)
        {
            return 0;
        }
        return heap.top();
        
    }
};
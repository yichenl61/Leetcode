/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, int> map;
        ListNode* curr = head;
        
        while (curr != NULL)
        {
            map[curr] ++;
            if(map[curr -> next] != 0)
            {
                return true;
            }
            curr = curr -> next;
        }
        return false;
    }
};
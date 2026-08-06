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
    ListNode *detectCycle(ListNode *head) {
        ListNode *point=head;
        int p;
        unordered_map<ListNode*,bool>m;
        while(point!=NULL){
            if(m[point]==true){
                return point;
                
            }
            else{
                m[point]=true;
                point=point->next;
            }
        }
        

        return NULL;
        
    }
};
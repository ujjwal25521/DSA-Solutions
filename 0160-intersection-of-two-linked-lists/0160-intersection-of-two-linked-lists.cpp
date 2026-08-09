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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,bool> m;
        ListNode*temp=headA;
        ListNode*temp2=headB;

        while(temp){
            m[temp]=true;
            temp=temp->next;
        }

        while(temp2){
            if(m[temp2]){
                break;
            }
            temp2=temp2->next;
        }
        return temp2;
        
    }
};
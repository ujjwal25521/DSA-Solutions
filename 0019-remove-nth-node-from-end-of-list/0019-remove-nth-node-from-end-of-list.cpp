/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=n+1;
        ListNode* fast=head;
        ListNode* slow=head;
        int count=0;

        while(fast!=NULL){
            x=n+1;

            while(x!=0){
                fast=fast->next;
                count++;
                x--;
                if(fast==NULL) break;
            }
            if(fast){

                slow=slow->next;
                fast=slow;

            }
           
        }
        if(count==n){
            return head->next;
        }
        if( slow->next &&slow->next->next){
        slow->next=slow->next->next;
        }
        else if(slow->next && slow->next->next==NULL){
            slow->next=NULL;
        }
        else{
            slow=nullptr;
            return slow;
        }
        
       return head; 
    }
};
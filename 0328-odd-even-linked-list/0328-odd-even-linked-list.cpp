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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return head;
        ListNode*head_odd=head;
        ListNode*temp=head_odd;
        if(head->next==nullptr) return head;
        ListNode*head_even=head->next;
        ListNode*temp2=head_even;
        

        while( temp->next &&temp->next->next){

            temp->next=temp->next->next;
            if(temp2->next && temp2->next->next){
            temp2->next=temp2->next->next;
            temp2=temp2->next;
            }
            else {
                temp2->next=nullptr;
            }
           
            temp=temp->next;
           
        }
       
        temp->next=head_even;
        return head;

    }
};
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

        //check if head is null or head next is null;

        if(head==NULL || head->next == NULL){
            return false;
        }

        //define two pointers and store the head in those pointer

        ListNode *fast = head;
        ListNode *slow = head;

        //Loop until fast pointer next value and next next value true

        while(fast->next && fast->next->next){

            //store the fast pointer and slow pointer value
            //Fast pointer will store every next 2 step while slow pointer will store next step
            

            fast = fast->next->next;
            slow = slow-> next;

            //check if fast is equal to slow pointer then return true

            if(fast == slow){
                return true;
            }

        } 

        return false;
        
    }
};
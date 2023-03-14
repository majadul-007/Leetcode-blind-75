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
    ListNode* middleNode(ListNode* head) {

        //defining slow and fast pointer and point to head

        ListNode *sp = head;
        ListNode *fp = head;

        // Iterate fast pointer until it reaches to the end not null

        while(fp && fp->next != NULL ){

            //move slow pointer one step

            sp = sp->next;

            //move fast pointer 2 step forward

            fp = fp->next->next;
        }

        //return the middle element

        return sp;
        
    }
};
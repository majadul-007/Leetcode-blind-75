
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

       
        ListNode *dummynode, *tempnode;

        dummynode = new ListNode();

        tempnode = dummynode;

        while(list1 && list2){

            if(list1->next < list2->next){


                temp->next = list1->next;
                list1 = list1->next;

            }
            else{
                temp->next = list2->next;
                list2 = list2->next;
            }
        }

        if(list1 == NULL){
            temp->next = list2->next;
            list2 = list2->next;
        }
        if(list2 = NULL){
            temp->next = list1->next;
            list1 = list1->next; 
        }
        return dummynode->next;




    }
};
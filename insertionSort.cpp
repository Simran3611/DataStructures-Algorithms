#include <iostream>

using namespace std;

int main(){
    return 0;
}
class InsertionSort {
public:
    ListNode* insertionSortList(ListNode* head) {
        
        // if list contains only one node then it returns the head
        if(!head->next){
          return head;
        }

        // dummy node for sorted list & pointer at dummy list
        ListNode* sorted = new ListNode();
        ListNode* ptr = sorted;   // tail

        // create first node of sorted list using first node of head
        pointer->next = new ListNode(head->val);
        pointer = pointer->next; // update pointer(tail)

        // updating head of input list
        head = head->next;

        while(head){
            // if current node's value is greater than last node of sorted list
            // need to update tail(ptr) 
            if(head->val > ptr->val){
                pointer->next = new ListNode(head->val);
                pointer = pointer->next;
            }
            else{
                // otherwise insert node according to value
                ListNode* pre = sorted;
                ListNode* curr = sorted->next;

                while(curr){
                    if(curr->val >= head->val){
                        pre->next = new ListNode(head->val);
                        pre->next->next = curr;
                        break;
                    }
                    pre = curr;
                    curr = curr->next;
                }
            }
            // move forward in input list
            head = head->next;
        }
        // return sorted list
        return sorted->next;
    }
};

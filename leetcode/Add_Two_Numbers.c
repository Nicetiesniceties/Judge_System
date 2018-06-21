/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* init()
{
	struct ListNode * new = (struct ListNode * )malloc(sizeof(struct ListNode));
	new->next = NULL;
	return new;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) 
{
	struct ListNode * head = init();
	struct ListNode * curr = head;
	int carry = 0;
	while((l1 != NULL) || (l2 != NULL) || (carry != 0))
	{
        curr->next = init();
        curr = curr->next;
		if((l1 == NULL) && (l2 != NULL))
		{
			curr->val = (carry + l2->val) % 10;
			if(l2->val + carry >= 10)
				carry = 1;
			else
				carry = 0;
            l2 = l2->next;
		}
		else if((l2 == NULL) && (l1 != NULL))
		{
			curr->val = (carry + l1->val) % 10;
			if(l1->val + carry >= 10)
				carry = 1;
			else
				carry = 0;
			l1 = l1->next;
		}
		else if((l1 != NULL) && (l2 != NULL))
        {
			curr->val = (carry + l1->val + l2->val) % 10;
			if(l1->val + l2->val + carry >= 10)
				carry = 1;
			else
				carry = 0;
            l1 = l1->next;
            l2 = l2->next;
		}
		else
		{
			curr->val = carry;
			carry = 0;
		}
	}
    return head->next;
}

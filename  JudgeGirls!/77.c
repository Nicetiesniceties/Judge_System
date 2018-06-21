struct node{
	struct node *next;
	};
struct node *getNode(struct node *head, unsigned int i){
	int len = 0;
	struct node *temp = head;
	while(temp != NULL)temp = temp -> next, len++;
	if(i > len - 1)return NULL;
	i = len + 1 - i;
	for(int j = 0; j < i; j++)
		 head = head -> next;
	return head;
	}

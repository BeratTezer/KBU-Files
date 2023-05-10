struct node* ortanca_sil(struct node* head) {

    if (head == NULL || head->next == NULL) {
		printf("Yeterli eleman yok");
		return 0;
	}
    
	struct node* ortanca = head;
    struct node* son = head;
    
	while (son->next != NULL && son->next->next != NULL) {
        son = son->next->next;
        ortanca = ortanca->next;
    }
    
	struct node* temp = ortanca->next;
    ortanca->next = ortanca->next->next;
	
    free(temp);
    
	return head;
}
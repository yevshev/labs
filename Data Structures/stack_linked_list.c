struct stack{
	
	int data;
	
	struct stack *next;

};

struct stack *push(struct stack *TOP, int val){
	
	struct stack *ptr;
	
	ptr = (struct stack *)malloc(sizeof(struct stack));
	
	if(ptr ==NULL){
		
		printf("No Available Memory\n");
		
		exit(1);
	}
	
	ptr->data = val;

	ptr->next  = TOP;
		
	TOP = ptr;
	
	return TOP;
	
}

struct stack *pop(struct stack *TOP){
	
	struct stack *ptr;
	
	if(TOP == NULL){
		
		printf("Stack is empty\n");
		
		exit(1);
	}
	
	ptr = TOP;
	
	TOP = TOP->next;
	
	free(ptr);
	
	return TOP;
	
}


int peep(struct stack *TOP){
	
	if(TOP == NULL){
		
		printf("Stack is empty\n");
		
		exit(1);
	}
	
	return TOP->data;
	
}
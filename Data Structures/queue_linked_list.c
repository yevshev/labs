struct node{

	int data;
	
	struct node *next;
};


void insert_to_queue(struct node *REAR, struct node *FRONT){
	
	struct node *new_node;
	
	int val;
	
	printf("Enter the value that needs to be inserted into queue: \n");
	
	scanf("%d", &val);
	
	new_node = (struct node *)malloc(sizeof(struct node));
	
	if(new_node == NULL){
		
		printf("No Available Memory!\n");
		
		exit(1);
	}
	
	new_node->data = val;
	
	if (FRONT == NULL){
		
		FRONT = REAR = new_node;
		
		new_node->next = NULL;
	}
	else {
		
		REAR->next = new_node;
		
		REAR = new_node;
		
		new_node->next = NULL;
	}
	
}


void delete_from_queue(struct node *REAR, struct node *FRONT){
	
	struct node *ptr;
	
	if (FRONT == NULL){
		
		printf("Queue is empty!\n");
		
		exit(1);
	}
	else {
		
		if (FRONT == REAR){
			
			ptr = FRONT;
			
			FRONT = REAR = NULL;
			
			free(ptr);
		}
		else {
			
			ptr = FRONT;
		
			FRONT = FRONT->next;
		
			free(ptr);
		}
		
	}
	
}
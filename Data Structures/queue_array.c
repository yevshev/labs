#define QUEUE_SIZE 50

int queue[QUEUE_SIZE];

int front = -1, rear = -1;

void insert_to_queue(){
	
	int num;
	
	printf("Enter the number to be inserted in the queue: \n");
	
	scanf("%d", &num);
	
	if (rear == QUEUE_SIZE - 1){
		
		printf("Queue is full!\n");
		
		exit(1);
	}
	
	if (front == -1 && rear == -1){
		
		front = rear = 0;
		
	}
	else {
		
		rear++;
		
	}
	
	queue[rear] = num;
	
}

int delete_from_queue(void){
	
	int val;
	
	if (front == -1 || front > rear){
		
		printf("Underflow\n");
		
		exit(1);
	}
	else {
		
		val = queue[front++];
		
		return val;
	}
}
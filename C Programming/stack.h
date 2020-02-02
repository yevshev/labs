#define STACK_SIZE 100

int contents[STACK_SIZE];
int top;
char ch;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);

void stack_overflow(void);
void stack_underflow(void);


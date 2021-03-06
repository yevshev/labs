//06/02//
Functions
  parameter (func. definition)

double average(double a, double b)
{
  return (a + b) / 2
}

/* return-type function name (type-parameters)
    {
      declarations
      statements
    }
*/

/* CANNOT RETURN ARRAY */
/* Function prototype doesn't have to specify parameter names */

float --> double
char  --> int
short --> int

//06/04//
Recursion (Technique)
  a recursive function is defined as a function that calls itself to solve a
  smaller version of its task until a final call is made which doesn't require 
  a call to itself.
  
  *base case: the problem is simple enough to be solved directly without
              making any further call to the same function.
  
  *recursive case: first the problem at hand is divided into simpler sub-
                   problems. Second the function calls itself but with sub-
                   problem of the problem obtained from the second step. Third,
                   the resutl is obtained by combining the solutions of simpler
                   sub-problems.
            
Factorials
  5! = 5 * 4 * 3 * 2 * 1 = 120
  
  = 5 * 4!
  = 5 * 4 * 3!
  = 5 * 4 * 3 * 2!
  = 5 * 4 * 3 * 2 * 1!
  
                    1! = 1
                
base case: n = 1
recursive case: n * fact(n - 1)


int fact(int n) 
{
  if (n == 1) 
    return 1;
  else 
    return n * fact(n - 1);
}
  
  
Type of Recursion
  *whether the function calls itself directly or indirectly.
  
  DIrect:
  
int func(in n) {
  if (n == 0)
    return n;
  else
    return func(n - 1)
}
  
  *Function is indirectly recursive if it contains a call to another function
  which ultimately calls it:
  
int func1( int n) {
  if (n == 0)
    return n;
  else
    return func2(n);
}

int func2(int n) {
  return func1(n -1);
}


*Whether any operation is pending at each recursive call 
  (tail-recursion or non-tail)
  
  tail-recursion: if no operations are pending tp be performed when the 
                  recursive function returns to its caller.
  
  int fact(n) {
    return fact1(n, 1);
  }
  
  int fact1(int n, int res){
    if (n == 1)
      return res;
    else
      return fact1(n - 1, n * res);
  }


//06/05//
Complexity Analysis

  Insertion Sort
  
  [5,2,4,6,1,3]
  [5, ,4,6,1,3] --> tmp = 2
  [ ,5,4,6,1,3]
  [2,5,4,6,1,3]
  [2,5, ,6,1,3] --> tmp = 4
  [2, ,5,6,1,3]
  [2,4,5,6,1,3]
  [2,4,5, ,1,3] --> tmp = 6
  [2,4,5,6,1,3]
  [2,4,5,6, ,3] --> tmp = 1
  [2,4,5, ,6,3]     
  [2,4, ,5,6,3]
  [2, ,4,5,6,3]
  [1,2,4,5,6,3]
  [1,2,4,5,6, ] --> tmp = 3
  [1,2,4,5, ,6]
  [1,2,4, ,5,6]
  [1,2, ,4,5,6]
  [1, ,2,4,5,6]
  [1,2,3,4,5,6]
  
  for (j = 2; j < len; j++) {
    key = a[j]
    i = j - 1
    while (i > 0 && a[i] > key) {
      a[i + 1] = a[i]
      i = i - 1
    }
    a[i + 1] = key
  }
  
  worst-case running time: an^2 + bn + c
  
  consider: n^2
  
//06/08//
LINKED LISTS

START: stores adreess of entire linked list

/* build a linked list
    -create node    */
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  
  /* insert node at beginning */
  new_node = NULL;
  new_node->data = val;
  new_node->next = start;
  start = new_node;
  
  /*insert node at end */
  new_node = NULL;
  new_node->data = val;
  new_node->next = NULL;
  ptr = start;
  while (ptr->next != NULL)
    ptr = ptr->next
  ptr = ptr
  
  
  //Traverse linked list
  PTR = START;
  while (PTR != NULL)
    //Apply process to PTR->DATA
    PTR = PTR->NEXT
  exit
  
  //SEARCH
  PTR = START;
  while (PTR != NULL)
    if (val = PTR->DATA)
      pos = PTR;
      ;
    else
      ptr = ptr->next
  po = NULL;
  
//06/10//
Lab Test Friday
-build()
-Delete()
-search()
-insert()
  
STACKS

int stack[MAX];
int top = -1;

void make_empty(void)
{
  top = -1;
}

void is_empty(void)
{
  if (top == -1)
    return 1;
  else
    return 0;
}

int is_full(void)
{
  if (top == MAX - 1)
    return 1;
  else return 0;
}

int push(int n)
{
  if (top == MAX - 1) {
    printf("overflow\n");
    exit(1);
  }
  top++;
  stack[top] = n;
}

void (push(int n)
{
  if (is_full()) {
    printf("overflow\n")
    exit(1)
  }
}


int pop(int n)
{
  if (top == -1) {
    printf("underflow\n");
    exit(1);
  }
  
    
}

int pop(void)
{
  if (is_empty()) {
    printf("overflow\n");
    exit(1);
  }
  else
  return stack[top--];
}

}
int peep(int n)
{
  if (is_empty()) {
    printf("empty\n");
    exit(1);
  }  
  else
    return stack[top];
}


LINKED LIST STACK

struct stack {
  int data;
  struct stack *next;
};

struct stack *push(struct stack *top, int n)
{
  struct stack *p;
  p = (Struct stack *)malloc(sizeof(struct stack));
  
  if (p == NULL) {
    printf("No available mem\n");
    exit(1);
  }
  p->data = n;
  p->next = top;
  top = p;
  return top;
}

struct stack *pop(struct stack *top)
{
  struct stack *p;
  
  if (top == NULL) {
    printf("empty");
    exit(1);
  }
  p = top;
  top = top->next;
  free(p);
  return top;
}

int peep(struct stack *top)
{
  if (top == NULL) {
    printf("empty\n");
    exit(1);
  }
  return top->data;
}


//06/11//
(a-b) * (c+d)

rpn: ab-cd+*

always left to right

operators: + - * / %

//06/12//
QUEUE
FIFO

1. insert
2. delete
3. display
4. quit
Enter choice: 


//06/15//
TREES

Binary tree 0 - 2 nodes
parents / children / siblings
level number (root = 0)
leaf node = no children\
degree = number of children
in-degree = number of edges arriving at node
out-degree = number of edges leaving
path = sequence of consecutive edges
depth = length of paths
height = total number of nodes

struct node {
  struct node *left;
  int data;
  struct node *right;
};

traversing a binary tree
  pre-order
    1. root
    2. left 
    3. right 
  in-order
    1. left 
    2. root 
    3. right
  post-order
    1. left
    2. right
    3. root
  
void preorder(struct node *t)
{
  if (t != NULL) {
    printf("\n%d", t->data);
    preorder(t->left);
    preorder(t->right);
  }
}

void inorder(struct node *t)
{
  if (t != NULL) {
    inorder(t->data);
    printf("\n%d", t->data)
    inorder(t->data);
  }
}

void postorder(struct node *t)
{
  if (t != NULL) {
    postorder();
    postorder();
    printf();
  }
}
//06/16//
Efficient Binary Trees

left -subtree nodes < Root
right-subtree nodes > Root



//06/19//
HEAPS

max-heap
min-heap

complete binary tree
(go left as far as possible)

element:     [i]
left child : [2i]
right child: [2i + 1]
height: log2n

//06/22//
GRAPHS

undirected: no direction along edges
directed: has direction

neighbors: node connected by edge
degree: number of edges at node
Path: 
  closed:
  simple:
cycle:
connected graph:
complete graph:
weighted graph:
multiple edge: 
out-degree:
in-degree:
degree: deg(u) = indeg(u) + outdeg(u)
source:
sink:
reachability:

strongly connected directed graph
unilaterally connected graph
parallel/multiple edges
simple directed graph

//06/24//
Dijkstra's Algorithm


//06/26//
Binary Search
  (0 + len) / 2 = middle
Right
  ((middle + 1) + len) / 2 = new_middle
Left 
  ((middle - 1) + new_middle = new_middle


BubbleSort(a[]) 
{
  for (i = 1; i < N; i++) {
   for (j = 0; j < N - 1; j++) {
     if a[j] > a[j + 1] {
       swap( a[j], a[j + 1])
     }
   }
  }
}
//IMPROVE ABOVE FUNCTION
InsertionSort

SelectionSort

MergeSort

QUIZ:
  transitive closure
  search
  bfs/dfs

//06/29//
HASHING

complexity O(1)

DivisionMethod
  H(x) = x % M
  
MultiplicationMethod
  H(x) = floor[m * (K * A % 1)]
  
MidSquareMethod
  H(x) = S = r bits from K^2
  
FoldingMethod
  H(x) = (K1 + K2 + ... + kn)
  

Collisions
  open adressing
    linear probing
      H(k, i) = [H(x) + i] % m
  







































































  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  









































  
  
  
  
  
  
  
  
  
  
  
  
      
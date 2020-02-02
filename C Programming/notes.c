//signed/unsigned integers minimum 16 bit
short int
unsigned short int
int
unsigned int
long int
unsigned int
#include<limits.h> //defines macros that represent smallest/largest values

//64 bit types
long long int
unsigned long long int

//Decimal must not begin with 0
//Octal MUST begin with 0
//Hex Must begin with 0x

%u //base 10
%x //base 8
%o //base 16

%hd //short int
&ld //long int
&lld //long long int

//floating constants are stored in double format by default
57.0F //indicate single precision
57.0L //long double

//character [single quotes]
char ch;
ch = 'a'

//conver lowercase to upper case
if ('a' <= ch && ch <= 'z')
  ch = ch - 'a' + 'A';

//conversion function
#include <ctype.h>
ch = toupper(ch)

//read characters, ignore else
do {
  scanf("%c", &ch);
} while (ch != '\n')

ch = getchar(ch); //smae as scanf above

//int -> unsigned int ->long int -> unsigned long int

//casting
(int) f;

//check memory required
sizeof (char) //always 1
sizeof (int)  // normally 4

/*Arrays*/
//One dimensional

// must specify type and number of elements
int a[10];

//indexed from 0 to n-1
//subscripts may have epxressions
a[i+j*10] = 0;

//side effects
i = 0;
while (i < N)
  a[i++] = 0;

//declare+initilaize
int a[10] = {1,2,3,4,5,6,7,8,9,10};

//designated initializer
int a[10] = {[2] = 29, [9] = 7};

//multidimensional [rows] [columns]
int m[5] [9];

//nested for loop to access multidimensional array
...
/*FUNCTIONS*/

double average(double a, double b)
{
  return (a + b) / 2;
}
/*Declare each function before calling it*/
//return-type function-name ( parameters ) ;
double average (double, double) //declaration

//parameter: variable used in function declaration
//argumnet: expression used when calling function

exit(0) //<stdlib.h>// terminates program
return(0)  //terminates main function



/*****RECURSION*****/
int power
//local variable (within function)
  //automatic storage duration
  //block scope

//Static Local Variables
static int i //retains original vlaue throughout program
  //static storage duration
  //Block scope

//Global Variables (declared outside function body)
  //static storage duration
  //File scope

/* STACK */
//stores multiple data items of the same type
Push //add item to one end
Pop //remove from one end

int contents[];
int top;

//Push
contents[top++]

//Pop
contents[--top]

//BLOCK
if (i >j) {
  int temp = i;
  i = j;
  j = temp;
}


/***** P O I N T E R S *****/
/*                         */
/*                         */
/***************************/

/* main memory diviided in bytes (8 bits)
byte = samllest addressable unit
n bytes --> adresses range from 0 to n-1
addresses can be stored in "pointer variables" */
int *p;
double *q;
char *r;
//to find address of variable:
& (address)

//to gain access to the object that a pointer points to:
* (indirection)

//initialize first!
int i, *p;
...
p = &i; //assigning the address of i to variable p (p points to i)

//possible to initialize/declare simultaneously
int i, *p = &i;

//if p points to i, we can print the value of i:
printf("%d\n", *p);

j = *&i /*same as:*/ j = 1;

void f(int *a, int *b);

int main(void) {
  int i, j, result;
  i = 10;
  j = 12;

  f(%i, %j);
  printf("i is %d, j is %d", i , j);
  retiurn 0;
}

void f(int *a, int *b) {
  *a = 24;
  *b = 25;
}

//try maxmin.c

TEST 2 = chapter 9 - 13

//Pointer Arithmetic
p = &a[2]

q = p + 3; //q = a[5]

p += 6; //p = &a[8]

//Subtraction
p = &a[5];
q = &a[1];

i = p - q; //i = 4
i = q - p; //i = -4

precedence
*p++ = *(p++)

Array Name as Pointer
int[10], *p;
p = &a[0];
*p = 7;
*(p+1) = 12;

Processing MultiDimensional Arrays
int *p;
for (p = %a[0][0]; p <= &a[row - 1][col - 1]; p++)

String Literals
//end with '\0'
//enclosed by " "
//c stores string as char array
"abc" //stored as |a|b|c|\0|

char *p;
p = "abc";

"a" //pointer
'a' //integer

char date[8] = "June 14";
printf("%s"\n, date);

print part of a string
printf("%.4s", date); //= "June"

puts(date) //same as printf(%s\n, date)

scanf("%S", date); //no need for '&' because pointer
//scanf skips leading white space but stops at next white space

gets()
//doesnt skip white space
//stops at '\n'
//replaces '\n' with '\0'

#include <string.h>

strcpy(dest, src)

strncpy(dest, src, sizeof(src))

strlen(str1)

strcat(s1, s2)

strcmp(s1, s2) //returns -1, 0, or 1

2-dimensional Arrays of strings
char planets [][3] = {"Mercury", "Venus", "Earth"}

char *planets[]
//every element will be a pointer pointing to a string

Command Line Arguments (Program Parameters)

int main(int argc, char *argv[])

argc //argument count - number of command-line arguments

argv //argument vector - array of pointers to the arguments

argv[0] // points to name of program
argv[1] // points to name of program
argv[argc] // NULL

ls -l -t note1 note2
//command -options arguments

THE PREPROCESSOR

program -> preprocessor -> modified program -> compiler -> object code

//spaces may separate directive tokens
# define  N   100

//multiple lines
#define CAPACITY (SIDES *    \
                  TRACKS *   \
                  BYTES      )

#define BOOL int

PARAMETERIZED MACROS

#define IS_EVEN(n)  ((n) % 2 == 0)

IF DIRECTIVES
#if
  #elif
  #else
#endif

DEFINED OPERATOR
#if defined 
#endif

#ifdef
#ifndef

typedef (gives new name to existing type)

ERROR DIRECTIVE
#error message

///////////////////
SOURCE FILES
-group related functions/variables
-compile separately
-easily reuse functions

#include "filename.h" 

///
num.h (header file)
  function declarations
  
num.c (source file)
  function definitions
  
main.c (program file)
  program
  
extern int i


STRUCTURES - UNIONS - ENUMERATIONS

STRUCTURE
//every element can have different data type
//elements have names instead of index
//new scope for each struct

struct {
  int number;
  char name [NAME_LEN+1];
  int on_hand;
} part1 = {528, "disk drive", 10},
  part2 = {914, "printer cable", 5};
  
printf("Part number: %d\n", part1.number);
printf("Part name: %s\n", part1.name);
printf("Quantity on hand: %d\n", part1.on_hand);

//copy compatible types (declared same time)
part2 = part1

//tags
struct part {
  
}

struct part part1, part2;

typedef struct {
  int number;
  char name[LEN+1];
  int on_hand;
} Part;

Part part1, part2;

//function argument
void print_part(struct part p)


UNION
//every element shares single memory storage
//only first member can be given initial value

union {
  int i;
  double d;
} u;



ENUMERATION

enum {CLUBS, DIAMONDS, HEARTS, SPADES} s1, s2

//tags
enum suit {CLUBS, DIAMONDS< HEARTS, SPADES}

enum dept {SALES = 20, SUPPORT = 10};


QUICKSORT ALGORITHM
//low -> first element
//high -> last element

DYNAMIC STORAGE ALLOCATION

<stdlib.h> 
malloc //allocates memory, doesn;t inititialize
calloc //allocates memeory and clears it
realloc //resizes previously allocated block

//functions return void*

right arrow selection
->
//access elements of structure through pointer without indirection
(*new_node).value = 10
  new_node->value = 10

 
 DECLARATIONS
 //declaration-specifiers - declaration ;
 storage classes //auto//static//extern//register
 type quantifiers //const//volatile//restrict
 type specifiers //char//int//...
 
 VARIABLE PROPERTIES
 storage duration //automatic//static
 scope //block//file
 linkage
 
 
 INPUT / OUTPUT
 
 //FILE* declaration
 FILE *fp1, fp2*;

FILE *fopen(const char *filename, const char *mode)

fp = fopen("in.dat", "r");

fclose(filename);


int main(int argc, char *argv[])

fgets(str, sizeof(str), fp);

struct node {
  int value;
  char data;
};

struct node *first =- NULL;

struct node *new_node;
new_node = malloc(sizeof(new_node))

new_node->next = first;
first = new_node;



DELETE_NODE

for (cur = list, prev = NULL;
     cur != NULL, cur->value != n;
     prev = cur, cur = cur->next;)
     
if (cur = NULL)
  return list;
  
if (prev = NULL)
  list = list->next;
else 
  prev->next = cur->next;
  
free(cur);
return list;






















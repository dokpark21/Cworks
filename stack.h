// #ifndef ArraySTACK
// #define ArrayStack

// #define MAX_STACK_SIZE 100

// #define MAX_STRING 100
// typedef struct {
//     int student_no;
//     char name[MAX_STRING];
//     char address[MAX_STRING];
// }element;


// typedef struct {
//     element stack[MAX_STACK_SIZE];
//     int top;
// }StackType;

// void init(StackType *s);
// int is_empty(StackType *s);
// int is_full(StackType *s);
// void push(StackType *s,element item);
// element pop(StackType *s);
// element peek(StackType *s);
// #endif

// #include<stdio.h>
// #include<stdlib.h>

// void init(StackType *s)
// {
//     s->top=-1;
// }

// int is_empty(StackType *s)
// {
//     return (s->top== -1);
// }

// int is_full(StackType *s)
// {
//     return (s->top == (MAX_STACK_SIZE-1));
// }

// void push(StackType *s, element item)
// {
//     if( is_full(s)){
//         fprintf(stderr,"스택 포화 에러\n");
//         return;
//     }
//     else s->stack[++(s->top)] = item;
// }

// element pop(StackType *s)
// {
//     if(is_empty(s)){
//         fprintf(stderr,"스택 공백 에러\n");
//         exit(1);
//     }
//     else return s->stack[(s->top)--];
// }

// element peek(StackType *s)
// {
//     if(is_empty(s)){
//         fprintf(stderr, "스택 공백 에러\n");
//         exit(1);
//     }
//     else return s->stack[(s->top)];
// }


//4
// #ifndef LinkedListSTACK
// #define LinkedListSTACK

// #define MAX_STACK_SIZE 100
// #define MAX_STRING 100

// typedef int element;
// typedef struct StackNode {
//     element item;
//     struct StackNode *link;
// }StackNode;

// typedef struct {
//     StackNode *top;
// } LinkedStackType;

// void init(LinkedStackType *s);
// int is_empty(LinkedStackType *s);
// int is_full(LinkedStackType *s);
// void push(LinkedStackType *s,element item);
// element pop(LinkedStackType *s);
// element peek(LinkedStackType *s);
// #endif

// #include<stdio.h>
// #include<stdlib.h>

// void init(LinkedStackType *s)
// {
//     s->top = NULL;
// }

// int is_empty(LinkedStackType *s)
// {
//     return(s->top==NULL);
// }

// int is_full(LinkedStackType *s)
// {
//     return 0;
// }

// void push(LinkedStackType *s,element item)
// {
//     StackNode *temp = (StackNode *)malloc(sizeof(StackNode));
//     if (temp == NULL){
//         fprintf(stderr,"메모리 할당에러\n");
//         return;
//     }
//     else {
//         temp->item = item;
//         temp->link = s->top;
//         s->top =temp;
//     }
// }

// element pop(LinkedStackType *s)
// {
//     if(is_empty(s)){
//         fprintf(stderr,"스택이 비어있음\n");
//         exit(1);
//     }
//     else {
//         StackNode *temp=s->top;
//         int item = temp->item;
//         s->top = s->top->link;
//         free(temp);
//         return item;
//     }
// }

// element peek(LinkedStackType *s)
// {
//     if(is_empty(s)){
//         fprintf(stderr,"스택이 비어있음\n");
//         exit(1);
//     }
//     else {
//         return s->top->item;
//     }
// }


//스택 활용해서 괄호 검사하기 and 후위 표기법

// #ifndef ArraySTACK
// #define ArraySTACK

// #define MAX_STACK_SIZE 100
// #define TRUE 1
// #define FALSE 0

// typedef char element;
// typedef struct {
//     element stack[MAX_STACK_SIZE];
//     int top;
// }StackType;

// void init(StackType *s);
// int is_empty(StackType *s);
// int is_full(StackType *s);
// void push(StackType *s,element item);
// element pop(StackType *s);
// element peek(StackType *s);
// int prec(char op);

// #endif

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// void init(StackType *s)
// {
//     s->top =-1;
// }

// int is_empty(StackType *s)
// {
//     return (s->top == -1);
// }

// int is_full(StackType *s)
// {
//     return (s->top == (MAX_STACK_SIZE-1));
// }

// void push(StackType *s, element item)
// {
//     if (is_full(s)){
//         fprintf(stderr,"스택 포화 에러\n");
//         return;
//     }
//     else s->stack[++(s->top)] = item;
// }

// element pop(StackType *s)
// {
//     if (is_empty(s)){
//         fprintf(stderr,"스택 공백 에러\n");
//         exit(1);
//     }
//     else return s->stack[(s->top)--];
// }

// element peek(StackType *s)
// {
//     if (is_empty(s)){
//         fprintf(stderr,"스택 공백 에러\n");
//         exit(1);
//     }
//     else{
//     return s->stack[s->top];
//     }
// }

// // 연산자의 우선순위 반환
// int prec(char op)
// {
//     switch(op)
//     {
//         case '(' : case ')' : return 0;
//         case '+' : case '-' : return 1;
//         case '*' : case '/' : return 2; 
//     }
//     return -1;
// }


//미로 찾기

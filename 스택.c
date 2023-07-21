// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include "stack.h"
// int main()
// {
//     StackType s;
//     element ie,oe;
//     int n;
//     init(&s);
//     while(1)
//     {
//         printf("1. push 2.pop 3.peek 4. 종료\n");
//         printf("==> ");scanf("%d",&n);
//         if (n==1){
//             printf("번호 이름 주소  :");
//             scanf("%d %s %s",&ie.student_no,ie.name,ie.address);
//             push(&s,ie);
//         }
//         if(n==2){
//             oe = pop(&s);
//             printf("name : %s\n",oe.name);
//             printf("address : %s\n",oe.address);
//             printf("student number : %d\n",oe.student_no);
//         }
//         if(n==3){
//             oe = peek(&s);
//             printf("name : %s\n",oe.name);
//             printf("address : %s\n",oe.address);
//             printf("student number : %d\n",oe.student_no);
//         }
//         if(n==4) break;
//     }
// }


//4
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include "stack.h"
// int main()
// {
//     LinkedStackType s;
//     init(&s);
//     push(&s,1);
//     push(&s,2);
//     push(&s,3);
//     printf("%d\n",pop(&s));
//     printf("%d\n",pop(&s));
//     printf("%d\n",pop(&s));
//     printf("%d\n",is_empty(&s));
// }


//스택 활용해서 괄호 검사하기
// #include<stdio.h>
// #include<stdlib.h>
// #include "stack.h"

// int check_matching(char *in)
// {
//     StackType s;
//     char ch, open_ch;
//     int i,n = strlen(in);
//     init(&s);

//     for (i=0; i<n; i++){
//         ch = in[i];
//         switch(ch){
//             case '(' : case '[' : case '{' :
//                 push(&s,ch);
//                 break;
//             case ')' : case ']' : case '}' :
//                 if(is_empty(&s)) return FALSE;
//                 else {
//                     open_ch = pop(&s);
//                     if ((open_ch == '(' && ch!=')') || (open_ch =='[' && ch != ']') || (open_ch =='{' && ch!= '}'))
//                     {return FALSE;}
//                 }
//                 break;
//         }
//     }
//     if (!is_empty(&s)) return FALSE;
//     return TRUE;
// }

// int main()
// {
//     char calc[20];
//     printf("괄호검사할 수식을 입력해주세요 : ");scanf("%s",calc);
//     if (check_matching(calc)){
//         printf("괄호 검사 통과!!\n");
//     }
//     else {
//         printf("괄호 검사 실패!!\n");
//     }
// }


//중위 표기법
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include "stack.h"
// //중위 표기 수식 -> 후위 표기 수식
// // 만약 자신보다 값이 큰 연산자가 새로 들어오려 한다면 작은 것들은 출력
// void infix_to_postfix(char exp[])
// {
//     int i=0;
//     char ch, top_op;
//     int len = strlen(exp);
//     StackType s;

//     init(&s);
//     for (i=0;i<len;i++){
//         ch = exp[i];
//         if (ch == '+' || ch == '-' || ch == '*' || ch == '/'){
//             while(!is_empty(&s) && (prec(ch) /*새로 들어오려는 것*/ <= prec(peek(&s))) /*기존에 있던 것*/){
//                 printf("%c",pop(&s));
//             }
//             push(&s,ch);
//         }
//         else if( ch =='(' ) push(&s,ch);
//         else if( ch ==')' ) {
//             top_op = pop(&s);
//             while(top_op != '('){
//                 printf("%c",top_op);
//                 top_op = pop(&s);
//             }
//         }
//         else printf("%c",ch);
//     }
//     while(!is_empty(&s)) printf("%c",pop(&s)); //남은 연산자들 출력
// }

// int main()
// {
//     char calc[20];
//     printf("수식 입력 : ");scanf("%s",calc);
//     infix_to_postfix(calc);
// }




//미로 찾기
// #include<stdio.h>
// #include<string.h>

// #define MAX_STACK_SIZE 100
// #define MAX_SZIE 6

// typedef struct StackObjectRec{
//     short r;
//     short c;
// } StackObject;

// StackObject stack[MAX_STACK_SIZE];
// int top = -1;
// StackObject here={1,0}, entry ={1,0};



// char maze[MAX_SZIE][MAX_SZIE] = {
//     {'1','1','1','1','1','1'},
//     {'e','0','1','0','0','1'},
//     {'1','0','0','0','1','1'},
//     {'1','0','1','0','1','1'},
//     {'1','0','1','0','0','x'},
//     {'1','1','1','1','1','1'},
// };

//굳이 필요없음 이미 전역변수로 선언함
// void initialize()
// {
//     top = -1;
// }

// int isEmpty()
// {
//     return (top == -1);
// }

// int isFull()
// {
//     return (top == (MAX_STACK_SIZE-1));
// }

// void push(StackObject item)
// {
//     if(isFull() ){
//         printf("stack is full\n");
//     }
//     else stack[++top] = item;
// }

// StackObject pop()
// {
//     if (isEmpty()){
//         printf("stack is empty\n");
//     }
//     else {return stack[top--];}
// }

// void printStack()
// {
//     int i;
//     for (i=5;i>top;i--)
//                 printf("|   |\n");
//     for (i=top;i>=0;i--)
//                 printf("|%d %d|\n",stack[i].r,stack[i].c);
//     printf("--------\n");
// }

// void pushLoc(int r,int c)
// {
//     if (r<0 || c<0 || r>(MAX_SZIE-1) || c>(MAX_SZIE-1)) return;
//     if(maze[r][c] != '1' && maze[r][c] != '.'){
//         StackObject tmp;
//         tmp.r =r;
//         tmp.c =c;
//         push(tmp);
//     } 
// }

// void printMaze(char m[MAX_SZIE][MAX_SZIE])
// {
//     int r,c;
//     printf("\n\n");
//     for (r=0;r<MAX_SZIE;r++){
//         for (c=0;c<MAX_SZIE;c++){
//             if (c==here.c && r ==here.r)
//                 printf("m ");
//             else {
//                 if (m[r][c] == 0)printf("0 ");
//                 else printf("%c ",m[r][c]);
//             }
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// int main()
// {
//     int r,c;
//     here = entry;
//     printMaze(maze);
//     pushLoc(here.r,here.c);
//     while (maze[here.r][here.c]!='x'){
//         r=here.r; c=here.c;
//         maze[r][c]='.';
//         //여기서 동서남북을 모두 탑색 뒤 pop으로 here의 row, col을 바꾼뒤 다음으로 넘어감, 만약 길이 없으면 pop~~~무한 반복
//         pushLoc(r-1,c);  
//         pushLoc(r,c-1);
//         pushLoc(r,c+1);   
//         pushLoc(r+1,c);
//         if (isEmpty()){
//             printf("경로를 찾을 수 없습니다!\n");
//             break;
//         }
//         else {
//            here= pop();
//         }
        
//     }
//     printMaze(maze);
//     printStack();
//     if (maze[here.r][here.c]=='x') printf("탈출 성공!!");
// }



//6 후위 표기법 계산
// #include<stdio.h>
// #include<string.h>
// #define MAX_STACK_SIZE 100
// #define TRUE 1
// #define FALSE 0

// typedef int element2;
// typedef struct{
//     element2 stack[MAX_STACK_SIZE];
//     int top;
// }stacktpye2;

// void init2(stacktpye2 *s)
// {
//     s->top=-1;
// }

// int is_empty2(stacktpye2 *s)
// {
//     return(s->top == -1);
// }

// int is_full2(stacktpye2 *s)
// {
//     return(s->top>(MAX_STACK_SIZE-1));
// }

// void push2(stacktpye2 *s,int data)
// {
//     if (is_full2(s)){
//         printf("저장 공간이 가득 찼습니다\n");
//     }else{
//         s->stack[++(s->top)]=data;
//     }
// }

// int pop2(stacktpye2 *s)
// {
//     if (is_empty2(s)){
//         printf("삭제할 데이터가 없습니다\n");
//     }else{
//         return s->stack[(s->top)--];
//     }
// }
// }stacktpye2;

// void init2(stacktpye2 *s)
// {
//     s->top=-1;
// }

// int is_empty2(stacktpye2 *s)
// {
//     return(s->top == -1);
// }

// int is_full2(stacktpye2 *s)
// {
//     return(s->top>(MAX_STACK_SIZE-1));
// }

// void push2(stacktpye2 *s,int data)
// {
//     if (is_full2(s)){
//         printf("저장 공간이 가득 찼습니다\n");
//     }else{
//         s->stack[++(s->top)]=data;
//     }
// }

// int pop2(stacktpye2 *s)
// {
//     if (is_empty2(s)){
//         printf("삭제할 데이터가 없습니다\n");
//     }else{
//         return s->stack[(s->top)--];
//     }
// }

// int main()
// {
//     stacktpye s;
//     init(&s);
//     char op[20];
//     char ch;
//     int a;
//     int b;
//     printf("후위 표기법을 입력하세요 : "); gets(op);
//     for (int i=0;i<strlen(op);i++)
//     {
//         ch = op[i];
//         if (ch<=57 && ch>=48){
//             push(&s,(int)(ch)-48);
//         }
//         else if (ch=='+' || ch=='-' || ch=='*' || ch=='/')
//         {
//             if (s.top<1) {printf("후위 표기법이 잘못 되었습니다\n"); break;}
//             switch(ch)
//             {
//                 case '+' : a=pop(&s);  b=pop(&s); push(&s,a+b); break;
//                 case '-' : a=pop(&s);  b=pop(&s); push(&s,b-a); break;
//                 case '*' : a=pop(&s);  b=pop(&s); push(&s,a*b); break;
//                 case '/' : a=pop(&s);  b=pop(&s); push(&s,b/a); break;
//             }
//         }
//         else {
//             continue;
//         }
//     }
//     if (is_empty(&s)) printf("후위 표기법이 잘못되었습니다");
//     else {
//         int result=pop(&s);
//         if(is_empty(&s)) printf("정답은 %d!!",result);
//         else printf("후위 표기법이 잘못되었습니다");
//     }
// }


//7 스택 계산기
// #include<stdio.h>
// #include<string.h>
// #define MAX_STACK_SIZE 100
// #define TRUE 1
// #define FALSE 0

// typedef char element;
// typedef struct stackType{
//     element stack[MAX_STACK_SIZE];
//     int top;
// }stacktpye;

// void init(stacktpye *s)
// {
//     s->top=-1;
// }

// int is_empty(stacktpye *s)
// {
//     return(s->top == -1);
// }

// int is_full(stacktpye *s)
// {
//     return(s->top>(MAX_STACK_SIZE-1));
// }

// void push(stacktpye *s,int data)
// {
//     if (is_full(s)){
//         printf("저장 공간이 가득 찼습니다\n");
//     }else{
//         s->stack[++(s->top)]=data;
//     }
// }

// element pop(stacktpye *s)
// {
//     if (is_empty(s)){
//         printf("삭제할 데이터가 없습니다\n");
//     }else{
//         return s->stack[(s->top)--];
//     }
// }

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

// int calc(char exp[])
// {
//     stacktpye s;
//     stacktpye back_op;
//     stacktpye f_back_op;
//     init(&s);
//     init(&back_op);
//     init(&f_back_op);
//     char top_op,ch;
    
//     for (int i=0;i<strlen(exp); i++){
//         ch = exp[i];
//         if (ch == '+' || ch == '-' || ch == '*' || ch== '/'){
//             while(is_empty(&s)!=1 && prec(ch) <= prec(s.stack[s.top])){
//                 push(&back_op,pop(&s));
//             }
//             push(&s,ch);
//         }
//         else if (ch == '(') push(&s,ch);
//         else if (ch == ')'){
//             top_op=pop(&s);
//             while(top_op!='('){
//                 if (is_empty(&s)==1) {printf("괄호쌍이 맞지 않습니다\n"); break;}
//                 push(&back_op,top_op);
//                 top_op=pop(&s);
                
//             }
//         }
//         else push(&back_op,ch);
//     }
//     while(is_empty(&s)!=1)
//     {
//        push(&back_op,pop(&s));
//     }
//     while(is_empty(&back_op)!=1)
//     {
//         push(&f_back_op,pop(&back_op));
//     }

//     ///후위표기법을 계산
//     stacktpye2 n;
//     init2(&n);
//     char ch2;
//     int a;
//     int b;
//     while (is_empty(&f_back_op)!=1)
//     {
//         ch2 = pop(&f_back_op);
//         if (ch2<=57 && ch2>=48){
//             push2(&n,(int)(ch2)-48);
//         }
//         else if (ch2=='+' || ch2=='-' || ch2=='*' || ch2=='/')
//         {
//             if (n.top<1) {printf("후위 표기법이 잘못 되었습니다\n"); break;}
//             switch(ch2)
//             {
//                 case '+' : a=pop2(&n);  b=pop2(&n); push2(&n,a+b); break;
//                 case '-' : a=pop2(&n);  b=pop2(&n); push2(&n,b-a); break;
//                 case '*' : a=pop2(&n);  b=pop2(&n); push2(&n,a*b); break;
//                 case '/' : a=pop2(&n);  b=pop2(&n); push2(&n,b/a); break;
//             }
//         }
//     }
//     if (is_empty2(&n)) printf("후위 표기법이 잘못되었습니다");
//     else {
//         int result=pop2(&n);
//         if(is_empty2(&n)==1) return result;
//         else printf("후위 표기법이 잘못되었습니다");
//     }
// }


// int main()
// {
//     char exp1[]= "(4-2)*(1+1)/2*2";
//     printf("%d",calc(exp1));
// }



//9번 레이저 탑 문제
// #include<stdio.h>
// #define MAX_STACK_SIZE 100
// #define TRUE 1
// #define FALSE 0

// typedef struct _element{
//     int height;
//     int num;
// }element;
// typedef struct _stacktype{
//     element stack[MAX_STACK_SIZE];
//     int top;
// }stacktype;

// void init(stacktype *s)
// {
//     s->top = -1;
// }

// int is_empty(stacktype *s)
// {
//     return (s->top == -1);
// }

// int is_full(stacktype *s)
// {
//     return (s->top>(MAX_STACK_SIZE-1));
// }

// void push(stacktype *s,element data)
// {
//     if (is_full(s)){
//         printf("저장 공간이 없습니다\n");
//     }else{
//         s->stack[++(s->top)]=data;
//     }
// }

// element pop(stacktype *s)
// {
//     if(is_empty(s)){
//         printf("삭제할 데이터가 없습니다\n");
//     }else{
//         return s->stack[(s->top)--];
//     }
// }

// int main()
// {
//     int n;
//     stacktype s;
//     init(&s);
//     element data;
//     element top_el;
//     printf("탑의 개수 : ");scanf("%d",&n);
//     for (int i=0;i<n;i++)
//     {
//         data.num=i+1;
//         printf("%d번쨰 탑의 높이 : ",i+1);scanf("%d",&data.height);
//         if (is_empty(&s)==1){
//             push(&s,data);
//             printf("==>수신가능한 탑 0번\n");
//         }else{
//             while(data.height>s.stack[s.top].height){
//                 top_el=pop(&s);
//             }
//             if (!is_empty(&s)){
//             printf("===>수신가능한 탑 %d번\n",s.stack[s.top].num);
//             }else{
//                 printf("===>수신가능한 탑 0번\n");
//             }
//             push(&s,data);
//         }
//     }
// }
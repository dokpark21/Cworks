//2 이중연결리스트 스택
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct DlistNode{
//     struct DlistNode *before;
//     int data;
//     struct DlistNode *next;
// }DlistNode;

// DlistNode * init(DlistNode *sp)
// {
//     sp = (DlistNode *)malloc(sizeof(DlistNode));
//     sp->before = NULL;
//     sp->next = NULL;
//     return sp;
// }

// void push(DlistNode **sp,int num)
// {
//     (*sp)->next=(DlistNode *)malloc(sizeof(DlistNode ));
//     DlistNode *im_p=(*sp);
//     (*sp)=(*sp)->next;
//     (*sp)->before=im_p;
//     (*sp)->data=num;
//     (*sp)->next=NULL;
// };

// int pop(DlistNode **sp)
// {
    
//     int data;
//     data=(*sp)->data;
//     *sp=(*sp)->before;
//     (*sp)->next=NULL;
//     return data;
// }

// void list_print(DlistNode *sp)
// {
//     while(sp->before!=NULL)
//     {
//         printf("%d -> ",sp->data);
//         sp=sp->before;
//     }
//     printf("NULL");
//     puts("");
// }

// int main()
// {
//     DlistNode *sp;
//     int data;
//     sp=init(sp);
//     int n;
//     int popn;
//     int num; 
//     while(1){
//         printf("1.push 2.pop 3.list 4.종료 => ");scanf("%d",&n);
//         if (n==4) break;
//         switch(n)
//         {
//             case 1: printf("데이더 : ");  scanf("%d",&num);  push(&sp,num); break;
//             case 2: data=pop(&sp); printf("%d\n",data); break;
//             case 3: list_pr
// int(sp); break;
//         }
//     }
// }


//3 미로찾기
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// #define MAX_STACK_SIZE 100
// #define MAX_SIZE 6

// typedef struct stackObject{
//     int r;
//     int c;
// } stackObject;
// stackObject stack[MAX_STACK_SIZE];
// int top = -1;
// stackObject here={1,0}, entry={1,0};

// char maze[MAX_SIZE][MAX_SIZE] = {
//     {'1','1','1','1','1','1'},
//     {'e','0','1','0','0','1'},
//     {'1','0','0','0','1','1'},
//     {'1','0','1','0','1','1'},
//     {'1','0','1','0','0','x'},
//     {'1','1','1','1','1','1'}
// };

// int isfull()
// {
//     return (top>(MAX_STACK_SIZE-1));
// }

// int isempty()
// {
//     return (top == -1);
// }

// void push(stackObject data)
// {
//     if (isfull())
//     {
//         printf("저장할 공간이 없습니다\n");
//     }
//     else{
//     stack[++top]=data;
//     }
// }

// stackObject pop()
// {
//     if (isempty()){
//         printf("저장공간이 비어 있습니다\n");
//     }
//     else return stack[top--];
// }

// void pushLoc(int r, int c)
// {
//     if (r>MAX_STACK_SIZE-1 || c>MAX_STACK_SIZE-1 || r<0 || c<0) return;
//     if (maze[r][c]!= '1' && maze[r][c]!='.'){
//     stackObject tmp;
//     tmp.r=r;
//     tmp.c=c;
//     push(tmp);
//     }
// }

// void maze_print()
// {
//     for (int i=0; i<MAX_SIZE;i++){
//         for (int k=0;k<MAX_SIZE;k++){
//             if (i==here.r && k==here.c){
//                 printf("m ");
//             }else {
//             printf("%c ",maze[i][k]);
//             }
//         }
//         puts("");
//     }
// }
// void stack_print()
// {
//     printf("The path is:\n");
//     printf("row col\n");
//     for (int i=top;i>=0;i--){
//         printf("%d   %d\n",stack[i].r,stack[i].c);
//     }
// }

// int main()
// {
//     int r,c;
//     here=entry;
//     pushLoc(here.r,here.c);
//     maze_print();
//     stack_print();
//     while(maze[here.r][here.c]!='x')
//     {
//         r=here.r; c=here.c;
//         maze[r][c]='.';

//         pushLoc(r,c-1);
//         pushLoc(r-1,c);
//         pushLoc(r,c+1);
//         pushLoc(r+1,c);

//         if (isempty()){
//             printf("경로가 없습니다\n");
//             break;
//         }
//         stack_print();
//         here=pop();
//     }
//     maze_print();
// }


//4 후위표기법

#include<stdio.h>
#include<string.h>
#define MAX_STACK_SIZE 100

char stack[MAX_STACK_SIZE];
int top=-1;

int is_empty()
{
    if(top== -1) return 1;
    return 0;
}

int is_full()
{
    if (top > (MAX_STACK_SIZE-1)) return 1;
    return 0;
}

void push(char data)
{
    if (is_full()==1){
        printf("저장 공간이 가득 찼습니다\n");
    }
    else {stack[++top] = data;} 
    
}

char pop()
{
    if (is_empty()==1){
        printf("저장되어 있는 데이터가 없습니다\n");
    }else{
        return stack[top--];
    }
}

int cmp_op(char data)
{
    switch(data)
    {
        case '(' : case ')' : return 0;
        case '+' : case '-' : return 1;
        case '*' : case '/' : return 2;
    }
}

int main()
{
    char sick[20];
    char top_op,ch;
    printf("수식 입력 : ");scanf("%s",sick);
    
    for (int i=0;i<strlen(sick); i++){
        ch = sick[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch== '/'){
            while(is_empty()!=1 && cmp_op(ch) <= cmp_op(stack[top])){
                printf("%c",pop());
            }
            push(ch);
        }
        else if (ch == '(') push(ch);
        else if (ch == ')'){
            top_op=pop();
            while(top_op!='('){
                printf("%c",top_op);
                top_op=pop();
            }
        }
        else printf("%c", ch);
    }
    while(is_empty()!=1){
        printf("%c",pop());}
}
    
//배열기반 이진 트리
// #include<stdio.h>
// #define MAX_TREE_SIZE 16

// typedef int element;
// typedef struct{
//     element TreeArray[MAX_TREE_SIZE];
//     int cur; 
// } Tree;

// void init(Tree *target_tree)
// {
//     target_tree->cur=0;
// }

// void Add_Tree(Tree *target_tree, element data)
// {
//     if (target_tree->cur == MAX_TREE_SIZE)
//     {
//         printf("TREE is full\n");
//         return;
//     }
//     target_tree->TreeArray[++(target_tree->cur)] = data;
// }

// void Erase_Tree(Tree *target_tree)
// {
//     if (target_tree->cur==0)
//     {
//         printf("TREE is empty\n");
//         return;
//     }
//     target_tree->cur--;
// } 

// void Show_LeftChild(Tree *target_tree,int Position)
// {
//     if (Position * 2 > target_tree->cur){
//         printf("There's no ChildNode\n");
//         return;
//     }
//     printf("Left ChildNode is %d\n",target_tree->TreeArray[Position*2]);
// }

// void Show_RightChild(Tree *target_tree,int Position)
// {
//     if (Position*2+1>target_tree->cur){
//         printf("There's no ChildNode\n");
//         return;
//     }
//     printf("Right ChildNode is %d\n",target_tree->TreeArray[Position*2+1]);
// }

// void Show_Parent(Tree *target_tree,int Position)
// {
//     if (Position<=0)
//     {
//         printf("NULL\n");
//         return ;
//     }
//     printf("%d\n",target_tree->TreeArray[Position]);
//     if (Position/2==1){return Show_Parent(target_tree,(Position-1)/2);}
//     if (Position/2==0){return Show_Parent(target_tree,Position/2);}
    
// }

// int main()
// {
//     Tree target_tree;
//     init(&target_tree);
//     int n;
//     int input;
//     int index;
//     while(1){
//         printf("1.자식노드 추가 2.현재노드 제거 3.왼쪽 자식노드 4.오른쪽 자식노드 5.부모노드 6.종료\n");
//         printf("==> ");scanf("%d",&n);
//         if (n==6) break;
//         switch(n)
//         {
//             case 1: printf("정수입력 : ");scanf("%d",&input); Add_Tree(&target_tree,input); break;
//             case 2: Erase_Tree(&target_tree); break;
//             case 3: printf("인덱스 : ");scanf("%d",&index); Show_LeftChild(&target_tree,index); break;
//             case 4: printf("인덱스 : ");scanf("%d",&index); Show_RightChild(&target_tree,index); break;
//             case 5: printf("인덱스 : ");scanf("%d",&index); Show_Parent(&target_tree,index); break;
//             default : printf("올바른 번호를 입력하세요\n");
//         }
//     }

// }

//연결리스트 기반
// #include<stdio.h>
// #include<stdlib.h>
// #include<memory.h>

// typedef struct TreeNode {
//     int data;
//     struct TreeNode *left,*right;
// } TreeNode;

// int main()
// {
//     TreeNode *n1, *n2, *n3;
//     n1 = (TreeNode *)malloc(sizeof(TreeNode));
//     n2 = (TreeNode *)malloc(sizeof(TreeNode));
//     n3 = (TreeNode *)malloc(sizeof(TreeNode));
//     n1->data=10;
//     n1->left=n2;
//     n1->right=n3;
//     n2->data=20;
//     n2->left=NULL;
//     n2->right=NULL;
//     n3->data=30;
//     n3->left=NULL;
//     n3->right=NULL;
// }


//연결리스트 기반 트리 전위 순회
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct TreeNode{
//     char data;
//     struct TreeNode *Left, *Right;
// } TreeNode;

// #define MAX_TREE_SIZE 100
// #define TRUE 1
// #define FALSE 0

// TreeNode *Stack[MAX_TREE_SIZE];
// int Top=0;

// void push(TreeNode *newNode)
// {
//     if (Top>MAX_TREE_SIZE-1) {printf("Tree is full\n"); return;}
//     Stack[Top]=newNode;
//     Top++;
// }

// int IsStackEmpty()
// {
//     if (Top==0) return TRUE;
//     return FALSE;
// }

// TreeNode *pop()
// {
//     TreeNode *popNode;
//     if (Top==0){
//         printf("Tree is empty\n");
//         return NULL;
//     }
//     popNode = Stack[--Top];
//     return popNode;
// }

// //전역 변수 정의
// TreeNode *Parent, *LeftChild, *RightChild;
// TreeNode *HeadNode, *EndNode;
// void InitializeTree()
// {
//     HeadNode = (TreeNode *)malloc(sizeof(TreeNode));
//     EndNode = (TreeNode *)malloc(sizeof(TreeNode));

//     HeadNode->Left = EndNode;
//     HeadNode->Right = EndNode;

//     EndNode->Left = EndNode; //다른 곳으로 더 이상 못가고 자기 자신이 마지막이란 의미
//     EndNode->Right = EndNode;
// }

// void MakeTree()
// {
//     Parent = (TreeNode *)malloc(sizeof(TreeNode));
//     Parent->data = 'A';

//     LeftChild = (TreeNode *)malloc(sizeof(TreeNode));
//     LeftChild->data = 'B';

//     RightChild = (TreeNode *)malloc(sizeof(TreeNode));
//     RightChild->data = 'C';

//     Parent->Left = LeftChild;
//     Parent->Right = RightChild;

//     HeadNode->Left = Parent;
//     HeadNode->Right = Parent;

//     Parent = Parent->Left;
//     LeftChild=(TreeNode *)malloc(sizeof(TreeNode));
//     LeftChild->data = 'D';
//     LeftChild->Left = EndNode;
//     LeftChild->Right = EndNode;

//     RightChild = (TreeNode *)malloc(sizeof(TreeNode));
//     RightChild->data = 'E';
//     RightChild->Left = EndNode;
//     RightChild->Right = EndNode;

//     Parent->Left = LeftChild;
//     Parent->Right = RightChild;
//     Parent = HeadNode->Right->Right;

//     LeftChild = (TreeNode *)malloc(sizeof(TreeNode));
//     LeftChild->data = 'F';
//     LeftChild->Left = EndNode;
//     LeftChild->Right = EndNode;

//     RightChild = (TreeNode *)malloc(sizeof(TreeNode));
//     RightChild->data = 'G';
//     RightChild->Left = EndNode;
//     RightChild->Right = EndNode;

//     Parent->Left = LeftChild;
//     Parent->Right = RightChild;
// }

// void Visit(TreeNode *ptrNode)
// {
//     printf("%2c -> ",ptrNode->data);   
// }


// void Traverse(TreeNode *ptrNode)
// {
//     push(ptrNode);

//     while(!IsStackEmpty()){
//         ptrNode = pop();
//         Visit(ptrNode);

//         if (ptrNode->Right !=EndNode){
//             push(ptrNode->Right);
//         }
//         if (ptrNode->Left !=EndNode){
//             push(ptrNode->Left);
//         }
//     }
// }

// int main()
// {
//     InitializeTree();
//     MakeTree();
//     Traverse(HeadNode->Left);
// }


//후위순위 배열,스택 기반
#include<stdio.h>
#include<stdlib.h>
#define MAX_TREE_SIZE 16
#define TRUE 1
#define FALSE 0

typedef int element;
typedef struct Tree{
    struct Tree *left,*right;
    char data; 
} Tree;

Tree *Stack[MAX_TREE_SIZE];
int top=-1;


void push(Tree *data)
{
    if (top == MAX_TREE_SIZE)
    {
        printf("TREE is full\n");
        return;
    }
    Stack[++top]=data;
}

Tree* pop()
{
    if(top!=-1)
    {
        Tree *ptrNode = Stack[top--];
        return ptrNode;
    }
} 

Tree *Parent, *LeftChild, *RightChild;
Tree *HeadNode, *EndNode;

void InitializeTree()
{
    HeadNode = (Tree *)malloc(sizeof(Tree));
    EndNode = (Tree *)malloc(sizeof(Tree));

    HeadNode->left = EndNode;
    HeadNode->right = EndNode;

    EndNode->left = EndNode;
    EndNode->right = EndNode;
}

void MakeTree()
{
    Parent = (Tree *)malloc(sizeof(Tree));
    Parent->data = 'A';

    LeftChild = (Tree *)malloc(sizeof(Tree));
    LeftChild->data = 'B';

    RightChild = (Tree *)malloc(sizeof(Tree));
    RightChild->data = 'C';

    Parent->left = LeftChild;
    Parent->right = RightChild;

    HeadNode->left = Parent;
    HeadNode->right = Parent;

    Parent = Parent->left;
    LeftChild=(Tree *)malloc(sizeof(Tree));
    LeftChild->data = 'D';
    LeftChild->left = EndNode;
    LeftChild->right = EndNode;

    RightChild = (Tree *)malloc(sizeof(Tree));
    RightChild->data = 'E';
    RightChild->left = EndNode;
    RightChild->right = EndNode;

    Parent->left = LeftChild;
    Parent->right = RightChild;
    Parent = HeadNode->right->right;

    LeftChild = (Tree *)malloc(sizeof(Tree));
    LeftChild->data = 'F';
    LeftChild->left = EndNode;
    LeftChild->right = EndNode;

    RightChild = (Tree *)malloc(sizeof(Tree));
    RightChild->data = 'G';
    RightChild->left = EndNode;
    RightChild->right = EndNode;

    Parent->left = LeftChild;
    Parent->right = RightChild;
}

void Visit(Tree *ptrNode)
{
    printf("%2c -> ",ptrNode->data);   
}

void postOrder()
{
    Tree *curNode;
    curNode = HeadNode;
    curNode = curNode->left;
    push(curNode);
    int i=0;
    Tree *node;
    Tree *result[MAX_TREE_SIZE];
    while(top>=0)
    {
       node =pop();
       result[i++]=node;
       if (curNode->left!=NULL){
        push(curNode->left);
        curNode=curNode->left;
       }
       if (curNode->right!=NULL){
        push(curNode->right);
        curNode=curNode->right;
       }
    }
    for (i=i-1;i>-1;i--){
        printf("%2c -> ",result[i]->data);
    }

}


int main()
{
    InitializeTree();
    MakeTree();
    postOrder();
}

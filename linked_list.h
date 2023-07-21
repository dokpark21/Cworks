// #ifndef LINK_LIST_H
// #define LINK_LIST_H
// //합계 저장하는 구조체
// typedef struct _point
// {
//     int sum;
// }point;


// //링크드 리스트 노드 한게
// typedef struct _node
// {   
//     int data;
//     struct _node *next; 
// }node;

// #endif

// #include<stdio.h>
// #include<stdlib.h>
// void init1(point *p_sum)
// {
//     p_sum->sum=0;
// }
// node * input(node *sp,node *ep,point *p_sum)
// {
//     int num;
//     printf("입력할 숫자 : ");scanf("%d",&num);
//     if (sp==NULL)
//     {   
//         ep=(node *)malloc(sizeof(node));  
//         ep->data=num;
//         ep->next=NULL;
//         p_sum->sum+=num;
//         return ep;
//     }
//     ep->next=(node *)malloc(sizeof(node));
//     ep=ep->next;
//     ep->data=num;
//     ep->next=NULL;
//     p_sum->sum+=num;
//     return ep;
// }

// void list_print(node *sp)
// {
//     while(sp!=NULL)
//     {
//         printf("%d->",sp->data);
//         sp=sp->next;
//         if (sp==NULL) {printf("NULL");}
//     }

// }

// void insert_node(node *sp,node *cp)
// {
//     int n;
//     printf("어느 위치에 삽입할까요?");scanf("%d",&n);
//     if (n==1) {printf("첫번째 위치에는 삽입할 수 없습니다."); return;}
//     cp=sp;
//     for (int i=0;i<n-2;i++)
//     {
//         cp=cp->next;
//         if (cp==NULL) printf("입력한 위치에 삽입할 수 없습니다\n\n");
//     }
//     node *np=(node *)malloc(sizeof(node));
//     int dt;
//     printf("어떤 숫자를 삽입할까요?"); scanf("%d",&dt);
//     np->data=dt;
//     np->next=cp->next;
//     cp->next=np;
// }


// void remove_node(node *sp,node *cp)
// {
//     int n;
//     printf("몇번째 위치의 노드를 삭제하시겠습니까? : ");scanf("%d",&n);
//     cp=sp;
//     if (n==1){cp->data=cp->next->data; cp->next=cp->next->next;}
//     else {
//     for (int i=0;i<n-2;i++)
//     {
//         cp=cp->next;
//         if (cp==NULL) printf("해당 위치에는 이미 노드가 존재하지 않습니다\n\n");
//     }
//     cp->next=cp->next->next;
//     }
// }

// void add_last(node *sp,node *cp)
// {
//     cp=sp;
//     while(cp->next!=NULL){
//         cp=cp->next;
//     }
//     cp->next = (node *)malloc(sizeof(node));
//     cp=cp->next;
//     int n;
//     printf("숫자를 입력해주세요 : ");scanf("%d",&n);
//     cp->data = n;
//     cp->next=NULL;
// }




//문제 4-5번
// #ifndef LINK_LIST_H
// #define LINK_LIST_H

// //링크드 리스트 노드 한게
// typedef struct _node
// {   
//     char stu_num[20];
//     char name[20];
//     int kor;
//     int eng;
//     int math;
//     struct _node *next; 
// }node;
// #endif
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// node * input(node *sp,node *ep)
// {
//     char im_stu_num[20];
//     char im_name[20];
//     int im_kor;
//     int im_eng;
//     int im_math;
//     printf("학번 : "); scanf("%s",im_stu_num);
//     printf("이름 : "); scanf("%s",im_name);
//     printf("국어점수 : "); scanf("%d",&im_kor);
//     printf("영어점수 : "); scanf("%d",&im_eng);
//     printf("수학점수 : "); scanf("%d",&im_math);
//     node *np = (node *)malloc(sizeof(node));
//     strcpy(np->stu_num,im_stu_num);
//     strcpy(np->name,im_name);
//     np->kor=im_kor;
//     np->eng=im_eng;
//     np->math=im_math;
//     np->next=NULL;
//     if (sp==NULL){
//         sp=np;
//         return sp;
//     }
//     ep->next=np;
//     ep=ep->next;
//     return ep; 
// }


// void l_print(node *sp)
// {
//     printf("학번      이름  국어 영어 수학\n");
//     while(sp!=NULL)
//     {
//         printf("%s %s  %d   %d   %d\n",sp->stu_num,sp->name,sp->kor,sp->eng,sp->math);
//         sp=sp->next;
//     }
// }


// void search(node *sp)
// {
//     char targetName[20];
//     printf("찾는 학생의 이름을 입력하세요 : ");scanf("%s",targetName);
//     while(sp!=NULL)
//     {
//         if(strcmp(sp->name,targetName)==0){
//             printf("학번      이름  국어 영어 수학\n");
//             printf("%s %s  %d  %d  %d\n",sp->stu_num,sp->name,sp->kor,sp->eng,sp->math);
//             break;
//         }
//         sp=sp->next;
//         if (sp==NULL) printf("찾는 데이터가 존재하지 않습니다\n");
//     }
// }

// void remove_node(node *sp)
// {
//     char targetName[20];
//     printf("찾는 학생의 이름을 입력하세요 : ");scanf("%s",targetName);
//     if (strcmp(sp->name,targetName)==0){
//         strcpy(sp->name,sp->next->name);
//         strcpy(sp->stu_num,sp->next->stu_num);
//         sp->kor=sp->next->kor;
//         sp->eng=sp->next->eng;
//         sp->math=sp->next->math;
//         sp->next=sp->next->next;
//         return;
//     }
//     while(sp!=NULL)
//     {
//         if(strcmp(sp->next->name,targetName)==0){
//             sp->next=sp->next->next;
//             break;
//         }
//         sp=sp->next;
//         if (sp==NULL) printf("삭제하려는 데이터가 존재하지 않습니다\n");
//     }
// }



//문제 6번
// #ifndef LINK_LIST_H
// #define LINK_LIST_H

// //링크드 리스트 노드 한게
// typedef struct _node
// {   
//     int data;
//     struct _node *next; 
// }node;
// #endif

// node *input(node *sp,node *ep)
// {
//     int n;
//     printf("숫자 입력 : ");scanf("%d",&n);
//     if (sp==NULL) {
//         sp=(node *)malloc(sizeof(node));
//         sp->data=n;
//         sp->next=NULL;
//         return sp;
//     }
//     ep->next=(node *)malloc(sizeof(node));
//     ep=ep->next;
//     ep->data=n;
//     ep->next=NULL;
//     return ep;
// }

// void l_print(node *sp)
// {
//     while(sp!=NULL)
//     {
//         printf("%d ",sp->data);
//         sp=sp->next;
//     }
//     puts("");
// }

// void merge_list(node *Asp, node *Bsp, node *Msp)
// {
//     node *sp;
//     Msp=(node *)malloc(sizeof(node));
//     sp=Msp;
//     while (Asp!=NULL && Bsp!=NULL)
//     {
//         if (Asp->data<=Bsp->data){
//             Msp->data=Asp->data;
//             Asp=Asp->next;
//         }
//         else{
//             Msp->data=Bsp->data;
//             Bsp=Bsp->next;
//         }
//         Msp->next=(node *)malloc(sizeof(node));
//         Msp=Msp->next;
//     }
//     if (Asp==NULL){
//         while(Bsp!=NULL){
//             Msp->data=Bsp->data;
//             Bsp=Bsp->next;
//             Msp->next=(node *)malloc(sizeof(node));
//             Msp=Msp->next;}
//         }
//     if (Bsp==NULL){
//         while(Asp!=NULL){
//             Msp->data=Asp->data;
//             Asp=Asp->next;
//             Msp->next=(node *)malloc(sizeof(node));
//             Msp=Msp->next;}
//             }
//     printf("병합연결리스트 : "); 
//     while(sp->next!=NULL){
//         printf("%d ",sp->data);
//         sp=sp->next;
//     }
//     puts("");
// }


//문제 7
// #ifndef LINK_LIST_H
// #define LINK_LIST_H

// //링크드 리스트 노드 한게
// typedef struct _node
// {   
//     int data;
//     struct _node *next; 
// }node;
// #endif
// #include<stdio.h>
// #include<stdlib.h>

// node *input(node *sp,node *ep)
// {
//     int n;
//     printf("숫자 입력 : ");scanf("%d",&n);
//     if (sp==NULL) {
//         sp=(node *)malloc(sizeof(node));
//         sp->data=n;
//         sp->next=NULL;
//         return sp;
//     }
//     ep->next=(node *)malloc(sizeof(node));
//     ep=ep->next;
//     ep->data=n;
//     ep->next=NULL;
//     return ep;
// }

// void l_print(node *sp)
// {
//     while(sp!=NULL)
//     {
//         printf("%d ",sp->data);
//         sp=sp->next;
//     }
//     puts("");
// }

// void split(node *sp)
// {
//     node *hol;
//     node *jjak;
//     hol=(node *)malloc(sizeof(node));
//     node *hol_sp=hol;
//     jjak=(node *)malloc(sizeof(node));
//     node *jjak_sp=jjak;
//     while(sp!=NULL)
//     {
//         if (sp->data%2==0){
//             jjak->data=sp->data;
//             jjak->next=(node *)malloc(sizeof(node));
//             jjak=jjak->next;
//         }
//         else {
//             hol->data=sp->data;
//             hol->next=(node *)malloc(sizeof(node));
//             hol=hol->next;
//         }
//         sp=sp->next;
//     }
//     printf("홀수연결리스트 : ");
//     while(hol_sp->next!=NULL){
//         printf("%d ",hol_sp->data);
//         hol_sp=hol_sp->next;
//     }
//     puts("");
//     printf("짝수연결리스트 : ");
//     while(jjak_sp->next!=NULL){
//         printf("%d ",jjak_sp->data);
//         jjak_sp=jjak_sp->next;
//     }
//     puts("");
// }


//원형 연결리스트

// #ifndef Linked_LIST_H
// #define Linked_LIST_H

// #include<stdio.h>
// #include<stdlib.h>

// typedef int element;
// typedef struct ListNode{
//     element data;
//     struct ListNode *link;
// } ListNode;

// ListNode *create_node(element data, ListNode *link);
// void insert_first(ListNode **phead, ListNode *node);
// void insert_last(ListNode **phead, ListNode *node);
// void display(ListNode *head);

// #endif

// #include<stdio.h>
// #include<stdlib.h>

// ListNode *create_node(element data, ListNode *link)
// {
//     ListNode *new_node;
//     new_node = (ListNode *)malloc(sizeof(ListNode));
//     if (new_node == NULL){
//         fprintf(stderr,"메모리 할당 에러\n");
//         exit(1);
//     }
//     new_node->data = data;
//     new_node->link = link;
//     return(new_node);
// }

// void insert_first(ListNode **phead, ListNode *node)
// {
//     if (*phead == NULL){
//         *phead = node;
//         node->link=node;
//     }
//     else {
//         node->link=(*phead)->link;
//         (*phead)->link = node;
//     }
// }

// void insert_last(ListNode **phead, ListNode *node)
// {
//     if(*phead == NULL){
//         *phead = node;
//         node->link=node;
//     }
//     else {
//         node->link = (*phead)->link;
//         (*phead)->link = node;
//         *phead = node;
//     }
// }

// void display(ListNode *head)
// {
//     ListNode *p;
//     if(head ==NULL) return;

//     p=head;
//     do{
//         printf("%d->",p->data);
//         p=p->link;
//     }while(p != head);
// }


//예제 2 이중 연결 리스트
// #ifndef DLinked_LIST_H
// #define DLinked_LIST_H

// #include<stdio.h>
// #include<stdlib.h>

// typedef int element;
// typedef struct DlistNode {
//     element data;
//     struct DlistNode *llink;
//     struct DlistNode *rlink;
// } DlistNode;

// void init(DlistNode *phead);
// void display(DlistNode *phead);
// void dinsert_node(DlistNode *before,DlistNode *new_node);
// void dremove_node(DlistNode *phead_node, DlistNode *removed);
// #endif


// #include<stdio.h>
// #include<stdlib.h>

// void init(DlistNode *phead)
// {
//     phead->llink = phead;
//     phead->rlink = phead;
// }

// void display(DlistNode *phead)
// {
//     DlistNode *p;
//     for (p = phead->rlink; p!=phead; p = p->rlink)
//     {
//         printf("<--- | %x | %d | %x | ---->\n",p->llink, p->data, p->rlink);
//     }
//     puts("");
// }


// void dinsert_node(DlistNode *before, DlistNode *new_node)
// {
//     new_node->llink = before;
//     new_node->rlink = before->rlink;
//     before->rlink->llink = new_node;
//     before->rlink = new_node;
// }

// void dremove_node(DlistNode *phead_node, DlistNode *removed)
// {
//     if (removed ==phead_node) return;
//     removed->llink->rlink = removed->rlink;
//     removed->rlink->llink = removed->llink;
// }


//원형리스트 문제 (당번정하기)
#ifndef DLINKED_LIST_H
#define DLINKED_LIST_H

typedef struct _member
{
    
    struct _member *n_link;
    int num;
    char name[20];
    struct _member *b_link;
}member;


#endif

void display(member *sp,member *ep)
{
    while(sp!=ep)
    {
        printf("%d-%s ",sp->num,sp->name);
        sp=sp->n_link;
    }
    printf("%d-%s ",ep->num,ep->name);
    puts("");
}

member * insert_node(member *sp, member *ep)
{

    int im_num;
    char im_name[20];
    member *new_node;
    new_node=(member *)malloc(sizeof(member));
    printf("숫자 : ");scanf("%d",&im_num);
    printf("이름 : ");scanf("%s",im_name);
    new_node->num=im_num;
    strcpy(new_node->name,im_name);
    if (sp==NULL)
    {
        sp=(member *)malloc(sizeof(member));
        sp->b_link=NULL;
        sp->n_link=NULL;
        strcpy(sp->name,im_name);
        sp->num=im_num;
        return sp;
    }
    else {
        ep->n_link=new_node;
        new_node->n_link=sp;
        new_node->b_link=ep;
        sp->b_link=new_node;
        return new_node;
    }
}

void dangbun(member *sp,member *ep)
{
    int start;
    int term;
    printf("시작할 직원번호 : "); scanf("%d",&start);
    printf("건너뛸 간격 : ");scanf("%d",&term);
    for (int i=0;i<start-1;i++){
        sp=sp->n_link;
    }
    for (int i=0;i<ep->num;i++)
    {
        printf("%s ",sp->name);
        for (int k=0;k<term;k++) {
            sp=sp->n_link;
        }
        puts("");
    }

}
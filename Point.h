//포인터 기반!!!!! 문제 1,2,3번
// #ifndef POINT_H
// #define POINT_H
// #define MAX_LEN 100

// typedef struct product
// {
//     char name[20];
//     char pum[20];
//     int cnt;
//     int price;
// } PR;
// typedef struct shopping
// {
//     PR *product[MAX_LEN];
//     int product_n;
// } shop;
// #endif

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// void init(shop *list)
// {
//     list->product_n=0;
//     return;
// }
// void add(shop *list)
// {

//     int n;
//     char shop_l[20];
//     if (list->product_n>=MAX_LEN){
//         printf("더 이상 저장할 수 없습니다\n");
//         return;
//     }
//     list->product[list->product_n]=(PR *)malloc(sizeof(PR)); //상품 갯수에 맞게 메모리 재할당

//     printf("무엇을 쇼핑하셔야 합니까? "); scanf("%s",shop_l);
//     strcpy(list->product[list->product_n]->name,shop_l);
//     printf("상품의 품목을 입력해주세요(1. 식품 2. 문구 3. 의류)"); scanf("%d",&n);
//     switch(n)
//     {
//         case 1: strcpy(list->product[list->product_n]->pum,"식품"); break;
//         case 2: strcpy(list->product[list->product_n]->pum,"문구"); break;
//         case 3: strcpy(list->product[list->product_n]->pum,"의류"); break;
//         default : strcpy(list->product[list->product_n]->pum,"미상"); break;
//     } 
//     printf("상품의 수량은 몇개 입니까?");scanf("%d",&(list->product[list->product_n]->cnt));
//     printf("상품의 가격은 얼마 입니까?");scanf("%d",&(list->product[list->product_n]->price));
//     list->product_n++;
// }

// void l_print(shop *list)
// {
//     puts("   품명 품목 수량 단가");
//     for (int i=0;i<list->product_n;i++)
//     {
//         printf("%d: %s %s %d   %d\n",i+1,list->product[i]->name,list->product[i]->pum,list->product[i]->cnt,list->product[i]->price);
//     }
//     puts("");
// }

// void clear(shop *list)
// {
//     puts("리스트의 데이터를 모두 삭제합니다\n");
//     for (int i=0;i<list->product_n;i++)
//     {
//         free(list->product[i]);
//         list->product_n--;
//     }
//     list->product_n--;
//     puts("삭제완료\n\n");
// }

// void replace(shop *list)
// {
//     char f_name[20];
//     PR *im;
//     im=(PR *)malloc(sizeof(PR));
//     char im_name[20];
//     int im_n;
//     printf("바꾸실 상품의 이름을 입력해주세요 : "); scanf("%s",f_name);
//     for (int i=0;i<list->product_n;i++)
//     {
//         if (strcmp(list->product[i]->name,f_name)==0){
//             printf("대체할 상품의 이름을 입력하세요 : ");scanf("%s",im_name);
//             strcpy(im->name,im_name);
//             printf("상품의 품목을 입력해주세요(1. 식품 2. 문구 3. 의류) : "); scanf("%d",&im_n);
//     switch(im_n)
//     {
//         case 1: strcpy(im->pum,"식품"); break;
//         case 2: strcpy(im->pum,"문구"); break;
//         case 3: strcpy(im->pum,"의류"); break;
//         default : strcpy(im->pum,"미상"); break;
//     }
//     printf("대체할 상품의 수량을 입력하세요 : "); scanf(" %d",&(im->cnt));
//     printf("대체할 상품의 가격을 입력하세요 : "); scanf(" %d",&(im->price));

//     free(list->product[i]);
//     list->product[i]=(PR *)malloc(sizeof(PR));
//     list->product[i]=im;
//     break;        
//         }
//     }
// }




//문제 4
// #ifndef ARRAY_LIST_H
// #define ARRAY_LIST_H

// #define TRUE 1
// #define FALSE 0

// #define LIST_LEN 100 //리스트 길이 정의

// typedef struct ArrayList
// {
//     int arr[LIST_LEN];
//     int numOfData;
//     int curPosition;
// } List;

// void ListInit(List *plist);
// void Linsert(List *plist, int data);

// int LFirst(List *plist, int *pdata);
// int LNext(List *plist, int *pdata);

// int LRemove(List *plist);
// int LCount(List *plist);

// #endif

// void ListInit(List *plist)
// {
//     plist->curPosition =-1;
//     plist->numOfData =0;
// }

// void Linsert(List *plist, int data)
// {
//     plist->arr[plist->numOfData] = data;
//     plist->numOfData++;
//     plist->curPosition++;
// }


// int LFirst(List *plist, int *pdata)
// {
//     pdata=&(plist->arr[0]);
//     return *pdata;
// }

// int LNext(List *plist, int *pdata)
// {
//     pdata = 
// }



//5
#ifndef ARRAY_LSIT
#define ARRAY_LIST

#define MAX_LEN 100

typedef struct PHONE_BOOK
{
    char name[20];
    char num[20];
    char cate[20];
    char address[30];
    struct PHONE_BOOK  *next;
}phone;


#endif

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

phone * add_phone_num(phone *sp,phone *cp,phone *ep)
{
    char n_name[20];
    char n_num[20];
    char n_cate[20];
    char address[30];
    //임시로 저장 정보 받아두기
    printf("추가할 사람의 이름 : ");scanf("%s",n_name);
    printf("추가할 사람의 번호 : ");scanf("%s",n_num);
    printf("추가할 사람의 구분(친구, 회사동료, 가족)");scanf("%s",n_cate);
    printf("추가할 사람의 주소 : ");scanf("%s",address);
    //만약 sp가 NULL이라면 메모리 할당
    if (sp==NULL) {
        sp=(phone *)malloc(sizeof(phone));
        strcpy(sp->name,n_name);
        strcpy(sp->num,n_num);
        strcpy(sp->cate,n_cate);
        strcpy(sp->address,address);
        sp->next=NULL;
        ep=sp;
        return ep;
    }
    //sp가 NULL이 아니라면
    ep->next=(phone *)malloc(sizeof(phone));
    ep=ep->next;
    strcpy(ep->name,n_name);
    strcpy(ep->num,n_num);
    strcpy(ep->cate,n_cate);
    strcpy(ep->address,address);
    ep->next=NULL;
    return ep;
}

void search(phone *sp,phone *cp,phone *ep)
{
    char f_name[20];
    printf("찾을 사람을 입력하세요 : ");scanf("%s",f_name);
    cp=sp;
    while(cp)
    {
        if (strcmp(f_name,cp->name)==0)
        {
            printf("%s %s %s %s\n",cp->name,cp->num,cp->cate,cp->address);
            break;
        }
        cp=cp->next;
        if (cp->next==NULL) printf("이름을 찾을 수 없습니다 \n");
    }
}

void change_info(phone *sp,phone *cp,phone *ep)
{
     char f_name[20];
     char im_num[20];
    printf("전화번호를 바꿀 사람의 이름을 입력하세요 : ");scanf("%s",f_name);
    cp=sp;
    while(cp)
    {
        if (strcmp(f_name,cp->name)==0)
        {
            printf("바꿀 전화번호를 입력하세요 : ");scanf("%s",im_num);
            strcpy(cp->num,im_num);
            puts("변경 완료!!\n");
            break;
        }
        cp=cp->next;
        if (cp->next==NULL) printf("이름을 찾을 수 없습니다 \n");
    }
}


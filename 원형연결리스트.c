//예제 1
// #include<stdio.h>
// #include<stdlib.h>
// #include "linked_list.h"

// int main()
// {
//     ListNode *list1=NULL;

//     insert_first(&list1, create_node(10,NULL));
//     insert_first(&list1, create_node(20,NULL));
//     insert_last(&list1, create_node(30,NULL));
//     display(list1);
// }



//예제 2 이중 연결 리스트
// #include<stdio.h>
// #include<stdlib.h>
// #include "linked_list.h"
// int main()
// {
//     DlistNode head_node;
//     DlistNode *p[10];
//     int i;

//     init(&head_node);
//     for (i=0 ; i<5; i++){
//         p[i] = (DlistNode *)malloc(sizeof(DlistNode));
//         p[i]->data = i;
//         dinsert_node(&head_node,p[i]);
//     }  
//     display(&head_node); 
// }


//원형리스트 문제 (당번 정하기)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "linked_list.h"

int main()
{
   int n;
   member *sp, *ep, *cp;
   sp=NULL; ep=NULL; cp=NULL;
    while(1){
        printf("1. 사원 정보 등록\n2. 출력\n3. 당번 출력\n4. 종료\n");
        printf("==> ");scanf("%d",&n);
        if (n==4) break;
        switch(n)
        {
            case 1: if(sp==NULL){sp=insert_node(sp,ep); ep=sp;} else {ep=insert_node(sp,ep);} break;
            case 2: display(sp,ep); break;
            case 3: dangbun(sp,ep); break;
            default: printf("올바른 번호를 입력하세요\n");
        }
    }
}
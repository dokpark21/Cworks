// //문제 1
// #include<stdio.h>
// #include<stdlib.h>
// #include "linked_list.h"

// int main()
// {
//     node *sp,*ep,*cp;   
//     point *p_sum;
//     p_sum=(point *)malloc(sizeof(point));
//     init1(p_sum);
//     sp=NULL; ep=NULL; cp=NULL;
//     int n;
//     while(1)
//     {
//         printf("1.입력 2.리스트 3.합계 4.중간 삽입 5. 노드 삭제 8.종료\n");
//         printf("=>"); scanf("%d",&n);
//         if (n==8) break;
//         switch(n)
//         {
//             case 1: if (sp==NULL){ep=input(sp,ep,p_sum); sp=ep; break;}
//                     else {ep=input(sp,ep,p_sum); break;}
//             case 2: list_print(sp); puts(""); break;
//             case 3: printf("합계 : %d\n",p_sum->sum); break;
//             case 4: insert_node(sp,cp); break;
//             case 5: remove_node(sp,cp); break;
//             case 6: add_last(sp,cp); break;
//             default : printf("올바른 번호를 입력하세요\n"); break;
//         }
//     }
// }




//문제 4
// #include<stdio.h>
// #include<stdlib.h>
// #include "linked_list.h"

// int main()
// {
//     node *sp,*cp,*ep;
//     sp=NULL; cp=NULL; ep=NULL;
//     int n;
//     while(1)
//     {
//         printf("== 메뉴\n1. 입력\n2. 출력\n3. 검색\n4. 삭제\n5. 종료\n");
//         printf("==> ");scanf("%d",&n);
//         if (n==5) break;
//         switch(n)
//         {
//             case 1: if (sp==NULL) {sp=input(sp,ep); ep=sp;} else ep=input(sp,ep); break;
//             case 2: l_print(sp); break;
//             case 3: search(sp); break;
//             case 4: remove_node(sp); break;
//             default : printf("올바른 번호를 입력하세요\n");
//         }
//     }
// }

//문제 6
// #include<stdio.h>
// #include<stdlib.h>
// #include "linked_list.h"

// int main()
// {
//     node *Asp, *Aep;
//     node *Bsp, *Bep;
//     node *Msp;
//     int n;
//     Asp=NULL; Aep=NULL; Bsp=NULL; Bep=NULL; Msp=NULL;
//     while(1)
//     {
//         printf("1. A리스트 입력\n2. A리스트 출력\n3. B리스트 입력\n4. B리스트 출력\n5. 리스트 병합 및 출력\n6. 종료\n");
//         printf("==> "); scanf("%d",&n);
//         if (n==6) break;
//         switch(n)
//         {
//             case 1: if(Asp==NULL){Asp=input(Asp,Aep); Aep=Asp;} else {Aep=input(Asp,Aep);} break;
//             case 2: printf("A 연결리스트 : ");l_print(Asp); break;
//             case 3: if(Bsp==NULL){Bsp=input(Bsp,Bep); Bep=Bsp;} else {Bep=input(Bsp,Bep);} break;
//             case 4: printf("B 연결리스트 : ");l_print(Bsp); break;
//             case 5: merge_list(Asp,Bsp,Msp); break;
//             default : printf("올바른 번호를 입력하세요\n");
//         }
//     }
// }



//문제 7
#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"

int main()
{
    node *sp,*ep;
    sp=NULL; ep=NULL;
    int n;
    while(1)
    {
        printf("1. 입력 2. 출력 3. split 4. 종료\n");
        printf("==> ");scanf("%d",&n);
        if (n==4) break;
        switch (n)
        {
        case 1: if (sp==NULL) {sp=input(sp,ep); ep=sp;} else ep=input(sp,ep); break;
        case 2: l_print(sp); break;
        case 3: split(sp); break;
        default : printf("올바른 번호를 입력하세요\n");
        }
    }
}
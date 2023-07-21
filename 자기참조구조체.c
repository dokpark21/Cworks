//1
// #include<stdio.h>
// typedef struct KT
// {
//     int nai;
//     struct KT *next;
// }kt;
// int main()
// {
//     kt M,N;
//     kt *ap=&N;
//     N.nai=10; N.next=&M;
//     M.nai=20; M.next=NULL;
//     printf("%3d",N.nai);
//     printf("%3d",M.nai);
// }


//2
// #include<stdio.h>
// typedef struct KT
// {
//     int nai;
//     struct KT *next;
// }kt;
// int main()
// {
//     kt A={10},B={20},C={30};
//     kt *ap;
//     ap=&C; C.next=&B; B.next=&A; A.next=NULL;
//     while(ap!=NULL)
//     {
//         printf("%3d",ap->nai);
//         ap=ap->next;
//     } 
// }



//3
// #include<stdio.h>
// #include<stdlib.h>
// struct KT
// {
//     int nai;
//     struct KT *next;
// };
// typedef struct KT Gu;
// int main()
// {
//     Gu *hp,*ap;
//     hp=(Gu*)malloc(sizeof(Gu));
//     ap=hp;
//     ap->nai=5;
//     ap->next=(Gu*)malloc(sizeof(Gu));
//     ap=ap->next;
//     ap->nai=10;
//     ap->next=NULL;
//     ap=hp;
//     while(1)
//     {
//         if (ap==NULL) break;
//         printf("%3d",ap->nai);
//         ap=ap->next;
//     }
//     free(hp->next); free(hp);
// }



//문제1
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct KT
// {
//     char str;
//     struct KT *next;
// }Gu;
// int main()
// {
//     Gu *ap,*hp;
//     char ch;
//     hp=NULL;
//     ap=hp;
//     while(1)
//     {
//         printf("문자입력(종료=Q) : ");scanf(" %c",&ch); 
//                     if(ch=='Q') break;
//         if(hp==NULL) { 
                   
//                    ap=(Gu*)malloc(sizeof(Gu)); hp=ap; 
//         }       
//         hp=ap; 
//         while(1)
//         {
//             if (hp->next==NULL) {hp->next=(Gu*)malloc(sizeof(Gu)); hp=hp->next; break;}
//             hp=hp->next;
//         }
//     hp->str=ch;
//     hp->next=NULL;
//     }
//     hp=ap;
//     printf("입력된 문자열=");
//     while(hp!=NULL) {printf("%c",hp->str); hp=hp->next;}
//     printf(" 입니다");
//     hp=ap;
//     while(hp!=NULL) {free(hp); hp=hp->next;}
// }



//문제2 .이 입력될떄까지 입력받아서 바로바로 출력
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct KT
// {
//     char str;
//     struct KT *next;
// }Gu;
// int main()
// {
//     Gu *ap,*hp;
//     char ch;
//     hp=NULL;
//     ap=hp;
//     while(1)
//     {
//         printf("문자입력(종료=.) : ");scanf(" %c",&ch); 
//                     if(ch=='.') break;
        
//         if(hp==NULL) { 
                   
//                    ap=(Gu*)malloc(sizeof(Gu)); 
//                    ap->str=ch;
//                    ap->next=NULL;
//                    hp=ap;
//                    printf("%c-> NULL\n\n",hp->str);
//         }       
//         else
//         {
//         hp=ap; 
//         while(1)
//         {
//             if (hp->next==NULL) {hp->next=(Gu*)malloc(sizeof(Gu)); hp=hp->next; break;}
//             hp=hp->next;
//         }
//     hp->str=ch;
//     hp->next=NULL;
//     hp=ap;
//     while(hp!=NULL) {printf("%c-> ",hp->str); hp=hp->next;}
//     printf("NULL\n\n");
//     hp=ap;
//     }
//     }
// }



//3 2번+소문자 갯수세기
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct KT
// {
//     char str;
//     struct KT *next;
// } Gu;
// int main()
// {
//     Gu *sp, *ep, *cp;
//     char ch;
//     sp = NULL, ep = NULL;
//     int cnt=0;
//     while (1)
//     {
//         printf("문자입력(종료=.) : ");
//         scanf(" %c", &ch);
//         if (ch>=97 && ch<=122) cnt+=1;
//         if (ch == '.')
//             break;

//         if (sp == NULL)
//         {
//             sp = (Gu *)malloc(sizeof(Gu));
//             ep = sp;
//         }
//         else
//         {
//             ep->next = (Gu *)malloc(sizeof(Gu));
//             ep = ep->next;
//         }
//         ep->str = ch;
//         ep->next = NULL;
//     }
//     cp = sp;
//     while (cp != NULL)
//     {
//         printf("%c-> ", cp->str);
//         cp = cp->next;
//     }
//     printf("NULL\n\n");
//     printf("소문자의 갯수는 %d개 입니다.",cnt);
// }



//4 연결리스트에 저장되어있는 특정문자 검색
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// typedef struct KT
// {
//     char str;
//     struct KT *next;
// } Gu;
// void input(Gu *sp,Gu *ep)
// {
//     char ch;
//     printf("%d",sp);
//     Gu *new_node;
//     new_node=(Gu *)malloc(sizeof(Gu));
//     printf("문자를 입력하세요 : ");scanf(" %c",&ch);
//     new_node->str=ch;
//     new_node->next=NULL;
//     if (sp==NULL){sp=new_node; ep=new_node;}
//     else {ep->next=new_node;}
// }
// void l_print(Gu *cp)
// {
//     while(cp!=NULL)
//     {
//         printf("%c-> ",cp->str);
//         cp=cp->next;
//     }
//     printf("NULL\n\n");
// }
// void search_l(Gu *cp)
// {
//     int cnt=1;
//     char f;
//     printf("찾을 문자 : ");scanf("%c",&f);
//     while(1)
//     {
//         if (cp->str==f) {printf("%d번쨰에 %c가 있습니다\n\n",cnt,f); break;}
//         if (cp->next==NULL) {printf("그런문자는 존재하지 않습니다\n\n"); break;}
//         cnt++;
//     }
// }
// int main()
// {
//     Gu *sp,*ep,*cp;
//     int n;
//     int cnt=0;
//     sp=NULL;ep=NULL;cp=NULL;
//     sp=(Gu*)malloc(sizeof(Gu));
//     ep=sp;
//     while(1)
//     {
//         printf("\n== 메뉴 ==\n1. 문자입력\n2. 리스트출력\n3. 문자검색\n4. 종료");
//         printf("\n==> ");scanf("%d",&n);
//         if (n==4) break;
//         switch(n)
//         {
//             case 1: input(sp,ep); ep=ep->next;break;
//             case 2: cp=sp; l_print(cp); break;
//             case 3: cp=sp; search_l(cp); break;
//             default: printf("올바른 메뉴를 입력해주세요\n\n"); 
//         }
//     }
// }



//5 A B C리스트 만들고 C에 연ㄷ결
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct KT{
//     char str;
//     struct KT *next;
// }Gu;
// int main()
// {
//     Gu *sp1,*sp2,*sp3,*ep1,*ep2,*ep3,*cp1,*cp2,*cp3;
//     int n;
//     sp1=NULL;ep1=NULL;sp2=NULL;ep2=NULL;sp3=NULL;ep3=NULL;cp1=NULL;cp2=NULL;cp3=NULL;
//     while(1)
//     {
//         printf("\n=== menu\n1. A 자료입력\n2. A 리스트출력\n3. B 자료입력\n4. B 리스트출력\n5. C 리스트출력\n6. 종료\n");
//         printf("==> ");scanf("%d",&n);
//         if (n==6) break;
//         switch(n)
//         {
//             case 1: if (sp1==NULL){sp1=(Gu *)malloc(sizeof(Gu)); printf("정수입력 : ");scanf(" %c",&sp1->str); sp1->next=NULL; ep1=sp1;}
//                     else {ep1->next=(Gu*)malloc(sizeof(Gu)); ep1=ep1->next; printf("정수입력 : ");scanf(" %c",&ep1->str); ep1->next=NULL;}
//                     if (sp3==NULL){sp3=ep1; ep3=ep1;}
//                     else {ep3->next=ep1; ep3=ep3->next;}
//                     break;
//             case 2: cp1=sp1; 
//                     printf("A list : ");
//                     while(cp1!=NULL){
//                         printf("%c ",cp1->str);
//                         cp1=cp1->next;}
//                         puts("");
//                         break;
//             case 3: if (sp2==NULL){sp2=(Gu *)malloc(sizeof(Gu)); printf("문자입력 : ");scanf(" %c",&sp2->str); sp2->next=NULL; ep2=sp2;}
//                     else {ep2->next=(Gu *)malloc(sizeof(Gu)); ep2=ep2->next; printf("문자입력 : ");scanf(" %c",&ep2->str); ep2->next=NULL;}
//                     if (sp3==NULL){sp3=ep2; ep3=ep2;}
//                     else {ep3->next=ep2; ep3=ep3->next;}
//                     break;
//             case 4: cp2=sp2; 
//                     printf("B list : ");
//                     while(cp2!=NULL){
//                         printf("%c ",cp2->str);
//                         cp2=cp2->next;}
//                         puts("");
//                         break;
//             case 5: cp3=sp3;
//                     printf("C list : ");
//                     while(cp3!=NULL){
//                         printf("%c ",cp3->str);
//                         cp3=cp3->next;
//                     }
//                     break;
//             default : printf("올바른 번호를 입력해주세요\n");
//         }
//     }
// }



//6 동적메모리 입력 후 역순 출력== 역순 리스트 만들기
// #include<stdio.h>
// #include<stdlib.h>
// typedef struct KT{
//     int num;
//     struct KT *next;
// }Gu;
// Gu *reverse(Gu *head) //포인터 주소값 반환
// {
//     Gu *p,*q,*r;
 
//     p = head;
//     q = NULL;
 
//     while (p != NULL)
//     {
//         r = q;
//         q = p;
//         p = p->next;
//         q->next = r;
//     }
//     return q;
// }
// int main()
// {
//     int n;
//     Gu *sp,*ep,*cp;
//     sp=NULL; ep=NULL; cp=NULL;
//     printf("입력할 자료의 개수를 입력하시오 : ");scanf("%d",&n);
//     puts("");
//     for (int i=0;i<n;i++)
//     {
//         if (sp==NULL) {sp=(Gu *)malloc(sizeof(Gu)); printf("%d번째 정수값 : ",i+1);scanf("%d",&sp->num); sp->next=NULL; ep=sp;}
//         else {ep->next=(Gu*)malloc(sizeof(Gu)); ep=ep->next; printf("%d번째 정수값 : ",i+1);scanf("%d",&ep->num);}
//     }
//     puts("");
//     cp=sp;
//     printf("입력된 값      : ");
//     while(cp!=NULL)
//     {
//         printf("%d ",cp->num);
//         cp=cp->next;
//     }
//     puts("");
//     cp=reverse(sp);
//     printf("입력된 값 역순 : ");
//     while(cp!=NULL)
//     {
//         printf("%d ",cp->num);
//         cp=cp->next;
//     }
// }



//7
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// typedef struct KT{
//     int num;
//     struct KT *next;
// }Gu;
// int main()
// {
//     srand(time(NULL));
//     Gu *sp,*ep,*cp;
//     sp=NULL;ep=NULL;cp=NULL;
//     for (int i=0;i<30;i++)
//     {
        
//         if (sp==NULL){sp=(Gu *)malloc(sizeof(Gu)); sp->num=rand()%99+1; sp->next=NULL; ep=sp;}
//         else {ep->next=(Gu *)malloc(sizeof(Gu)); ep=ep->next; ep->num=rand()%99+1; ep->next=NULL;}
//     }
//     cp=sp;
//     int cnt=1;
//     printf("=== 삭제전\n");
//     while (cp!=NULL){
//         printf("%-2d  ",cp->num);
//         cp=cp->next;
//         if (cnt%5==0) puts("");
//         cnt++;
//     }
//     cnt=1;
//     cp=sp;
//     while(cp!=NULL)
//     {
//         cp->next=cp->next->next;
//         cp=cp->next;
//     }
//     cp=sp;
//     printf("=== 삭제후\n");
//     while(cp!=NULL)
//     {
//       printf("%-2d ",cp->num);
//       cp=cp->next;
//       if (cnt%5==0) puts(""); 
//       cnt++;  
//     }
// }


//8 정방향, 삭제 후 정방향, 삭제 후 역방향
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// typedef struct KT{
//     int num;
//     struct KT *next;
// }Gu;
// Gu *reverse(Gu *head) //포인터 주소값 반환
// {
//     Gu *p,*q,*r;
 
//     p = head;
//     q = NULL;
 
//     while (p != NULL)
//     {
//         r = q;
//         q = p;
//         p = p->next;
//         q->next = r;
//     }
//     return q;
// }
// int main()
// {
//     srand(time(NULL));
//     Gu *sp,*ep,*cp;
//     sp=NULL;ep=NULL;cp=NULL;
//     for (int i=0;i<30;i++)
//     {
        
//         if (sp==NULL){sp=(Gu *)malloc(sizeof(Gu)); sp->num=rand()%99+1; sp->next=NULL; ep=sp;}
//         else {ep->next=(Gu *)malloc(sizeof(Gu)); ep=ep->next; ep->num=rand()%99+1; ep->next=NULL;}
//     }
//     cp=sp;
//     int cnt=1;
//     printf("=== 삭제 전 정방향\n");
//     while (cp!=NULL){
//         printf("%-2d  ",cp->num);
//         cp=cp->next;
//         if (cnt%5==0) puts("");
//         cnt++;
//     }
//     cnt=1;
//     cp=sp;
//     while(cp!=NULL)
//     {
//         cp->next=cp->next->next;
//         cp=cp->next;
//     }
//     cp=sp;
//     printf("=== 삭제 후 정방향\n");
//     while(cp!=NULL)
//     {
//       printf("%-2d  ",cp->num);
//       cp=cp->next;
//       if (cnt%5==0) puts(""); 
//       cnt++;  
//     }
//     cnt=1;
//     sp=reverse(sp);
//     cp=sp;
//     printf("=== 삭제 후 역방향\n");
//     while(cp!=NULL)
//     {
//         printf("%-2d  ",cp->num);
//         cp=cp->next;
//         if (cnt%5==0) puts("");
//         cnt++;
//     }
// }



//9 난수리스트 ,오름차순 정렬
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// typedef struct KT{
//     int num;
//     struct KT *next;
// }Gu;
// int main()
// {
//     srand(time(NULL));
//     Gu *ap,*hp;
//     ap=NULL;hp=NULL;
//     for (int i=0;i<100;i++)
//     {
        
//         if (ap==NULL){ap=(Gu *)malloc(sizeof(Gu)); ap->num=rand()%99+1; ap->next=NULL; hp=ap;}
//         else {hp->next=(Gu *)malloc(sizeof(Gu)); hp=hp->next; hp->num=rand()%99+1; hp->next=NULL;}
//     }
//     printf("==100개 난수 리스트\n");
//     hp=ap;
//     int cnt=0;
//     while(hp!=NULL)
//     {
//         printf("%-4d",hp->num);
//         hp=hp->next;
//         cnt++;
//         if (cnt%25==0) puts("");
//     }
//     int im;
//     for (int i=0;i<99;i++)
//     {
//         hp=ap;
//         for (int k=0;k<99;k++)
//         {
//             if((hp->num)>(hp->next->num)){im=hp->num; hp->num=hp->next->num; hp->next->num=im;} 
//             hp=hp->next;
//         }
//     }
//     printf("==정렬 후 100개 난수 리스트\n");
//     hp=ap;
//     cnt=0;
//     while(hp!=NULL)
//     {
//         printf("%-4d",hp->num);
//         hp=hp->next;
//         cnt++;
//         if (cnt%25==0) puts("");
//     }
// }



//10
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// typedef struct KT{
//     int num;
//     struct KT *next;
// }Gu;
// int main()
// {
//     Gu *sp,*ep,*cp;
//     sp=NULL;ep=NULL;cp=NULL;
//     srand(time(NULL));
//     for (int i=0;i<100;i++)
//     {
//         if (sp==NULL){sp=(Gu *)malloc(sizeof(Gu)); sp->num=rand()%99+1; sp->next=NULL; ep=sp;}
//         else {ep->next=(Gu *)malloc(sizeof(Gu)); ep=ep->next; ep->num=rand()%99+1; ep->next=NULL;}
//     }
//     cp=sp;
//     printf("=== 100개의 난수 양방향 리스트\n");
//     for (int i=1;i<101;i++)
//     {
//         printf("%-3d",cp->num);
//         cp=cp->next;
//         if (i%25==0) puts("");
//     }
//     puts("");
//     int im;
//     for (int i=0;i<100;i++){
//         cp=sp;
//         for (int k=0;k<99;k++){
//             if (cp->num<cp->next->num) {im=cp->num; cp->num=cp->next->num; cp->next->num=im;}
//             cp=cp->next;
//         }
//     }
//     cp=sp;
//     printf("== 리스트 정렬 후\n");
//     for (int i=1;i<101;i++)
//     {
//         printf("%-3d",cp->num);
//         cp=cp->next;
//         if (i%25==0) puts("");
//     }
// }


//11
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// typedef struct student
// {
//     char num[10];
//     char name[10];
//     int kor;
//     int eng;
//     int math;
//     struct student *next;
// }st;
// st * input(st *ap,st *hp)
// {
//     char ans;
//     while(ans!='n'){  
//         if (hp==NULL) {hp=(st *)malloc(sizeof(st)); hp->next=NULL; ap=hp;}
//         else {
//             ap=hp;
//             while(ap->next!=NULL) ap=ap->next;
//             ap->next=(st *)malloc(sizeof(st));
//             ap=ap->next;
//             ap->next=NULL;
//         }
//         printf("학번 : ");scanf("%s",ap->num);
//         printf("이름 : ");scanf("%s",ap->name);
//         printf("국어 : ");scanf("%d",&ap->kor);
//         printf("영어 : ");scanf("%d",&ap->eng);
//         printf("수학 : ");scanf("%d",&ap->math);
//         printf("게속 ?(y/n) : ");scanf(" %c",&ans);
//     }
//     return hp;
// }
// void st_print(st *ap,st *hp)
// {
//     ap=hp;
//     printf("%-15s%-10s%-5s%-5s%-5s\n\n","st_num","name","kor","eng","math");
//     while(ap!=NULL)
//     {
//         printf("%-15s%-10s%-5d%-5d%-5d\n",ap->num,ap->name,ap->kor,ap->eng,ap->math);
//         ap=ap->next;
//     }
// }
// void search_st(st *ap,st *hp)
// {
//     char name[20];
//     printf("검색하고 싶은 학생의 이름을 입력하세요 : ");scanf("%s",name);
//     ap=hp;
//     while(ap!=NULL)
//     {
//         if (strcmp(ap->name,name)==0) {printf("%-15s%-10s%-5s%-5s%-5s\n\n","st_num","name","kor","eng","math"); printf("%-15s%-10s%-5d%-5d%-5d\n",ap->num,ap->name,ap->kor,ap->eng,ap->math); break;}
//         ap=ap->next;
//     }
//     if (ap==NULL) printf("찾으시는 학생이 존재하지 않습니다\n");
// }
// st * change_info(st *ap,st *hp)
// {
//     char name[20];
//     int n;
//     char change[20];
//     int change_n;
//     int a=0;
//     ap=hp;
//     printf("정보를 변경하고 싶은 학생의 이름을 입력하세요 : ");scanf("%s",name);
//     while(ap!=NULL)
//     {
//         if (strcmp(ap->name,name)==0) { 
//             printf("해당 학생의 변경하고 싶은 정보\n1. 학번\n2. 이름\n3.국어 점수\n4.영어 점수\n5. 수학 점수\n");
//             printf("==> ");scanf("%d",&n);
//             switch(n)
//             {
//                 case 1: printf("변경 후 학번 : ");scanf("%s",change);strcpy(ap->num,change); a=1;break;
//                 case 2: printf("변경 후 이름 : ");scanf("%s",change);strcpy(ap->name,change); a=1;break;
//                 case 3: printf("변경 후 국어 성적 : ");scanf("%d",&change_n);ap->kor=change_n; a=1;break;
//                 case 4: printf("변경 후 영어 성적 : ");scanf("%d",&change_n);ap->eng=change_n; a=1;break;
//                 case 5: printf("변경 후 수학 성적 : ");scanf("%d",&change_n);ap->math=change_n; a=1;break;
//                 default: printf("잘못된 번호를 선택하셨습니다\n");
//             }
//             break;}
//         if (a==1) break;
//         ap=ap->next;
//     }
//     if (ap==NULL) printf("찾으시는 학생이 존재하지 않습니다\n");
//     return hp;  
// }
// st * delete(st *ap,st *hp)
// {
//     char name[20];
//     printf("정보를 삭제하고 싶은 학생의 이름을 입력하세요 : ");scanf("%s",name);
//     ap=hp;
//     while(ap!=NULL)
//     {
//         if (strcmp(ap->name,name)==0 && hp==ap) {hp=ap->next; break;}
//         if (strcmp(ap->next->name,name)==0) {ap->next=ap->next->next; break;}
//         ap=ap->next;
//     }
//     if (ap==NULL) printf("찾으시는 학생이 존재하지 않습니다\n");
//     return hp;
// }
// st * insert_info(st *ap,st *hp)
// {
//     int n;
//     st *new_node;
//     ap=hp;
//     int chk=0;
//     printf("몇번째 위치에 정보를 삽입하시겠습니까 : ");scanf("%d",&n);
//     if (n==1){new_node=(st *)malloc(sizeof(st));
//         printf("학번 : ");scanf("%s",new_node->num);
//         printf("이름 : ");scanf("%s",new_node->name);
//         printf("국어 : ");scanf("%d",&new_node->kor);
//         printf("영어 : ");scanf("%d",&new_node->eng);
//         printf("수학 : ");scanf("%d",&new_node->math);
//         new_node->next=hp;
//         hp=new_node;
//         }
//     else if (n==2){
//         new_node=(st *)malloc(sizeof(st));
//         printf("학번 : ");scanf("%s",new_node->num);
//         printf("이름 : ");scanf("%s",new_node->name);
//         printf("국어 : ");scanf("%d",&new_node->kor);
//         printf("영어 : ");scanf("%d",&new_node->eng);
//         printf("수학 : ");scanf("%d",&new_node->math);
//         new_node->next=hp->next;
//         hp->next=new_node;
//     }
//     else{
//         for (int i=0;i<n-2;i++)
//         {
//             ap=ap->next;
//             if (ap==NULL) {printf("잘못된 숫자를 입력하셨습니다\n"); chk=1; break;}
//         }
//         if (chk==0){
//         new_node=(st *)malloc(sizeof(st));
//         printf("학번 : ");scanf("%s",new_node->num);
//         printf("이름 : ");scanf("%s",new_node->name);
//         printf("국어 : ");scanf("%d",&new_node->kor);
//         printf("영어 : ");scanf("%d",&new_node->eng);
//         printf("수학 : ");scanf("%d",&new_node->math);
//         new_node->next=ap->next->next;
//         ap->next=new_node;
//         }
//     }
//     return hp;
// }
// st * sort_st(st *ap,st *hp)
// {
//     ap=hp;
//     int cnt=0;
//     st **kp;
//     st im;
//     st *im_next;
//     while(ap!=NULL){cnt++; ap=ap->next;}
//     kp=(st **)malloc(cnt*sizeof(st *));
//     ap=hp;
//     for (int i=0;i<cnt;i++) {kp[i]=ap; ap=ap->next;}
//     for (int k=0;k<cnt;k++){
//     for (int i=0;i<cnt-1;i++) {
//         if (kp[i]->kor<kp[i+1]->kor) {im=*kp[i]; *kp[i]=*kp[i+1]; *kp[i+1]=im; im_next=kp[i]->next; kp[i]->next=kp[i+1]->next; kp[i+1]->next=im_next;}
//         }
//     }
//     return hp;
// }
// int main()
// {
//     st *ap,*hp;
//     int n;
//     ap=NULL; hp=NULL;
//     while(1)
//     {
//         printf("1.입력 2.출력 3.검색 4.변경 5.삭제 6.삽입 7.정렬 8.종료\n");
//         printf("==> ");scanf("%d",&n);
//         if (n==8) break;
//         switch(n)
//         {
//             case 1: hp=input(ap,hp); break;
//             case 2: st_print(ap,hp); break;
//             case 3: search_st(ap,hp); break;
//             case 4: hp=change_info(ap,hp); break;
//             case 5: hp=delete(ap,hp); break;
//             case 6: hp=insert_info(ap,hp); break;
//             case 7: hp=sort_st(ap,hp); break;
//             default : printf("올바른 번호를 입력해주세요\n");
//         }
//     }      
// }





//12
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct KT
{
    char name[20];
    char num[20];
    char birth[20];
    struct KT *next;
}kt;
kt * input(kt * sp,kt * ep,kt* cp)
{   
    if(sp!=NULL){
    cp=sp;
    while(cp->next!=NULL) cp=cp->next;
    ep=cp;
    }
    if (sp==NULL) {sp=(kt *)malloc(sizeof(kt)); printf("이름 : ");scanf("%s",sp->name);
                    printf("전화번호 : ");scanf("%s",sp->num); printf("생일 : ");scanf("%s",sp->birth); sp->next=NULL; ep=sp;}
    else {ep->next=(kt *)malloc(sizeof(kt)); ep=ep->next; printf("이름 : ");scanf("%s",ep->name);
                    printf("전화번호 : ");scanf("%s",ep->num); printf("생일 : ");scanf("%s",ep->birth); ep->next=NULL;}
    return ep;
}
void pr_l(kt* sp,kt *cp)
{
    puts("");
    while (cp!=NULL)
    {
        printf("이름 : %s  전화번호 : %s   생일 : %s\n",cp->name,cp->num,cp->birth);
        cp=cp->next;
    }
    puts("");
}
kt *reverse(kt *sp) //포인터 주소값 반환
{
    kt *p,*q,*r;
    p = sp;
    q = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    return q;
}
void search(kt *sp,kt *cp)
{
    cp=sp;
    char na[20];
    printf("찾고 싶은 사람의 이름을 입력하세요 : ");scanf("%s",na);
    while(cp!=NULL)
    {
        if (strcmp(cp->name,na)==0) {printf("이름 : %s  전화번호 : %s   생일 : %s\n\n",cp->name,cp->num,cp->birth); break;}
        cp=cp->next;
    }
    if (cp==NULL) printf("찾으시는 이름이 존재하지 않습니다\n\n");
}
kt * insert(kt *sp,kt *cp)
{
    cp=sp;
    int cnt=0;
    int n;
    while(cp!=NULL) {cnt+=1; cp=cp->next;}
    printf("삽입하고 싶은 위치를 입력하세요 : ");scanf("%d",&n);
    if (n<1 || n>cnt) {printf("삽입하려는 위치가 올바르지 않습니다\n\n");}
    else {cp=sp;
          if (n==1){kt *new_node;
                    new_node=(kt *)malloc(sizeof(kt));
                    printf("이름 : ");scanf("%s",new_node->name);
                    printf("전화번호 : ");scanf("%s",new_node->num);
                    printf("생일 : ");scanf("%s",new_node->birth);
                    new_node->next=sp;
                    sp=new_node;
                    }
            else {cp=sp;
                for (int k=0;k<n-2;k++) {cp=cp->next;}
                    kt *new_node;
                    new_node=(kt *)malloc(sizeof(kt));
                    printf("이름 : ");scanf("%s",new_node->name);
                    printf("전화번호 : ");scanf("%s",new_node->num); 
                    printf("생일 : ");scanf("%s",new_node->birth);
                    new_node->next=cp->next;
                    cp->next=new_node; 
            }
                }
                return sp;
}
kt * delete(kt *sp,kt *cp)
{
    cp=sp;
    char na[20];
    printf("삭제하고 싶은 사람의 이름을 입력하세요 : ");scanf("%s",na);
    while(cp!=NULL)
    {
        if (strcmp(cp->next->name,na)==0) {cp->next=cp->next->next; break;}
        cp=cp->next;
    }
    if (cp==NULL) printf("찾이시는 분의 이름을 찾을 수 없습니다\n\n");
    return sp;
}
kt *sort(kt *sp,kt *cp)
{
    cp=sp;
    kt im;
    kt *im_next;
    kt **kp;
    int cnt=0;
    while(cp!=NULL) {cnt++; cp=cp->next;}
    kp=(kt **)malloc(cnt*sizeof(kt *));
    cp=sp;
    for (int i=0;i<cnt;i++) {kp[i]=cp; cp=cp->next;}
    for (int i=0;i<cnt;i++)
    {
        for (int k=i+1;k<cnt;k++)
        {
            if (strcmp(kp[i]->name,kp[k]->name)>0) {im=*kp[i]; *kp[i]=*kp[k]; *kp[k]=im; im_next=kp[i]->next; kp[i]->next=kp[k]->next; kp[k]->next=im_next;}
        }
    }
    return sp;
}
int main()
{ 
    kt *sp,*ep,*cp;
    int n;
    sp=NULL; cp=NULL; ep=NULL;
    while(1)
    {
        printf("1.추가 2.정방향리스트 3.역방향리스트 4.검색(이름) 5.삽입 6.삭제 7.정렬 8.종료\n");
        printf("==> 선택 : ");scanf("%d",&n);
        if (n==8) break;
        switch(n)
        {
            case 1: if(sp==NULL) {sp=input(sp,ep,cp); ep=sp;} 
                    else {ep=input(sp,ep,cp);} 
                    break;
            case 2: cp=sp; pr_l(sp,cp); break;
            case 3: sp=reverse(sp); cp=sp; pr_l(sp,cp); cp=sp; sp=reverse(sp); break;
            case 4: search(sp,cp); break;
            case 5: sp=insert(sp,cp); break;
            case 6: sp=delete(sp,cp); break;
            case 7: sp=sort(sp,cp); break;
            default : printf("올바른 번호를 입력해주세요\n");
        }
    }      
}


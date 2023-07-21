// #include<stdio.h>
// typedef struct KT
// {
//     int bunho;
//     int jumsu;
// }kt;
// int main()
// {
//     kt M={2,50};
//     printf("%u\n",&M);
//     printf("%u\n",&M.bunho);
//     printf("%u\n",&M.jumsu);
// }



// #include<stdio.h>
// typedef struct KT
// {
//     int bunho;
//     int jumsu;
// }kt;
// int main()
// {
//     kt M={2,80};
//     kt *ap;
//     ap = &M;
//     printf("번호 = %d\n",(*ap).bunho);
//     printf("점수 = %d\n",(*ap).jumsu);
// }



// #include<stdio.h>
// typedef struct KT
// {
//     int bunho;
//     int jumsu;
// }kt;
// int main()
// {
//     kt M={2,80};
//     kt *ap;
//     ap = &M;
//     printf("번호 = %d\n",ap->bunho);
//     printf("점수 = %d\n",ap->jumsu);
// }


// #include<stdio.h>
// typedef struct KT
// {
//     int bunho;
//     int jumsu;
// }kt;
// int main()
// {
//     kt M[3]={{1,80},{2,70},{3,60}};
//     printf("구조체 1개 크기 = %d\n",sizeof(M[0]));
//     printf("%u\n",&M[0]);
//     printf("%u\n",&M[1]);
//     printf("%u\n",&M[2]);
// }



// #include<stdio.h>
// typedef struct KT
// {
//     int bunho;
//     int jumsu;
// }kt;
// int main()
// {
//     kt M[3]={{1,80},{2,70},{3,60}};
//     kt *ap=M;
//     printf("점수 = %d\n",ap->jumsu);
//     printf("점수 = %d\n",(ap+1)->jumsu);
//     printf("점수 = %d\n",(ap+2)->jumsu);
// }



//1 전화번호 관리
// #include<stdio.h>
// #include<string.h>
// typedef struct friend
// {
//     char name[20];
//     char num[20];
// }FR;
// void fr_input(FR *ap,int cnt)
// {
//     ap+=cnt;
//     printf("이름을 입력하세요 : ");scanf("%s",ap->name);
//     printf("번호를 입력하세요 : ");scanf("%s",ap->num);
// }
// void print_fr(FR *ap,int cnt)
// {
//     for (int i=0;i<cnt;i++)
//     {
//         printf("이름: %s 전화번호: %s\n",ap->name,ap->num);
//         ap++;
//     }
// }
// void search_fr(FR *ap,int cnt)
// {
//     char na[20];
//     printf("찾고 싶은 친구의 이름을 입력하세요 : "); scanf("%s",na);
//     for (int i=0;i<cnt;i++)
//     {
//         if (strcmp(na,ap->name)==0) {printf("찾으시는 친구의 전화번호는 %s 입니다\n",ap->num); break;}
//         if (i==cnt-1) printf("이름을 찾을 수 없습니다\n");
//         ap++;
//     }
// }
// void delete_fr(FR *ap,int cnt)
// {
//     char na[20];
//     printf("삭제하고 싶은 친구의 이름을 입력하세요 : ");scanf("%s",na);
//     for (int i=0;i<cnt;i++)
//     {
//         if (strcmp(na,ap->name)==0){
//             for  (int k=i;k<cnt;k++)
//             {
//                 *ap=*(ap+1);
//                 ap++;
//             }
//             break;
//         }
//         ap++;
//         if (i==cnt-1) printf("이름을 찾을 수 없습니다\n");
//     }
// }
// void change_info(FR *ap,int cnt)
// {
//     char na[20];
//     int n;
//     printf("정보를 바꾸고 싶은 친구의 이름을 입력하세요 : ");scanf("%s",na);
//     for (int i=0;i<cnt;i++)
//     {
//         if (strcmp(na,ap->name)==0){
//             printf("==메뉴==\n1. 이름 바꾸기\n2. 번호 바꾸기\n");
//             scanf("%d",&n);
//             if (n==1){
//                 char na2[20];
//                 printf("바꿀 이름을 입력하세요 : ");scanf("%s",na2);
//                 strcpy(ap->name,na2);
//                 break;
//             }
//             else if (n==2)
//             {
//                 char num[20];
//                 printf("바꿀 번호를 입력하세요 : ");scanf("%s",num);
//                 strcpy(ap->num,num);
//                 break;
//             }
//         }
//         ap++;
//     }
// }
// int main()
// {
//     FR M[50];
//     FR *ap=M;
//     int cnt=0;
//     int n;
//     while(1){
//         printf("=== 메 뉴 ===\n1. 친구 등록\n2. 친구리스트 출력\n3. 친구 찾기\n4. 친구 삭제\n5. 친구정보 변경\n6. 종료\n");
//         printf("번호를 입력하세요 : ");scanf("%d",&n);
//         if (n==6) break;
//         switch(n)
//         {
//             case 1: fr_input(ap,cnt); cnt++; break;
//             case 2: print_fr(ap,cnt); break;
//             case 3: search_fr(ap,cnt); break;
//             case 4: delete_fr(ap,cnt); cnt--;break;
//             case 5: change_info(ap,cnt); break;
//             default : printf("올바른 번호를 입력 하세요\n");
//         }
//     }
// }



//2 성적 관리
// #include<stdio.h>
// #include<string.h>
// typedef struct score
// {
//     int kor;
//     int eng;
//     int math;
// }SC;
// typedef struct t_score
// {
//     char name[20];
//     int n;
//     SC mid;
//     SC fin;
//     SC tot;
//     int avg;
//     int rank;
// }T_SC;
// void input(T_SC *ap,int cnt)
// {
//     ap+=cnt;
//     printf("이름 : ");scanf("%s",ap->name);
//     printf("학번 : ");scanf("%d",&ap->n);
//     printf("중간고사 성적을 입력해주세요 : ");scanf("%d %d %d",&ap->mid.kor,&ap->mid.eng,&ap->mid.math);
//     printf("기말고사 성적을 입력해주세요 : ");scanf("%d %d %d",&ap->fin.kor,&ap->fin.eng,&ap->fin.math);
//     ap->tot.kor=(ap->mid.kor+ap->fin.kor)/2; ap->tot.eng=(ap->mid.eng+ap->fin.eng)/2; ap->tot.math=(ap->mid.math+ap->fin.math)/2;
//     ap->avg=(ap->tot.kor+ap->tot.eng+ap->tot.math)/3;
//     ap->rank=1;
//     T_SC *bp=ap;
//     ap-=cnt;
//     for (int i=0;i<cnt;i++)
//     {
//         if (bp->avg<ap->avg) bp->rank++;
//         else if (bp->avg>ap->avg) ap->rank++;
//         ap++;
//     }
//     ap-=cnt;
//     T_SC im;
//     for (int k=0;k<cnt-1;k++){
//         for (int i=k+1;i<cnt;i++)
//         {
//             if (ap[i].rank<ap[k].rank){im=ap[k]; ap[k]=ap[i]; ap[i]=im;}
//         }
//     }
// }
// void output(T_SC *ap, int cnt)
// {
//     printf("\n%-10s%-15s%-20s%-20s  %-17s%-10s%-10s\n\n","학번","이름","중간고사","기말고사","최종성적","총평균","등수");
//     for (int i=0;i<cnt;i++)
//     {
//         printf("%-8d%-10s %-5d%-5d%-5d  %-5d%-5d%-5d  %-5d%-5d%-5d  %-5d %-5d\n",ap->n,ap->name,ap->mid.kor,ap->mid.eng,ap->mid.math,ap->fin.kor,ap->fin.eng,ap->fin.math,ap->tot.kor,ap->tot.eng,ap->tot.math,ap->avg,ap->rank);
//         ap++;
//     }
// }
// int main()
// {
//     T_SC M[50];
//     int n;
//     int cnt=0;
//     T_SC *ap=M;
//     while(1)
//     {
//         printf("=== 메뉴 ===\n1. 점수 입력\n2. 출력\n3. 종료\n");
//         printf("원하는 번호를 입력하세요 : ");scanf("%d",&n);
//         if (n==3) break;
//         switch(n)
//         {
//             case 1: input(ap,cnt); cnt++; break;
//             case 2: output(ap,cnt); break;
//             default : printf("올바른 번호를 입력해주세요\n");
//         }
//     }
// }



//3 비행기 예약 시스템
// #include<stdio.h>
// #include<string.h>
// typedef struct plane
// {
//     char seat[20];
// }PL;
// typedef struct t_plane
// {
//     PL seat_pl[10];
// }T_PL;
// void book(T_PL *ap)
// {
//     int p_n;
//     int s_n;
//     char name[20];
//     printf("몇 호기? : ");scanf("%d",&p_n);
//     printf("좌석번호 : ");scanf("%d",&s_n);
//     printf("예약자 이름 : ");scanf("%s",name);
//     if (ap[p_n-1].seat_pl[s_n-1].seat[0]==NULL) {strcpy(ap[p_n-1].seat_pl[s_n-1].seat,name); printf("예약이 완료되었습니다!\n");}
//     else printf("이미 예약이 완료된 좌석입니다\n");
// }
// void cancel(T_PL *ap)
// {
//     char name[20];
//     int c=0;
//     printf("예약하신 분의 이름 : ");scanf("%s",name);
//     for (int i=0;i<5;i++){
//         for (int k=0;k<10;k++){
//             if (strcmp(ap[i].seat_pl[k].seat,name)==0) {for (int j=0;j<strlen(ap[i].seat_pl[k].seat);i++) ap[i].seat_pl[k].seat[j]=NULL; printf("%s님의 예약이 취소되었습니다\n",name); c=1; break;}
//         }
//         if (c==1) break;
//         if (i==4) printf("%s님의 예약정보를 확인하지 못했습니다\n",name);
//     }
// }
// void seat_pr(T_PL *ap)
// {
//     for (int i=1;i<11;i++) printf("%10d",i);
//     puts("");
//     for (int i=0;i<5;i++){
//         printf("%d호기  ",i+1);
//         for (int k=0;k<10;k++){
//             if (strlen(ap[i].seat_pl[k].seat)==0) printf("-----     ");
//             else printf("%-10s",ap[i].seat_pl[k].seat);
//         }
//         puts("");
//     }
// }
// int main()
// {
//     T_PL M[5];
//     T_PL *ap=M;
//     int n;
//     for (int i=0;i<5;i++)
//     {
//         for (int k=0;k<10;k++)
//         {
//             for (int j=0;j<20;j++) ap[i].seat_pl[k].seat[j]=NULL;
//         }
//     }
//     while(1)
//     {
//         printf("=== 매뉴 ===\n1. 좌석예약\n2. 예약취소\n3. 좌석상태 출력\n4. 종료\n========\n");
//         printf("선택 => ");scanf("%d",&n);
//         if (n==4) break;
//         switch(n)
//         {
//             case 1: book(ap); break;
//             case 2: cancel(ap); break;
//             case 3: seat_pr(ap);break;
//             default : printf("올바른 번호를 입력해주세요\n");
//         }
//     }
// }




//키워드로 찾기
// #include<stdio.h>
// #include<string.h>
// typedef struct data_List
// {
//     int no;
//     char text[100];
//     char hash_code[100][20];
//     int hash_count;
// }d_l;
// void input(d_l *ap,int cnt)
// {
//     char hash[300];
//     ap[cnt].no=cnt+1;
//     printf("text : "); scanf(" %[^\n]s",ap[cnt].text);
//     printf("hash_code : "); scanf("%s",hash);
//     char *tmp=strtok(hash,"#");
//     int i=0;
//     while(tmp!=NULL)
//     {
//         strcpy(ap[cnt].hash_code[i],tmp);
//         tmp=strtok(NULL,"#");
//         i++;
//     }
//     ap[cnt].hash_count=i;
// }
// void search(d_l *ap,int cnt)
// {
//     char hash[20];
//     int c=0;
//     printf("키워드 : "); scanf("%s",hash);
//     for (int i=0;i<cnt;i++)
//     {
//         for (int k=0;k<ap[i].hash_count;k++)
//         {
//             if (strcmp(hash,ap[i].hash_code[k])==0){printf("%s\n",ap[i].text); c=1; break;}
//         }
//         if (c!=0) break;
//         if (i==cnt-1) printf("찾으시는 키워드를 가진 텍스트가 존재하지 않습니다\n");
//     }
// }
// void delete(d_l *ap,int cnt)
// {
//     int n;
//     d_l im;
//     printf("삭제하고 싶은 텍스트의 번호를 입력해주세요 : ");scanf("%d",&n);
//     for (int i=n-1;i<cnt;i++)
//     {
//         im=ap[i]; ap[i]=ap[i+1]; ap[i+1]=im;
//     }
// }
// int main()
// {
//     d_l M[50];
//     d_l *ap=M;
//     int n;
//     int cnt=0;
//     while(1)
//     {  
//         printf("=== menu ===\n1. 입력\n2. 조회\n3. 삭제\n4. 종료\n");
//         printf("==> ");scanf("%d",&n);
       
//         if (n==4) break;
//         switch(n)
//         {
//             case 1: input(ap,cnt); cnt++; break;
//             case 2: search(ap,cnt); break;
//             case 3: delete(ap,cnt); cnt--; break;
//             default: printf("올바른 번호를 입력해주세요\n");
//         }
//     }
// }
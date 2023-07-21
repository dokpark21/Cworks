// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     for (i=0;i<3;i++){
//         for (j=0;j<4;j++) printf("%-4d ",arr[i][j]);
//     printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3]={{1},{4,5},{7,8,9}};
//     int arr3[3][3]={1,2,3,4,5,6,7};
//     for (i=0;i<3;i++){
//         for (j=0;j<3;j++)
//             printf("%-4d",arr3[i][j]);
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int arr[4][4]={{1,2,3},{4,5,6},{7,8,9}};
//     for (int i=0;i<4;i++){
//         // for (int j=0;j<=i;j++)
//             printf("%-4d",arr[i][3-i]);
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int M[4][4]={{1,2,3,},{4,5,6,},{7,8,9,},{0,}};
//     for (int i=0;i<3;i++){
//         for (int j=0;j<3;j++){
//             M[i][3]+=M[i][j];
//             M[3][i]+=M[j][i];
//         }
//     }
//     for (int i=0;i<4;i++){
//         for (int j=0;j<4;j++)
//             printf("%-4d",M[i][j]);
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int im;
//     int M[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int M2[3][3]={{},{},{}};
//     for (int i=0;i<3;i++){
//         for (int j=0;j<3;j++){
//             M2[j][i]=M[i][j];
//         }
//     }
//     for (int i=0;i<3;i++){
//         for (int j=0;j<3;j++){
//             printf("%-4d",M2[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int tlg1[5][5]={0};
//     int tlg2[5][5]={0};
//     int num=1;
    // for (int i=0;i<5;i++){
    //     for (int j=0;j<=i;j++){
    //         tlg1[i][j]=num;
    //         num++;
    //     }
    // }
    // for (int i=0;i<5;i++){
    //     for (int j=0;j<5;j++){
    //         printf("%-4d",tlg1[i][j]);
    //     }
    //     printf("\n");
    // }
//     for (int i=0;i<5;i++){
//         for (int j=4;j>=4-i;j--){
//             tlg2[i][j]=num;
//             num++;
//         }
//     }
//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             printf("%-4d",tlg2[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int M[3][6]={{1,2,4,5,8,9},{50,80,70,60,45,70},{0}};
//     for (int i=0;i<6;i++){
//         M[2][i]+=1;
//         for (int j=0;j<6;j++){
//             if (M[1][i]<M[1][j]) M[2][i]+=1;
//         }
//     }
//     puts("    == 성적표 출력 ==");
//     puts("번호      점수      등수");
//     for(int i=0;i<6;i++){
//         printf(" %-10d%-10d%-10d\n",M[0][i],M[1][i],M[2][i]);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int dab[]={1,2,3,4,1};
//     int use[3][6]={{1,1,1,4,1,1},{2,1,1,2,4,1},{4,2,2,2,3,2}};
//     int num[]={1,1,1};
//     int count[]={0,0,0};
//     for (int i=0;i<3;i++){
//         for (int j=1;j<6;j++){
//             if (use[i][j]==dab[j-1]) count[i]+=1;
//         }
//     }
//     for (int i=0;i<3;i++){
//         for (int j=0;j<3;j++){
//             if (count[i]<count[j]) num[i]+=1;
//         }
//     }

//     puts("                == 채점 결과 ==");
//     printf("번호   %-5d%-5d%-5d%-5d%-5d 점수 석차    그래프\n",1,2,3,4,5);
//     for (int j=0;j<3;j++){
//         printf(" %-5d",use[j][0]);
//         for (int i=1;i<6;i++){
//             if (use[j][i]==dab[i-1]) {printf(" %-4s","O");}
//             else printf(" %-4s","X");
//         }
//         printf("   %-2d",count[j]*20);
//         printf("   %-7d",num[j]);
//         for (int i=0;i<count[j]*4;i++) printf("*");
//         printf("\n");
//     }
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char M[4][7]={"BANANA","APPLE","PEAR","ORANGE"};
//     char im[7];
//     printf("SORT 전 : ");
//     for (int i=0; i<4;i++) printf("%s ",M[i]);
//     for (int i=0;i<4;i++){
//         for (int j=0;j<3;j++){
//             if (M[j][0]>M[j+1][0]){
//                 strcpy(im,M[j]);
//                 strcpy(M[j],M[j+1]);
//                 strcpy(M[j+1],im);
//             }
//         }
//     }
//     printf("\n");
//     printf("SORT 후 : ");
//     for (int i=0;i<4;i++) printf("%s ",M[i]);
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #include<string.h>
// int main()
// {
//     char M[7][10]={"COMPUTER","NOTEBOOK","MOUSE","CLANGUAGE","CODING","JAVA","PYTHON"};
//     char K[7][10]={"컴퓨터","노트북","마우스","C언어","코딩","자바","파이썬"};
//     srand(time(NULL));
//     int n=rand()%6;
//     char ans[10];
//     printf("\"%s\" 단어의 스펠링을 입력 하세요 : ",K[n]); scanf("%s",ans);
//     int c=strcmp(ans,M[n]);
//     if (c==0) printf("맞았습니다!!");
//     else printf("틀렸습니다");
// }



// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// int main()
// {
//     int M[6]={};
//     int n;
//     for (int i=0; i<6; i++){
//         srand(time(NULL));
//         n=rand()%60;
//         M[i]=n;
//         for (int j=0;j<i;j++){
//             if (n==M[j]) i--;
//         }
//     }
//     for (int i=0;i<6;i++) printf("%d ",M[i]);
// }


//영화좌석
// #include<stdio.h>
// int seat[10][10]={0};
// void seat_check()
// {
//     char seatn[2];  
//     printf("좌석번호 : "); scanf("%s",seatn);
//     char row=seatn[0];
//     int col=seatn[1]-48;
//     if (seat[row-65][col-1]==0) {seat[row-65][col-1]=1; printf("좌석예매가 완료되었습니다\n");}
//     else printf("예매 불가능한 좌석입니다\n");   
// }
// void pr_seat()
// {
//     puts(" \t1\t2\t3\t4\t5\t6\t7\t8\t9\t10");
//     for (int i=0;i<10;i++){
//         printf("%c\t",65+i);
//         for (int j=0;j<10;j++){
//             printf("%d\t",seat[i][j]);
//         }
//         puts("");
//     }
// }
// int main()
// {
    
//     while (1){
//         int c;
//         puts(""); 
//         puts("==메뉴==");
//         puts("1. 좌석현황 확인");
//         puts("2. 좌석예약");
//         puts("3. 종료");
//         printf("=> 선택 : ");scanf("%d",&c);
//         if (c==3) break;
//         switch (c)
//         {
//         case 1: pr_seat(); break;
//         case 2: seat_check(); break;
//         default : printf("올바른 번호를 입력해주세요\n");
//         }
//     }
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #include<string.h>
// int main()
// {
//     int join;
//     char name[10][10];
//     int score[10]={0};
//     int a,b,sol;
//     char en[10];
//     char im_c[10];
//     int im_n;
//     printf("게임 인원 : "); scanf("%d",&join);
//     for (int i=0;i<join;i++){
//         printf("%d번 이름",i+1); scanf("%s",name[i]);
//     }
//     for (int i=0;i<join;i++){
//         puts("");
//         puts("-- 스피드 구구단 게임 --");
//         puts("당신의 계산 실력을 테스트하세요!!!");
//         printf("%s님~ 테스트하겠습니다\n",name[i]);
//         printf("크게 심호흡을 하시고\n준비되면 엔터를 누르세요...\n\n");gets(en);
//         if (strlen(en)==0){
//             for (int j=0;j<10;j++){
//                 srand(time(NULL));
//                 a=rand()%9+1;
//                 b=rand()%9+1;
//                 printf("[문제 %d ] : %d * %d = ",j+1,a,b); scanf("%d",&sol);
//                 if (sol==a*b) score[i]+=10;
//             }
//         }
//         printf("%s님의 점수 : %d점\n\n",name[i],score[i]);
//     }
//     puts("이름\t점수");
//     puts("---------------");
//     for (int i=0;i<join;i++){
//         printf("%s\t%d\n",name[i],score[i]);
//     }
//     puts("---------------");
//     for (int i=0;i<join;i++){
//         for (int j=0;j<join-1;j++){
//             if (score[j]<score[j+1]){
//                 im_n=score[j];
//                 score[j]=score[j+1];
//                 score[j+1]=im_n;
//                 strcpy(im_c,name[j]);
//                 strcpy(name[j],name[j+1]);
//                 strcpy(name[j+1],im_c);
//             }
//         }
//     }
//     for (int i=0;i<join;i++){
//         printf("%d등 : %s\n",i+1,name[i]);
//     }
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int M[10][5]={0}; //1행은 지금 당장 만드는 배열, 2행은 히스토리 저장용
//     int im=0;
//     int n;
//     int randn[10]={0};
//     int j;
//     srand(time(NULL));
//     for (int i=0;i<10;i++){
        
//         int n=rand()%99;
//         randn[i]=n;
//         for (int h=0;h<i;h++) M[i][h]=M[i-1][h];
        
//         if (M[i][4]<n) M[i][4]=n;
//             for (int o=4;o>0;o--){
//             if (M[i][o]>M[i][o-1]){
//                 im=M[i][o];
//                 M[i][o]=M[i][o-1];
//                 M[i][o-1]=im;
//             }
//         }
//     }
//     for (int i=0;i<10;i++){
//         printf("[%d]  순위 :   ",randn[i]);
//         for (int j=0;j<5;j++){
//            printf("\t%d",M[i][j]);
//         }
//         puts("");
//     }
// }




// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int M[5][5]={0};
//     int n;
//     int i,j;
//     int cr=0,cn=0,c1=0,c2=0;
//     srand(time(NULL));
//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             n=rand()%2;
//             M[i][j]=n;
//         }
//     }
//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             printf("%d ",M[i][j]);
//         }
//         puts("");
//     }
//     //행,열 검사
//     for (i=0;i<5;i++){
//         cr=0; cn=0;
//         for (j=0;j<4;j++){
//             if (M[i][j]==M[i][j+1]) cr+=1;
//             if (M[j][i]==M[j+1][i]) cn+=1; 
//         }
//         if (cr==4) printf("%d행은 모두 같습니다\n",i+1);
//         if (cn==4) printf("%d열은 모두 같습니다\n",i+1);
//     }
//     for (j=0;j<4;j++){
//         if (M[j][j]==M[j+1][j+1]) c1+=1;
//         if (M[j][4-j]==M[j+1][4-j-1]) c2+=1;
//     }
//     if (c1==4) printf("대각선1은 모두 같습니다\n");
//     if (c2==4) printf("대각선2는 모두 같습니다");

// }



// #include<stdio.h>
// int main()
// {
//     int M[5][5]={0};
//     int num=1;
    //역삼각형
    // for (int i=0;i<5;i++){
    //     for (int j=0;j<=i;j++){
    //         M[j][i]=num;
    //         num++;
    //     }
    // }

    //다이아몬드
    // for (int i=0;i<3;i++){
    //     for (int j=0;j<2*i+1;j++){
    //         M[i][2-i+j]=num;
    //         num++;
    //     }
    // }
    // for (int i=0;i<2;i++){
    //     for (int j=0;j<3-2*i;j++){
    //         M[3+i][i+j+1]=num;
    //         num++;
    //     }
    // }

    //다이아몬드2
    // for (int i=0;i<3;i++){
    //     for (int j=0;j<2*i+1;j++){
    //         M[2-i+j][4-i]=num;
    //         num++;
    //     }
    // }
    // for (int i=0;i<2;i++){
    //     for (int j=0;j<3-2*i;j++){
    //         M[i+1+j][1-i]=num;
    //         num++;
    //     }
    // }

    //대각선1
    // for (int i=0;i<5;i++){
    //     for (int j=0;j<=i;j++){
    //         M[j][i-j]=num;
    //         num++;
    //     }
    // }
    // for (int i=0;i<4;i++){
    //     for (int j=0;j<4-i;j++){
    //         M[1+i+j][4-j]=num;
    //         num++;
    //     }
    // }

    //대각선2
    // for (int i=0;i<5;i++){
    //     for (int j=0;j<=i;j++){
    //         M[j][4-i+j]=num;
    //         num++;
    //     }
    // }
    // for (int i=0;i<4;i++){
    //     for (int j=0;j<4-i;j++){
    //         M[1+i+j][j]=num;
    //         num++;
    //     }
    // }

    //달팽이수열 1
//     int cnt=0;
//     int col=-1;
//     int row=0;
//     int len=5;
//     int op=1;

//         while (1) {
// 		for (int i = 0; i < len; i++) {
// 			col += op;
// 			M[row][col] = ++cnt;
// 		}
// 		if (--len == 0)
// 			break;
// 		for (int i = 0; i < len; i++) {
// 			row += op;
// 			M[row][col] = ++cnt;
// 		}
// 		op = -op;
// 	}


//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             printf("%-4d",M[i][j]);
//         }
//         printf("\n");
//     }
// }


//달팽이 배열2
//     int cnt=0;
//     int col=4;
//     int row=5;
//     int len=5;
//     int op=-1;

//         while (1) {
// 		for (int i = 0; i < len; i++) {
// 			row += op;
// 			M[row][col] = ++cnt;
// 		}
// 		if (--len == 0)
// 			break;
// 		for (int i = 0; i < len; i++) {
// 			col += op;
// 			M[row][col] = ++cnt;
// 		}
// 		op = -op;
// 	}


//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             printf("%-4d",M[i][j]);
//         }
//         printf("\n");
//     }
// }

//달팽이 배열3 : 가운데서부터 찍기
//     int cnt=0;
//     int col=2;
//     int row=2;
//     int len=1;
//     int op=1;
//         while (1){
// 		for (int i = 0; i < len; i++) {
// 			M[row][col] = ++cnt;
//             col += op;
// 		}
// 		if (len == 5)
// 			break;
// 		for (int i = 0; i < len; i++) {
// 			M[row][col] = ++cnt;
//             row += op;
// 		}
//         len++;
// 		op = -op;
// 	}
//     for (int i=0;i<5;i++){
//         for (int j=0;j<5;j++){
//             printf("%-4d",M[i][j]);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int mean=0,i,j;
//     int record[2][4][5]={
//         {
//             {1,2,4,5,8},{85,95,70,60,45},{90,100,55,87,70},{80,90,80,70,60}
//         },
//         {
//             {1,2,4,5,8},{100,95,70,50,45},{90,100,60,90,80},{70,100,70,80,70}
//         }
//     };
//     int score1[5]={1,1,1,1,1};
//     char score2[10]={"A","A","A","A","A"};
//     float tot[5]={0};
//     int mid[5]={0};
//     int fin[5]={0};
//     int o;
//     printf("\t\t== 성적표 ==\t\t\n\n");
//     printf("번호  중간총점  기말총점  중간+기말(평균)  학점   등수\n");
//     for (i=0;i<5;i++){
//         for (j=1;j<4;j++){
//             mid[i]+=record[0][j][i];
//         }
//     }
//     for (i=0;i<5;i++){
//         for (j=1;j<4;j++){
//             fin[i]+=record[1][j][i];
//         }
//     }
//     for (i=0;i<5;i++){
//         tot[i]+=(float)(mid[i]+fin[i])/6;
//     }
//     for (i=0;i<5;i++){
//         o=tot[i]/10;
//         switch (o)
//         {
//         case 10:
//         case 9: strcpy(&score2[i],"A"); break;
//         case 8: strcpy(&score2[i],"B"); break;
//         case 7: strcpy(&score2[i],"C"); break;
//         case 6: strcpy(&score2[i],"D"); break;
//         }
//     }
//     for (i=0;i<5;i++){
//         for (j=0;j<5;j++){
//             if (tot[i]<tot[j]) score1[i]+=1;
//         }
//     }
//     for (i=0;i<5;i++){
//         printf("%d\t%d\t  %d\t     %.2f\t    %c\t   %d\n",record[0][0][i],mid[i],fin[i],tot[i],score2[i],score1[i]);
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int record[3][3][4]={
//         {{1,2,3,4},{5,6,7,8},{9,10,11,12}},
//         {{13,14,15,16},{17,18,19,20},{21,22,23,24}},
//         {0}
//     };
//     for (int i=0;i<3;i++){
//         for (int j=0;j<4;j++){
//             record[2][i][j]+=record[0][i][j]+record[1][i][j];
//         }
//     }
//     for (int i=0;i<3;i++){
//         for (int j=0;j<4;j++){
//             printf("%-4d",record[2][i][j]);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int arr1[2][3][4]={
//         {{1,2,3,4},{5,6,7,8},{9,10,11,12}},
//         {{13,14,15,16},{17,18,19,20},{21,22,23,24}}
//     };
//     double arr2[2][3][4]={0};
//     for (int i=0;i<3;i++){
//         for (int j=0;j<4;j++){
//             arr2[1][i][j]+=(float)arr1[0][i][j]*0.8;
//         }
//     }
//     for (int i=0;i<3;i++){
//         for (int j=0;j<4;j++){
//             arr2[0][i][j]=(float)arr1[1][i][j]*0.8;
//         }
//     }

//     // printf("높이2, 세로3, 가로4 int형 배열: %d \n",sizeof(arr1));
//     // printf("높이5, 세로5, 가로5 double형 배열: %d \n",sizeof(arr2));
//     for (int i=0;i<2;i++){
//         for (int j=0;j<3;j++){
//             for (int k=0;k<4;k++){
//                 printf("%-6.2f ",arr2[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {   
//     int n=5;
//     int r=0,c=n/2;
//     int M[20][20]={0};
//     for (int i=1;i<=n*n;i++){
//         if (r<0) r=n-1;
//         if (c>n-1) c=0;
//         if (M[r][c]==0) M[r][c]=i;
//         else {while(M[r][c]!=0)
//             {
//                 if (r==n-1) r=0;
//                 else r++;
//                 if (c==0) c=n-1;
//                 else c--;
//                 r++;
//             }
//             M[r][c]=i;
//         }
//         r--;
//         c++;
//     }

//     for (int i=0;i<n;i++){
//         for (int j=0;j<n;j++){
//             printf("%-4d",M[i][j]);
//         }
//         puts("");
//     }
// }


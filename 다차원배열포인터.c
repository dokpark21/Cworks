#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// int main()
// {
//     char *ap, **bp;
//     ap=(char *)malloc(4);
//     strcpy(ap,"ABC"); puts(ap); printf("%c\n",ap[1]);
//     bp=&ap;
//     puts(*bp); printf("%c",bp[0][1]);
//     free(ap);
// }



// int main()
// {
//     char **ap;
//     ap=(char **)malloc(sizeof(char *)*2);
//     ap[0]=(char *)malloc(3);
//     ap[1]=(char *)malloc(3);
//     strcpy(ap[0],"AB");
//     strcpy(ap[1],"CD");
//     puts(ap[0]); puts(ap[1]);
//     free(ap[0]); free(ap[1]);
//     free(ap);
// }



// int main()
// {
//     char *M[]={"ABC","DEF"};
//     puts(M[0]);
//     puts(M[1]);
//     putchar(M[1][1]);
// }



// int main()
// {
//     char *M[]={"ABC","DEF"};
//     char **ap;
//     ap=M;
//     puts(*ap);
//     puts(ap[1]);
//     putchar(ap[1][1]);
// }



// int main()
// {
//     char *M[2]={"AB","CD"}, *N[2]={"EF","GH"};
//     char **ap[]={M,N};
//     puts(ap[0][0]);
//     puts(ap[0][1]);
//     puts(ap[1][0]);
//     puts(ap[1][1]);
//     putchar(ap[1][1][1]);
// }



// int main()
// {
//     char *M[2][2]={{"AB","CD"},{"EF","GH"}};
//     puts(M[0][0]);
//     puts(M[0][1]);
//     puts(M[1][0]);
//     putchar(M[1][1][1]);
// }



// int main()
// {
//     char m[]="ABC";
//     char *ap=(char *) malloc(sizeof(m));
//     char *aap;
//     strcpy(ap,m); aap=m; puts(ap); puts(aap); printf("%c",*ap++);
//     printf("%c",ap[0]); ap--; printf("%c",*aap); free(ap);
// }


// int main()
// {
//     int M;
//     int *ap;
//     int **bp;
//     int ***cp;
//     ap=&M;
//     bp=&ap;
//     cp=&bp;
//     *ap=1;
//     **bp+=2;
//     ***cp+=3;
//     printf("%d",M);
// }



// int main()
// {
//     char M[]="YYYY";
//     char *ap, **bp;
//     ap=M; bp=&ap; *ap='A'; ap++; **bp='B';
//     bp[0][3]='C';
//     ap[1]='D';
//     puts(M);
// }


//두개의 수  swap : 주소 바꿔주기
// #include<stdio.h>
// #include<stdlib.h>
// void SwapintPtr(int **dp1, int **dp2)
// {
//     int *im;
//     im=*dp1;
//     *dp1=*dp2;
//     *dp2=im;
// }
// int main()
// {
//     int num1=10, num2=20;
//     int *ptr1, *ptr2;
//     ptr1=&num1, ptr2=&num2;
//     printf("*ptr1, *ptr2 : %d %d\n",*ptr1,*ptr2);

//     SwapintPtr(&ptr1,&ptr2);
//     printf("*ptr1, *ptr2 : %d %d",*ptr1,*ptr2);
//     printf("\n%d",num1);
// }



// #include<stdio.h>
// int main()
// {
//     int n=20;
//     int *np = &n;
//     int **nnp= &np;

//     printf("%d %d %d",n,*np,**nnp);
// }



// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char carr3[2][2][3]={'A','B','C','D','E','F','G','H','I','J','K','L'};
//     printf("%p %p %p %c\n",carr3,carr3[0],carr3[0][0],carr3[0][0][0]);
//     printf("%x %x %x %x\n",carr3+1,carr3[0]+1,carr3[0][0]+1,carr3[0][0][0]+1);
//     printf("%x %x %x %x\n",carr3+1,*carr3+1,**carr3+1,***carr3+1);

// }


// #include<stdio.h>
// int main()
// {
//     char M[2][3]={"AB","CD"};
//     char (*ap)[3];
//     ap = M;
//     puts(ap[0]);
//     puts(ap[1]);
//     putchar(ap[1][1]);
// }


// #include<stdio.h>
// int main()
// {
//     char M[2][2][3]={{"AB","CD"},{"EF","GH"}};
//     char (*ap)[2][3];
//     ap=M;
//     puts(ap[0][0]);
//     puts(ap[1][0]);
//     putchar(ap[1][1][1]);
// }



// #include<stdio.h>
// int main()
// {
//     char M[2][3]={"AB","CD"};
//     char N[2][3]={"EF","GH"};
//     char (*ap[2])[3];
//     ap[0]=M; ap[1]=N;
//     puts(ap[0][0]);
//     puts(ap[0][1]);
//     puts(ap[1][0]);
//     putchar(ap[0][0][0]); putchar(ap[0][0][1]);
//     putchar(ap[1][0][0]); putchar(ap[1][0][1]);
// }



// #include<stdio.h>
// int main()
// {
//     char carr[4]={'A','B','C','D'};
//     char (*ap)[2] = (char(*)[2]) carr;

//     printf("%c %c %c %c\n",carr[0],carr[1],carr[2],carr[3]);
//     printf("%c %c %c %c",ap[0][0],ap[0][1],ap[1][0],ap[1][1]);
// }



// #include<stdio.h>
// int main()
// {
//     int iarr[4]={1,2,3,4};
//     int (*ap)[2] = (int(*)[2]) iarr;

//     printf("%d %d %d %d\n",iarr[0],iarr[1],iarr[2],iarr[3]);
//     printf("%d %d %d %d",ap[0][0],ap[0][1],ap[1][0],ap[1][1]);
// }


// #include<stdio.h>
// int main()
// {
//     char carr2[2][2]={'A','B','C','D'};
//     char (*ap)[2] = (char(*)[2]) carr2;

//     printf("%c %c %c %c\n",carr2[0][0],carr2[0][1],carr2[1][0],carr2[1][1]);
//     printf("%c %c %c %c",ap[0][0],ap[0][1],ap[1][0],ap[1][1]);
// }


// #include<stdio.h>
// int main()
// {
//     char carr[12]={'A','B','C','D','E','F','G','H','I','J','K','L'};
//     char (*ap1)[4] = (char (*)[4])carr;
//     char (*ap2)[3] = (char (*)[3])carr;
//     char (*ap3)[2][3] = (char (*)[2][3])carr;

//     printf("%lu %lu %lu %lu\n",sizeof(carr),sizeof(ap1),sizeof(ap2),sizeof(ap3));
// }



// #include<stdio.h>
// int main()
// {
//     char c = 'A';

//     char (*ap1)[2] = (char (*)[2])&c;
//     char (*ap2)[4] = (char (*)[4])&c;
//     char (*ap3)[3][3] = (char (*)[3][3])&c;

//     printf("%x %x %x %x\n",ap1,ap1+1,ap1[0],ap1[1]);
//     printf("%x %x %x %x\n",ap2,ap2+1,ap2[0],ap2[1]);
//     printf("%x %x %x %x\n",ap3,ap3+1,ap3[0],ap3[1]);
// }



//시작 주소값 기억용 매개 변수
// #include<stdio.h>
// void KK( char ap[])
// {
//     putchar(ap[0]);
//     putchar(ap[1]);
// }
// int main()
// {
//     char M[]="ABC";
//     KK(M);
// }


//1
// #include<stdio.h>
// int main()
// {
//     int arr[5] = {10,20,30,40,50};
//     int *ap=(int *) arr;

//     printf("%d %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
//     printf("%d %d %d %d %d",ap[0],ap[1],ap[2],ap[3],ap[4]);
// }


//2
// #include<stdio.h>
// int main()
// {
//     int arr[2][2] = {{10,20},{30,40}};
//     int (*ap)[2] = (int (*)[2]) arr;

//     printf("%d %d %d %d",ap[0][0],ap[0][1],ap[1][0],ap[1][1]);
// }


//3
// #include<stdio.h>
// int main()
// {
//     int arr[6] = {10,20,30,40,50,60};
//     int (*ap)[2] = (int (*)[2]) arr;

//     printf("%d %d %d %d %d %d",ap[0][0],ap[0][1],ap[1][0],ap[1][1],ap[2][0],ap[2][1]);
// }



//4
// #include<stdio.h>
// #include<string.h>
// void input_string(char (*sp)[20])
// {
//     char str[20];
//     for (int i=0;i<5;i++)
//     {
//     printf("문자열을 입력하세요 : "); gets(str);
//     strcpy(sp,str);
//     sp++;
//     }
// }
// void output_string(char (*sp)[20]) //매개변수로 받기 떄문에 포인터 위치는 함수 실핼할 시에 맨 처음으로 초기화!!!!!
// {
//     for (int i=0;i<5;i++)
//     {
//     puts(sp);
//     sp++;
//     }
// }
// int main()
// {
//     char str[5][20];
//     input_string(str);
//     output_string(str);
// }


//5
// #include<stdio.h>
// #include<string.h>
// void Swapstr(char (*sp)[30])
// {
//     char im[30];
//     strcpy(im,*sp);
//     strcpy(*sp,*(sp+1));
//     strcpy(*(sp+1),im);
// }
// int main()
// {
//     char str[2][30];
//     printf("첫 번쨰 문자열을 입력하세요 : ");gets(str[0]);
//     printf("두 번쨰 문자열을 입력하세요 : ");gets(str[1]);
//     Swapstr(str);
//     printf("첫 번쨰 문자열 : %s\n",str[0]);
//     printf("두 번쨰 문자열 : %s",str[1]);
// }



//6
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// void fruitstr(char **sp,int n)
// {
    
//     for (int i=0;i<n;i++)
//     {
//         char word[100];
//         printf("%d번쨰 과일을 입력하세요 : ",i+1); scanf("%s",word);
//         sp[i]=(char *)malloc(strlen(word)+1);
//         strcpy(sp[i],word);
//     }
// }
// int main()
// {
//     int n;
//     printf("당신이 알고 있는 과일의 가지 수 : ");scanf("%d",&n);
//     char **str=(char **)malloc(n*sizeof(char *));
//     fruitstr(str,n);
//     printf("당신이 알고 있는 과일의 종류는\n");
//     for (int i=0;i<n;i++) {printf("%s ", str[i]);}
//     printf("이었군요!");
// }


// //7 내가 한 버젼
// #include<stdio.h>
// #include<stdlib.h>
// #include"mystring.h"
// void input_word(char ***sp,int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         char k_w[100], e_w[100];
//         printf("%d번쨰 단어 : ",i+1);scanf("%s %s",k_w,e_w);
//         // sp[i]=(char **)malloc(2*sizeof(char *));
//         sp[i][0]=(char *)malloc(Mystrlen(k_w)+1);
//         sp[i][1]=(char *)malloc(Mystrlen(e_w)+1);
//         strcpy(sp[i][0],k_w);
//         strcpy(sp[i][1],e_w);
//     }
//     printf("저장이 끝났습니다\n");
// }
// void test(char ***sp,int n)
// {
//     int score=0;
    
//     for (int i=0;i<n;i++)
//     {
//         char word[100];
//         printf("%s : ",sp[i][0]); scanf(" %s",word);
//         if (myStricmp(word,sp[i][1])==0) score++;
//     }
//     printf("%d개의 정답을 맞추셨습니다!!!",score);
// }
// int main()
// {
//     int n;
//     printf("몇 개의 단어를 입력하여 저장 할까요? : ");scanf("%d",&n);
//     char ***word=(char ***)malloc(n*sizeof(char **)*2);
//     input_word(word,n);
//     test(word,n);
// }





//7 정석 3차원으로 하기
// #include<stdio.h>
// #include<stdlib.h>
// #include"mystring.h"
// void input_word(char ***sp,int n)
// {
//     sp[0]=(char **)malloc(n*sizeof(char *));
//     sp[1]=(char **)malloc(n*sizeof(char *));
//     for (int i=0;i<n;i++)
//     {
//         char k_w[100], e_w[100];
//         printf("%d번쨰 단어 : ",i+1);scanf("%s %s",k_w,e_w);
//         sp[0][i]=(char *)malloc(Mystrlen(k_w)+1);
//         sp[1][i]=(char *)malloc(Mystrlen(e_w)+1);
//         strcpy(sp[0][i],k_w);
//         strcpy(sp[1][i],e_w);
//     }
//     printf("저장이 끝났습니다\n");
// }
// void test(char ***sp,int n)
// {
//     int score=0;
    
//     for (int i=0;i<n;i++)
//     {
//         char word[100];
//         printf("%s : ",sp[0][i]); scanf(" %s",word);
//         if (myStricmp(word,sp[1][i])==0) score++;
//     }
//     printf("%d개의 정답을 맞추셨습니다!!!",score);
// }
// int main()
// {
//     int n;
//     printf("몇 개의 단어를 입력하여 저장 할까요? : ");scanf("%d",&n);
//     char ***word=(char ***)malloc(sizeof(char **)*2);
//     input_word(word,n);
//     test(word,n);
// }



//8
// #include<stdio.h>
// void input_word(char (*sp)[2][20],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         printf("%d번쨰 단어 : ",i+1);scanf("%s %s",*sp,*++sp);
//         sp++;
//     }
//     printf("저장이 끝났습니다\n");
// }
// void test(char (*sp)[2][20],int n)
// {
//     int score=0;
//     char word[10];
//     int chance=3;
//     for (int i=0;i<n;i++)
//     {
//         while (chance!=0){
//         printf("%s : ",*sp); scanf(" %s",word);
//         if (strcmp(word,*++sp)==0) {score++; break;}
//         else {sp--;chance--; printf("틀렸습니다ㅠㅠ %d번의 기회가 있습니다\n",chance); }
//         }
//         if (chance==0) sp++;
//         chance=3;
//         sp++;
//     }
//     printf("%d개의 정답을 맞추셨습니다!!!",score);
// }
// int main()
// {
//     int n;
//     char word[20][2][20];
//     printf("몇 개의 단어를 입력하여 저장 할까요? : ");scanf("%d",&n);
//     input_word(word,n);
//     test(word,n);
// }


//10
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>c
// void input_color(char **color)
// {
//     for (int i=0;i<5;i++)
//     {
//         char word[100];
//         printf("%d번쨰 색을 입력해주세요 : ",i+1);scanf("%s",word);
//         color[i]=(char *)malloc(strlen(word)*sizeof(char));
//         strcpy(color[i],word);
//     }
// }
// int main()
// {
//     char **color=(char **)malloc(5*sizeof(char *));
//     input_color(color);
//     int n;
//     printf("몇번째 색을 가져올까요? : ");scanf("%d",&n);
//     printf("=> %d번쨰 기억되어 있는 색은 %s입니다",n,color[n-1]);
// }


//12
// #include<stdio.h>
// void set_max_ptr(int **pmax)
// {
//     int *p=*pmax;   
//     for  (int i=0;i<6;i++)
//     {
//         if (*p>**pmax) *pmax=p;
//         p++;
//     }
// }
// int main()
// {
//     int m[6]={5,6,1,13,7,2};
//     int *pmax=m;
//     set_max_ptr(&pmax);
//     printf("%d",*pmax);
// }



//13
// #include<stdio.h>
// #include<string.h>
// void sort_string(char *s,int size)
// {
//     char *imp=s;
//     char im;
//     for (int i=0;i<size;i++)
//     {
//         for (int k=0;k<size-1;k++)
//         {
//             if (*s>*(s+1)) {im=*s; *s=*(s+1); *(s+1)=im;}
//             s++;
//         }
//         s=imp;
//     }   
// }
// int main()
// {
//     char str[20];
//     printf("문자열을 입력하세요 : ");scanf("%s",str);
//     sort_string(str,strlen(str));
//     puts(str);
// }


//14
// #include<stdio.h>
// #include<string.h>
// #include"mystring.h"
// void array_equal(char (*sp1)[10], char (*sp2)[10],int size)
// {
//     int c=0;
//     for (int i=0;i<size;i++)
//     {
//         int l=myStricmp(*sp1,*sp2);
//         if (l!=0) {puts("배열1과 배열 2는 다릅니다"); break;}
//         sp1++; sp2++;
//         c++;
//     }
//     if (c==size) puts("배열1과 배열2는 같습니다");
// }
// int main()
// {
//     char str1[5][10]={"apple","orange","grape","banana","mekon"};
//     char str2[5][10]={"apple","orange","grape","banana","mekon"};
//     int size=sizeof(str1)/sizeof(str1[0]);
//     array_equal(str1,str2,size);
// }

//15
// #include<stdio.h>
// #include<string.h>
// #include"mystring.h"
// void array_copy(char (*sp1)[10], char (*sp2)[10],int size)
// {
//     for (int i=0;i<size;i++)
//     {
//         myStrcpy(*sp2,*sp1);
//         sp1++; sp2++;
//     }
// }
// int main()
// {
//     char str1[5][10]={"apple","orange","grape","banana","mekon"};
//     char str2[5][10];
//     int size=sizeof(str1)/sizeof(str1[0]);
//     array_copy(str1,str2,size);
//     for (int i=0;i<size;i++)
//     {
//         puts(str2[i]);
//     }
// }


//17
// #include<stdio.h>
// int main()
// {
//     int data[][2]={{10,20},{30,40},{50,60},{70,80},{90,100}};
//     int (*ptr)[2]=(int (*)[2])data;
//     for (int i=0;i<5;i++) printf("%d ",*ptr[i]);
//     puts("");
//     for (int i=0;i<5;i++) {printf("%d ",*(ptr[i]+1));}
//     puts("");
//     for (int i=0;i<5;i++) printf("%d %d ",*ptr[i],*(ptr[i]+1));
// }
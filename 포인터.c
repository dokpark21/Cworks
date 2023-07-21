// &a: a의 시작주소
// *&a: a의 시작주소의 참조값 ==a

// int M[3]
// M : 첨자가 적으면 주소 &M[0]
// *M  ==  *&M[0] == M[0] [] == *
// 주소에 +1은 한칸이동(유동적)

// #include<stdio.h>
// int main()
// {
//     short a;
//     short b;
//     short c;
//     // printf("%d %d %d", &a, &b, &c);
//     a=10; *&b= *&a +2; *&a+=4;
//     c = a+b;
//     printf("%d\n",c);
// }



// #include<stdio.h>
// int main()
// {
//     int M[3]= {10,20,30};
//     long K;
//     K = *M + M[1] + *(M+1);
//     K+= *&M[2] + *M +1;
//     printf("%d\n", K);
// }



//4
// #include<stdio.h>
// int main()
// {
//     short M[2][2]= {{10,20},{30,40}};
//     short a;
//     a= M[0][0] + M[0][1] + M[1][0] +M[1][1];
//     a+=( *&M[1][0] + *M[0] + *(M[1]+1));
//     a-=**M;
//     a+= *(*(M+1)+1);
//     printf("%d\n",a);
// }



//5
// #include<stdio.h>
// int main()
// {
//     short M[2][2]= {{10,20},{30,40}};
//     short a, sum=0;
//     *M[0]=15; *(M[0]+1)=25;
//     *M[1]=35; M[0][3]=45;
//     **M=17; *(*(M+1)+1) =47;
//     *(*M+1)=27; **(M+1)=37;
//     M[1][-1]+=2;
//     for (a=0;a<4;a++) {sum+=M[0][a]; printf("%d  ",M[0][a]);}
//     printf("%d\n",sum);
// }


//6
// #include<stdio.h>
// int main(){
//     short M[2][2][2] = {{{10,20},{30,40}},{{50,60},{70,80}}};
//     int a,b,c;
//     short cnt=0;

//     ++*M[0][0];
//     *M[0][1]+=2;
//     *M[1][0]+=3;
//     *M[1][1]+=4;
//     ++*(M[0][0]+1);
//     *(M[0][1]+1)+=2;
//     *(M[1][0]+1)+=3;
//     *(*(M[0]+0))+=1;
//     *(*(M[0]+0)+1)= *(*M[0]+1) + *(**M+1) +2;
//     *(*(M[0]+1)) = *(*(*M+1)) +3;

//     for (a=0;a<2*2*2;a++) if (M[0][0][a]>=40) M[0][0][a]/=2;

//     for (a=0;a<2;a++)
//         for (b=0;b<2;b++)
//             for (c=0;c<2;c++){
//                 if (M[a][b][c]/10==2) cnt++;
//                 printf("%d  ",M[a][b][c]);
//             }
//     printf("\n%d\n",cnt);
// }



//7
// #include<stdio.h>
// int main()
// {
//     short a,b;
//     short *ap;
//     short c;
//     *&a=5; ap= &b; *ap=a; *ap+=2;
//     a=a+*ap;
//     **&ap+=3;
//     c = a+b;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
// }



//8
// #include<stdio.h>
// int main()
// {
//     short M[]={10,20,30,40};
//     short *ap;
//     short c;
//     ap = M;

//     c=*ap++;
    
//     c += *(ap+1);
//     printf("%d\n",c);
//     c += *++ap; c += ap[1]--;
//     printf("%d\n",c);
 
//     c+=ap[1];
//     printf("%d\n",c);
// }


//9
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char M[]={'P','A','E','\0'};
//     char *ap;
//     int a=0;
//     ap = M +strlen(M)-1;
//     printf("%c\n",ap[-1]);
//     printf("%c\n",*ap--); *--ap = 'T'; printf("%s\n",ap);
//     printf("%c\n",*++ap); printf("%c\n",ap[a++]);
//     printf("%c\n",ap[--a]);
// }


//10
// #include<stdio.h>
// int main()
// {
//     short M[2][2]= {{10,20},{30,40}};
//     short *ap;
//     short c;
//     ap=M[0]; c =* ap; ap++; c+=*ap;
//     ap +=2; c+=*ap; c+=*ap--; c+=*--ap;
//     c +=*ap; c+=ap[-1];  c+= ++*ap; ap++;
//     c +=ap[1];
//     printf("%d",c);
// }


//11
// #include<stdio.h>
// int main()
// {
//     short M[2][2]={{10,20},{30,40}};
//     short *ap;
//     short c;
//     ap=M[0]; c=*ap;
//     ap++; c+=*ap;
//     ap+=2; c+=*ap;
//     c+=*ap;
//     c += *--ap;
//     printf("%d\n",c);
//     c += *(ap-2);
//     c += ap[-1];
//     c += ++*ap; ap++; c-=ap[-1];
//     printf("%d\n",++*ap);
//     printf("%d",c);
// }


//12
// #include<stdio.h>
// int main()
// {
//     short M[2][2]= {{10,20},{30,40}};
//     short *ap, *bp;
//     short a, sum=0;
//     ap=M[0];
//     bp= M[0] +sizeof(M)/sizeof(M[0][0]) -1 ;
//     for (a=0;a <sizeof(M)/sizeof(M[0][0]); a++) sum+= *ap++ + *bp--;
//     *--ap=45; *++bp=15; a=0; bp[++a]++; ++ap[-a--]; ap=M[0];
//     for (;a<sizeof(M)/sizeof(M[0][0]); a++) sum-= ap[a];
    
//     printf("%d",sum);
// }


//13
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char M[]="ABC";
//     char *ap="ABC";
//     puts(M); puts(ap);
//     ap="DEF";
//     puts(ap);
//     printf("%c\n",ap[1]);
//     strcpy(M,"YZ");
//     puts(M);
// }



//14
// #include<stdio.h>
// int main()
// {
//     char M[4]="ABC";
//     printf("%c%c%c",M[0],M[1],M[2]);
//     *M='X';
//     *(M+1)='Y';
//     *(M+2)='Z';
//     puts(M);
// }



//15
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char M[2][5]={"ABC","XYZ"};
//     printf("%c%c%c\n",M[0][0],M[0][1],M[0][2]);
//     puts(&M[1][0]);
//     *(M[0]+1)='F'; *(M[1]+1)='E';
//     puts(M[0]); puts(*M);
//     strcpy(M[1],"GHI");
//     puts(*(M+1));
//     printf("%c\n",**(M+1));
// }


//16
// #include<stdio.h>
// int main()
// {
//     char M[]="ABC";
//     char *ap=M;
//     *ap++ +=1;
//     *++ap +=3;
//     ap-=2;
//     ap[1]+=2;
//     puts(M);
// }


//17
// #include<stdio.h>
// int main()
// {
//     char M[2][7]={"KOREA","SEOUL"};
//     char *ap=M[0];
//     puts(M[0]);
//     puts(ap);
//     ap+=sizeof(M[0]);
//     puts(ap++);
//     printf("%c\n",ap[2]);
//     printf("%c\n",*ap--);
//     puts(ap);
//     printf("%c\n",*++ap);
// }


//18
// #include<stdio.h>
// int main()
// {
//     char *ap="KOREA";
//     char M[5]={0};
//     int a=0;
//     M[0]=ap[a++];
//     M[1]=*++ap;
//     M[2]=ap[++a];
//     M[3]=ap[a-1];
//     puts(M);
// }


//문제
//1
// #include<stdio.h>
// int main()
// {
//     int num1=100, num2=100;
//     int *pnum;
//     pnum=&num1;
//     *pnum+=30;
//     pnum=&num2;
//     *pnum-=30;
//     printf("%d %d",num1,num2);
// }


//2
// #include<stdio.h>
// int main()
// {
//     int arr[3]={15,25,35};
//     int *ptr=&arr[0];
//     printf("%d %d",*ptr,*arr);

// }


//3
// #include<stdio.h>
// int main()
// {
//     int arr1[3]={1,2,3};
//     double arr2[3]={1.1,2.2,3.3};
//     printf("%d  %g\n",*arr1,*arr2);
//     *arr1+=100;
//     *arr2+=120.5;
//     printf("%d  %g",arr1[0],arr2[0]);
// }


//5
// #include<stdio.h>
// int main(){
//     int num1=10, num2=20, num3=30;
//     int *arr[3]={&num1,&num2,&num3};
//     printf("%p\n",&arr[0]);
//     printf("%p\n",&arr[1]);
//     printf("%p\n",&arr[2]);
// }


//7
// #include<stdio.h>
// int main()
// {
//     int tr1; double tr2;
//     int *ptr1=&tr1;
//     double *ptr2=&tr2;
//     printf("%d %d %d\n",ptr1,ptr1+1,ptr1+2);
//     printf("%d %d %d\n",ptr2,ptr2+1,ptr2+2);
//     ptr1++;
//     ptr2++;
//     printf("%d %d \n",ptr1,ptr2);
// }



//8
// #include<stdio.h>
// int main()
// {
//     char *strArr[3]={"Simple","String","Array"};
//     printf("%s\n",strArr[0]);
//     printf("%s\n",strArr[1]);
// }


//9
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[100]="My String";
//     char *str2="Your String";
//     printf("%s %s \n",str1,str2);
//     strcpy(str1,"Our String");
//     str2="Our String";
//     printf("%s %s",str1,str2);
// }


//10
// #include<stdio.h>
// int main()
// {
//     int arr[3][2];
//     int i,j;
//     for (i=0;i<3;i++)
//         for (j=0;j<2;j++) printf("%p \n",&arr[i][j]);
// }


//11
// #include<stdio.h>
// int main()
// {
//     int arr1[3][2];
//     int arr2[2][3];
//     printf("arr1: %d \n",arr1);
//     printf("arr1+1: %d \n",arr1[0]+1);
//     printf("arr1+1: %d \n",arr1+1);
//     printf("arr1+2: %d \n\n",arr1+2);
//     printf("arr2: %d \n",arr2);
//     printf("arr2+2: %d \n",arr2[1]+2);
//     printf("arr2+1: %d \n",arr2+1);
// }

//13
// #include<stdio.h>
// int main()
// {
//     int num1=10, num2=20, num3=30;
//     int *ptr1=&num1;
//     int *ptr2=&num2;
//     int *ptr3=&num3;
//     int * ptrArr[]={ptr1,ptr2,ptr3};
//     int **dptr=ptrArr;
//     printf("%d %d %d \n",*(ptrArr[0]),*(ptrArr[1]),*(ptrArr[2]));
//     printf("%d %d %d \n",*(dptr[0]),*(dptr[1]),*(dptr[2]));
// }


//문제2
//1
// #include<stdio.h>
// int main()
// {
//     char *str="computer";
//     for (int i=0;i<sizeof(str)/sizeof(str[0]);i++)
//         puts(str++);
// }


//2
// #include<stdio.h>
// int main()
// {
//     int M[]={1,2,3,4,5,6,7,8,9,10};
//     int *ap=M;
//     for (int i=0;i<sizeof(M)/sizeof(M[0]);i++){
//         if (*ap%2==0) {printf("%d ",*ap);}
//         ap++;
//     }
// }


//3
// #include<stdio.h>
// void SaChick(double a, double b, double *ap)
// {
//     *ap=a+b;
//     ap++;
//     *ap=a-b;
//     ap++;
//     *ap=a*b;
//     ap++;
//     *ap=a/2;
// }
// int main()
// {
//     double a=5,b=2;
//     double M[4];
//     double *ap=M;
//     SaChick(a,b,ap);
//     printf("%.1f  %.1f\n",M[0],M[1]);
//     printf("%.1f  %.1f",M[2],M[3]);
// }



//변환함수
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a;
//     long b;
//     double c;
//     a = atoi("12"); b=atol("123400"); c=atof("12.5");
//     printf("%f",a+b+c);
// }



//소문자 -> 대문자
// #include<stdio.h>
// void MyUpper(char *M)
// {
//     int l=sizeof(M)/sizeof(M[0]);
//     for (int i=0;i<l;i++){
//         if (*M>=97&&*M<=122) *M-=32;
//         M++;
//     }
// }
// int main()
// {
//     char M[100];
//     printf("문자열을 입력하세요 : "); gets(M);
//     MyUpper(M);
//     puts(M);
// }



//문자열 길이 구하기
// #include<stdio.h>
// #include "mystring.h"
// int Mystrlen(char *M)
// {
//     int l=0;
//     while (*M!=NULL) {l+=1; M++;}
//     return l;
// }
// int main()
// {
//     char M[100];
//     printf("문자열을 입력하세요 : ");gets(M);
//     int l=Mystrlen(M);
//     printf("%d",l);
// }



//문자열 뒤집기
// #include<stdio.h>
// #include<string.h>
// void Mystrreverse(char *M)
// {
//     int len=strlen(M);
//     char *im;
//     char *f=M;
//     char *l=M+strlen(M)-1;
//     for (int i=0;i<len/2;i++){
//         *im=*l;
//         *l=*f;
//         *f=*im;
//         l--;
//         f++;
//     }
// }
// int main()
// {
//     char M[1000];
//     printf("문자열을 입력하세요 : ");scanf("%s",M);
//     Mystrreverse(M);
//     puts(M);
// }



//공백제거
// #include<stdio.h>
// #include<string.h>
// void Mynospace(char *M)
// {
//     char *im;
//     while(*M){
//         im=M;
//         if (*M==32){
//             while(*M){
//                 *M=*(M+1);
//                 M++;
//             }
//             M=im;
//         }
//         M++;
//     }
// }
// int main()
// {
//     char M[100];
//     printf("문자열을 입력하세요 : ");gets(M);
//     Mynospace(M);
//     puts(M);
// }



// #include<stdio.h>
// #include<string.h>
// void myStrcat(char *ap,char *bp)
// {
//     while(*ap || *bp){
//         if (*ap==NULL){
//             *ap=*bp;
//             bp++;
//         }
//         ap++;
//     }
// }
// int main()
// {
//     char M[6]="AB";
//     myStrcat(M,"CD");
//     puts(M);
// }



//문자열 복사
// #include<stdio.h>
// #include<string.h>
// char *  myStrcpy(char *ap, char *bp)
// {
//     while(*bp){
//         *ap=*bp;
//         ap++; bp++;
//     }
// }

// int main()
// {
//     char M[4];
//     myStrcpy(M,"AB");
//     puts(M);
// }


//일정한 길이 만큼 복사
// #include<stdio.h>
// #include<string.h>
// void myStrncpy(char *ap, char *bp,int n)
// {
//     for (int i=0;i<n;i++){
//         *ap=*bp;
//         ap++; bp++;
//     }
// }
// void main()
// {
//     char M[4]={0, };
//     myStrncpy(M,"ABCD",3);
//     puts(M);
// }


//절대값
// #include<stdio.h>
// void myabs(int *n)
// {
//     if (*n<0) *n*=-1;
// }
// int main()
// {
//     int n;
//     printf("정수를 입력하세요 : ");scanf("%d",&n);
//     myabs(&n);
//     printf("%d",n);
// }


//문자열 비교
// #include<stdio.h>
// #include<string.h>
// int myStricmp(char *ap,char *bp)
// {
//     char a;
//     char b;
//     while (*ap || *bp){
//             if (*ap>=97) a=*(ap)-32;
//             else a=*ap;
//             if (*bp>=97) b=*(bp)-32;
//             else b=*bp;
//             if (a!=b) {
//                 if (a>b) return 1;
//                 else if (b>a) return -1;
//                 break;
//             }
//             if (*(ap+1)==NULL && *(bp+1)==NULL) {return 0; break;}
//             ap++; bp++;
//     }
// }
// int main()
// {
//     char M1[100];
//     char M2[100];
//     int l;
//     printf("문자열을 입력해주세요 : "); scanf(" %s",M1);
//     printf("문자열을 입력해주세요 : "); scanf(" %s",M2);
//     l=myStricmp(M1,M2);
//     if (l==0) printf("같은 문자열 입니다");
//     else printf("다른 문자열 입니다");
// }




//문자열 안에서 특정 단어 찾기
// #include<stdio.h>
// #include<string.h>
// int MySearch(char *ap,char *bp)
// {
//     char *a;
//     char *b;
//     while (*ap){
//         if (*ap==*bp){
//             a=ap; b=bp;
//             while(*b)
//             {
//                 if (*a!=*b) break;
//                 a++;b++;
//             }
//             if (*b==NULL) {break; break;}
//         }
//         ap++;
//     }
//     if (*ap==NULL) return 1;
//     else return 0;
// }
// int main()
// {
//     int l;
//     char M[]="YOU LOVE YOU YOOLOVE LOVE ME . . .YOU";
//     char t[30];
//     printf("찾을 단어 : ");scanf("%s",t);
//     l=MySearch(M,t);
//     if (l==0) printf("존재합니다");
//     else printf("존재하지 않습니다");
// }



// #include<stdio.h>
// #include<string.h>
// int mySearch(char *ap,char bp[30])
// {    
//     char tmp[100];
//     int l;
//     int cnt=0;
//     while (*ap)
//     {
//         if (*ap==32){    
//             l=strcmp(bp,tmp);
//             if (l==0) {return 0; break;}   
//             tmp[cnt]=NULL;
//             cnt=-1;
//         }
//         if (*(ap+1)==NULL){
//             tmp[cnt]=*ap;
//             tmp[cnt+1]=*(ap+1);
//         }
//         else tmp[cnt]=*ap;
//         cnt++; ap++; 
//     }
//     if (*ap==NULL) return 1;
// }
// int main()
// {
//     int c;
//     char M[]="YOU LOVE YOU YOOLOVE LOVE ME . . . YOU";
//     char t[30];

//     printf("찾을 단어 : ");scanf("%s",t);
//     c=mySearch(M,t);
//     if (c==0) printf("존재합니다");
//     else printf("존재하지 않습니다");
// }



//특정단어 찾아서 개수 세기
// #include<stdio.h>
// #include<string.h>
// int mySearch(char *ap,char bp[30])
// {    
//     char tmp[100];
//     int l;
//     int cnt=0;
//     int c=0;
//     while (1)
//     {
//         if (*ap==32 || *ap==NULL){    
//             tmp[cnt]=NULL;
//             l=strcmp(bp,tmp);
//             if (l==0) c++;   
//             cnt=-1;    
//         }
//         if (*ap==NULL) break;
//         else tmp[cnt]=*ap;
//         cnt++; ap++; 
//     }
//     return c;
// }
// int main()
// {
//     int d;
//     char M[]="YOU LOVE YOU YOOLOVE LOVE ME . . . YOU";
//     char t[30];

//     printf("찾을 단어 : ");scanf("%s",t);
//     d=mySearch(M,t);
//     printf("%d",d);
// }






//특정문자 바꾸기
// #include<stdio.h>
// #include<string.h>
// void mySearch(char *ap,char bp[30],char *cp)
// {    
//     char tmp[100];
//     int l;
//     int cnt=0;
//     char *im1=&ap[0];
//     char *im2;
//     int n=0;
//     while (1)
//     {
//         if (*ap==32 || *ap==NULL){    
//             tmp[cnt]=NULL;
//             l=strcmp(bp,tmp);
//             if (l==0){
//                 if(strlen(cp)>strlen(tmp)){
//                     for (int i=0;i<strlen(cp)-strlen(tmp);i++){
//                         im2=&ap[0]+strlen(ap);
//                         while(im2!=&ap[0]){
//                             *im2=*(im2-1);
//                             im2--;
//                         }
//                     }
//                     while(*cp){
//                         *im1++=*cp++;
//                         n+=1;
//                     }
//                     cp=&cp[-n];
//                     im1++;
//                     ap++;
//                     n=0;
//                 }
//                 else if (strlen(cp)<strlen(tmp)){
//                     for (int i=0;i<strlen(tmp)-strlen(cp);i++){
//                         im2=&ap[0]-(strlen(tmp)-strlen(cp));
//                         while (*im2){
//                             *im2=*(im2+1);
//                             im2++;
//                         }
//                         *--im2=NULL;
//                     }
//                     while(*cp){
//                         *im1++=*cp++;
//                         n+=1;
//                     }
//                     cp=&cp[-n];
//                     im1++;
//                     ap++;
//                     n=0;
//                 }
//                 else {
//                     while(*cp){
//                         *im1++=*cp++;
//                         n+=1;
//                     }
//                     cp=&cp[-n];
//                     im1++;
//                     ap++;
//                     n=0; 
//                 }
//             }
//             else {im1=ap+1;} 
//             cnt=-1;    
//         }
//         if (*ap==NULL) break;
//         else tmp[cnt]=*ap;
//         cnt++; ap++; 
//     }
// }
// int main()
// {
//     int d;
//     char M[100]="YOU LOVE YOU YOOLOVE LOVE ME . . . YOU";
//     char t1[30];
//     char t2[30];

//     printf("찾을 단어 : ");scanf("%s",t1);
//     printf("바꿀 문자 : ");scanf("%s",t2);
//     mySearch(M,t1,t2);
//     puts(M);
// }



//2개의 수 바꾸기
// #include<stdio.h>
// void SwapIntPtr(int *p1,int *p2)
// {
//     int *im;
//     *im=*p1;
//     *p1=*p2;
//     *p2=*im;
// }

// int main()
// {
//     int num1=10;int num2=20;
//     int *ptr1,*ptr2;
//     ptr1=&num1, ptr2=&num2;
//     printf("%d %d\n",*ptr1,*ptr2);
//     SwapIntPtr(ptr1,ptr2);
//     printf("%d %d",*ptr1,*ptr2);
// }



//이름 번호 주소 입력받아 한줄로 출력하기
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[20], *n1=&name[0];
//     char num[30], *n2=&num[0];
//     char add[30], *a=&add[0];
//     char all[100];
//     char *ap=&all[0];
//     printf("이름을 입력하시오 : ");gets(name);
//     printf("전화번호를 입력하시오 : ");gets(num);
//     printf("주소를 입력하시오 : ");gets(add);
//     while (*n1){
//         *ap=*n1;
//         ap++;n1++;
//     }
//     *ap=32; ap++;
//     while (*n2){
//         *ap=*n2;
//         ap++;n2++;
//     }
//     *ap=32; ap++;
//     while (*a){
//         *ap=*a;
//         ap++;a++;
//     }
//     puts(all);
// }




//연산
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char M1[70];
//     char M2[70];
//     char M3[100];
//     char *m3;
//     int im=0;
//     int n=1;
//     int a,b;

//     printf("첫번째 숫자를 입력하세요 : ");scanf("%s",M1);
//     printf("두반째 숫자를 입력하세요 : ");scanf("%s",M2);

//     char *m1=&M1[strlen(M1)];
//     char *m2=&M2[strlen(M2)];
//     char *m4;
//     if (strlen(M1)>strlen(M2)){m3=&M3[strlen(M1)]; m4=&M3[strlen(M1)];}
//     else {m3=&M3[strlen(M2)]; m4=&M3[strlen(M2)];}


//     while(m3!=&M3[0]){
//         m3--;
//         if (m1!=&M1[0]) {m1--;a=*m1-48;}
//         else a=0;
//         if (m2!=&M2[0]) {m2--;b=*m2-48;}
//         else b=0;
        
//         *m3=((a+b+im)%10)+48;
//         im=(a+b+im)/10;
//         if (m3==&M3[0] && a+b+im>=10){
//             while (*(m4-1)!=NULL){
//                 *m4=*(m4-1);
//                 m4--;
//             }
//             *m3=im+48;
//         }
//     }
//     printf("%s + %s = %s",M1,M2,M3);
// }
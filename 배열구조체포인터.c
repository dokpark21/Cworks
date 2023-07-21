//4
// #include<stdio.h>
// #include<stdlib.h>
// #define MAX_TERMS 101
// struct{
//     float coef;
//     int expon;
// } terms[MAX_TERMS] ={{8,3},{7,1},{1,0},{10,3},{3,2},{1,0}};
// int avail=6;
// char compare(int a,int b)
// {
//     if(a>b) return '>';
//     else if (a==b) return '=';
//     else return '<';
// }
// void attach(float coef,int expon)
// {
//     if(avail>MAX_TERMS){
//         fprintf(stderr,"항의 개수가 너 많음\n");
//         exit(1);
//     }
//     terms[avail].coef=coef;
//     terms[avail++].expon=expon;
// }
// void poly_add2(int As, int Ae, int Bs, int Be, int *Cs,int *Ce)
// {
//     float tempcoef;
//     *Cs=avail;
//     while(As <= Ae && Bs <= Be)
//         switch(compare(terms[As].expon, terms[Bs].expon)){
//             case '>': attach(terms[As].coef, terms[As].expon); As++; break;
//             case '=': tempcoef= terms[As].coef +terms[Bs].coef;
//                         if (tempcoef) attach(tempcoef, terms[As].expon);
//                         As++; Bs++; break;
//             case '<': attach(terms[Bs].coef,terms[Bs].expon);
//                         Bs++;
//         }
//         for (;As<=Ae; As++) attach(terms[As].coef, terms[As].expon);
//         for (;Bs<Be; Bs++) attach(terms[Bs].coef,terms[Bs].expon);
//         *Ce= avail-1;
// }
// int main()
// {
//     int Cs,Ce;
//     poly_add2(0,2,3,5,&Cs,&Ce);
//     for (int i=0;i<10;i++) printf("%3.0f",terms[i].coef);
// }




//5
// #include<stdio.h>
// void new_arr(int *p,int (*f_p)[3])
// {
//     int r=0;
//     int c=0;
//     while(*p)
//     {
//         if (*p!=0) {*f_p[0]=r; *f_p[1]=c; *f_p[2]=*p; f_p++;}
//         printf("%d %d %d\n",r,c,*p);
//         c++; p++;
//         if (c==3) {r++; c=0;}
//     }
// }
// int main()
// {
//     int l[9]={2,3,0,8,9,1,7,0,5};
//     int f_l[20][3];
//     int *p;
//     int (*f_p)[3];
//     p=l;
//     f_p=f_l;
//     new_arr(p,f_p);
//     for (int i=0;i<7;i++)
//         printf("%d %d %d\n",f_l[i][0],f_l[i][1],f_l[i][2]);
// }


//5
// #include <stdio.h>
// #define MAX_TERMS 101

// typedef struct {
// 	int row;
// 	int col;
// 	int value;
// } element;


// typedef struct SparseMatrix {
// 	element data[MAX_TERMS];
// 	int rows; // 행의 개수
// 	int cols; // 열의 개수
// 	int terms; // 항의 개수
// } SparseMatrix;


// SparseMatrix matrix_transpose2(SparseMatrix a) {
// 	SparseMatrix b;
// 	int bindex; // 행렬 b에서 현재 저장 위치
// 	b.rows = a.rows;
// 	b.cols = a.cols;
// 	b.terms = a.terms;
// 	if (a.terms > 0) {
// 		bindex = 0;
// 		for (int c = 0; c < a.cols; c++) {
// 			for (int i = 0; i < a.terms; i++) {
// 				if (a.data[i].col == c) {
// 				b.data[bindex].row = a.data[i].col;
// 				b.data[bindex].col = a.data[i].row;
// 				b.data[bindex].value = a.data[i].value;
// 				bindex++;
// 				}
// 			}
// 		}
// 	}
// 	return b;
// }

// void matrix_print(SparseMatrix a) {
// 	printf("====================\n");
// 	for (int i = 0; i<a.terms; i++) {
// 		printf("(%d, %d, %d) \n", a.data[i].row, a.data[i].col, a.data[i].value);
// 	}
// 	printf("====================\n");
// }


// int main(void) {
// 	SparseMatrix m = {
// 		{{0,3,7},{1,0,9},{1,5,8},{3,0,6},{3,1,5},{4,5,1},{5,2,2}},
//         6,
// 		6,
// 		7
// 	};
// 	SparseMatrix result;
// 	result = matrix_transpose2(m);
// 	matrix_print(result);
// 	return 0;
// }




//6
// #include<stdio.h>
// #define ROWS 3
// #define COLS 3
// //C=A+B
// void sparse_matrix_add1(int A[ROWS][COLS],int B[ROWS][COLS],int C[ROWS][COLS])
// {
//     int r,c;
//     for (r=0;r <ROWS; r++)
//     {
//         for (c=0; c<COLS; c++)
//         {
//             C[r][c]=A[r][c]+B[r][c];
//         }
//     }
// }
// void main()
// {
//     int array1[ROWS][COLS]= {{2,3,0},{8,9,1},{7,0,5}};
//     int array2[ROWS][COLS]= {{1,0,0},{1,0,0},{1,0,0}};
//     int array3[ROWS][COLS];
//     sparse_matrix_add1(array1,array2,array3);

//     for (int i=0; i<ROWS; i++)
//     {
//         for (int j=0; j<ROWS; j++)
//         {
//             printf("%3d",array3[i][j]);
//         }
//         printf("\n");
//     }
// }



//문제 1
// #include<stdio.h>
// #define ROWS 3
// #define COLS 4
// void array_jun(int array1[ROWS][COLS],int array2[COLS][ROWS])
// {
//     int r,c;
//     for (r=0;r<ROWS;r++)
//         for (c=0;c<COLS;c++)
//         {
//             array2[c][r]=array1[r][c];
//         }
// }
// int main()
// {
//     int array1[ROWS][COLS]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int array2[COLS][ROWS];
//     array_jun(array1,array2);
//     for (int i=0; i<COLS;i++){
//         for (int k=0;k<ROWS;k++)
//         {
//             printf("%d ",array2[i][k]);
//         }
//         printf("\n");
//     }
// }




//문제 2 
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int s_n=0; //저장된 사람의 수
// typedef struct _person
// {
//     char *name;
//     char *phone;
//     int age;
// } PERSON;
// void input(PERSON *list)
// {
//     int i;
//     char im_name[20];
//     char im_phone[20];
//     if (s_n==100) { printf("더 이상 저장이 불가능 합니다\n\n"); return;}
//     printf("영어 이름 : ");scanf("%s",im_name);
//     list->name=(char *)malloc(strlen(im_name)+1);
//     strcpy(list->name,im_name);
//     printf("전화번호(xxx-xxxx-xxxx) : "); scanf("%s",im_phone);
//     list->phone=(char *)malloc(strlen(im_phone)+1);
//     strcpy(list->phone,im_phone);
//     printf("나이 : ");scanf("%d",&list->age);
//     s_n++;
// }
// void delete(PERSON *list)
// {
//     char d_name[20];
//     int i;
//     printf("삭제하고 싶은 사람의 이름을 입력하세요 : ");scanf("%s",d_name);
//     for (i=0;i<s_n;i++)
//     {
//         if (strcmp(list->name,d_name)==0){
//             for (int k=i;k<s_n;k++)
//             {
//                 strcpy(list->name,(list+1)->name); strcpy(list->phone,(list+1)->phone); list->age=(list+1)->age;
//                 list++;
//             }
//             s_n--;
//         }
//         list++;
//     }
// }
// void list_print(PERSON *list)
// {
//     int i=0;
//     for (i=0;i<s_n;i++)
//     {
//         printf("[%d] : %s %s %d\n",i,list->name,list->phone,list->age);
//         list++;
//     }
// }
// void list_sort(PERSON *list)
// {
//     PERSON im;
//     for (int i=0;i<s_n;i++)
//     {
//         for (int k=i+1;k<s_n;k++)
//         {
//             if (strcmp(list[i].name,list[k].name)>0) {im=list[k]; list[k]=list[i]; list[i]=im;}
//         }
//     }
// }
// int main()
// {
//     PERSON list[100];
//     int n;
//     while(1)
//     {
//         printf("1. 등록\n2. 삭제\n3. 리스트 출력\n4. 정렬\n5. 종료\n");
//         printf("====> ");scanf("%d",&n);
//         if (n==5) break;
//         switch(n)
//         {
//             case 1: input(&list[s_n]); break;
//             case 2: delete(&list[0]); break;
//             case 3: list_print(&list[0]); break;
//             case 4: list_sort(&list[0]); break;
//             default : printf("올바른 번호를 입력하세요\n\n");
//         }
//     }
// }



//두개의 다항식 더해주기
// #include<stdio.h>
// #include<stdlib.h>
// #define MAX_TERMS 101
// struct{
//     float coef;
//     int expon;
// } terms[MAX_TERMS]={{9,4},{8,1},{5,0},{11,5},{3,4},{2,1},{1,0}};
// int avail=7;
// char compare(int a,int b)
// {
//     if (a>b) return '>';
//     else if (a<b) return '<';
//     else return '=';
// }

// void attach(float coef,int expon)
// {
//     if (avail>MAX_TERMS) {printf("저장 공간이 꽉 차있습니다\n"); return;}
//     terms[avail].coef=coef;  terms[avail].expon=expon;
//     avail++;
// }
// void add(int AS, int AE, int BS, int BE)
// {

//     while(AS<=AE && BS<=BE){
//         switch(compare(terms[AS].expon,terms[BS].expon))
//         {
//             case '>' : attach(terms[AS].coef,terms[AS].expon); AS++; break;
//             case '<' : attach(terms[BS].coef,terms[BS].expon); BS++; break;
//             case '=' : attach(terms[AS].coef+terms[BS].coef, terms[BS].expon); AS++; BS++; break;
//         }
//     }
//     if (AS>AE) {
//         while(BS<=BE){
//             attach(terms[BS].coef,terms[BS].expon);
//             BS++;
//         }
//     }
//     else if(BS>BE) {
//         while (AS<=AE){
//             attach(terms[AS].coef,terms[AS].expon);
//             AS++;
//         }
//     }
// }
// int main()
// {
//     int CE,CS;
//     CS=avail;
//     add(0,2,3,6);
//     CE=avail-1;
//     for (int i=CS; i<=CE; i++)
//     {
//         printf("%3.1f %d\n",terms[i].coef,terms[i].expon);
//     }
// }


//얘제 8 
// #include<stdio.h>

// void swap(int *px, int *py)
// {
//     int tmp;
//     tmp = *px;
//     *px=*py;
//     *py= tmp;
// }

// int main()
// {
//     int a=1, b=2;
//     printf("swap을 호출하기 전 : a=%d, b=%d\n",a,b);
//     swap(&a,&b);
//     printf("swap을 호춣한 다음: a=%d, b=%d\n",a,b);
// }



//예제 9
// #include<stdio.h>

// typedef struct{
//     int x;
//     int y;
// } PointType;
// int get_line_parameter(PointType p1, PointType p2, float *slope, float *yintercept)
// {
//     if (p1.x ==p2.x) return(-1);
//     else {
//         *slope = (float)(p2.y-p1.y)/ (float)(p2.x-p1.x);
//         *yintercept = p1.y - (*slope)*p1.x;
//         return (0);
//     }
// }
// int main()
// {
//     PointType pt1= {3,3}, pt2 = {6,6};
//     float s,y;
//     if (get_line_parameter(pt1, pt2,&s,&y)==-1){
//         printf("error\n");
//     }
//     else{
//         printf("기울기는 %f, y절편은 %f\n",s,y);
//     }
// }


//예제 10
// #include<stdio.h>
// int main()
// {
//     int num=123;
//     float num_f=56.6;
//     char text_c='M';

//     void *void_p;
//     void_p = &num;
//     printf("int %d\n",*((int *) void_p));

//     void_p = &num_f;
//     printf("float %f\n", *((float *) void_p));

//     void_p = &text_c;
//     printf("char %c\n", *((char *) void_p));
//     return 0;
// }



//문제 3
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int s_n=0;
// typedef enum {INT=1,DOUBLE=2,STRING=3} ENUMTYPE;
// typedef struct _sData
// {
//     ENUMTYPE type;
//     void *vp;
// } DATA;
// void input(DATA *list)
// {
//     int n;
//     int im_int;
//     double im_float;
//     char im_char[20];
//     if (s_n>99) {printf("더 이상 저장할 공간이 없습니다\n"); return;}
//     printf("자료의 종류를 입력하세요[정수 :1, 실수 : 2, 문자열 : 3] = >");scanf("%d",&n);
//     switch(n)
//     {
//         case 1: list[s_n].type=1; printf("정수를 입력하세요 : ");scanf("%d",&im_int); list[s_n].vp=(int *)malloc(sizeof(im_int)+1); *((int *)list[s_n].vp)=im_int; break;
//         case 2: list[s_n].type=2; printf("실수를 입력하세요 : ");scanf("%lf",&im_float); list[s_n].vp=(double *)malloc(sizeof(im_float)+1); *((double *)list[s_n].vp)=im_float; break;
//         case 3: list[s_n].type=3; printf("문자열을 입력하세요 : ");scanf("%s",im_char); list[s_n].vp=(char *)malloc(strlen(im_char)+1); strcpy(list[s_n].vp,im_char); break;
//     }
//     s_n++;
// }
// void delete(DATA *list)
// {
//     DATA im;
//     int n;
//     printf("삭제할 인덱스를 입력하세요 : ");scanf("%d",&n);
//     for (int i=n;i<s_n;i++)
//     {
//         list[n]=list[n+1];
//     }
//     s_n--;
// }
// void list_print(DATA *list)
// {
//     for (int i=0;i<s_n;i++)
//     {
//         if (list[i].type==1) printf("%d : 정수[%d]\n",i,*((int *)list[i].vp));
//         else if (list[i].type==2) printf("%d : 실수[%lf]\n",i,*((double *)list[i].vp));
//         else {printf("%d : 문자열[",i);
//             int index=0;
//             while(*((char *)list[i].vp+index)){
//                 printf("%c",*((char *)list[i].vp+index));
//                 index++;
//         }
//         printf("]\n");
        
//         }
//     }
// }
// int main()
// {
//     int n;
//     DATA list[100];
//     while(1){
//     printf("1. 자료 등록\n2. 자료 삭제\n3. 자료 출력\n4. 종료\n");
//     printf("===> ");scanf("%d",&n);
//     if (n==4) break;
//     switch(n)
//     {
//         case 1: input(&list[0]); break;
//         case 2: delete(&list[0]); break;
//         case 3: list_print(&list[0]); break;
//         default : printf("올바른 번호를 입력하세요\n\n");
//     }
//     }
// }




//문제 4
#include<stdio.h>
#include<stdlib.h>
double add(double x, double y)
{
 return x+y;
}
double sub(double x,double y)
{
 return x-y;
}
double mul(double x, double y)
{
 return x*y;
}
double dev(double x, double y)
{
 return x/y;
}
int main()
{
    int n;
    double result;
    double (*pf[4]) (double x,double y)={add, sub, mul, dev};
    double x,y;
    while (1)
    {
        printf("=== 메뉴\n1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 종료\n");
        printf("===> ");scanf("%d",&n);
        if(n==5) break;
        printf("2개의 정수를 입력하세요 : "); scanf("%lf%lf",&x,&y);
        switch(n)
        {
            case 1: printf( "연산 결과 : %.0lf\n",(*pf[0]) (x,y)); break;
            case 2: printf( "연산 결과 : %.0lf\n",(*pf[1]) (x,y)); break;
            case 3: printf( "연산 결과 : %.0lf\n",(*pf[2]) (x,y)); break;
            case 4: printf( "연산 결과 : %.1lf\n",(*pf[3]) (x,y)); break;
            default : printf("올바른 번호를 입력하세요\n\n");
        }
    }
}
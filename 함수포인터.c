// #include<stdio.h>
// void KK1() {puts("야호");}
// void KK2() {puts("그래");}
// int main()
// {
//     void (*ap)();
//     ap=KK1;
//     ap();
// }


// #include<stdio.h>
// void KK1( int a ){printf("형 나이=%d살\n",a);}
// void KK2( int b){printf("동생나이=%d살\n",b);}
// int main()
// {
//     void (*ap)(int);
//     ap=KK2;
//     ap(25);
// }



// #include<stdio.h>
// int func(int n1, int n2)
// {
//     printf("%d %d\n",n1,n2);
//     return n1+n2;
// }
// int main()
// {
//     int (*fp)(int,int);

//     fp=func;
//     printf("%d\n",fp(10,20));
//     printf("%x %x\n",fp,func);
// }


// #include<stdio.h>
// int KK1(int a, int b){return(a+b);}
// int KK2(double a, double b){return((int)a+b);}
// int main()
// {
//     int (*ap)(int,int);
//     int (*bp)(double,double);
//     ap=KK1;
//     bp=KK2;
//     printf("%d\n",ap(10,20));
//     printf("%d\n",bp(10.5,20.5));
// }


// #include<stdio.h>
// // typedef void(*fp1)();
// void KK1() { puts("야호"); }
// void KK2() { puts("그래"); }
// int main()
// {
//     void (*ap[2])();
//     ap[0] = KK1; ap[1]=KK2;
//     ap[0]();
//     ap[1]();
// }



// #include<stdio.h>
// int KK1(int a,int b) {return(a-b);}
// int KK2(int a,int b) {return(b-a);}
// int main()
// {
//     int (*ap[2])(int,int);
//     int a=3,b=5,c;
//     ap[0]=KK1; ap[1]=KK2;
//     c = a>b? ap[0](a,b): ap[1](a,b);
//     printf("%d\n",c);
// }


//1
// #include<stdio.h>
// int KK1(int a,int b) {return(a+b);}
// int KK2(int a,int b) {return(a-b);}

// int main()
// {
//     int a=5,b=3;
//     int (*ap)(int,int)=KK1;
//     printf("%d",ap(a,b));
//     int (*bp)(int,int)=KK2;
//     printf("\n%d",bp(a,b));
// }



//2
#include<stdio.h>
double add(double x,double y) {return x+y;}
double sub(double x,double y) {return x-y;}
double mul(double x,double y) {return x/y;}
double div(double x,double y) {return x*y;}
int main()
{
    double(*fp[4])(double x,double y)={add,sub,mul,div};
    while (1)
    {
        int a;
        double n1,n2;
        printf("========\n0. 덧셈\n1. 뺄셈\n2. 곱셈\n3. 나눗셈\n4. 종료\n========");
        printf("\n메뉴를 선택하시오 : ");scanf("%d",&a);
        if (a==4) break;
        printf("2개의 정수를 입력하세요 : ");scanf("%lf %lf",&n1,&n2);
        switch (a)
        {
        case 0: printf("연산결과 = %.1f\n",fp[0](n1,n2)); break;
        case 1: printf("연산결과 = %.1f\n",fp[1](n1,n2)); break;
        case 2: printf("연산결과 = %.1f\n",fp[2](n1,n2)); break;
        case 3: printf("연산결과 = %.1f\n",fp[3](n1,n2)); break;
        default: printf("올바른 번호를 입력하세요\n");
        }
    }
}
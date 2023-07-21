// #include<stdio.h>
// int Add(int val);
// int num=1;

// int main(void)
// {
//     int num=5;
//     printf("num: %d \n",Add(3));
//     printf("num : %d\n",num+9);
//     return 0;
// }

// int Add(int val)
// {
//     int num=9;
//     num += val;
//     return num;
// }


// #include<stdio.h>
// int main(void)
// {
//     int num=1;

//     if (num==1)
//     {
//         // int num=7;
//         num+=10;
//         printf("if문 내 지역변수 num: %d \n",num);
//     }
//     printf("main 함수 내 지역변수 num: %d \n",num);
//     return 0;
// }


// #include<stdio.h>
// int sum(int a,int b);
// int main()
// {
//     int a=8,b=4;
//     sum(a,b);
// }
// int sum(int a,int b)
// {
//     int c;
//     c=a+b;
//     printf("%d + %d = %d",a,b,c);
//     return c;
// }


// #include<stdio.h>
// int mtlabs(int val)
// {
//     if (val>0) return val;
//     else return -val;
// }
// int main()
// {
//     printf("%d",mtlabs(-5));
// }


// #include<stdio.h>
// int mymax(int a,int b)
// {
//     if (a>b) return a;
//     else return b;
// }
// int main()
// {
//     printf("%d",mymax(50,49));
// }


// #include<stdio.h>
// int mymin(int a1,int a2,int a3,int a4)
// {
//     int num=a1;
//     if (num>a2) num=a2;
//     if (num>a3) num=a3;
//     if (num>a4) num=a4;
//     return num;
// }
// int main()
// {
//     int a1,a2,a3,a4;
//     printf("4개의 수를 입력 하세요 : ");scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
//     printf("%d",mymin(a1,a2,a3,a4));
// }


// #include<stdio.h>
// float radius(float a1)
// {
//     float c1,c2;
//     c1=a1*a1*3.14;
//     return c1;
// }
// float radius2(float a1)
// {
//     float c2;
//     c2=a1*2*3.14;
//     return c2;
// }
// int main(){
//     float a1;
//     float c1,c2;
//     printf("원의 반름름을 입력하세요 : ");scanf("%f",&a1);
//     c1=radius(a1);
//     c2=radius2(a1);
//     printf("원의 넓이 : %.2f",c1);
//     printf("\n원의 둘레 : %.2f",c2);
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int chk(int num,int a)
// {
//     if (num==a) printf("맞았습니다\n");
//     else printf("틀렸습니다\n");
// }
// int main()
// {
//     int num,a;
//     char a1;
//     while (1)
//     {
//         srand(time(NULL));
//         num=rand()%2;
//         printf("동전을 던졌습니다\n");
//         printf("사용자 : ");scanf("%d",&a);
//         chk(num,a);
//         printf("계속 하시겠습니까?(y/n)"); scanf(" %c",&a1);
//         if (a1=='y') continue;
//         else break;
//     }   
// }


// #include<stdio.h>
// int sum(int a,int b)
// {
//     int sum=0;
//     for (int i=a;i<=b;i++){
//         sum+=i;
//     }
//     return sum;
// }
// int main()
// {
//     printf("합 = %d",sum(1,10)+sum(1,3));
// }

// #include<stdio.h>
// int grade(int score)
// {
//     switch (score/10)
//     {
//     case 10 :
//     case 9 : printf("A학점\n"); break;
//     case 8 : printf("B학점\n"); break;
//     case 7 : printf("C학점\n"); break;
//     case 6 : printf("D학점\n"); break;
//     default : printf("F학점\n");
//     }
// }
// int main()
// {   
//     int score;
//     printf("성적을 입력하세요 : ");scanf("%d",&score);
//     grade(score);
// }



// #include<stdio.h>
// int my_calc(int a, char b, int a1)
// {
//     int c;
//     switch (b)
//     {
//     case '+':c=a+a1 ; break;
//     case '-':c=a-a1 ; break;
//     case '*':c=a*a1 ; break;
//     case '/':c=a/a1 ; break;
//     default : puts("올바른 부등호를 입력하세요 : ");
//     }
//     return c;
// }
// int main()
// {
//     printf("%d",my_calc(4,'*',2));
// }


// #include<stdio.h>
// int grade(int num)
// {
//     switch (num/10)
//     {
//      case 10:
//      case 9: 
//      case 8 : printf("최고 입니다!!!\n"); break;
//      case 7 : printf("좀 더 노력하세요~\n"); break;
//      default : puts("안됬군요 재수강 입니다ㅠㅠㅠ");
//     }
// }
// int main()
// { 
//     int num;
//     printf("점수를 입력하세요 : "); scanf("%d",&num);
//     printf("=>");
//     grade(num);
// }


// #include<stdio.h>
// int chk(int a,int b,int c)
// {
//     if ((a+b+c)/3>60 && a>40 && b>40 && c>40) return 1;
//     else return 0;
// }
// int main()
// {
//     int a,b,c;
//     printf("국어 영어 수학 점수를 입력하세요 : ");scanf("%d%d%d",&a,&b,&c);
//     if (chk(a,b,c)==1) printf("합격입니다");
//     else printf("불합격입니다");
// }


// #include<stdio.h>
// int chk(int a)
// {   
//     int sum=0;
//     for (int i=2; i<=i-1; i++){
//         if (a%i==0) sum+=1;
//     }
//     if (sum==0) return 1;
//     else return 0;
// }
// int main()
// {
//     if(chk(15)==1) printf("소수");
//     else printf("소수 아님");
// }



// #include<stdio.h>
// int chk(int a, int b)
// {
//     int sum=0;
//     for (a;a<=b;a++){
//         sum=0;
//         for (int i=2;i<=a-1;i++){
//             if (a%i==0) sum+=1;
//         }
//         if (a!=1 && sum==0) printf("%d ",a);
//     }
// }
// int main()
// {
//     int a,b;
//     printf("시작값을 입력해주세요 : ");scanf("%d",&a);
//     printf("끝 값을 입력해주세요 : ");scanf("%d",&b);
//     chk(a,b);
// }



// #include<stdio.h>
// char is_uppper(char a)
// {
//     if ((int)a >=65 && (int)a<=90) printf("true");
//     else printf("false");
// }
// char main()
// {
//     is_uppper('q');
// }

// #include<stdio.h>
// char trans(char a)
// {
//     if ((int)a >=65 && (int)a<=90){
//         a+=32;
//         printf("%c",a);
//     }
//     else{
//         a-=32;
//         printf("%c",a);
//     }
// }
// char main()
// {
//     trans('A');
// }


// #include<stdio.h>
// void disp( int s=1)
// {
//     printf("당신은 %s입니다. \n",(s==1 ? "남자":"여자"));
// }
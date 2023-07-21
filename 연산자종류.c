// #include<stdio.h>
// int main(void)
// {
//     int num1=10;
//     int num2=num1-- +2; //--가 뒤어 붙으면 a에서 1 빼주고 b에는 영향X 뒤에 다른연산은 적용
//     num2++;
//     printf("num1: %d \n", num1);
//     printf("num2: %d \n", num2);
//     return 0;
// }


// #include<stdio.h>
// int main(void)
// {
//     int a1,a2,a3,a4;
//     a1=a2=a3=a4=0;
//     a1=a1+1;  
//     a2++;
//     a3=++a2 + a1;
//     a2+=a3++;
//     a4=a1+a2+a3;
//     printf("%d %d %d %d",a1,a2,a3,a4);
// }


// #include<stdio.h>
// int main(void)
// {
//     int x=1;
//     printf("x=%d\n",x++);
//     printf("x=%d\n",x++);
//     printf("x=%d\n",++x);
//     printf("x=%d\n",x--);
//     printf("x=%d\n",x--);
//     printf("x=%d\n",--x);
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,e,f,g,h;
//     a=b=c=d=e=f=g=h=4;
//     a++; ++b; c--; --d;
//     g= e++ + --f;
//     printf("a=%d b=%d\n",a,b);
//     printf("c=%d d=%d\n",c,d);
//     printf("e=%d f=%d\n",e,f);
//     printf("g=%d",g);
//     printf("h=%d \n", h++);
//     printf("h=%d\n",h);
// }


// #include<stdio.h>
// int main()
// {
//     int k1,k2,k3,s;
//     k1=10;k2=20;k3=30;
//     k1+=3;
//     k2-=4;
//     k3*=2;
//     s=(++k1 + k2--)*k3;
//     printf("%d %d %d %d",k1,k2,k3,s);
// }


// #include<stdio.h>
// int main(void)
// {
//     int num;
//     printf("정수 :");
//     scanf("%d",&num);
//     num=((num+5)/10)*10;
//     printf("%d",num);
// }


// #include<stdio.h>
// int main(void)
// {
//     int num;
//     printf("정수 : ");scanf("%d",&num);
//     num=(num/10)*10;
//     printf("=> %d",num);
// }


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("정수 : ");scanf("%d",&num);
//     num=((num/100)+1)*100;
//     printf("=> %d",num);
// }


// #include<stdio.h>
// #include<math.h>
// int main(void)
// {
//     float n=123.45678;
//     int k;
//     n=(int)(n*10)/10.0;

//     printf("\n %f",n);
// }


// #include<stdio.h>
// #include<math.h>
// int main(void)
// {
//     float n=123.45678;
//     int k;
//     n=(float)((int)(n+0.9));
//     printf("\n %f",n);
// }


//관계 논리 연산자
// #include<stdio.h>
// int main(void)
// {
//     int a=0, b=1, c=2, d=3;
//     int n1,n2,n3,n4;
//     n1=a > b;
//     n2=c < d || b++;
//     n3=2 < !a +c;
//     n4= d>=b * c;
//     printf("n1=%d n2=%d n3=%d n4=%d\n",n1,n2,n3,n4);
// }


// #include<stdio.h>
// int main(void)
// {
//     int num1=10;
//     int num2=12;
//     int result1,result2,result3;
//     result1=(num1==10 && num2==12);
//     result2=(num1<12 || num2>12);
//     result3=(!num1);
//     printf("result1: %d\n",result1);
//     printf("result2: %d\n",result2);
//     printf("result3: %d",result3);
// }

// #include<stdio.h>
// int main(void)
// {
//     char m,n;
//     m=74-90/10;
//     putchar(m++);
//     n=m;
//     putchar(--n);
// }
//putchar은 숫자를 아스키코드로 바꿔줌


// #include<stdio.h>
// int main(void)
// {
//     char ch1='A', ch2=65;
//     int ch3='Z', ch4=90;
//     printf("%c %d \n",ch1,ch2);
//     printf("%c %d \n",ch2,ch2);
//     printf("%c %d \n",ch3,ch3);
//     printf("%c %d \n",ch4,ch4);
//     return 0;
// }


// #include<stdio.h>
// int main(void)
// {
//     char m1,m2,m3,m4,m5,m6;
//     m1='X'; m2=89; m3='\n';
//     m4='\a'; m5=m3+32; m6='A';
//     printf("%c%c%c",m1,m2,m3);
//     printf("%c%c%c",m4,m5,m6);
// }
// //\a는 띵하고 소리남


// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//     char m[4];
//     strcpy(m,"ABC");
//     puts("ABC");
//     puts("DEF");
//     puts(m);
//     puts("DEF"+1); //문자하나에 +1은 아스키코드를 1증가시키고 문자열에 +1은 시작위치를 +1한다
//     puts(m+1);
// }


//나열형 연산자
// #include<stdio.h>
// int main(void)
// {
//     enum KT{a=101,b,c,d=50,e,f,g,h}; //값을 안에서 바꿀 수 있다. 바깥에서는 변환X, 숫자를 바꾸면 뒤에 숫자들은 자동으로 1씩 커진다
//     printf("%d\n",e);
// }



// #include<stdio.h>
// int main(void)
// {
//     enum MT{one=1,two,three,five=5,six,ten=10};
//     printf("%d\n",six);
// }


// #include<stdio.h>
// int main(void)
// {
//     enum MT{one=1,two,three,five=5,six,ten=10};
//     enum MT M;
//     M=three;
//     printf("%d\n",M);
// }

//연산자
// #include<stdio.h>
// int main(void)
// {
//     int com,C,eng,math,tot;
//     printf("컴퓨터개론의 점수를 입력하시오 : ");scanf("%d",&com);
//     printf("C프로그래밍언어의 점수를 입력하시오 : ");scanf("%d",&C);
//     printf("영어의 점수를 입력하시오 : ");scanf("%d",&eng);
//     printf("일반수학의 점수를 입력하시오 : ");scanf("%d",&math);
//     tot=com+C+eng+math;
//     printf("=>총점은 %d점\n",tot);
//     printf("  평균점수는 %.1f점 입니다.",(float)(tot/4));
// }

// #include<stdio.h>
// int main(void)
// {   
//     enum KT{a,b,c,d,e};
//     printf("%-5s%11s%13s\n","졍수","제곱값","세제곱값");
//     printf("=====================\n");
//     printf("%4d%8d%9d\n",a,a*a,a*a*a);
//     printf("%4d%8d%9d\n",b,b*b,b*b*b);
//     printf("%4d%8d%9d\n",c,c*c,c*c*c);
//     printf("%4d%8d%9d\n",d,d*d,d*d*d);
// }


// #include<stdio.h>
// int main(void)
// {
//     int num;
//     printf("정수를 입력하시오 : ");scanf("%d",&num);
//     printf("천의자리 : %d\n",num/1000);
//     num-=(num/1000)*1000;
//     printf("백의자리 : %d\n",num/100);
//     num-=(num/100)*100;
//     printf("십의자리 : %d\n",num/10);
//     num-=(num/10)*10;
//     printf("일의자리 : %d\n",num);
// }



// #include<stdio.h>
// int main(void)
// {
//     int num,tot=0;
//     printf("정수를 입력하시오 : ");scanf("%d",&num);
//     printf("만의자리 : %d\n",num/10000);
//     tot+=num/10000;num-=(num/10000)*10000;
//     printf("천의자리 : %d\n",num/1000);
//     tot+=num/1000;num-=(num/1000)*1000;
//     printf("백의자리 : %d\n",num/100);
//     tot+=num/100;num-=(num/100)*100;
//     printf("십의자리 : %d\n",num/10);
//     tot+=num/10;num-=(num/10)*10;
//     printf("일의자리 : %d\n",num);tot+=num;
//     printf("합=%d",tot);
// }



// #include<stdio.h>
// int main(void)
// {
//     int ascii;
//     printf("문자를 입력하세요 : ");scanf("%c",&ascii);
//     printf("=>%c의 ASCII 코드 값은 %d입니다",ascii,ascii);
// }


// #include<stdio.h>
// #include<string.h>
// int main(void)
// {
//     char word[20]; int i;
//     printf("단어를 입력 하세요 : ");scanf("%s",word);
//     for (i=0;i<strlen(word);i++)
//         puts(word+i);
// }



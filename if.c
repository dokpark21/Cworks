// #include<stdio.h>
// int main()
// {
//     int num;
//     num =-2;
//     if(num<0) printf("음수");
//     printf("입니다.");
// }


// #include<stdio.h>
// int main()
// {
//     int num1=2, num2=3;
//     if(num1<num2)
//     {
//         printf("대한");
//         printf("민국");
//     }
//     puts("호호");
// }


// #include<stdio.h>
// int main(void)
// 
//     int num1=2,num2=3;
//     if(num1>num2)
//         printf("대한"); //if문 다음 한줄만 if문에 포함
//         printf("민국");
//     puts("호호");
// }


// #include<stdio.h>
// int main()
// {
//     int score = 40;
//     if(score>=60) puts("합격");
//     else  puts("불합격");
//     puts("안녕");
// }


// #include<stdio.h>
// int main()
// {
//     int num1=2,num2=3, max=0;
//     if(num1>num2){
//         puts("num1이 크다");
//         max=num1;
//     }
//     else{
//         puts("num2가 크거나 같다");
//         max=num2;}
//     printf("큰 값=%d\n",max);
// }


// #include<stdio.h>
// int main()
// {
//     if(true){
//         puts("참입니다~~");
//     }
//     if(false){
//         puts("거짓입니다~~");
//     }
//     else{
//         puts("if~else & false");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int num=120;
//     if(num<0)
//     {
//         puts("0 미만");
//     }
//     else
//     {
//         if(num<100)
//         {
//             puts("0이상 100 미만");
//         }
//         else{
//             puts("100이상");
//         }
//     }
// }


//삼항 연산자
// #include<stdio.h>
// int main()
// {
//     int num1=50,num2=100;
//     int big, diff;

//     big=(num1>num2)? num1:num2;
//     printf("%d",big);

//     diff=(num1>num2)? num1-num2: num2-num1;
//     printf("%d",diff);
// }


//관계 연산자
// #include<stdio.h>
// int main()
// {
//     int x=1;
//     int y=2;
//     int z=3;
//     if(x==y) printf("x와 y는 같습니다\n");
//     if(x!=y) printf("x와 y는 같지 않습니다\n");
//     if(x>y) printf("x는 y보다 큽니다\n");
//     if(x<y) printf("x는 y보다 작습니다\n");
//     if(x>=y) printf("x는 y보다 크거나 같습니다\n");
//     if(x<=y) printf("x는 y보다 작거나 같습니다\n");
// }


//논리연산자
// #include<stdio.h>
// int main()
// {
//     int x=5;
//     int y=2;
//     if(x>0 && x<10)
//     {
//         printf("x는 0보다 크고 10보다 작다\n");
//     }
//     if(x<0 || y==2)
//     {
//         printf("x는 0보다 작거나 y는 2이다\n");
//     }
//     if(!(x>y))
//     {
//         printf("x는 y보다 크지 않다\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int score=82;
//     if(score>=80 && score<=89) printf("B학점입니다.");
//     if(!(score>=80 && score <=90)) printf("B학점이 아닙니다.");
// }



// #include<stdio.h>
// int main()
// {
//     int score=2;
//     if(!score)
//     printf("0점입니다.");
//     else
//     printf("0점이 아닙니다.");
// }


// #include<stdio.h>
// int main()
// {
//     int kor=95,eng=80;
//     int total,average;

//     total=kor+eng;
//     average=total/2;

//     if(average>=80) printf("합격!");
//     else printf("불합격!");
// }


// #include<stdio.h>
// int main()
// {
//     int kor=95;
//     int eng=80;
//     int tot,avr;
//     tot=kor+eng;
//     avr=tot/2;
//     if(avr>=90) printf("A학점\n");
//     else if (avr>=80) printf("B학점\n");
//     else if (avr>=70) printf("C학점\n");
//     else if (avr>=60) printf("D학점\n");
//     else printf("F학점");
// }


// #include<stdio.h>
// int main()
// {
//     int num_a=100, num_b=200;
//     printf("큰값= %d",(num_a>num_b) ? num_a : num_b);
// }


// #include<stdio.h>
// int main()
// {
//     char w_m;
//     w_m='m';
//     printf("성별=%s\n",(w_m=='m') ? "남자":"여자");
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("정수를 입력 하세요 : "); scanf("%d",&a);
//     printf("%d은 %s입니다.",a,(a>0)? "양수":"음수");
// }


// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("나이를 입력 하세요 : "); scanf("%d",&age);
//     printf("관람료는 %s입니다.",(age<=18) ? "무료":"1500원");
// }


// #include<stdio.h>
// int main()
// {
//     int num1,num2;
//     printf("수를 입력하세요 : "); scanf("%d",&num1);
//     printf("수를 입력하세요 : "); scanf("%d",&num2);
//     printf("=>큰 수는 %d입니다.",(num1>num2) ? num1:num2);
// }


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("정수를 입력 하세요 : "); scanf("%d",&num);
//     printf("=>%d는 %s입니다.",num,(num%2==0) ? "짝수":"홀수");
// }


// #include<stdio.h>
// int main()
// {
//     int height,weight;
//     printf("키를 입력하세요 : ");scanf("%d",&height);
//     printf("몸무게를 입력하세요 : "); scanf("%d",&weight);
//     printf("다이어트 %s~",((float)(height-100)*0.9<weight) ? "필요해보여용" : "안 해도 됩니다");
// }


// #include<stdio.h>
// int main()
// {
//     int kor,eng,mat,avr;  
//     printf("국어 영어 수학 점수를 입력 하세요 : ");scanf("%d %d %d",&kor,&eng,&mat);
//     avr=(kor+eng+mat)/3;
//     printf("%s",(avr>=60) ? "합격입니다!":"불합격 입니다 노력하세요!");
// }


// #include<stdio.h>
// int main()
// {
//     int kor,eng,mat,avr;
//     printf("국어 영어 수학 점수를 입력 하세요 : ");scanf("%d %d %d",&kor,&eng,&mat);
//     avr=(kor+eng+mat)/3;
//     printf("%s",(avr>=60 && kor>40 && eng>40 && mat>40) ? "합격":"불합격");
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("정수를 입력 하세요 : ");scanf("%d",&num);
//     printf("%d는 2와 3의 공배수가 %s",num,(num%2==0 && num%3==0) ? "맞습니다":"아닙니다");
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int num1,num2;
//     char o;
//     printf("%-22s:","첫번쨰수"); scanf("%d",&num1);
//     printf("%-22s:","연산자(+ - * /)");scanf(" %c",&o); //잡아먹힐때 한칸 띄어서 연결하기
//     printf("%-22s:","두번쨰수"); scanf("%d",&num2);
//     printf("=>%d %c %d = ",num1,o,num2);
//     if (o=='+') printf("%d",num1+num2);
//     else if(o=='-') printf("%d",num1-num2);
//     else if(o=='*') printf("%d",num1*num2);
//     else if(o=='/') printf("%d",num1/num2);
// }



// #include<stdio.h>
// int main()
// {
//     int weight;
//     printf("몸무게를 입력하세요 : "); scanf("%d",&weight);
//     if (weight>=81) printf("당신은 heavy급 입니다");
//     else if(weight>=75) printf("당신은 Light heavy급입니다");
//     else if(weight>=71) printf("당신은 Middle급 입니다");
//     else if(weight>=67) printf("당신은 Light Welter급 입니다");
//     else if (weight>=63.5) printf("당신은 Welter급 입니다");
//     else printf("당신은 Light급 입니다");
// }



// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("년도를 입력 하세요 : ");scanf("%d",&year);
//     if (year%4==0 && year%100!=0 || year%400==0) printf("%d년은 윤년입니다",year);
//     else printf("%d는 평년입니다",year);
// }



// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("나이를 입력 하세요 : ");scanf("%d",&age);
//     if (age<=19 && age>=10) printf("10대 입니다");
//     else if(age<=29 && age>=20) printf("20대 입니다");
//     else if(age<=39 && age>=30) printf("30대 입니다");
//     else printf("기타");
// }


// #include<stdio.h>
// int main()
// {   
//     int power;
//     printf("사용량을 입력 하세요 : "); scanf("%d",&power);
//     if (power<=50) printf("전기요금 : %d 원",power*34);
//     else if(power<=100) printf("전기요금 : %d",(50*34)+(power-50)*81);
//     else if(power>100) printf("전기요금 : %d",(50*34)+((50)*81)+(power-100)*122);
// }


// #include<stdio.h>
// int main()
// {
//     char alpha;
//     printf("영문자를 입력하세요 : ");scanf("%c",&alpha);
//     if (alpha>='a' && alpha<='z') printf("소문자 입니다");
//     else if(alpha>='A' && alpha<='Z') printf("대문자 입니다");
//     else printf("올바른 영문자를 입력해주세요");
// }

//+32//소문자가 더 뒤에 있음

// #include<stdio.h>
// int main()
// {
//     char alpha;
//     printf("영문자를 입력하세요 : "); scanf("%c",&alpha);

//     if (alpha<='z' && alpha >='a') printf("=>%c", alpha-32);
//     else if (alpha>='A' && alpha <='Z') printf("=>%c",alpha+32);
// }

////문자는 문자 그대로 비교 숫자는 char로 바꿔줘서 아스키 코드로 판별
// #include<stdio.h>
// int main()
// {
//     char a;
//     printf("문자를 입력하세요 : "); scanf("%c",&a);
//     if (a>='a' && a<='z' || a>='A' && a<='Z') printf("=>문자 입니다");
//     else if((char)(a)>=48 &&(char)(a)<=57) printf("=>숫자 입니다");
//     else printf("특수문자 입니다");
// }


// #include<stdio.h>
// int main()
// {
//     int a,num1,num2,num3;
//     printf("3개의 수 : ");scanf("%d%d%d",&num1,&num2,&num3);
//     if (num1<num2) {a=num1; num1=num2; num2=a;}
//     if (num3>num1) {a=num1; num1=num3; num3=a;} 
//     if (num3>num2) {a=num2; num2=num3; num3=a;}
//     printf("%d %d %d",num1,num2,num3);
// }

// #include<stdio.h>
// int main()
// {

// }



// #include<stdio.h>
// int main()
// {   
//     int a,b;
//     float r;
//     char p;
//     printf("어떤 도형의 면적을 구할까요?(R-사각형,T-삼각형,C-원) : "); p=getchar();
//     if (p=='R') {printf("가로 : "); scanf("%d",&a);  printf("세로 : ");scanf("%d",&b); printf("=> 사각형의 먼젹은 %d",a*b);}

//     if(p=='T') {printf("밑변 : ");scanf(" %d", &a); printf("높이 : ");scanf(" %d", &b); printf("=> 삼각형의 면적 %.1f",(float)(a*b/2));}

//     if(p=='C') {printf("반지름 : ");scanf("%f",&r); printf("==> 원의 넓이는 %.2f 입니다",r*r*3.14);}
// }



// #include<stdio.h>
// int main()
// {
//     int age,height,weight;
//     float cauf;
//     printf("나이를 입력 하세요 : ");scanf("%d",&age);
//     printf("키를 입력 하세요 : ");scanf("%d",&height);
//     printf("체중을 입력 하세요 : ");scanf("%d",&weight);
//     cauf=(float)weight/(((float)height/100)*((float)height/100));
//     if (age<=29 && age>=20 && cauf<=17.9) printf("당신은 저체중 입니다");
//     else if (age<=29 && age>=20 && cauf<=23) printf("당신은 표준체중 입니다");
//     else if (age<=29 && age>=20 && cauf<=30) printf("당신은 과체충 입니다");
//     else if (age<=29 && age>=20 && cauf>30) printf("당신은 비만 입니다");
//      if (age<=29 && age>=20 && cauf<=18.4) printf("당신은 저체중 입니다");
//     else if (age<=39 && age>=30 && cauf<=24) printf("당신은 표준체중 입니다");
//     else if (age<=39 && age>=30 && cauf<=30) printf("당신은 과체충 입니다");
//     else if (age<=39 && age>=30 && cauf>30) printf("당신은 비만 입니다");
//     printf("\n%.1f",cauf);
// }



// #include<stdio.h>
// int main()
// {   int a,b,c,d;
//     printf("숫자 3개를 넣으세요 : ");scanf("%d%d%d",&a,&b,&c);
//     if (a<b) {d=a; a=b; b=d;}
//     if (c>a) {d=a; a=c; c=d;} 
//     if (c>b) {d=b; b=c; c=d;}
//     if (a<b+c) printf("삼각형의 조건이 만족 됩니다");
//     else printf("심각형의 조건이 만족 되지 않습니다");
// }



// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3,num4,num5,num6;
//     printf("6개의 숫자를 입력 하시요"); scanf("%d%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5,&num6);
//     if (num2>num1) num1=num2;
//     if (num3>num1) num1=num3;
//     if (num4>num1) num1=num4;
//     if (num5>num1) num1=num5;
//     if (num6>num1) {num1=num6; printf("가장 큰 값은 %d입니다",num1);}
// }


// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3,num4,num5,a;
//     printf("5개의 숫자를 입력 하세여 : ");scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
//     if (num1<num2) {a=num1; num1=num2; num2=a;}
//     if (num3<num1 && num3>num2) {a=num2; num2=num3; num3=a;}
//     if (num4<num1 && num4>num2) {a=num2; num2=num4; num4=a;}
//     if (num5<num1 && num5>num2) {a=num2; num2=num5; num5=a;}
//     printf("두번쨰로 큰 수는 %d 입니다",num2);
// }



// #include<stdio.h>
// int main()
// {
//     int date,car_n;
//     printf("오늘 날짜는 ? : ");scanf("%d",&date);
//     printf("차량 끝 번호는   : ");scanf("%d",&car_n);
//     if (date%car_n==0) printf("오늘은 운행이 가능합니다");
//     else printf("오늘은 운행이 불가능 합니다");
// }



// #include<stdio.h>
// int main()
// {
//     int year,month,day;
//     printf("생년원일 : ");scanf("%d%d%d",&year,&month,&day);
//     if((year+month+day)/3) printf("우왕 대박");
//     else printf("별로다");
// }




// #include<stdio.h>
// int main()
// {
//     int amount=50;
//     int price=100;
//     int sum;
//     char name[99];//="박상현";
//     sum=amount*price;
//     printf("%10s%10s%10s\n","수량","단가","금약");
//     printf("%10d%10d%10d\n",amount,price,sum);
// }

//8
// #include<stdio.h>
// int main()
// {
//     char book_name[20]="C programming";
//     char tel_no[15]="031-715-8354";
//     int price=5000;
//     printf("%-20s%-20s%-20s\n","책제목","단가","전화번호");
//     printf("%-20s%-20d%-20s\n",book_name,price,tel_no);
// }

//9
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char book_name[20];
//     int price;
//     char tel_no[15];

//     strcpy(book_name,"C prgramming"); //=기호로는 나중에 문자 할당이 불가능 그래서 스트링 카피 사용
//     price=5000;
//     strcpy(tel_no,"031-715-8354");
//     printf("%-20s%-20s%-20s\n","책제목","단가","전화번호");
//     printf("%-20s%-20d%-20s\n",book_name,price,tel_no);
// }

//10
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char book_name[20];
//     int price;
//     char tel_no[15];

//     strcpy(book_name,"C prgramming"); //=기호로는 나중에 문자 할당이 불가능 그래서 스트링 카피 사용
//     price=5000;
//     strcpy(tel_no,"031-715-8354");
//     printf("제  목 : %s\n",book_name);
//     printf("단  가 : %d\n",price);
//     printf("전화 번호 : %s\n",tel_no);
// }

//11
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[15],nick[15],age[15],weight[15],tall[15];
//     strcpy(name,"공유");
//     strcpy(nick,"도깨비");
//     strcpy(age,"500살");
//     strcpy(weight,"70kg");
//     strcpy(tall,"190cm");
//     printf("이 름 : %s\n별 명 : %s\n나 이 : %s\n몸무게 : %s\n키   : %s",name,nick,age,weight,tall);
// }

//12
// #include<stdio.h>
// int main()
// {
//     char name[]="홍길동";
//     int kor,eng,mat,total;
//     float aver;
//     kor=80; eng=85; mat=95;
//     total=kor+eng+mat;
//     aver=total/3;
//     printf("%40s\n\n","===성적표===");
//     printf("%10s%10s%10s%10s%10s%10s\n","이름","국어","영어","수학","총점","평균");
//     printf("%10s%10d%10d%10d%10d%10.2f\n",name,kor,eng,mat,total,aver);
// }

//13
// char:1byte short:2 int:4 long:4 long long:8 float:4 double:8
// #include<stdio.h>
// #include<string.h>
// int main()
// {
    // char s[]="apple";
    // printf("%d ", sizeof(s));
    // printf("%d", strlen(s));
    // char ch=9;
    // int inum=1052;
    // double dnum=3.1415;
    // printf("변수 ch의 크기: %d \n",sizeof(ch));
    // printf("변수 inum의 크기: %d \n",sizeof(int));
    // printf("변수 dnum의 크기 : %d \n",sizeof(dnum));
//     printf("%d",sizeof(long));
//     printf("%d",sizeof(int));
//     printf("%d",sizeof(long long));
//     printf("%d",sizeof(float));
//     printf("%d",sizeof(double));
// }

//1
// #include<stdio.h>
// int main()
// {
//     int kor=100;
//     int eng=90;
//     int mat=100;
//     printf("국어 : %d\n",kor);
//     printf("영어 : %d\n",eng);
//     printf("수학 : %d\n",mat);
// }


// //2
// #include<stdio.h>
// int main()
// {
//     int val_1=5;
//     int val_2=7;
//     int result;
//     result=val_1*val_2;
//     printf("%d * %d = %d",val_1,val_2,result);
// }

//3
// #include<stdio.h>
// int main()
// {
//     int num1=10;
//     int nmu2=3;
//     int result=10/3;
//     int reselt2=10%3;
//     printf("몫 : %d\n나머지 : %d",result,reselt2);
// }

//4
// #include<stdio.h>
// int main()
// {
//     int people=150;
//     int candy=71;
//     printf("%-18s : %d개\n%-18s : %d개", "학생들이 각각 받을 사탕의 수",people/candy,"남는 사탕의 수",people%candy);
// }

//5
// #include<stdio.h>
// int main()
// {
//     float num1,num2,result1,result2,result3,result4;
//     num1=5.0; num2=2.0;
//     result1=num1+num2; result2=num1-num2; result3=num1*num2; result4=num1/num2;
//     printf("%.1f + %.1f = %.1f",num1,num2,result1);
//     printf("\n%.1f - %.1f = %.1f",num1,num2,result2);
//     printf("\n%.1f * %.1f = %.1f",num1,num2,result3);
//     printf("\n%.1f / %.1f = %.1f",num1,num2,result4);
// }

//6
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int num,kor,eng,mat,tot,avr;
//     char name[10];
//     num=1;kor=90;eng=85;mat=95;tot=kor+eng+mat;avr=tot/3;
//     strcpy(name,"avc");
//     printf("%5s%5s%5s%5s%5s%5s%5s\n","num","name","kor","eng","math","tot","avr");
//     printf("%5d%5s%5d%5d%5d%5d%5d",num,name,kor,eng,mat,tot,avr);
// }

//7
// #include<stdio.h>
// int main()
// {
//     char name[]="hong gil dong";
//     char ty='O';
//     int age=18;
//     float tall=165.5;
//     float weight =80.2;
//     printf("%-10s : %s\n","name",name);
//     printf("%-10s : %c\n","blood type",ty);
//     printf("%-10s : %.1f\n","tall",tall);
//     printf("%-10s : %-d\n","age",age);
//     printf("%-10s : %.1f\n","weight",weight);
// }

//8
// #include<stdio.h>
// int main()
// {
//     char product[]="새우깡";
//     char products[]="10개";
//     char unit_p[]="500원";
//     char price[]="5000원";
//     printf("상품명 : %s",product);
//     printf("\n수 량 : %s",products);
//     printf("\n단 가 : %s",unit_p);
//     printf("\n금 액 : %s",price);
// }

//9
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[20], school[20],class[20];
//     float sight;
//     sight=1.5;
//     strcpy(name,"홍길동"); strcpy(school,"서울중학교"); strcpy(class,"2학년 2반 24번");
//     printf("이름 : %s   학교 : %s",name,school);
//     printf("\n%s",class);
//     printf("\n시력 : %.1f",sight);
// }

//11
// #include<stdio.h>
// int main()
// {
//     int A=10;
//     int B=20;
//     printf("%d %d",A,B);
//     int C;
//     C=A;
//     A=B;
//     B=C;
//     printf("\n%d %d",A,B);
// }

//12
// #include<stdio.h>
// int main()
// {
//     int A=10,B=20,C=30;
//     printf("%d %d %d\n",A,B,C);
//     int D,E;
//     D=A; E=B; A=C; B=D; C=E;
//     printf("%d %d %d",A,B,C;)
// }

//1
// #include<stdio.h>
// int main()
// {
//     int A,B,result1,result2;
//     A=20;
//     B=10;
//     result1=A+B;
//     result2=A-B;
//     printf("%d",result1*result2);
// }

//2
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char name[20],num[20],add[20];
//     strcpy(name,"홍길동"); strcpy(num,"010-1111-1234"); strcpy(add,"수지구");
//     printf("이  름 : %s\n전화번호 : %s\n주  소 : %s\n",name,num,add);
// }

//4
// #include<stdio.h>
// int main()
// {
//     int num=200070001;
//     char name[20]="홍 길 동";
//     printf("********************************************\n");
//     printf("*%25s%20s\n","리포트","*");
//     printf("********************************************\n");
//     printf("---------------------\n");
//     printf("|   컴퓨터 공학과   |\n");
//     printf("---------------------\n");
//     printf("학번 : %d\n이름 : %s",num,name);
// }
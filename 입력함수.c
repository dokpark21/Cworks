// #include<stdio.h>
// int main()
// {
//     int num1=3;
//     int num2=4;
//     int result=num1+num2;
//     printf("덧셈 결과: %d \n",result);
//     printf("%d+%d=%d \n",num1,num2,result);
//     printf("%d와 %d의 합은 %d입니다\n",num1,num2,result);
//     return 0;
// }

//2
// #include<stdio.h>
// int main(void)
// {
//     int result,num1,num2;
//     printf("첫 번째 정수를 입력하세요 : ");
//     scanf("%d", &num1);
//     printf("두 번째 정수를 입력하세여 : ");
//     scanf("%d", &num2);
//     result=num1+num2;
//     printf("%d + %d = %d \n",num1,num2,result);
//     return 0;
// }

//3
// #include<stdio.h>
// int main(void)
// {
//     int result;
//     int num1,num2,num3;
//     printf("세 개의 정수를 입력 하세요: ");
//     scanf("%d%d%d", &num1, &num2,&num3);
//     result=num1+num2+num3;
//     printf("%d + %d + %d = %d\n",num1,num2,num3,result);
//     return 0;
// }

//1
// #include<stdio.h>
// int main(void)
// {
//     int result,num1,num2;
//     printf("가로의 길이를 입력하세요 : ");
//     scanf("%d", &num1);
//     printf("세로의 길이를 입력하세요 ; ");
//     scanf("%d",&num2);
//     result=num1*num2;
//     printf("=>넓이는 %d 입니다",result);
// }

//2
// #include<stdio.h>
// int main(void)
// {
//     int pencil,pen,price;
//     printf("연필 = 1000원\n 펜 = 2000원\n\n\n");
//     printf("연필은 몇 개를 구입하세겠습니까? ");
//     scanf("%d",&pencil);
//     printf("펜을 몇 개를 구입하시겠습니까? ");
//     scanf("%d",&pen);
//     pencil=pencil*1000;
//     pen=pen*2000;
//     price=pencil+pen;
//     printf("총 가격은 %d원 입니다",price);
// }

//3
// #include<stdio.h>
// int main(void)
// {
//     int kor,eng,mat,result;
//     printf("국어 영어 수학 점수를 입력하시오 : ");
//     scanf("%d%d%d",&kor,&eng,&mat);
//     result=kor+eng+mat;
//     printf("=>총점은 %d점 평균은 %d점 입니다",result,result/3);
// }

//4
// #include<stdio.h>
// int main(void)
// {
//     float red;
//     printf("원의 반지름을 입력 하세요 : ");
//     scanf("%f",&red);
//     printf("\n\n원넓이 : %.2f\n원둘레 : %.2f",(red*red*3.14),2*3.14*red);
// }


//5
// #include<stdio.h>
// int main(void)
// {
//     int num1,num2,num3,num4,tot;
//     printf("500원 : "); scanf("%d",&num1);
//     printf("100원 : "); scanf("%d",&num2);
//     printf("50원 : "); scanf("%d",&num3);
//     printf("10원 : "); scanf("%d",&num4);
//     num1=num1*500; num2=num2*100; num3=num3*50; num4=num4*10;
//     tot=num1+num2+num3+num4;
//     printf("=>동전의 금액 : %d원",tot);
// }

//6
// #include<stdio.h>
// int main(void)
// {
//     int second;
//     printf("초를 입력하세요 : ");
//     scanf("%d",&second);
//     printf("=>%d분 %d초 입니다.",second/60,second%60);
// }

//7
// #include<stdio.h>
// int main(void)
// {
//     int second;
//     printf("초를 입력하세요 : ");
//     scanf("%d",&second);
//     printf("=>%d시간 %d분 %d초 입니다.",second/3600,second/60,second%60);
// }

//8
// #include<stdio.h>
// int main(void)
// {
//     char product[20];
//     int price,unit;
//     printf("삼품명을 입력하세요 : "); scanf("%s",product); //문자열 입력은 &입력X
//     printf("단가를 입력 하세요 : "); scanf("%d",&price);
//     printf("수량을 입력 하세요 : "); scanf("%d",&unit);
//     printf("%s %d 대의 가격은 %d입니다.",product,unit,price*unit);
// }

//9
// #include<stdio.h>
// int main(void)
// {
//     int i,unit,price,discount;
//     printf("수량을 입력하세요 : "); scanf("%d",&unit);
//     printf("단가를 입력하세요 : "); scanf("%d",&price);
//     printf("\n\n%-20s%-20s%-20s","before discount","discount amount","after discount");
//     discount=unit*price*0.25;
//     printf("\n");
//     for(i=0;i<55;i++)
//         printf("=");
//     printf("\n%-20d%-20d%-20d",unit*price,discount,unit*price-discount);
// }

//10
// #include <stdio.h>
// int main(void)
// {
//     float num1, num2;
//     printf("첫 번쨰 수를 입력 하세요 : ");
//     scanf("%f", &num1);
//     printf("두 번쨰 수를 입려 하세요 : ");
//     scanf("%f", &num2);
//     printf("\n\n<<연산결과>>");
//     printf("\n%.1f + %.1f = %.1f", num1, num2, num1 + num2);
//     printf("\n%.1f - %.1f = %.1f", num1, num2, num1 - num2);
//     printf("\n%.1f * %.1f = %.1f", num1, num2, num1 * num2);
//     printf("\n%.1f / %.1f = %.1f", num1, num2, num1 / num2);
// }

//11
// #include<stdio.h>
// int main(void)
// {
//     char name[20];
//     int i,kor,eng,mat,tot;
//     printf("이름을 입력 하세요 : ");scanf("%s",name);
//     printf("국어점수를 입력 하세요 : ");scanf("%d",&kor);
//     printf("영어점수를 입력 하세요 : "); scanf("%d",&eng);
//     printf("수학점수를 입력 하세요 : ");scanf("%d",&mat);
//     tot=kor+eng+mat;
//     printf("\n\n%40s","** 성적표 **");
//     printf("\n\n%-10s%-10s%-10s%-10s%-10s%-10s\n","name","kor","eng","math","total","average");
//     for(i=0;i<55;i++)
//         printf("=");
//     printf("\n%-15s%-10d%-10d%-10d%-10d%-10d",name,kor,eng,mat,tot,tot/3);
// }



//12
// #include<stdio.h>
// int main(void)
// {
//     int num1,num2,num3;
//     printf("3개의 수를 입력 하세요 : "); scanf("%d%d%d",&num1,&num2,&num3);
//     printf("\n\n입력한 값 : %d %d %d",num1,num2,num3);
//     printf("\n합  계 : %d",num1+num2+num3);
//     printf("\n평  균 : %.2f",(float)(num1+num2+num3)/3);
// }


//13
// #include<stdio.h>
// int main(void)
// {
//     char name[20],st_id[20],school[20];
//     printf("소속을 입력 하세요 : "); scanf("%s",school);
//     printf("학번을 입력 하세요 : "); scanf("%s",st_id);
//     printf("이름을 입력 하세요 : "); scanf("%s",name);
//     printf("=>당신은 %s소속 %s학번 %s입니다",school,st_id,name);
// }

//14
// #include<stdio.h>
// int main(void)
// {
//     int pay_amount,price;
//     printf("받  은 돈  : ");scanf("%d",&pay_amount);
//     printf("상품의 총액 : ");scanf("%d",&price);
//     printf("\n\n부가세 : %d",price/10);
//     printf("\n잔돈  : %d",pay_amount-price);
// }


//15
// #include<stdio.h>
// int main(void)
// {
//     int base_pay,kw_pay,kw;
//     printf("기본 요금 : ");scanf("%d",&base_pay);
//     printf("kw당 요금 : ");scanf("%d",&kw_pay);
//     printf("몇 kw를 사용하셨습니까?  : ");scanf("%d",&kw);
//     printf("당신이 사용한 요금은 %d원 입니다",base_pay+kw*kw_pay);
// }

//16
// #include<stdio.h>
// int main(void)
// {
//     int year;
//     printf("몇 년? : ");scanf("%d",&year);
//     printf("%d년은 %d초 입니다",year,60*60*24*365);
// }


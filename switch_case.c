// #include<stdio.h>
// int main()
// {
//     int number =2;
//     switch (number){
//         case 1: printf("하나"); break;
//         case 2: printf("둘"); break;
//         case 3: printf("셋"); break;
//         case 4: printf("넷"); break;
//     }
//     puts("입니다.");
// }


// #include<stdio.h>
// int main()
// {
//     int number=3;
//     switch (number){
//     case 1: printf("하나"); break;
//     case 2: printf("둘"); break;
//     default : puts("1,2아님"); break;
//     }
//     puts("입니다");
// }


// #include<stdio.h>
// int main()
// {
//     int number=2;
//     switch (number){
//     case 1: printf("하나"); //break가 없으면 해당 case 뒤에다 모두 실행됨
//     case 2: printf("둘"); 
//     default : puts("1,2아님"); 
//     }
//     puts("입니다");
// }


// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("정수를 입력 하세요 :");
//     scanf("%d",&number);
//     switch (number)
//     {
//     case 1: printf("1번을 누르셨습니다~"); break;
//     case 2: printf("2번을 누르셨습니다~"); break;
//     case 3: printf("3번을 누르셨습니다~"); break;
//     case 4: printf("4번을 누르셨습니다~"); break;
//     default : printf("1~4번이외에 키를 누르셨습니다~");
//     }
// }


//1
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("복권 번호를 입력하세요 : "); scanf("%d",&num);
//     switch (num)
//     {
//     case 2: printf("축하합니다!!! 1들에 당첨되셨습니다."); break;
//     case 5: printf("축하합니다! 2등에 당첨되셨습니다!! "); break;
//     case 6: printf("축하합니다!! 3등에 당첨되셨습니다!!!"); break;
//     case 7: printf("축하합니다!!! 3등에 당첨되셨습니다!!1"); break;
//     default : printf("꽝");
//     }
// }


//2
// #include<stdio.h>
// int main()
// {
//     int num1,num2;
//     char o;
//     printf("첫 번째 수를 입력 하세요 : ");scanf("%d",&num1);
//     printf("연산자( + - * /)를 입력 하세요 : ");scanf(" %c",&o);
//     printf("두 번째 수를 입력 하세요 : ");scanf("%d",&num2);
//     switch(o){
//     case '+': printf("%d + %d = %d",num1,num2,num1+num2); break;
//     case '-': printf("%d - %d = %d",num1,num2,num1-num2); break;
//     case '*': printf("%d * %d = %d",num1,num2,num1*num2); break;
//     case '/': printf("%d / %d = %d",num1,num2,num1/num2); break;
//     default : printf("올바른 연산자를 입력하세요!");
//     }
// }



//3
// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("나이를 입력하세요 : ");scanf("%d",&age);
//     age=age/10;
//     switch(age){
//         case 1: printf("당신은 10대 입니다"); break;
//         case 2: printf("당신은 20대 입니다"); break;
//         case 3: printf("당신은 30대 입니다"); break;
//         default: printf("기타누락자");
//     }
// }


//4
// #include<stdio.h>
// int main()
// {
//     int kor,eng,math,avr;
//     printf("국어 영어 수학 점수를 입력 하세요 : "); scanf("%d%d%d",&kor,&eng,&math);
//     avr=(kor+eng+math)/3;
//     avr=avr/10;
//     switch(avr){
//         case 10: printf("참 잘하셨습니다"); break;
//         case 9: printf("참 잘하셨습니다"); break;
//         case 8: printf("좀 더 노력 하세요"); break;
//         case 7: printf("좀 더 노력 하세요"); break;
//         case 6: printf("많이 많이 노력 하세요"); break;
//         default: printf("다음 학기에 재수강 하세요");
//     }
// }


//6
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
 
// }
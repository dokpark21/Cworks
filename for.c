// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1; i<=10; i++)
//     {
//         printf("%d ", i);
//     }
//     printf("for문 종료 후 i 값 : %d",i);
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     for (a=1; a<=5; a+=2)
//         printf("%d\n",a);
//     puts("종료");
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     for(a=4;a>=2 ; a--)
//         printf("%d\n",a);
//     puts("종료");
// }


// #include<stdio.h>
// int main()
// {
//     int M;
//     for(M=65; M<=90; M++)
//     printf("%c",M);
// }


// #include<stdio.h>
// int main()
// {
//     char M;
//     for(M='A'; M<='Z'; M++)
//         putchar(M); //printf("%c")랑 똑같음
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     for(a=1;a<=3; a++)
//     {
//         printf("%d",a);
//         puts("이다");
//     }
//     puts("종료");
// }


// #include<stdio.h>
// int main()
// {
//     int a,b;
//     for (a=1,b=3; a<=2; a++,b--)
//     printf("%2d%2d\n",a,b);
// }



// #include<stdio.h>
// int main()
// {
//     for( ; ;)
//     {
//         printf("안녕 ~");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a=2;
//     for( ; ;)
//     {
//         if(a==0)break;
//         printf("%d\n",a--);
//     }
//     puts("종료");
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     for(a=1 ; a<=4;a++)
//     {
//         if(a%2==0)
//         {
//             puts("***");
//         }
//         printf("%d\n",a);
//     }
//     puts("종료");
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     for(a=2;a<=20;a++)
//     printf("%d\n",a);
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     for (a=1; a<=5; a++){ 
//     if (a%2==0){
//         printf("%s","\n\n");
//         continue;
//     }
//     putchar('*');
//     } 
// }



// #include<stdio.h>
// int main()
// {
//     int a;
//     for (a=1;a<=9;a++){
//         printf("%d",a);
//         puts("*\n");
//     }
// }

// #include<stdio.h>
// int main()
// {   
//     int a;
//     for (a=1;a<10; a+=2) printf("3 * %d = %d\n",a,a*3);
// }


// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("몇단을 출력 할까요? ");scanf("%d",&a);
//     for (b=1;b<=9; b++) printf("%d * %d = %d\n",a,b,a*b);
// }


// #include<stdio.h>
// int main()
// {
//     int a,tot;
//     tot=0;
//     for (a=1;a<=10; a++) {
//         printf("%d",a);
//         tot+=a;
//         if (a==10) printf("=");
//         else printf("+");
//     }
//     printf("%d",tot);
// }


// #include<stdio.h>
// int main()
// {
//     for (int i=122; i>=97; i--) printf("%c",i);
// }


// #include<stdio.h>
// int main()
// {
//     for (int a=97, b=90; a<=122; a++,b--) printf("%c%c",a,b);
// }

// #include<stdio.h>
// int main()
// {   int b=1;
//     for (int a=65; a<=90; a++){
//         if (b%5==0) printf("%c\n",a);
//         else printf("%c ",a);
//         b+=1;
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a,count=0;
//     char ans;
//     printf("이름 : 길동\n");
//     printf("문제 개수 : ");scanf("%d",&a);
//     for (; a>0; a--){
//         printf("문제를 해결 했나요>(y/n) : "); scanf(" %c",&ans);
//         if(ans=='y') count+=1;
//     }
//     printf("길동 학생은 총 %d문제를 해결했습니다",count);
// }



// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("막대#의 높이 : ");scanf("%d",&a);
//     for (;a>0;a--) putchar('#');
// }


// #include<stdio.h>
// int main()
// {
//     int a,b,sum=0;
//     printf("몇개의 수를 입력하시겠습니까 ? :");scanf("%d",&a);
//     for (int c=1; c<=a; c++){
//         printf("%d번째 수를 넣으세요 : ",c); scanf("%d",&b);
//         sum+=b;
//     }
//     printf("합=%d",sum);
// }


// #include<stdio.h>
// int main()
// {
//     char str[]="apple";
//     int a;
//     for (a=0;a<=4;a++) printf("%s\n",str+a); //문자열에 +를 하면 시작위치가 변함
// }


// #include<stdio.h>
// int main()
// {
//     int num,count=0;
//     printf("숫자를 입력하세요  : ");scanf("%d",&num);
//     for (int a=1; a<=num; a++){
//         if (a%3==0) count +=1;
//     }
//     printf("1부터 %d 사이에 존재하는 3의 배수는 %d개 입니다",num,count);
// }


// #include<stdio.h>
// int main()
// {
//     int num,sum=0,c=2;
//     printf("숫자를 입력하세요 :");scanf("%d",&num);
//     for (int a=1;a<=15;a++){
//         if (a==15) printf("%d",c);
//         else printf("%d+",c);
//         sum+=c;
//         c+=num;
//     }
//     printf("합=%d",sum);
// }   



// #include<stdio.h>
// int main()
// {
//     int num,sum=0,c=2;
//     printf("숫자를 입력 하세요 : ");scanf("%d",&num);
//     for (int a=1; a<=10; a++){
//         printf("%d ",c);
//         sum+=c;
//         c*=num;
//     }
//     printf("합=%d",sum);
// }



// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("정수를 입력하세요 : ");scanf("%d",&num);
//     printf("%d의 약수는 ",num);
//     for (int a=1; a<=num; a++){
//         if (num%a==0) printf("%d ",a);
//     }
//     printf("입니다");
// }



// #include<stdio.h>
// int main(){
//     int a,sum=0,c=0;
//     for (int b=1; ;b++){
//         printf("%d번쩨 정수를 입력해 주세요 : ",b);scanf(" %d",&a);
//         if (a==999) break;
//         sum+=a;
//         c+=1;
//     }
//     printf("합계 : %d\n",sum);
//     printf("평균 : %.1f",(float)sum/(c));
// }



// #include<stdio.h>
// int main()
// {   
//     int sum=0;
//     for (int a=1; a<=50; a++){
//         if (a%5==0 && a%2==1){
//             printf("%d ",a);
//             sum+=a;
//             } 
//     }
//     printf("\n홀수의 합 = %d",sum);
// }



// #include<stdio.h>
// int main()
// {
//     int n=100,i;
//     for (i=1; ;i++ ){
//         n-=i;
//         if (n<0) break;
//     }
//     printf("%d",n);
// }


// #include<stdio.h>
// int main()
// {
//     int a,b,num1,num2;
//     printf("입력될 수의 개수는 :"); scanf("%d",&a);
//     for (int i=1; i<=a; i++){
//         printf("%d번째수를 입력하세요 : ",i); scanf(" %d",&b);
//         if(i==1) {num1=b; num2=b;}
//         if (b>num1) num1=b;
//         if (b<num2) num2=b;
//     }
//     printf("최대값 = %d\n",num1);
//     printf("최솟값 = %d",num2);
// }



// #include<stdio.h>
// int main()
// {
//     int num1,num2,max=1;
//     printf("수를 입력하세요"); scanf("%d",&num1);
//     printf("수를 입력하세요"); scanf("%d",&num2);
//     for (int i=1; i<=num1; i++){
//         if (num1%i==0 && num2%i==0) max=i;
//     }
//     printf("%d과 %d의 최대공약수는 %d입니다",num1,num2,max);
// }


// #include<stdio.h>
// int main()
// {
//     int num1,num2;
//     for (num1=1,num2=100; num1<=50; num1++,num2--){
//         printf("%d + %d = %d\n",num1,num2,num1+num2);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a,sum1=0,sum2=0,t_sum=0,tf_sum=0,count=0;
//     for (a=1; a<=30; a++){
//         if (a%2==1) sum1+=a;
//         if (a%2==0) sum2+=a;
//         if (a%3==0) t_sum+=a;
//         if (a%3==0 && a%4==0) {count+=1; tf_sum+=a;}
//     }
//     printf("홀수의 합 = %d",sum1);
//     printf("\n짝수의 합 = %d",sum2);
//     printf("\n3의 배수의 합 = %d",t_sum);
//     printf("\n3과 4의 공배수의 개수 = %d 합 = %d",count,tf_sum);
// }



// #include<stdio.h>
// int main()
// {
//     int n1,n2,n3,a,sum=0;
//     n1=n2=0;
//     n3=1;
//     printf("수열의 개수를 입력 하세요 : ");scanf("%d",&a);
//     for (int i=1; i<=a; i++){
//         printf("%d+",n3);
//         sum+=n3;
//         n1=n2;
//         n2=n3;
//         n3=n1+n2;
//     }
//     printf("\b \n합=%d ",sum);
// }

// #include<stdio.h>
// int main()
// {
//     int my_s,rank=1,b;
//     printf("나의 점수는 : "); scanf("%d",&my_s);
//     for (int a=1; a<=5; a++){
//         printf("%d번 친구의 점수 : ",a);scanf("%d",&b);
//         if (b>my_s) rank+=1;
//     }
//     printf("나는 %d등 입니다",rank);
// }



// #include<stdio.h>
// int main()
// {
//     int num,len=1,front=1;
//     printf("정수를 입력 하세요 : ");scanf(" %d",&num);
//     for (int i=1; ;i++)
//     {
//         if (num/10==0) break;
//         else {num/=10; len+=1;}
//         front*=10;
//     }
//     printf("정수의 길이 : %d\n",len);
//     printf("앞자리의 값 : %d",front);
// }



// #include<stdio.h>
// int main()
// {
//     int num,sum=0,front=1,len=1;
//     printf("정수를 입력 하세요 : ");scanf(" %d",&num);
//     int b=num;
//     for (int i=1;b>10 ;i++)
//     {
//         b/=10;
//         front*=10;
//     }
//     printf("%d %d\n",len,front);
//     printf("각 자리의 값 : ");
//     for (int k=1;num>0 ;k++){
//         printf("%d ",num/front);
//         sum+=num/front;
//         num%=front;
//         front/=10;
//     }
//     printf("\n각 자리의 합 : %d",sum);
// }


// #include<stdio.h>
// int main()
// {
//     int num,b,back=10,front=1,len=1,c=0;
//     for (int i=1; ;i++){
//         printf("정수를 입력하세요 : ");scanf("%d",&num);
//         if (num<0) printf("... 다시 입력하세요\n");
//         else break;
//     }

//     printf("뒤집은 값 : ");
//     b=num;
//     for (int i=1;b>10 ;i++)
//     {
//         b/=10;
//         front*=10;
//     }
//     for (int i=1;num>0 ;i++){
//         c+=front*(num%10);
//         front/=10;
//         num/=10;
//     }
//     printf("%d",c);
//     printf("\n3배수 : %d",3*c);
// }


// #include<stdio.h>
// int main()
// {
//     int a,b,num1;
//     for (int i=1; i<=4; i++){
//         printf("%d번째 수를 입력하세요 : ",i);scanf("%d",&a);
//         if(i==1) num1=a; 
//         b=a-10;
//         if((num1-10)*(num1-10)>b*b) num1=a;
//     }
//     printf("10에 가장 가까운 수는 %d",num1);
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int i,rnd;
//     srand((unsigned)time(NULL));
//     for(i=1; i<=5; i++)
//     {
//         rnd=rand()%100+1;
//         printf("%d  ",rnd);
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a,i,rnd;
//     rnd=rand()%100+1;
//     for (i=1;a!=rnd ; i++)
//     {
//         printf("정답을 넣으세요 : ");scanf("%d",&a);
//         if (a>rnd) printf("%d보다는 작은 수를 넣으세요~\n",a);
//         else if(a<rnd) printf("%d보다는 큰 수를 넣으세요~\n",a);
//         else if(a==rnd) printf("축하합니다~ 드디어 정답을 맞추셨군요!!\n");
//         if (a<0) break;
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int rnd1, rnd2, rnd3, rnd4, rnd5, a1,a2,a3,a4,a5, count1 = 0, count2 = 0,rnd[5];
//     rnd1 = rand() % 10 + 1; rnd[0]=rnd1;
//     rnd2 = rand() % 10 + 1; rnd[1]=rnd2;
//     rnd3 = rand() % 10 + 1; rnd[2]=rnd3;
//     rnd4 = rand() % 10 + 1; rnd[3]=rnd4;
//     rnd5 = rand() % 10 + 1; rnd[4]=rnd5;
//     printf("기억력 테스트 입니다\n화면에 보이는 숫자를 기역하셨다가 다시 쓰시면 됩니다~ :");
//     printf("%d %d %d %d %d\n", rnd1, rnd2, rnd3, rnd4, rnd5);
//     printf("사용자 1 입력 : "); scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
//     int user1[5]={a1,a2,a3,a4,a5};
//     for (int i=0;i<=4;i++){
//         for (int k=0;k<=4;k++){
//             if (user1[i] == rnd[k]) count1+=1;
//         } 
//     }
//     printf("사용자 2 입력 : "); scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
//     int user2[5]={a1,a2,a3,a4,a5};
//     for (int i=0;i<=4;i++){
//         for (int k=0;k<=4;k++){
//             if (user2[i] == rnd[k]) count2+=1;
//         } 
//     }
//     printf("사용자 1은 %d개를 맞추었습니다!\n",count1); printf("사용자 2는 %d개를 맞추었습니다!\n\n",count2);
//     if (count1>count2) printf("사용자1 승리!!");
//     else if (count2>count1) printf("사용자2 승리!!");
//     else printf("동점!!");
// }



// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     for (int i=1;i<=10;i++){
//         printf("%d  ",i);
//         sum+=i;
//         if (i%3==0) printf("== 합 %d\n",sum);
//         else if (i==10) printf("     == 합 %d",sum);
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a=1;
//     for (; a<=2;a++ ) //초기값은 생략해도 잘 돌아감
//         printf("%2d",a);
// }


// #include<stdio.h>
// int main()
// {
//     for (int i=1;i<=3;i++){
//         for (int k=1;k<=i;k++)printf("*");
//     printf("\n");
//     }

// }


// #include<stdio.h>
// int main()
// {
//     for (int i=3;i>=1;i--){
//         for (int k=1;k<=i;k++)printf("*");
//     printf("\n");
//     }

// #include<stdio.h>
// int main()
// {
//     for (int i=2;i>=0;i--){
//         for (int k=1;k<=3;k++){
//             if (k>i) printf("*");
//             else printf(" ");
//         }
//     printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int num=3;
// for(int i=0;i<num;i++){
//     for(int j=num-1;j>i;j--){
//         printf(" ");
//     }
	    
//     for(int j=0;j<2*i+1;j++){
// 	printf("*");
//     }
//     printf("\n");
// }
// }


// #include<stdio.h>
// int main()
// {
//     int num=3;
// for(int i=num;i>0;i--){
//     for(int j=i;j<3;j++){
//         printf(" ");
//     }
	    
//     for(int j=0;j<2*i-1;j++){
// 	printf("*");
//     }
//     printf("\n");
// }
// }


// #include<stdio.h>
// int main()
// {   int num=1;
//     for (int i=1;i<=3;i++){
//         for (int j=1; j<=i; j++){
//             printf("%d",num);
//             num+=1;
//         }
//     printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {   
//     for (int i=1;i<=3;i++){
//         int num=1;
//         for (int j=1; j<=i; j++){
//             printf("%d",num);
//             num+=1;
//         }
//     printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int num=9;
//     for (int i=1;i<=3;i++){
//         for (int k=1;k<i;k++){
//             printf(" ");
//         }
//         for (int j=1;j<=7-2*i;j++){
//             printf("%d",num);
//             num-=1;
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int a;
//     for (a=2;a<=9;a++)
//     {
//         for (int t=1;t<=9;t++){
//             printf("%d * %d =%d  ",a,t,a*t);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     printf("    "); for (int a=1;a<=9;a++) printf("%-4d  ",a);printf("\n");
//     printf("    "); for (int b=1;b<=50;b++) printf("*");printf("\n");
//     for (int i=1;i<=9;i++){
//         printf("%d*  ",i);
//         for (int j=1;j<=9;j++){   
//             printf("%-4d  ",i*j);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("수를 입력하세요 : ");scanf(" %d",&a);
//     printf("수를 입력하세요 : ");scanf(" %d",&b);
//     for (int i=1;i<=b;i++){
//         c=a*i;
//         for (int j=1;j<=b;j++ ){    
//             d=b*j;
//             if (c==d) break;
//         }
//         if (c==d) break;
//     }
//     printf("%d와 %d의 최소공배수는 %d입니다",a,b,c);
// }


// #include<stdio.h>
// int main()
// {
//     for (int i=65; i<=90; i++){
//         for (int j=i;j<=90;j++) printf("%c",j);
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("시작값 : ");scanf("%d",&a);
//     printf("끝값  :"); scanf("%d",&b);
//     d=a+1;
//     if (b-a<3) printf("다시 입력하세요 :");
//     else for (c=1;c<=(int)((b-a-1)/3)+1;c++){
//         for (int k=1;k<=3;k++){
//             printf("%-4d",d);
//             d+=1;
//             if (d==b) break;
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int count=0,line=0;
//     for (int i=2;i<=200;i++){
//         count=0;
//         for (int k=2;k<i;k++){
//             if (i%k==0) count+=1; 
//         }
//         if (count==0){printf("%-4d",i);line+=1;}
//         if (line==5) {printf("\n"); line=0;}
//     }
// }


// #include<stdio.h>
// int main()
// {  int count=0,word=0,line=0,page=1;
//    for (int a=1;a<=9;a++){
//     for (int b=1;b<=9;b++){
//         for (int c=1;c<=9;c++){
//             if (a==b) continue;
//             else if (b==c) continue;
//             else {printf("%d%d%d   ",a,b,c);count+=1;word+=1;}
//             if (word==5) {printf("\n"); word=0; line+=1;}
//             if (line==20) {printf("page=%d\n",page);page+=1;line=0;}
//         }
//     }
//    } 
//    printf("\n\n총 개수 : %d",count);
// }


// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("수를 입력하세요 : ");scanf("%d",&num);
//     printf("결과 => ");
//     for (int i=1;i<=num;i++){
//         for (int k=2; k<=num; k++){
//             if (num%k==0) {
//                 printf(" %d *",k); num/=k; break;
//             }
//         }
//     }
//     printf("\b\b");
// }

// #include<stdio.h>
// int main(){
//     int num,a=1;
//     printf("몇줄 ? : ");scanf("%d",&num);
//     for (int i=1;i<=num;i++){
//         a=i;
//         for (int k=i;k<=num-1;k++){
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++){
//             printf("%d",a);
//             a+=1;
//         }
//         a-=1;
//         for (int h=1;h<i;h++){
//             a-=1;
//             printf("%d",a);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int line,a;
//     printf("높으를 입력하세요 : ");scanf("%d",&line);
//     for (int i=1;i<=line;i++){
//         a=1;
//         for (int k=i;k<=line-1;k++){
//             printf("    ");
//         }
//         for (int j=1;j<=i;j++){
//             printf("%-4d",a);
//             a+=2;
//         }
//         a-=2;
//         for (int h=1;h<i;h++){
//             a-=2;
//             printf("%-4d",a);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int num=1,line=1;
//     for (int i=1;i<=5;i++){
//         if (line%2==1){
//             for (int k=1;k<=5;k++){printf("%-4d",num);num+=1;}num+=4;line+=1;}    
//         else {for (int i=1;i<=5;i++){
//              printf("%-4d",num); num-=1;}num+=6;line+=1;}
//         printf("\n");
//     }
// } 


//달력 만들기
// #include<stdio.h>
// int main()
// {
//     int year,month,sum=0,yoon_year=0,k;
//     int day_m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//     printf("년 : ");scanf("%d",&year);
//     printf("월 : ");scanf("%d",&month);
//     printf("=====================");printf("<%d  %d>",year,month);printf("=====================\n");
//     printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
//     sum=365;
//     for (int i=1;i<year;i++){
//     if ((i % 4 == 0) && !(i % 100 == 0) || (i % 400 == 0)) sum+=366;
//     else  sum+=365;
//     }
//     for (int k=0;k<=month-2;k++){
//         sum+=day_m[k];
//     }
//     if (((year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0))&&month>=2) sum+=1;
//     k=sum%7;
//     for (int h=1;h<=k;h++) printf("        ");
//     int line=k;
//     if ((month%4==0) && !(month % 100==0) || (month%400==0)) day_m[1]=29;
//     for (int k=1;k<=day_m[month-1];k++){
//         printf("%-8d",k); line+=1;
//         if (line%7==0) printf("\n");
//     }
// }



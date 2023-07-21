// #include<stdio.h>
// int main()
// {
//     int dan=0, num=1;
//     printf("몇 단? ");
//     scanf("%d",&dan);

//     while (num<10){
//         printf("%dx%d=%d \n",dan,num,dan*num);
//         num++;
//     }    
// }


// #include<stdio.h>
// int main(){
//     int dan=0, num=1;
//     printf("몇 단? ");scanf("%d",&dan);
// 
//     do
//     {
//         printf("%dx%d=%d\n",dan,num,dan*num);
//         num++;
//     }while(num<10);
// }


// #include<stdio.h>
// int main()
// {
//     int cur=2;
//     int is=0;
//     while(cur<10){
//         is=1;
//         while(is<10){
//             printf("%dx%d=%d\n",cur,is,cur*is);
//             is++;
//         }
//         cur++;
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int dice1=1,dice2=1;
//     while (dice1<7)
//     {
//         dice2=1;
//         while (dice2<7)
//         {
//             if (dice1+dice2==6) printf("%d %d\n",dice1,dice2);
//             dice2++;
//         }
//         dice1++;
//         printf("\n");
//     }   
// }


// #include<stdio.h>
// int main()
// {
//     int sum=0;
//     int a=1;
//     while (a<=10)
//     {
//         sum+=a;
//         a++;
//     }
//     printf("%d",sum);
// }



// #include<stdio.h>
// int main(){
//     int sum=0,a=1;
//     do{
//         sum+=a;
//         a++;
//     }while (a<=10); printf("%d",sum);
// }



// #include<stdio.h>
// int main()
// {
//     int m_age=38;
//     int a=1;
//     while(a<=38){
//         if (a*6+2==m_age){printf("준오나이 : %d살",a);break;} 
//         a++;
//     }
// }



// #include<stdio.h>
// int main(){
//     int juno=24,su=6;
//     int a=0;
//     while (juno>=su){
//         printf("%d분 뒤 준오 =%dkm  수연=%dkm\n",a,juno,su);
//         a+=1;
//         juno+=2;
//         su+=3;
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int a;
//     int b=0;
//     int sum=0;
//     printf("정수 5개를 입력 하세요 : ");
//     while(b<5){
//         scanf("%d",&a);
//         sum+=a;
//         b++;
//     }
//     printf("합은 %d 입니다",sum);
// }



// #include<stdio.h>
// int main()
// {
//     int n=1;
//     printf("=================================\n");
//     printf("\tn\t\tn제곱\n");
//     printf("=================================\n");
//     while(n<=10){
//         printf("\t%d\t\t%d\n",n,n*n);
//         n++;
//     }
// }




// #include<stdio.h>
// int main()
// {
//     int a,sum=0,count=0;
//     while(1){
//         printf("숫자를 입력하세요 : ");scanf("%d",&a);
//         if (a<0) break;
//         sum+=a;
//         count+=1;
//     }
//     printf("%d개의 숫자를 입력하셨군요~",count);
//     printf("합=%d 평균%.2f입니다",sum,(float)(sum/count));
// }


// #include<stdio.h>
// int main()
// {
//     int kor,eng,math;
//     while (1){
//         printf("국어점수 : ");scanf("%d",&kor);
//         if (kor<0 || kor>100) {
//             printf("0~100사이에 점수를 입력하세요");
//             continue;}
//         else break;
//     }
//     while(1){
//         printf("영어점수 : ");scanf("%d",&eng);
//         if (eng<0 || eng>100){
//             printf("0~100사이에 점수를 입력하세요");
//             continue;
//         }
//         else break;
//     }
//     while(1){
//         printf("수학점수 : ");scanf("%d",&math);
//         if (math<0 || math>100){
//             printf("0~100사이에 점수를 입력하세요");
//             continue;
//         }
//         else break;
//     }
//     printf("\n\n");
//     printf("국어 : %d 수학 : %d 영어 : %d",kor,eng,math);
//     printf("\n총점 : %d 평균 : %.2f",kor+eng+math,(float)((kor+eng+math)/3));
// }


// #include<stdio.h>
// int main(){
//     float A=3,B=7;
//     int m=0;
//     while (1)
//     {
//         A+=0.3; B+=0.2;
//         m+=1;
//         if (A>B) break;
//     }
//     printf("%d초",m);
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int rnd,i=1,a;
//     srand(time(NULL));
//     rnd=rand()%100+1;
//     while (i<=6)
//     {
//         printf("1과 100사이에 정수를 입력하세요 : ");scanf("%d",&a);
//         if (rnd>a)printf("더 큰수를 입력하세요\n");
//         else if (rnd<a) printf("더 작은 수를 입력하세요\n");
//         else if (a==rnd){printf("당신은 천재!!\n"); break;}
//         i++;
//     }
//     if (rnd!=a) printf("답은 %d 입니다. 멍추잉ㅇ!!!!",rnd);
// }


// #include<stdio.h>
// int main()
// {
//     int num,len=0;
//     printf("숫자를 입력하세요 : ");scanf("%d",&num);
//     int num1=num;
//     while(num1/10 > 0){
//         num1/=10;
//         len++;
//     } 
//     int str=1;
//     for (int i=1;i<=len;i++){
//         str*=10;
//     }
//     int end=10;
//     while(num>=10){       
//         if (num/str==num%end){
//             num-=(num/str)*str;
//             num-=num%end;
//             num/=10;
//             str/=100;
//         }
//         else break;
//     }
//     if (num<10 && num>=0) printf("회문입니다");
//     else printf("회문이 아닙니다");
// }


// #include<stdio.h> //점화식 
// int main()
// {
//     int p_num;
//     int p_l[10]={1,1};
//     int i=2;
//     while(i<=9){
//         p_l[i]=p_l[i-1]+p_l[i-2];
//         i++;
//     }
//     printf("10번째 수 : %d",p_l[9]);
// }


// #include<stdio.h>
// int main()
// {   int i=1,k=0,h=0;
//     while (i<=9){
//         while (k<=9){
//             k++;
//             while(h<=9){
//                 printf("%d + %d + %d = %d\n",i,k,h,i+k+h); 
//                 h++;
//             }
            
//         }
//         i++;
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int len,pay=0,i=0;
//     printf("주행거리 입력 : ");scanf("%d",&len);
//     if (len<=2000) printf("요금은 : %d",3000);
//     else {
//         pay+=3000;
//         while (i<=len-2000){
//             if (i%400==0) pay+=600;
//             i++;
//         }
//         printf("요금은 : %d",pay);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int amount,bill=100000,b,count=1;
//     printf("얼마를 인출하시겠습니까?");scanf("%d",&amount);
//     while (amount>=1000)
//     {
//         b=amount/bill;
//         printf("%d원권 %d매\n",bill,b);
//         amount-=b*bill;
//         if (count%2==1){
//             bill/=2;
//             count+=1;
//         }
//         else {bill/=5; count+=1;}
//     }   
// }



// #include<stdio.h>
// int main()
// {
//     int i,sum1=0,sum2=0,k=1;
//     printf("수를 입력하세요 : ");scanf("%d",&i);
//     while (k<=i){
//         if (k%2==0) sum1+=k;
//         else sum2+=k;
//         k++;
//     }
//     printf("짝수의 합 : %d  홀수의 합 : %d",sum1,sum2);
// }


// #include<stdio.h>
// int main()
// {
//     int count=0,i,a=2,chk;
//     printf("소수의 개수 : ");scanf("%d",&i);
//     printf("%d개의 소수 =",i);
//     while (count<i){
//         chk=0;
//         for (int k=1;k<=a-1;k++){
//             if (a%k==0) chk+=1;
//         }
//         if (chk==1) {printf("%d  ",a);
//             a+=1;
//             count+=1;
//         }
//         else a+=1;
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int y;
//     while(1)
//     {
//         printf("나이를 입력하시오 : ");scanf("%d",&y);
//         if (y>=1 && y<=150) break;
//         puts("1~150사이 값 입력요망");
//     }
//     printf("%d살이군요",y);
// }


// #include<stdio.h>
// int main()
// {
//     int a,b; a=0;b=0;
//     while(1){
//         puts("하나"); a++;
//         do{
//             puts("둘");
//             if (a==1)break;
//         }while(1);
//         puts("셋");
//         for ( ; ; )
//             {
//                 puts("넷");
//                 b++;
//                 if(b==2){
//                     puts("다섯");
//                     break;
//                 }
//             puts("여섯");
//             }
//         puts("일곱");
//         if (a==1)break;
//         puts("여덜");
//     }
//     puts("종료");
// }
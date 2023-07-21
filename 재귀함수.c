// #include<stdio.h>
// void main()
// {
//     printf("안녕");
//     main();
// }


// #include<stdio.h>
// int Fac(int N){
//     if(N==1) return 1;
//     else return N*Fac(N-1);
// }
// int main()
// {
//     printf("%d",Fac(3));
// }

// #include<stdio.h>
// void Disp1(int a, int b)
// {
//     if(a>b)return;
//     Disp1(a+1,b); printf("%3d",a); 
// }
// void Disp2(int a, int b)
// {
//     if (a<b)return;
//     Disp2(a-1,b);printf("%3d",a); 
// }
// void Disp(int a,int b)
// {
//     if(b>a)Disp1(a,b);
//     else Disp2(a,b);
//     printf("\n");
// }
// void main()
// {
//     int a=1,b=3;
//     Disp(a,b); 
//     Disp(b,a);
// }


// #include<stdio.h>
// #include<string.h>
// char str[10];
// char *getword(int n)
// {
//     switch(n%10){
//         case 0: strcpy(str,"zero ");break;
//         case 1: strcpy(str,"one ");break;
//         case 2: strcpy(str,"two ");break;
//         case 3: strcpy(str,"three ");break;
//         case 4: strcpy(str,"four ");break;
//         case 5: strcpy(str,"five ");break;
//         case 6: strcpy(str,"six ");break;
//         case 7: strcpy(str,"seven ");break;
//         case 8: strcpy(str,"eight ");break;
//         case 9: strcpy(str,"nine ");break;
//     } 
//     return str;
// }
// void dispword(int n)
// {
//     if(n<10) printf("%s",getword(n));
//     else{   
//         dispword(n/10);
//         printf("%s",getword(n));
//     }
// }
// int main(){
//     int n;
//     printf("정수를 입력: ");
//     scanf("%d",&n);
//     dispword(n);
// }


// #include<stdio.h>
// void sum(int a)
// {
//     ;
//     if (a<=0) return;
//     else sum(a-1);
//     printf("%3d",a);
// }
// int main()
// {
//     sum(7);
// }


// #include<stdio.h>
// void sum(int a)
// {
//     if (a>=6) return;
//     else sum(a+1);
//     printf("%-2d",a);
// }
// int main()
// {
//     sum(1);
// }



// #include<stdio.h>
// void sum(int a)
// {
//     printf("#");
//     if(a==10) return;
//     sum(a+1);
//     // if (a>=5)return;
//     // else sum(a+1);
//     // for (int b=1;b<=a;b++) printf("#");
// }
// int main()
// {
//     sum(1);
// }


// #include<stdio.h>
// void sum(int a)
// {
//     printf("##########\n");
//     if (a==5)return;
//     else sum(a+1);
// }
// int main()
// {
//     sum(1);
// }


// #include<stdio.h>
// void sum(int a)
// {   for (int b=1;b<=a;b++) printf("#");
//     printf("\n");
//     if (a==5)return;
//     else sum(a+1);
// }
// int main()
// {
//     sum(1);
// }


// #include<stdio.h>
// void sum(int a)
// {   for (int b=1;b<=a;b++) printf("#");
//     printf("\n");
//     if (a==1)return;
//     else sum(a-1);
// }
// int main()
// {
//     sum(5);
// }


// #include<stdio.h>
// int sum1=0;
// void sum(int a)
// {
    
//     printf("%-2d+ ",a);
//     sum1+=a;
//     if (a==10) {printf("\b\b=%d",sum1);return;}
//     else sum(a+1);
// }
// int main()
// {
//  sum(1);
// }



// #include<stdio.h>
// int Factorial(int n)
// {
//     if (n==1)return 1;
//     else return n*Factorial(n-1);
// }
// int main()
// {
//     printf("1! = %d\n",Factorial(1));
//     printf("2! = %d\n",Factorial(2));
//     printf("3! = %d\n",Factorial(3));
//     printf("4! = %d\n",Factorial(4));
//     printf("5! = %d\n",Factorial(5));
// }



// #include<stdio.h>
// int sum(int a, int b)
// {
//     if (a==b)return b;
//     else return a+sum((a+1),b);
// }
// int main()
// {
//     int a,b;
//     printf("첫 번째수 입력 : ");scanf("%d",&a);
//     printf("두 번째수 입력 : ");scanf("%d",&b);
//     printf("%d부터 %d까지의 합 = %d",a,b,sum(a,b));
// }

// #include<stdio.h>
// int b=1;
// int Factorial(int a,int b)
// {
//     if(b>=a) return a;
//     else return b*Factorial(a,b+1);
// }
// int main()
// {
//     int num;
//     printf("어디까지의 곱을 계산할까요? : ");scanf("%d",&num);
//     printf("%d",Factorial(num,b));
// }


// #include<stdio.h>

// int Recursive(int num)
// { 
//     if (num==0) return 0 ;
//     else if (num<=1) return 1;
//     else return Recursive(num-1) + Recursive(num-2);
// }
// int main()
// {
//     printf("%d",Recursive(6));
// }


// #include<stdio.h>
// int BsearchRecur(int arr[],int n1,int n2,int target)
// {
//     int mid=(n1+n2)/2;

//     if (arr[(n1+n2)/2]==target) return mid;
//     else if (n2<n1) return -1;
//     else if (target>arr[mid]) return BsearchRecur(arr,mid+1,n2,target);
//     else if (target<arr[mid]) return BsearchRecur(arr,n1,mid-1,target);
    
// }   
// int main()
// {
//     int arr[] = {10,20,30,40,50,60,70,80,90,100};
//     int idx,target;

//     printf("찾을값 : ");scanf("%d",&target);
//     idx = BsearchRecur(arr,0,sizeof(arr)/sizeof(int)-1,target);
//     if (idx==-1)
//         printf("탑색실패\n");
//     else printf("타켓저장 인덱스 %d \n",idx);
// }


// #include<stdio.h>
// int sum(int x,int n,int a)
// {
//     if (a==n) return 1;
//     else return x*sum(x,n,a+1);
// }
// int main()
// {
//     int x,n;
//     printf("숫자를 입력해주세요 : ");scanf("%d",&x);
//     printf("%d의 몇승을 구할까요?",x);scanf("%d",&n);
//     printf("%d",sum(x,n,0));
// }


//이진수 return으로 품
// #include<stdio.h>
// int bin_num(int num,int a,int b,int ans)
// {
//     if (num==0) return ans;
//     else if (num==1) return bin_num(num-1,1,1,ans+1);
//     else if (num>a) return bin_num(num,2*a,10*b,ans);
//     else if (a>num) return bin_num(num-(a/2),1,1,ans+(b/10));
//     else if (a==num) return bin_num(num-a,1,1,ans+b);
// }
// int main()
// {
//     int num;
//     printf("10진수 값 입력 : ");scanf("%d",&num);
//     printf("%d",bin_num(num,1,1,0));
// }

//이진수 간단한 방법 바로바로 프린트하기
// #include<stdio.h>
// void bin_num(int num)
// {   
//     if (num==0)return;
//     bin_num(num/2); printf("%d",num%2);
    
// }
// int main()
// {
//     int num;
//     printf("10진수 값 입력 : ");scanf("%d",&num);
//     bin_num(num);  
// }


// #include<stdio.h>
// void pr(int num)
// {   
//     printf("%d ",num%10);
//     if (num<10) return;
//     pr((num-num%10)/10); 
// }
// int main()
// {
//     int num;
//     printf("정수입력 : ");scanf("%d",&num);
//     pr(num);
// }


// #include<stdio.h>
// int recursive(int n)
// {
//     int sum=1;
//     for (int i=1;i<=n;i++) sum*=i;
//     return sum;
// }
// int main()
// {
//     printf("%d",recursive(5));
// }



// #include<stdio.h>
// int sum(int n)
// {
//     if(n<=1) return 1;
//     else return n+sum(n-1); 
// }
// int main()
// {
//     printf("%d",sum(5));
// }



// #include<stdio.h>
// int sum_sq(int num)
// {
//     if (num==0) return 0;
//     else return num*num*num+sum_sq(num-1);
// }
// int main()
// {
//     printf("%d",sum_sq(3));
// }


// #include<stdio.h>
// #include<string.h>
// void reverse(char *str,int k)
// {
    
//     if (k==sizeof(str)) return;
//     reverse(str,k+1);
//     printf("%c",str[k]);
// }
// int main()
// {
//     reverse("apple",0);
// }



// #include<stdio.h>
// void holsu(int a,int b)
// {
//     if (a==b) return;
//     if (a%2==1) printf("%d ",a);
//     holsu(a+1,b);
    
// }
// int main()
// {
//     holsu(2,10);
// }


// #include<stdio.h>
// int main()
// {
//     printf("안녕");
//     main();
// }


// #include<stdio.h>
// void KK(int a)
// {
//     if(a==0) return;
//     KK(a-1);
//     printf("%3d",a);
// }
// int main()
// {
//     KK(3);
// }



// #include<stdio.h>
// void DispNum(int a)
// {
//     if(a==3)return;
//     DispNum(a+1);
//     printf("%3d",a);
// }
// int main()
// {
//     DispNum(0);
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// void recursive(int n)
// {
//     printf("%d  ",n);
//     if(n!=1) recursive(n-1);
    
// }
// int main()
// {
//     recursive(10);
// }


// #include<stdio.h>
// int Factorial(int n)
// {
//     if(n==0) return 1;
//     else return n*Factorial(n-1);
// }
// int main()
// {
//     printf("1! = %d \n",Factorial(1));
//     printf("2! = %d \n",Factorial(2));
//     printf("3! = %d \n",Factorial(3));
//     printf("4! = %d \n",Factorial(4));
//     printf("5! = %d \n",Factorial(5));
// }


// #include<stdio.h>
// double power(double x,int n)
// {
//     if(n==0) return 1;
//     else if((n%2)==0) return power(x*x,n/2);
//     else return x*power(x*x, (n-1)/2);
// }
// int main()
// {
//     printf("2의 10제곱값 : %f\n",power(2,5));
// }



// #include<stdio.h>
// int Fibo(int n)
// {
//     if(n==1) return 0;
//     else if(n==2) return 1;
//     else return Fibo(n-1)+Fibo(n-2);
// }
// int main()
// {
//     int i;
//     for (i=1;i<5;i++) printf("%d ",Fibo(i));
// }



// #include<stdio.h>
// #include<string.h>
// char str[10];
// char *getword(int n)
// {
//     switch(n%10)
//     {
//        case 0: strcpy(str,"zero "); break;
//        case 1: strcpy(str,"one "); break;
//        case 2: strcpy(str,"two "); break;
//        case 3: strcpy(str,"three "); break;
//        case 4: strcpy(str,"four "); break;
//        case 5: strcpy(str,"five "); break;
//        case 6: strcpy(str,"six "); break;
//        case 7: strcpy(str,"seven "); break;
//        case 8: strcpy(str,"eight "); break;
//        case 9: strcpy(str,"nine "); break;  
//     }
//     return str;
// }
// int dispword(int n)
// {
//     if(n<10) printf("%s",getword(n));
//     else
//     {
//         dispword(n/10);
//         printf("%s",getword(n));
//     }
// }
// int main()
// {
//     int n;
//     printf("정수를 입력 : ");scanf("%d",&n);
//     dispword(n);
// }



// #include<stdio.h>
// void KK2(int a,int N)
// {
//     printf("%3d",a);
//     if (a==N) return;
//     KK2(a+1,N);
//     printf("%3d",a);
// }
// int main()
// {
//     KK2(1,3); printf("\n");
// }



// #include<stdio.h>
// void Disp1(int a,int b)
// {
//     if(a>b) return;
//     printf("%3d",a); Disp1(a+1,b);
// }
// void Disp2(int a,int b)
// {
//     if(a<b) return;
//     printf("%3d",a); Disp2(a-1,b);
// }
// void Disp( int a, int b)
// {
//     if(b>a)Disp1(a,b);
//     else Disp2(a,b);
//     printf("\n");
// }
// int main()
// {
//     int a,b;
//     a=1; b=3; Disp(a,b); Disp(b,a);
// }




// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int sum(int n)
// {
//     printf("%d  , ",n);
//     if(n<1) return 0;
//     else return n+sum(n-1);
// }
// int main()
// {
//     printf("%d ",sum(5));
// }



// #include<stdio.h>
// int recursive(int n)
// {
//     printf("%d , ",n);
//     if (n<1) return 2;
//    else return (2*recursive(n-1)+1);
// }
// int main()
// {
//     printf("%d",recursive(5));
// }


// #include<stdio.h>
// int recursive(int n)
// {
//     printf("%d , ",n);
//     if(n<1)return -1;
//     else return (recursive(n-3)+1);
// }
// int main()
// {
//     printf("%d ",recursive(10));
// }



// #include<stdio.h>
// int Sum1(int N){ return(N<=1?N : N+Sum1(N-1)) ;}
// int Sum(int a,int N){ return(N<=a? a:N+Sum(a,N-1));}
// int Pow(int a,int N){ return(N<=1? a:a*Pow(a,N-1));}
// int Fac(int N){ return(N<=1? 1: N*Fac(N-1));}
// int main()
// {
//     printf("%d\n",Sum1(3));
//     printf("%d\n",Sum(1,3));
//     printf("%d\n",Pow(2,3));
//     printf("%d\n",Fac(3));
// }



// #include<stdio.h>
// void BubbleSort(int ary[],int len);
// int main()
// {
//     int arr[4]={3,1,2,4};
//     int j;
//     BubbleSort(arr,sizeof(arr)/sizeof(int));
//     for (int i=0;i<4;i++) printf("%d ",arr[i]);
//     printf("\n");
// }
// void BubbleSort(int ary[],int len)
// {
//     int i,j;
//     int temp;
//     for (i=0;i<len-1;i++){
//         for (j=0;j<(len-i)-1;j++)
//         {
//             if(ary[j]<ary[j+1])
//             {
//                 temp=ary[j];
//                 ary[j]=ary[j+1];
//                 ary[j+1]=temp;
//             }
//         }
//     }
// }




//1
// #include<stdio.h>
// void re(int n)
// {
//     printf("%d  ",n);
//     if (n>=9) return;
//     re(n+2);
// }
// int main()
// {
//     re(1);
// }


//2
// #include<stdio.h>
// void re(int n)
// {
//     if(n>20) return;
//     re(n+5);
//     printf("%d   ",n);
// }
// int main()
// {
//     re(0);
// }


//3
// #include<stdio.h>
// void re(int n)
// {
//     if(n<1) return;
//     re(n-1);
//     for (int i=0;i<n;i++) printf("#");
// }
// int main()
// {
//     re(4);
// }


//4
// #include<stdio.h>
// void re(int n)
// {
//     if(n<1) return;
//     re(n-1);
//     for (int i=0;i<10;i++) printf("#");
//     puts("");
// }
// int main()
// {
//     re(5);
// }


//6
// #include<stdio.h>
// void re(int n)
// {
//         for (int i=0;i<n;i++) printf("#");
//     puts("");
//     if(n<1) return;
//     re(n-1);

// }
// int main()
// {
//     re(5);
// }

//8
// #include<stdio.h>
// void re(int n)
// {
//     for (int i=0;i<5-n;i++) printf(" ");
//     for (int i=0;i<n;i++) printf("#");
//     for (int i=0;i<n-1;i++) printf("#");
//     puts("");
//     if(n<1) return;
//     re(n-1);
    
// }
// int main()
// {
//     re(5);
// }


//11
// #include<stdio.h>
// int re(int n)
// {
//     printf("%d+",n);
//     if (n>=10) return 10;
//     return n+re(n+1);
// }
// int main()
// {
//     int n;
//     n=re(1);
//     printf("\b=%d",n);
// }


//12
// #include<stdio.h>
// int Fac(int n)
// {
//     if (1==n) return 1;
//     return n*Fac(n-1);
// }
// int main()
// {
//     int n;
//     printf("어디까지의 곱을 구할까요 : ");scanf("%d",&n);
//     int a=Fac(n);
//     printf("1부터 %d까지의 곱은 %d",n,a);
// }


//13
// #include<stdio.h>
// int bin_s(int n,int ary[],int h,int l)
// {
//     int mid;
//     mid=(h+l)/2;
//     if(n==ary[mid]) return mid;
//     if (h<=l) return -1;
    
    
//     if (n>ary[mid]) return bin_s(n,ary,h,mid+1);
//     else if (n<ary[mid]) return bin_s(n,ary,mid-1,l);
// }
// int main()
// {
//     int arr[]={10,20,30,40,50,60,70,80};
//     int n;
//     int l=0;
//     int h=sizeof(arr)/sizeof(arr[0])-1;
//     printf("찾을값 : ");scanf("%d",&n);
//     int a;
//     a=bin_s(n,arr,h,l);
//     if (a==-1) printf("탑색실패");
//     else printf("타켓저장인데스 : %d",a);
// }



//14
// #include<stdio.h>
// int jagob(int n,int a)
// {
//     if (a==1) return n;
//     else return n*jagob(n,a-1);
// }
// int main()
// {
//     int n,a;
//     printf("어떤수의 몇승을 구할까요? ");scanf("%d%d",&n,&a);
//     int t=jagob(n,a);
//     printf("%d",t);
// }



//15
// #include<stdio.h>
// void leejin(int n,int cnt)
// {
//     if (cnt<1) return;
//     if (n>=cnt) {printf("%d",1); return leejin(n-cnt,cnt/2);}
//     else {printf("%d",0); return leejin(n,cnt/2);}
// }
// int main()
// {
//     int n;
//     int cnt=1;
//     printf("십진수 값 입력 : "); scanf("%d",&n);
//     while(n>=cnt){
//         cnt*=2;
//     }
//     cnt/=2;
//     leejin(n,cnt);
// }


// #include<stdio.h>
// void leejin(int n,int t)
// {
//     if (n<t) {if (n>=10){printf("%c",55+n); return;}
//               else {printf("%d",n); return;}
//     }
//     leejin(n/t,t);
//     if (n%t>=10) printf("%c",55+n%t);
//     else  printf("%d",n%t);
// }
// int main()
// {
//     int n;
//     int t;
//     printf("십진수 입력 : ");scanf("%d",&n);
//     printf("몇진수로 변환할까요 : ");scanf("%d",&t);
//     leejin(n,t);
// }





// #include<stdio.h>
// void pr_num(int n)
// {
//     if (n==0) return;
    
//     pr_num(n/10);
//     printf("%d  ",n%10);
// }
// int main()
// {
//     int n;
//     printf("정수 입력 : ");scanf("%d",&n);
//     pr_num(n);
// }



// #include<stdio.h>
// #include<string.h>
// void reverse_str()
// {
//     char c;
//     c=getchar();
//     if (c==10) return;
//     else reverse_str();
//     printf("%c",c);
// }
// int main()
// {
//     reverse_str();
// }



// #include<stdio.h>
// int U_clid(int a,int b)
// {
//     int r=a%b;
//     if(r==0) return b;
//     return U_clid(b,r);
// }
// int main()
// {
//     int a,b;
//     int c;
//     printf("수 1: ");scanf("%d",&a);
//     printf("수 2: ");scanf("%d",&b);
//     c=U_clid(a,b);
//     printf("%d와 %d의 최대공약수 = %d",a,b,c);
// }





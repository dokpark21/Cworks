// #include<stdio.h>
// void main()
// {
//     int i;
//     int num[10] = {40,60,200,100,30,10,80,70,50,20};

//     for (i=0; i<10; i++)
//     {
//         printf("%4d",num[i]);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i;
//     int num[10]={40,60,200,100,30,10,80,70,50,20};
//     for (i=0;i<10;i++){
//         printf("%4d",num[i]);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i;
//     int num[10]={40,60,200,100,30,10,80,70,50,20};
//     for (i=9;i>=0;i--){
//         printf("%4d",num[i]);
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int i;
//     int num[10]={40,60,200,100,30,10,80,70,50,20};
//     for (i=0;i<10;i++){
//         if (i%2==1){
//         printf("%4d",num[i]);
//         }
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i;
//     int num[10]={40,60,200,100,30,10,80,70,50,20};
//     for (i=0;i<10;i++){
//         if (num[i]>50){
//         printf("%4d",num[i]);
//         }
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i;
//     int sum=0;
//     int num[10]={40,60,200,100,30,10,80,70,50,20};
//     int max=num[i];
//     int min=num[i];
//     int max2=num[i];
//     for (i=0;i<10;i++){
//         sum+=num[i];
//         if (num[i]>max) max2=max; max=num[i]; 
//         if (num[i]<min) min=num[i];
//         if (num[i]<max && num[i]>max2) max2=num[i];
//     }
//     printf("합계 : %d\n",sum);
//     // printf("평균 : %d\n",sum/(sizeof(num)/sizeof(num[0])));
//     printf("최대값 : %d\n",max);
//     printf("최소값 : %d\n",min);
// }



// #include<stdio.h>
// int main()
// {
//     int a,i;
//     printf("찾을 숫자를 입력하세요 : ");scanf("%d",&a);
//     int num[10]={40,60,200,100,30,10,80,70,50,20};
//     for (i=0;i<=sizeof(num)/sizeof(num[0])+1;i++)
//     {
//         if (num[i]==a) {printf("%d번째에서 발견",i); break;}
//         else if (i==sizeof(num)/sizeof(num[0])+1) printf("발견 못함");
//         else continue;
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a,i;
//     printf("찾을 숫자를 입력하세요 : ");scanf("%d",&a);
//     int num[10]={40,60,200,100,30,10,80,70,50,20};
//     for (i=0;i<=sizeof(num)/sizeof(num[0])+1;i++)
//     {
//         if (num[i]==a) {printf("뒤에서 %d번째에서 발견",(sizeof(num)/sizeof(num[0])+1)-i); break;}
//         else if (i==sizeof(num)/sizeof(num[0])+1) printf("발견 못함");
//         else continue;
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int M[]={6,8,11,12,15,16,20,21,22,24};
//     int count=0,sum=0;
//     for (int i=0;i<=sizeof(M)/sizeof(M[0])-1;i++)
//     {
//         if (M[i]%3==0 && M[i]%4==0){
//             count+=1; sum+=M[i];
//         }
//     }
//     printf("3과4의 공배수의 개수 = %d\n",count);
//     printf("3과4의 공배수 합 = %d",sum);
// }


// #include<stdio.h>
// int main()
// {
//     int M[]= {6,8,11,2,15,16,20,21,22,24};
//     for (int i=0; i<=sizeof(M)/sizeof(M[0])-1;i++)
//     {
//         printf("M[%d] : ",i);
//         for (int a=1;a<=M[i];a++) printf("#");
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main()
// {
//     int count=0;
//     int a;
//     int M[20]={0};
//     for (count=0;; count++){
//         printf("정수를 입력 하세요 : ");scanf("%d",&a);
//         if (a==0) break;
//         M[count]=a;
//     }
//     printf("입력한 수 : ");
//     for (int i=0;i<count;i++){
//         printf("%d ",M[i]);
//     }
//     printf("\n");
//     printf("반대로 출력 : ");
//     for (int i=count-1;i>=0;i--){
//         printf("%d ",M[i]);
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int M[]={10,27,25,18,9,35,13,47};
//     int ten=0,twev=0,thrd=0,oth=0;
//     for (int i=0;i<sizeof(M)/sizeof(M[0]);i++){
//         switch (M[i]/10)
//         {
//             case 1: ten+=1; break;
//             case 2: twev+=1; break;
//             case 3: thrd+=1; break;
//             default : oth+=1; break;
//         }
//     }
//     printf("10대 값 = %d개  20대 값=%d개  30대 값=%d개  기타 값=%d개",ten,twev,thrd,oth);
// }



// #include<stdio.h>
// int main()
// {
//     int M[10]={0};
//     int a,count=0;
//     int ten=0,telv=0,third=0,fourth=0,fifth=0;
//     while (count<=9)
//     {
//         printf("%d번째 사람의 나이를 입력 해주세요 : ",count+1);scanf("%d",&a);
//         switch (a/10)
//         {
//             case 1: ten+=1; break;
//             case 2: telv+=1; break;
//             case 3: third+=1; break;
//             case 4: fourth+=1; break;
//             case 5: fifth+=1; break;
//             default : printf("== 범위를 초과합니다 다시 입력해주세요 ==\n"); continue;
//         }
//         M[count]=a;
//         count+=1;
//     }
//     int max=20,min=59;
//     printf("<<입력된 값들>>\n");
//     for (int i=0; i<=9; i++){
//         printf("  M[%d]=%d",i,M[i]);
//         if (M[i]>=max) max=M[i]; if (M[i]<=min) min=M[i];
//         if (i%5==4) printf("\n");
//     }
//     printf("\n<<연령대별 인원>>\n");
//     printf("  10대=%d명  20대=%d명  30대=%d명  40대=%d명  50대=%d명\n\n",ten,telv,third,fourth,fifth);
//     printf("  가장 많은 나이 : %d\n",max);
//     printf("  가장 적은 나이 : %d\n",min);
// }






// #include<stdio.h>
// int main()
// {
//     int M[10]={0};
//     int a,count=0;
//     int t[5]={0};
//     while (count<=9)
//     {
//         printf("%d번째 사람의 나이를 입력 해주세요 : ",count+1);scanf("%d",&a);
//         if(a/10>5 || a/10<1) {printf("== 범위를 초과합니다 다시 입력해주세요 ==\n"); continue;}
//         t[a/10-1]+=1;
//         M[count]=a;
//         count+=1;
//     }
//     int max=20,min=59;
//     printf("<<입력된 값들>>\n");
//     for (int i=0; i<=9; i++){
//         printf("  M[%d]=%d",i,M[i]);
//         if (M[i]>=max) max=M[i]; if (M[i]<=min) min=M[i];
//         if (i%5==4) printf("\n");
//     }
//     printf("\n<<연령대별 인원>>\n");
//     printf("  10대=%d명  20대=%d명  30대=%d명  40대=%d명  50대=%d명\n\n",t[0],t[1],t[2],t[3],t[4]);
//     printf("  가장 많은 나이 : %d\n",max);
//     printf("  가장 적은 나이 : %d\n",min);
// }


// #include<stdio.h>
// int main()
// {
//     int M[]={10,20,30,40,50,60,70,80,90,100};
//     printf("이동전 : ");
//     for (int i=0;i<=9;i++) printf("%d ",M[i]);
//     for (int i=1;i<=9;i++) M[i-1]=M[i];
//     printf("\n이동후 : ");
//     for (int i=0;i<=9;i++) printf("%d ",M[i]);
// }


// #include<stdio.h>
// int main()
// {
//     int M[]={10,20,30,40,50,60,70,80,90,100};
//     printf("이동전 : ");
//     for (int i=0;i<=9; i++) printf("%d ",M[i]);
//     for (int a=0; a<2;a++){
//         for (int i=8;i>=0;i--) M[i+1]=M[i];
//     }
//     printf("\n이동후 : ");
//     for (int i=0;i<=9;i++) printf("%d ",M[i]);
// }


// #include<stdio.h>
// int main()
// {
//     int a;
//     int t[7]={0};
//     int c[7]={0};
//     int cash=10000;
//     printf("월급입력 : ");scanf("%d",&a);
//     for (int i=0;i<=7;i++){
//         t[i]=a/cash;
//         c[i]=cash;
//         a%=cash;
//         if (i%2==0) cash/=2;
//         else cash/=5;
//     }
//     for (int i=0;i<=7;i++) printf("%d원권 ----------------- %d매\n",c[i],t[i]);
// }


// #include<stdio.h>
// int main()
// {
//     int A[]={50,60,80,40,90,70,30,100,20,10};
//     int B[sizeof(A)/sizeof(A[0])]={0};
//     for (int a=0;a<=sizeof(A)/sizeof(A[0])-1;a++){
//         int k=sizeof(A)/sizeof(A[0])-(a+1);
//         B[k]=A[a];
//     }
//     printf("배열 B : ");
//     for (int i=0;i<=sizeof(A)/sizeof(A[0])-1;i++) printf("%d ",B[i]);
// }

// #include<stdio.h>
// int main()
// {
//     int A[]={20,50,80,100};
//     int B[]={10,30,40,60,70,90};
//     int a=0,b=0,c=0;
//     int C[100]={0};
//     while (c<=sizeof(A)/sizeof(A[0])+sizeof(B)/sizeof(B[0]))
//     {
//         if (A[a]>=B[b]) {C[c]=B[b]; b+=1; c+=1;}
//         else if (B[b]>A[a]) {C[c]=A[a]; a+=1; c+=1;}
//     }
//     for (int i=0;i<c-1;i++){
//         printf("%d ",C[i]);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int A[]={1,2,3,4,5,6,7,8,9};
//     int B[]={1,2,3,3,5,6,7,8,9};
//     int a=sizeof(A)/sizeof(A[0]);
//     int b=sizeof(B)/sizeof(B[0]);
//     if (a!=b) {printf("두개의 배열은 다릅니다!");}
//     else{
//     for (int i=0; ;i++)
//     {   
//         if (i==a) {printf("두개의 배열은 같습니다!"); break;}  
//         if (A[i]!=B[i]){ printf("두개의 배열은 다릅니다!"); break;}
//     }
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int i;
//     int M[]={5,2,8,4,7};
//     int im;
//     puts("<<소트전>>");
//     for (int a=0;a<5;a++) printf("M[%d]=%d  ",a,M[a]);
//     for (int a=0;a<sizeof(M)/sizeof(M[0])-1;a++)
//     {
//         i=M[a];
//         for (int b=a;b<sizeof(M)/sizeof(M[0]);b++)
//         {
//             if (M[b]>i) {i=M[b]; im=b;}
//         }
//         if (i!=M[a]){
//         M[im]=M[a];
//         M[a]=i;
//         }
//     }
//     printf("\n");
//     for (int a=0;a<sizeof(M)/sizeof(M[0]);a++) printf("%d  ",M[a]);
// }


// select sort

// #include<stdio.h>
// int main()
// {
//     int i;
//     int M[]={5,2,8,4,7};
//     int im;
//     puts("<<소트전>>");
//     for (int a=0;a<5;a++) printf("M[%d]=%d  ",a,M[a]);
//     for (int a=0;a<sizeof(M)/sizeof(M[0])-1;a++)
//     {
//         for (int b=a+1;b<sizeof(M)/sizeof(M[0]);b++)
//         {
//         if (M[a]>M[b]){
//         im=M[a];
//         M[a]=M[b];
//         M[b]=im;
//         }
//     }
//     }
//     printf("\n");
//     for (int a=0;a<sizeof(M)/sizeof(M[0]);a++) printf("%d  ",M[a]);
// }


// #include<stdio.h>
// int main()
// {
//     int num[]={5,7,8,4,2};
//     int im;
//     int s=sizeof(num)/sizeof(num[0]);
//     for (int a=0;a<s-1;a++){
//         for (int b=0;b<s-1;b++){
//         if (num[b]>num[b+1]) {im=num[b]; num[b]=num[b+1]; num[b+1]=im;}
//         }
//     }
//     printf("<<소트결과>>  =>  ");
//     for (int a=0;a<s;a++) printf("%d  ",num[a]);
// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int rnd;
//     int M[100]={0};
//     int im;
//     int s=sizeof(M)/sizeof(M[0]);
//     srand(time(NULL));

//     for (int i=0;i<100;i++){
//         rnd=rand() %999 +1;
//         M[i]=rnd;
//     }
//     for (int a=0;a<s-1;a++){
//         for (int b=0;b<s-1;b++){
//         if (M[b]>M[b+1]) {im=M[b]; M[b]=M[b+1]; M[b+1]=im;}
//         }
//     }
//     for (int i=0;i<100;i++){
//         printf("%d   ",M[i]);
//         if (i%10==9) printf("\n");
//     }
// }



// #include<stdio.h>
// int bin_s(int M[],int n1,int n2,int a)
// {
//     int mid=(n1+n2)/2;
//     if (M[mid]==a) return mid;
//     else if (n1>n2) return -1;
//     else if (M[mid]>a) return bin_s(M,n1,mid-1,a);
//     else if (M[mid]<a) return bin_s(M,mid+1,n2,a);
// }
// int main()
// {
//     int M[]={57,65,88,40,90,78,33,70};
//     int s=sizeof(M)/sizeof(M[0]);
//     int a,im;
//     for (int a=0;a<s-1;a++){
//         for (int b=0;b<s-1;b++){
//         if (M[b]>M[b+1]) {im=M[b]; M[b]=M[b+1]; M[b+1]=im;}
//         }
//     }
//     printf("정렬후  : ");
//     for (int i=0;i<s;i++) printf("%d ",M[i]);
//     printf("\n찾을값 : ");scanf("%d",&a);
//     int bs=bin_s(M,0,s-1,a);
//     if (bs==-1) printf("값이 존재하지 않습니다");
//     else printf("%d번째에서 발견됨",bs+1);
// }



// #include<stdio.h>
// int main()
// {
//     int M[]={1,2,3,4,5,6,7,8,9,10};
//     int im;
//     int s=sizeof(M)/sizeof(M[0]);
//     for (int a=0;a<s-1;a++){
//             if (a%2==0) {im=M[a]; M[a]=M[a+1]; M[a+1]=im;}
//         }
//     for (int a=0;a<s;a++) printf("%d  ",M[a]);
// }



// #include<stdio.h>
// int main()
// {
//     int num,a;
//     int i;

//     char c_hex[] = "0123456789abcdef";
//     printf("정수값을 입력하세요 : ");scanf("%d",&num);
//     printf("몇 진수로 출력할까요? : ");scanf("%d",&a);
//     int aa=a;
//     for (i=0;;i++){   
//         if (num%aa==num) break;
//         aa*=a;
//     }
//     aa/=a;
//     for (int k=0;k<=i;k++){
//         printf("%c",c_hex[num/aa]);
//         num%=aa;
//         aa/=a;
//     }
//     printf("입니다");
// }


///////재귀로 풀기
// #include<stdio.h>
// void recur_num(int num,int count)
// {

//     if (num==0) return;
//     else recur_num(num/10,count+1);
//     printf("%d",num%10); 
//     if (count%3==0 && count!=0) printf(",");
    
// }
// int main()
// {
//     int num;
//     int count=0;
//     printf("정수입력 : ");scanf("%d",&num);
//     recur_num(num,count);
// }

// #include<stdio.h>
// int main()
// {
//     char str[50];
//     int idx=0;

//     printf("문자열 입력 : ");scanf("%s",str);
//     printf("입력 받은 문자열 : %s\n",str);

//     printf("문자 단위 출력 : ");
//     while(str[idx] != NULL)
//     {
//         printf("%c",str[idx]);
//         idx++;

//     }
//     printf("\n");
// }


// #include<stdio.h>
// int main()
// {
//     char str[50] = "I like C programming";
//     printf("string : %c \n",str[1]);
//     str[8]='\0';
//     str[6] = '\0';
//     str[1] = '\0';
//     printf("string : %s",str);
// }


// #include<stdio.h>
// int main()
// {
//     char str[50];
//     printf("문자열 입력 : ");scanf("%s",str);
//     int count=0;
//     while (str[count] != '\0')
//     {
//         count++;
//     }
//     printf("입력한 문자는 %d글자 입니다",count);
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("문자열 입력 : ");scanf("%s",str);
//     int count=0;
//     char im;
//     int n;
//     while (str[count+1]!= '\0'){
//         int count1=0;
//         while(str[count1+1]!= '\0'){
//             if (str[count1]<str[count1+1]) {im=str[count1]; str[count1] = str[count1+1]; str[count1+1]=im;}
//             count1++;
//         }
//         count++;
//     }
//     printf("%s",str);
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char target;
//     int i;
//     printf("문자열 : ");gets(str); 
//     printf("찾을문자 : ");scanf(" %c",&target);
//     for (i=0; i<strlen(str); i++){
//         if (str[i]==target) break;
//     }
//     printf("%c은 앞에서 %d번째 뒤에서 %d번째 입니다.",target,i+1,strlen(str)-i);
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("문자열 입력 : ");gets(str);
//     int l=strlen(str)-1;
//     char im;
//     for (int i=0;i<=l/2;i++){
//         im=str[i]; str[i]=str[l-i]; str[l-i]=im;
//     }
//     printf("%s",str);
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     int count=0;
//     printf("문자열 입력 : ");gets(str);
//     int l=strlen(str)-1;
//     if (str[0]!=' ') count+=1;
//     for (int i=0;i<=l-1;i++){    
//         if (str[i]==' ' && str[i+1]!=' ') count+=1;
//     }
//     printf("단어는 %d개 입니다",count);
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("단어입력 : ");scanf("%s",str);
//     char askii=str[0];
//     for (int i=0;i<strlen(str)-1;i++){
//         if ((int)str[i]<(int)str[i+1]) askii=str[i+1];
//     }
//     printf("아스키 코드값이 가장 큰 문자는 %c입니다.",askii);
// }




// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char alpha[]="abcdefghijklmnopqrstuvwxyz";
//     int num[26]={0};
//     printf("문자열을 입력 하세요 : "); gets(str);
//     for (int i=0;i<26;i++){
//         for (int s=0;s<strlen(str);s++){
//             if (str[s]==alpha[i]) num[i]+=1;
//         }
//     }
//     for (int i=0; i<26; i++){
//         printf("%c=%d   ",alpha[i],num[i]);
//         if (i%10==9) printf("\n");
//         }
// }




// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char s;
//     int count=0;
//     printf("문자열을 입력하세요 : ");gets(str);
//     printf("문자를 입력하세요 : "); s=getchar();
//     if (str[0]==s) count+=1;
//     for (int i=0;i<strlen(str);i++){
//         if (str[i]==32&&str[i+1]==s) count+=1;
//     }   
//     printf("%c로 시작하는 단어는 %d개",s,count);
// }




// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char alpha[]="abcdefghijklmnopqrstuvwxyz";
//     int num[26]={0};
//     int idx=0;
//     printf("문자열을 입력 하세요 : "); gets(str);
//     for (int i=0;i<26;i++){
//         for (int s=0;s<strlen(str);s++){
//             if (str[s]==alpha[i]) num[i]+=1;
//         }
//     }
//     for (int i=0;i<25;i++){
//         if (num[idx]<num[i+1])  idx=i+1;
//     }
//     printf("가장 많은 문자는 %c이고 %d개",alpha[idx],num[idx]);
// }


///알고리즘 X
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char target[50];
//     int a;
//     printf("문자열을 입력하시오 : "); gets(str);
//     printf("찾을 문자열 : "); gets(target);
//     char *split=strtok(str," ");
//     while (split != NULL){
//         a=strcmp(target,split);
//         split = strtok(NULL, " ");
//         if (a==0) {printf("%s가 존재합니다",target); break;}
//     }
//     if (a !=0) printf("%c가 존재하지 않습니다",target);
// }


//알고리즘으로 푼 문자열 안에서 단어 찾기
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char target[50];
//     int l_idx=0;
//     char l[50];
//     int n;
//     printf("문자열을 입력하시오 : "); gets(str);
//     printf("찾을 문자열 : "); gets(target);
//     for (int i=0;i<=strlen(str);i++){
//         if (str[i]==32 || i==strlen(str)) {
//             l[l_idx]=NULL;
//             puts(l);
//             n=strcmp(target,l);
//             if (n==0) {printf("%s가 존재합니다",target); break;}
//             l_idx=0;
//         }
//         else {l[l_idx]=str[i]; l_idx++;}
//     }
//     if (n!=0) printf("%s는 존재하지 않습니다",target);
// }

//11번 
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char idx=0;
//     int i=0,j=0;
//     printf("문자열을 입력 하세요 : "); gets(str);
//     while  (str[i]!=NULL){
//         if (str[i]<=90&& str[i]>=65) {str[idx]=str[i]+32; idx+=1;}
//         else if (str[i]>=97 && str[i]<=122) {str[idx]=str[i]-32; idx+=1;}
//         else if (str[i]==32){
//             for (j=i;j<strlen(str)-1;j++){
//                 str[j]=str[j+1];
//             }
//             str[strlen(str)-1]=NULL;
//             i--;
//         }
//         i++;
//     }
//     puts(str);
// }


//11번
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char idx = 0;
//     int i = 0, j = 0;
//     printf("문자열을 입력 하세요 : ");
//     gets(str);
//     while (1)
//     {
//         if (str[j] == NULL)
//         {
//             str[i] = NULL;
//             break;
//         }
//         if (str[j] == 32)
//             j++;
//         else
//         {
//             str[i] = str[j++];
//             if (str[i] <= 90 && str[i] >= 65)
//             {
//                 str[i]+=32;
//             }
//             else if (str[i] >= 97 && str[i] <= 122)
//             {
//                 str[i]-=32;
//             }

//             i++;
//         }
//     }
//     puts(str);
// }

//12번
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     int a,b;

//     printf("문자열을 입력하세요 : "); gets(str);
//     printf("몇번쨰부터 몇 글자를 지울까요?"); scanf("%d%d",&a,&b);
//     for (int i=0;i<b;i++){
//         for (int j=a-1;j<strlen(str)-1;j++){
//             str[j]=str[j+1];
//         }
//         str[strlen(str)-1]=NULL;
//     }
//     printf("%s",str);
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     char im;
//     printf("문자열을 입력 : "); gets(str);
//     for (int i=0;i<strlen(str); i++){
//         if (str[i]=='"' && str[i+1]<=122 && str[i+1]>=97) str[i+1]=str[i+1]-32;
//         if (i==strlen(str)-1 && str[i-1]!='.') {im=str[i]; str[i]='.'; str[i+1]='"';}
//     }
//     printf("%s",str);
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     printf("평 문 : "); gets(str);
//     for (int i=0;i<strlen(str);i++){
//         if (str[i]>=65 && str[i]<=90){
//             str[i]+=3;
//             if (str[i]>90) {str[i]=65+(str[i]-90);}
//             str[i]=str[i]+32;
//         }
//         else if (str[i]>=97 && str[i]<=122){     
//             str[i]+=3;
//             if (str[i]>122) {str[i]=90+(str[i]-122);}
//             str[i]=str[i]-32;
//         }
//     }
//     printf("%s",str);
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int lotto[6]={0};
//     int count=0;
//     int my_lo[3];
//     for (int i = 0; i < 6; i++) {
// 		lotto[i] = rand() % 9 + 1;
// 		for (int j = 0; j < i; j++) {
// 			if (lotto[i] == lotto[j]) {
//                 i--;
//                 break;
//             }
// 		}
// 	}
//     printf("로또 번호를 입력하세요 : ");scanf("%d%d%d",&my_lo[0],&my_lo[1],&my_lo[2]);
//     printf("컴퓨터 추첨 번호 : ");
//     for (int i=0;i<6;i++) printf("%d ",lotto[i]);
//     for (int i=0;i<3;i++){
//         for (int j=0; j<6;j++){
//             if (my_lo[i]==my_lo[j]) count+=1;
//     }
//     }
//     printf("\n");
//     if (count==3) printf("1등 입니다!!!");
//     else if (count==2) printf("2등 입니다!!!");
//     else printf("꽝입니다!!!");
// }


// #include<stdio.h>
// int main()
// {
//     int num[10];
//     int im;
//     for (int i=0;i<10;i++){
//         printf("정수입력 : ");scanf("%d",&num[i]);
//         for (int j=0;j<i;j++){
//             for (int h=i; h>0; h--){
//                 if (num[h]<num[h-1]){im=num[h-1]; num[h-1]=num[h]; num[h]=im;}
//             }
//         }
//         printf("=> ");
//         for (int j=0;j<=i;j++) printf("%d ",num[j]);
//         printf("\n");
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// int insert(int Arr[],int cnt)
// {
//     int idx,ins_n;
//     int im=0;
//     int j=0;
//     cnt+=1;
//     printf("몇 번째에 어떤 수를 삽입 할까요? ");scanf("%d%d",&idx,&ins_n);
//     for (int i=cnt;i>idx;i--){
//         Arr[i]=Arr[i-1];
//     }
//     Arr[idx]=ins_n;
//     printf("[");
//     for (int i=0;i<=cnt;i++) printf("%d ",Arr[i]);
//     printf("\b]\n");
//     return cnt;
// }
// int delete(int Arr[],int cnt)
// {
//     int del_n;
//     cnt-=1;
//     printf("몇 번째 수를 삭제 할까요? ");scanf("%d",&del_n);
//     for (int i=del_n; i<=cnt; i++){
//         Arr[i]=Arr[i+1];
//     }
//     Arr[cnt+1]= NULL;
//     printf("[");
//     for (int i=0;i<=cnt;i++) printf("%d ",Arr[i]);
//     printf("\b]\n");  
//     return cnt;
// }
// int main(){
//     int Arr[100]={10,20,30,40,50};
//     int n;
//     int cnt=4;
//     while(n!=3){
//         printf("=== 메뉴 ===\n1.삽입\n2.삭제\n3.종료\n");
//         printf("선택 => ");scanf("%d",&n);
//         switch (n)
//         {
//         case 1: insert(Arr,cnt); cnt+=1; break;
//         case 2: delete(Arr,cnt); cnt-=1; break;
//         case 3: break;
//         default: printf("올바른 번호를 입력해주세요\n"); break;
//         }   
//     }
// }



#include<stdio.h>
#include<string.h>
int main()
{
    char name[10][10];
    int score[100]={};
    int im_s;
    char im_n[10];
    for (int i=0;i<10;i++){
        printf("이름 : "); scanf("%s",name[i]);
        printf("점수 : ");scanf("%d",&score[i]);
        for (int j=0;j<i;j++){
            for (int h=i;h>0;h--){
                if (score[h]>score[h-1]){
                    im_s=score[h];
                    score[h]=score[h-1];
                    score[h-1]=im_s;
                    strcpy(im_n,name[h]);
                    strcpy(name[h],name[h-1]);
                    strcpy(name[h-1],im_n);
                }
            }
        }
    }
    for (int i=0;i<5;i++){
        printf("%d등 : ",i+1);
        printf("%s\n",name[i]);
    }
}
// #include<stdio.h>
// int main()
// {
//     FILE *ifp, *ofp;

//     ifp=fopen("/Users/parkssanghyeon/Cworks/a.txt","w");
//     if(ifp==NULL){
//         printf("입력파일이 개방되지않았습니다\n");
//     }
//     else printf("입력파일이 개방되었습니다\n");

//     ofp=fopen("b.txt","w");
//     if(ofp==NULL){
//         printf("출력파일이 개방되지않았습니다\n");
//     }
//     else printf("출력파일이 개방되었습니다\n");
// }
///Users/parkssanghyeon/Cworks/


// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     char ch;
//     fp=fopen("a.txt","r");
//     if(fp==NULL){
//         printf("파일개방실패\n");
//     }
//     ch=fgetc(fp);
//     printf("입력한문자: %c\n",ch);
//     fclose(fp);
// }



// #include<stdio.h>
// int main()
// {
//     FILE *in;
//     char ch;
//     in = fopen("/Users/parkssanghyeon/Cworks/c:\\kk.txt","r");
//     if (in==NULL){puts("File Not Found\n");}
//     while(1)
//     {
//         ch=fgetc(in);
//         if(ch==EOF)
//                 break;
//         putchar(ch);
//     }
// }


// #include<stdio.h>
// int main()
// {
//     FILE *out;
//     out=fopen("/Users/parkssanghyeon/Cworks/a.txt","w");
//     fprintf(out,"%10s%10s%10s\n","이름","나이","시력");
//     fprintf(out,"%10s%10d%10.1f\n","길동",11,1.5);
//     fclose(out);
// }


// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     char ch;

//     fp=fopen("/Users/parkssanghyeon/Cworks/a.txt","r");
//     if(fp==NULL){
//         printf("파일개방실패\n");
//     }
//     while(1)
//     {
//         ch=fgetc(fp);
//         if(ch==EOF) break;
//         putchar(ch);
//     }
//     fclose(fp);
// }


// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     char ch;

//     fp=fopen("/Users/parkssanghyeon/Cworks/c.txt","w");
//     if(fp==NULL){
//         printf("파일개방실패\n");
//     }
//     printf("데이터를 입력하세요\n");
//     while(1)
//     {
//         ch=getchar();
//         if(ch==EOF) break;
//         fputc(ch,fp);
//     }
//     fclose(fp);
// }



// #include<stdio.h>
// int main()
// {
//     FILE *out;
//     char M[11]="ABCD";
//     out = fopen("/Users/parkssanghyeon/Cworks/c.txt","w");
//     fputs(M,out); fputs("E",out); fputs("\n",out);
//     fputs("FG\n",out); fputs("HIJK"+2,out);
//     fclose(out);
// }


// #include<stdio.h>
// int main()
// {
//     FILE *in;
//     char M[11];
//     int K,E;
//     in =fopen("/Users/parkssanghyeon/Cworks/c.txt","r");
//     if (in==NULL){
//         puts("FILE Not Found\n");
//     }
//     int j;
//     while(1){
//         j=fscanf(in,"%s%d%d\n",M,&K,&E);
//         if (j==EOF) break;
//         printf("%8s%9s%8s\n","이름","국어","영어");
//         printf("%6s%6d%6d",M,K,E);
//         getchar();
//     }
//     fclose(in);
// }


// #include<stdio.h>
// int main()
// {
//     char ch;
//     while(1){
//         ch=fgetc(stdin);
//         if(ch==EOF) break;
//         fputc(ch,stdout);
//     }
// }



// #include<stdio.h>
// int main()
// {
//     FILE *fp;
//     char ch;
//     int cnt=0;

//     fp=fopen("/Users/parkssanghyeon/Cworks/b.txt","r");
//     if(fp==NULL){
//         printf("파일개방실패\n");
//     }

//     while(1){
//         ch=fgetc(fp);
//         if (ch==EOF) break;
//         putchar(ch);
//         if(ch=='.'){
//             putchar('\n');
//             cnt++;
//             if(cnt%3==0) putchar('\n');
//         }
//     }
//     fclose(fp);
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     FILE *ifp,*ofp;
//     char str[80];
//     char *res;

//     ifp=fopen("/Users/parkssanghyeon/Cworks/a.txt","r");
//     if(ifp==NULL){
//         printf("입력파일개방실패\n");
//     }
//     ofp=fopen("/Users/parkssanghyeon/Cworks/b.txt","w");
//     if(ofp==NULL){
//         printf("출력파일개방실패\n");
//     }
//     while(1){
//         res=fgets(str,sizeof(str),ifp);
//         if(res==NULL) break;
//         str[strlen(str)-1]='\0';
//         fputs(str,ofp);
//         fputs(" ",ofp);
//     }
//     fclose(ofp);
// }



//1
// #include<stdio.h>
// int main()
// {
//     FILE *in;
//     in=fopen("/Users/parkssanghyeon/Cworks/a.txt","w");
//     fprintf(in,"%-14s%-10d%-10d\n","사과",100,5);
//     fprintf(in,"%-15s%-10d%-10d\n","오렌지",200,3);
// }


//2
// #include<stdio.h>
// int main()
// {
//     FILE *in;
//     char name[10];
//     int p;
//     int c;
//     int tot_p=0,tot_c=0,tot_p2=0;
//     in=fopen("/Users/parkssanghyeon/Cworks/a.txt","r");
//     printf("    ***매출현황***\n");
//     printf("품목  단가  수량  금액\n");
//     int j;
//     while(1)
//     {
//         j=fscanf(in,"%s%d%d",name,&p,&c);
//         if(j==-1)break;
//         printf("%-10s%-5d%-5d%-5d\n",name,p,c,p*c);
//         tot_p+=p; tot_c+=c; tot_p2+=p*c;
//     }
//     printf("-------------------------\n");
//     printf(" 합    %-5d%-5d%-5d",tot_p,tot_c,tot_c*tot_p);
//     fclose(in);
// }



//3
// #include<stdio.h>
// int main()
// {
//     FILE *in;
//     char p_num[20];
//     char name[10];
//     char s[5];
//     char num[15];
//     char pl[20];
//     in=fopen("/Users/parkssanghyeon/Cworks/a.txt","w");
//     for (int i=0;i<2;i++){
//         printf("주민번호 : ");scanf("%s",p_num);
//         printf("이   름 :  ");scanf("%s",name);
//         printf("성   별 : ");scanf("%s",s);
//         printf("전화번호 : ");scanf("%s",num);
//         printf("주   소 : ");scanf("%s",pl);
//         fprintf(in,"%-20s%-10s%-10s%-15s%-15s\n",p_num,name,s,num,pl);
//     }
//     fclose(in);
// }


//4
// #include<stdio.h>
// int main()
// {
//     FILE *in;
//     in=fopen("/Users/parkssanghyeon/Cworks/a.txt","r");
//     char p_num[20];
//     char name[10];
//     char s[5];
//     char num[15];
//     char pl[20];
//     int j;
//     printf("%-20s%-10s%-10s%-15saddres\n","pr_number","name","sex","phone_num");
//     while(1)
//     {
//         j=fscanf(in,"%s%s%s%s%s",p_num,name,s,num,pl);
//         if (j==-1) break;
//         printf("%-20s%-10s%-10s%-15s%-15s\n",p_num,name,s,num,pl);
//     }
//     fclose(in);
// }



//5
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     FILE *in;
//     in=fopen("/Users/parkssanghyeon/Cworks/a.txt","r");
//     char s1[100];
//     char s2[100];
//     fgets(s1,sizeof(s1),in);
//     fgets(s2,sizeof(s2),in);
//     int i=0;
//     while(s1[i]==s2[i])
//     {
//         i++;
//     }
//     if (s1[i-1]==' ') i-=1;
//     printf("앞에서 %d글자(",i);
//     for (int k=0;k<i;k++) printf("%c",s1[k]);
//     printf(")가 동일합니다");
// }


//6
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *rd,*wr;
    char name[10][10];
    int list[10][3];
    int n;
    int l_n=0;
    char s[10];
    int n1;
    int n2;
    int j;
    while(1)
    {
        printf("== 메뉴 ==\n1. 데이터 입력\n2. 파일에 저장\n3. 파일에서 가져오기\n4. 종료\n");
        printf("==> ");scanf("%d",&n);
        if (n==4) break;
        switch(n)
        {
            case 1: printf("품목 : ");scanf("%s",name[l_n]); printf("수량 : ");scanf("%d",&list[l_n][1]); 
                    printf("단가 : ");scanf("%d",&list[l_n][2]); list[l_n][0]=l_n; l_n++; break;

            case 2: wr=fopen("/Users/parkssanghyeon/Cworks/a.txt","w");
                for (int i=0;i<l_n;i++){
                fprintf(wr,"%-10s%-6d%-6d\n",name[i],list[i][1],list[i][2]);
            }
            fclose(wr);
            printf("저장 완료!\n\n");
             break;
            case 3: rd=fopen("/Users/parkssanghyeon/Cworks/a.txt","r");
                    printf("%-10s%-6s%-6s\n","name","cnt","price"); 
                    while(1){
                        j=fscanf(rd,"%s%d%d",s,&n1,&n2);
                        if (j==-1) break;
                        printf("%-10s%-6d%-6d\n",s,n1,n2);
                    }
                    fclose(rd);
                    puts("");
                    break;
            default : printf("올바른 번호를 입력하세요\n\n");
        }
    }
}
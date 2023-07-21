#include<stdio.h>
//문자열 길이
int Mystrlen(char *M)
{
    int l=0;
    while (*M!=NULL) {l+=1; M++;}
    return l;
}
//문자열 복사
#include<stdio.h>
#include<string.h>
char *  myStrcpy(char *ap, char *bp)
{
    while(*bp){
        *ap=*bp;
        ap++; bp++;
    }
    ap--;bp--;
}
//문자열 비교
#include<stdio.h>
#include<string.h>
int myStricmp(char *ap,char *bp)
{
    char a;
    char b;
    while (*ap || *bp){
            if (*ap>=97) a=*(ap)-32;
            else a=*ap;
            if (*bp>=97) b=*(bp)-32;
            else b=*bp;
            if (a!=b) {
                if (a>b) return 1;
                else if (b>a) return -1;
                break;
            }
            if (*(ap+1)==NULL && *(bp+1)==NULL) {return 0; break;}
            ap++; bp++;
    }
}
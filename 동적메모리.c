// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     short a=5;
//     short *ap;
//     ap=(short*)malloc(2);
//     printf("%d\n",ap);
//     *ap=10;
//     printf("%d\n",a+*ap);
//     free(ap);
// }



// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *ptr1 = (int *)malloc(sizeof(int));
//     int *ptr2 = (int *)malloc(sizeof(int)*7);

//     *ptr1=20;
//     for (int i=0; i<7; i++)
//         ptr2[i]=i+1;
    

//     printf("%d \n", *ptr1);
//     for (int i=0;i<7;i++)
//         printf("%d", ptr2[i]);

//     free(ptr1);
//     free(ptr2);
// }



// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
//     char *ap;
//     ap = (char *)malloc(4);
//     strcpy(ap,"ABC");
//     printf("%d\n",ap); puts(ap);
//     free(ap);
//     ap=(char *)malloc(4);
//     strcpy(ap,"CDEF");
//     printf("%d\n",ap); puts(ap);
//     free(ap);
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// char * ReadUserName()
// {
//     char *name;
//     name=(char *)malloc(30);
//     printf("What is your name? ");
//     gets(name);
//     return name;
// }
// int main()
// {
//     char *name1;
//     char *name2;
//     char *n1;
//     char *n2;
//     name1=ReadUserName();
//     printf("name1 : %s \n",name1);
//     name2=ReadUserName();
//     printf("name2 : %s \n",name2);
// }



// #include<stdio.h>
// #include<stdlib.h>
// int main(void)
// {
//     char *pmem;
//     pmem=(char *) malloc(100);

//     if (pmem==NULL)
//     {
//         puts("메모리를 할달할 수 없습니다.");
//     }
//     else
//     {

//         pmem = (char *)realloc(pmem,50);

//         if (pmem == NULL)
//         {
//             puts("메모리를 재할당할 수 없습니다.");
//         }
//         free(pmem);
//     }
// }



//1
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     printf("몇개의 수를 입력할까요 : ");scanf("%d",&n);
//     int *ptr=(int *)malloc(sizeof(int)*n);
//     for (int i=0;i<n;i++)
//     {
//         printf("%d번쨰 값 : ",i+1);scanf("%d",&ptr[i]);
//     }
//     printf("입력한 값은 ");
//     for (int i=0;i<n;i++)
//     {
//         printf("%d ",ptr[i]);
//     }
// }



//2
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int n;
//     printf("몇 개의 난수를 발생 할까요?");scanf("%d",&n);
//     int *ptr=(int *)malloc(sizeof(int)*n);
//     int rnd, sum=0;
//     srand(time(NULL));
//     for (int i=0;i<n;i++)
//     {
//         rnd=rand()%100 +1;
//         ptr[i]=rnd;
//         sum+=rnd;
//     }
//     printf("=> ");
//     for (int i=0;i<n;i++)
//     {
//         printf("%d ",ptr[i]);
//     }
//     printf("\n합=%d",sum);
//     free(ptr);
// }



//3
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n,sum=0;
//     int num;
//     int max=0;
//     int min=100;
//     printf("몇 개의 수를 입력 하시겠습니까 : ");scanf("%d",&n);
//     int *ptr=(int *)malloc(sizeof(int)*n);
//     for (int i=0;i<n;i++)
//     {
//         printf("정수를 입력하세요 : ");scanf("%d",&num);
//         ptr[i]=num;
//         sum+=num;
//         if (max<num) max=num;
//         if (min>num) min=num;
//     }
//     printf("합계 = %d\n",sum);
//     printf("평균 = %.1f\n",(float)sum/n);
//     printf("최대 = %d\n",max);
//     printf("최소 = %d\n",min);
//     free(ptr);
// }



//4
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     char ch;
//     int count=1;
//     char *ptr=(char *)malloc(count*sizeof(char));
//     printf("문자를 입력하세요 : ");
//     while ((ch=getchar())!='\n')
//     {
//         ptr[count-1]=ch;
//         count++;
//         ptr=realloc(ptr,count*sizeof(char));
//     }
//     ptr[count-1]='\0';
//    for (int i=0;i<count-1;i++)
//    {
//     printf("%c->",ptr[i]);
//    }
//    printf("\b\b");
// }





//5
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int count=1;
    char *ptr=(char *)malloc(count*sizeof(char));
    printf("문자를 입력하세요 : ");
    while ((ch=getchar())!='\n')
    {
        ptr[count-1]=ch;
        count++;
        ptr=realloc(ptr,count*sizeof(char));
    }
    ptr[count-1]='\0';
    for (int i=count-2;i>=0;i--)
    {
        printf("%c->",ptr[i]);
    }
    printf("\b\b");
}


//6
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char ch;
//     int count=1;
//     char *ptr=(char *)malloc(count*sizeof(char));
//     for (int i=0;i<5;i++)
//     {
//         printf("과일이름 : ");
//         while ((ch=getchar())!='\n')
//         {
//             ptr[count-1]=ch;
//             count++;
//             ptr=realloc(ptr,count*sizeof(char));
//         }
//         ptr[count-1]=' ';
//         count++;
//     }
//     printf("입력한 이름은 ");
//     printf("%s",ptr);
//     printf("입니다");
// }
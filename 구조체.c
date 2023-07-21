// #include<stdio.h>
// #include<string.h>

// struct Student{
//     int no;
//     char name[10];
//     int k,e,m,tot;
//     float av;
// };

// int main()
// {
//     struct Student st;
//     st.no=1;
//     strcpy(st.name,"홍길동");
//     st.k=100;
//     st.e=90;
//     st.m=85;
//     st.tot=st.k+st.e+st.m;
//     st.av=st.tot/3.0;

//     printf("%d %s %d %d %d %d %.2f",st.no,st.name,st.k,st.e,st.m,st.tot,st.av);
// }



// #include<stdio.h>
// #include<string.h>
// struct Student{
//     int no;
//     char name[10];
//     int k,e,m,tot;
//     float av;
// };

// int main()
// {
//     struct Student st={1,"이순신",70,80,90};

//     st.tot=st.k+st.e+st.m;
//     st.av=st.tot/3.0;

//     printf("%d %s %d %d %d %d %.2f",st.no,st.name,st.k,st.e,st.m,st.tot,st.av);
// }



// #include<stdio.h>
// #include<string.h>
// struct Student{
//     int no;
//     char name[10];
//     int k,e,m,tot;
//     float av;
// };
// typedef struct Student Std;
// int main()
// {
//     Std st1={1,"이순신",70,80,90};
//     st1.tot=st1.k+st1.e+st1.m;
//     st1.av=st1.tot/3.0;
//     Std st2=st1;
//     printf("%d %s %d %d %d %d %.2f\n",st1.no,st1.name,st1.k,st1.e,st1.m,st1.tot,st1.av);
//     printf("%d %s %d %d %d %d %.2f\n",st2.no,st2.name,st2.k,st2.e,st2.m,st2.tot,st2.av);
// }



// #include<stdio.h>
// struct KT
// {
//     char name[10];
//     int nai;
//     double ki;
// };
// typedef struct KT Gu;
// void disp(Gu M)
// {
//     printf("이름 = %s\n",M.name);
//     printf("나이 = %d\n",M.nai);
//     printf("키 = %.1f\n",M.ki);
// }
// void main()
// {
//     Gu  dt1 = {"홍길동",105,110.5};
//     Gu  dt2 = {"유관순",20,55.5};
//     disp(dt1);
//     printf("\n");
//     disp(dt2);
// }


// #include<stdio.h>
// #include<string.h>
// struct KT
// {
//     char name[10];
//     int nai;
//     double ki;
// };
// typedef struct KT Gu;
// void disp(Gu M)
// {
//     printf("이름 = %s\n",M.name);
//     printf("나이 = %d\n",M.nai);
//     printf("키 = %.1f\n",M.ki);
// }
// Gu change(Gu M)
// {
//     Gu tmp;
//     strcpy(tmp.name,M.name);
//     tmp.ki=100;
//     tmp.nai=130;
//     return tmp;
// }
// int main()
// {
//     Gu dt1 = {"홍길동",105,110.5};
//     disp(dt1);
//     dt1=change(dt1);
//     printf("\n");
//     disp(dt1);
// }



// #include<stdio.h>
// struct Employee
// {
//     int age;
//     double height;
// };
// int main()
// {
//     struct Employee M[3]={10,110.5, 20,120.5, 30,130.5};
//     printf("%5d%10.1f\n",M[0].age,M[0].height);
//     printf("%5d%10.1f\n",M[1].age,M[1].height);
//     printf("%5d%10.1f\n",M[2].age,M[2].height);
// }



// #include<stdio.h>
// typedef struct Employee
// {
//     int age;
//     double height;
// }Emp;

// void disp(Emp Fm[],int cnt)
// {
//     for (int i=0; i<cnt;i++)
//     {
//         printf("%5d%10.1f\n",Fm[i].age,Fm[i].height);
//     }
// }
// int main()
// {
//     Emp M[3]={10,110.5, 20,120.5, 30,130.5};
//     disp(M,3);
// }


// #include<stdio.h>
// struct Person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main()
// {
//     struct Person arr[3]={{"이승기","010-1212-0001",21},{"정지영","010-1313-0002"},{"한지수","010-1717-0003",19}};
//     int i;
//     for (i=0;i<3;i++)
//     {
//         printf("%s %s %d\n",arr[i].name,arr[i].phoneNum,arr[i].age);
//     }
// }


//포함 구조체
// #include<stdio.h>
// struct Sight
// {
//     float left;
//     float right;
// };
// struct Person
// {
//     struct Sight sig;
//     char name[20];
//     char phoneNum[20];
//     int age;
// };
// int main()
// {
//     struct Person man={1.5,2.0,"이승기","010-1212-0001",21};
//     printf("%.1f %.1f %s %s %d",man.sig.left,man.sig.right,man.name,man.phoneNum,man.age);

// }



//문제
//1
// #include<stdio.h>
// struct Point
// {
//     int x,y
// };
// int equal(struct Point p1,struct Point p2)
// {
//     if (p1.x==p2.x && p1.y == p2.y) return 0;
//     else return 1;
// }
// int main()
// {
//     struct Point p1={1,2};
//     struct Point p2={1,2};
//     int l=equal(p1,p2);
//     if (l==0) printf("두점은 일치합니다\n");
//     else printf("두점은 일치하지 않습니다\n");
// }


//2 두점 정의 -> 사각형 정의 -> 넓이 구하기
// #include<stdio.h>
// #include<math.h>
// struct Point
// {
//     int x,y;
// };
// struct Rectangle
// {
//     struct Point a,b;
// };
// int r_size(struct Rectangle R)
// {
//     int l=(R.a.x-R.b.x);
//     l=l>0?l:l*(-1);
//     int z=(R.a.y-R.b.y);
//     z=z>0?z:z*(-1);
//     int s=l*z;
//     return s;
// }
// int main()
// {
//     struct Point p1={5,5};
//     struct Point p2={20,7};
//     struct Rectangle r1={p1,p2};
//     int s=r_size(r1);
//     printf("사각형의 면적은 %d",s);
// }

//3 벡터 덧셈
// #include<stdio.h>
// typedef struct Vector
// {
//     double x,y;
// }vec;
// void Vector_print(struct Vector v)
// {
//     printf("(%.1f %.1f)",v.x,v.y);
// }
// vec Vector_add(vec v1, vec v2)
// {
//     vec v3;
//     v3.x=v1.x+v2.x;
//     v3.y=v1.y+v2.y;
//     return v3;
// }
// int main()
// {
//     vec v1={1.0,2.0};
//     vec v2={2.0,3.0};
//     vec v3;
//     v3 = Vector_add(v1,v2);
//     Vector_print(v3);
// }


//4 이메일 표현
// #include<stdio.h>
// typedef struct E_mail{
//     char t[20];
//     char p1[10];
//     char p2[10];
//     char text[30];
//     char date[20];
//     int num;
// }mail;
// void mail_print(mail m)
// {
//     printf("제목 : %s\n수신자 : %s\n발신자 : %s\n내용 : %s\n날짜 : %s\n우선순위 : %d",m.t,m.p1,m.p2,m.text,m.date,m.num);
// }
// int main()
// {
//     mail m1={"안녕하십니까?","Brown","Sally","hello worldasdasd","2016년 3월 1일",2};
//     mail_print(m1);
// }



//5 음식 정보 표현
// #include<stdio.h>
// typedef struct food{
//     char name[20];
//     int cal;
// }f;
// void tot_cal(f Food_Array[],int cnt)
// {
//     int sum=0;
//     for (int i=0;i<cnt;i++)
//     {
//         sum+=Food_Array[i].cal;
//     }
//     printf("잔체 칼로리는 %d 칼로리입니다.",sum);
// }
// int main()
// {
//     f Food_Array[3]={{"hamburger",900},{"bulgogi",500},{"sushi",700}};
//     tot_cal(Food_Array,3);
// }



//6 전화번호부
// #include<stdio.h>
// #include<string.h>
// typedef struct Number{
//     char name[10];
//     char h_num[20];
//     char s_num[20];
// }num;
// void num_input(num number_Array[],int cnt)
// {
//     printf("이름 : ");scanf("%s",number_Array[cnt].name);
//     printf("집전화번호 : ");scanf("%s",number_Array[cnt].h_num);
//     printf("휴대폰번호 : ");scanf("%s",number_Array[cnt].s_num);
// }
// void num_output(num number_Array[],int cnt)
// {
//     for (int i=0;i<cnt;i++)
//     {
//         printf("%s : (%s,%s)\n",number_Array[i].name,number_Array[i].h_num,number_Array[i].s_num);
//     }
// }
// void search_num(num number_Array[],int cnt)
// {
//     char name[10];
//     printf("찾으실 분의 이름을 입력하세요 : ");scanf("%s",name);
//     for (int i=0;i<cnt;i++)
//     {
//         if (strcmp(number_Array[i].name,name)==0) {printf("%s : (%s,%s)\n",number_Array[i].name,number_Array[i].h_num,number_Array[i].s_num); break;}
//     }    
// }
// int main()
// {
//     int cnt=0;
//     int n;
//     num number_Array[100];
//     while(1)
//     {
//         printf("=== 메뉴 ===\n1. 전화번호 등록\n2. 전화번호 리스트\n3. 전화번호 검색\n4. 종료\n");
//         printf("선택 -> ");scanf("%d",&n);
//         if (n==4) break;
//         switch(n)
//         {
//             case 1: num_input(number_Array,cnt); cnt+=1; break;
//             case 2: num_output(number_Array,cnt); break;
//             case 3: search_num(number_Array,cnt); break;
//             default : printf("올바른 번호를입력해주세요\n");
//         }
//     }
// }


//7 단어빈도 계산
// #include<stdio.h>
// #include<string.h>
// #define SIZE 200

// typedef struct Wc{
//     char word[30];
//     int count;
// }wc;
// int word_input(wc simbol_table[],int cnt)
// {
//     char word[30];
//     printf("단어를 입력하세요 : ");scanf("%s",word);
//     for (int i=0;i<=cnt;i++)
//     {
//         if (strcmp(simbol_table[i].word,word)==0) {simbol_table[i].count+=1; return 0; break;}
//         if (i==cnt && strcmp(simbol_table[i].word,word)!=0) {strcpy(simbol_table[cnt].word,word); simbol_table[cnt].count=1; return 1;}
//     }}
// int main()
// {
//     wc simbol_table[SIZE];
//     int cnt=0;
//     int l;
//     for (int i=0;i<5;i++)
//     {
//         l=word_input(simbol_table,cnt);
//         if (l==1) cnt++;
//     }
//     for (int i=0;i<cnt;i++)
//     {
//         printf("%s : %d\n",simbol_table[i].word,simbol_table[i].count);
//     }
// }



//8 편의점 상품
// #include<stdio.h>
// #include<string.h>
// int t_selling=0;
// typedef struct product{
//     char name[20];
//     int price;
//     int sell;
//     int now;
// }pr;
// void sell(pr products[],int cnt)
// {
//     int n;
//     int s;
//     for (int i=0;i<cnt;i++)
//     {
//         printf("%d. %s\n",i+1,products[i].name);
//     }
//     printf("판매된 상품 번호를 선택하세요");scanf("%d",&n);
//     printf("판매된 수량을 입력하세요");scanf("%d",&s);
//     if (products[n-1].now-s<0) printf("판매된 수량이 현재 수량을 초과했습니다\n");
//     else {products[n-1].now-=s; products[n-1].sell+=s; t_selling+=s*products[n-1].price;}
// }
// void tot_sell()
// {
//     printf("현재까지 총매출액은 %d원입니다\n",t_selling);
// }
// int main()
// {
//     int n;
//     int cnt=5;
//     pr products[5]={{"치약",2000,0,10},{"칫솔",1000,0,10},{"과자",1500,0,10},{"아이스크림",1000,0,10},{"담배",4500,0,10}};
//     while(1){
//     printf("=== 메뉴\n1.상품판매드록\n2.총매출액\n3.종료\n");
//     printf("원하는 기능을 선택하세요 : ");scanf("%d",&n);
//     if (n==3) break;
//     switch(n){
//         case 1: sell(products,cnt); break;
//         case 2: tot_sell(products,cnt); break;
//         default : printf("올바른 번호를 입력하세요\n"); 
//     }
//     }
// }




//9음악파일 관리
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// typedef struct song{
//     char title[20];
//     char name[20];
//     char save[20];
//     char categ[20];
// }song;
// void input_song(song song[],int cnt)
// {
//     printf("제목 : "); scanf(" %s",song[cnt].title);
//     printf("가수 : "); scanf(" %s",song[cnt].name);
//     printf("저장된 위치 : "); scanf(" %s",song[cnt].save);
//     printf("분류(가요,팝,영화음악) : "); scanf(" %s",song[cnt].categ);
// }
// void delete_song(song song[],int cnt)
// {
//     int n;
//     printf("몇번쨰 음악을 제거하시겠습니까 : ");scanf("%d",&n);
//     for (int i=n-1;i<=cnt-1;i++)
//     {
//         strcpy(song[i].name,song[i+1].name); strcpy(song[i].title,song[i+1].title); strcpy(song[i].save,song[i+1].save); strcpy(song[i].categ,song[i+1].categ);
//     }
// }
// void print_song(song song[],int cnt)
// {
//  for (int i=0;i<cnt;i++)
//  {
//     printf("%s %s %s %s\n",song[i].title,song[i].name,song[i].save,song[i].categ);
//  }
// }
// void search_song(song song[],int cnt)
// {
//     char s[20];
//     printf("칮기 원하는 노래 제목을 입력하세요 : ");scanf("%s",s);
//     for (int i=0;i<cnt;i++)
//     {
//         if (strcmp(s,song[i].title)==0) {printf("찾으시는 노래의 정보는 가수 :  %s  저장 위치 : %s 분류 : %s 입니다",song[i].name,song[i].save,song[i].categ); break;}
//     }
// }
// void sort_song(song song[],int cnt)
// {
//     char im[20];
//     for (int i=0;i<cnt-1;i++)
//     {
//         for (int k=0;k<cnt-1;k++)
//         {
//             if (strcmp(song[k].title,song[k+1].title)>0){ strcpy(im,song[k].title); strcpy(song[k].title,song[k+1].title); strcpy(song[k+1].title,im);
//                 strcpy(im,song[k].name); strcpy(song[k].name,song[k+1].name); strcpy(song[k+1].name,im);
//                 strcpy(im,song[k].save); strcpy(song[k].save,song[k+1].save); strcpy(song[k+1].save,im);
//                 strcpy(im,song[k].categ); strcpy(song[k].categ,song[k+1].categ); strcpy(song[k+1].categ,im);
//             }
//         }
//     }
// }
// int main()
// {
//     int cnt=0;
//     int n;
//     song s_list[20];
//     while(1){
//     printf("=======\n1. 추가\n2. 삭제\n3. 출력\n4. 검색\n5. 정렬\n6. 종료\n");
//     printf("=> ");scanf("%d",&n);
//     if (n==6) break;
//     switch(n){
//         case 1: input_song(s_list,cnt); cnt++; break;
//         case 2: delete_song(s_list,cnt); cnt--; break;
//         case 3: print_song(s_list,cnt); break;
//         case 4: search_song(s_list,cnt); break;
//         case 5: sort_song(s_list,cnt); break;
//         default : printf("알맞은 번호를 입력하세요\n");
//     }
//     }
// }




//10
// #include<stdio.h>
// #include<string.h>
// typedef struct person
// {
//     char s_num[20];
//     char name[20];
//     float height;
// }p;
// int main()
// {
//     p member[3];
//     for (int i=0;i<3;i++)
//     {
//         printf("학번을 입력하시오 : ");scanf("%s",member[i].s_num);
//         printf("이름을 입력하시오 : ");scanf("%s",member[i].name);
//         printf("신장을 입력하시오 : ");scanf("%f",&member[i].height);
//     }
//     printf("%-15s%-8s%-8s\n","학번","이름","신장");
//     puts("=======================");
//     for (int i=0;i<3;i++) printf("%-13s%-10s%-8.1f\n",member[i].s_num,member[i].name,member[i].height);
// }




//13
// #include<stdio.h>
// #include<string.h>
// typedef struct product{
//     char name[20];
//     int count;
//     int u_price;
//     int price;
// }pd;
// void input(pd l_list[],int cnt)
// {
//     char name[20];
//     int count;
//     int u_price;
//     int price;
//     printf("품명 : ");scanf("%s",name);
//     printf("수량 : ");scanf("%d",&count);
//     printf("단가 : ");scanf("%d",&u_price);
//     price=u_price*count;
//     for (int i=0;i<=cnt;i++){
//         if (strcmp(l_list[i].name,name)==0) {l_list[i].count+=count; l_list[i].price=l_list[i].count*l_list[i].u_price; break;}
//         if (i==cnt){strcpy(l_list[cnt].name,name); l_list[cnt].count=count; l_list[cnt].u_price=u_price; l_list[cnt].price=price;}
//     }
// }
// void sell(pd l_list[],int cnt)
// {
//     char name[20];
//     int count;
//     printf("상품명을 입력하시오 : ");scanf("%s",name);
//     printf("수량을 입력하시오 : ");scanf("%d",&count);
//     for (int i=0;i<cnt;i++){
//         if (strcmp(l_list[i].name,name)==0){
//             if (l_list[i].count-count<0){printf("수량이 모자랍니다!!\n"); break;}
//             else {
//                 l_list[i].count-=count; l_list[i].u_price=l_list[i].count*l_list[i].u_price; break;
//             }
//         }
//     }
// }
// int delete(pd l_list[],int cnt)
// {
//     char name[20];
//     printf("삭제하려는 상품명을 입력해주세요 : ");scanf("%s",name);
//     for (int i=0;i<cnt;i++)
//     {
//         if (strcmp(l_list[i].name,name)==0) {
//             if (l_list[i].count==0) {
//                 for (int k=i;i<cnt;i++){
//                     strcpy(l_list[i].name,l_list[i+1].name); l_list[i].count=l_list[i+1].count; 
//                     l_list[i].u_price=l_list[i+1].u_price; l_list[i].price=l_list[i+1].price;
//                 }
//                 cnt-=1; printf("%d\n",cnt); return cnt; break;
//             }
//             else {printf("재고가 0이 아니기 때문에 품목을 삭제할 수 없습니다\n\n"); return cnt;break;}
//         }
//         if (i==cnt-1) return cnt;
//     }
// }
// void p_print(pd l_list[],int cnt)
// {
//     printf("\n상품명    재고   단가   금액\n==============================\n");
//     for (int i=0;i<cnt;i++) printf("%-10s%-7d%-7d%-7d\n",l_list[i].name,l_list[i].count,l_list[i].u_price,l_list[i].price);
// }
// void search(pd l_list[],int cnt)
// {
//     char name[20];
//     printf("찾길 원하시는 품목명을 입력해주세요 : ");scanf("%s",name);
//     for (int i=0;i<cnt;i++)
//     {
//         if (strcmp(l_list[i].name,name)==0){printf("상품명 : %s 재고 : %d 단가 : %d 금액 : %d\n",l_list[i].name,l_list[i].count,l_list[i].u_price,l_list[i].price); break;}
//         if (i==cnt-1)puts("찾으시는 상품이 존재하지 않습니다");
//     }
// }
// void print_price(pd l_list[],int cnt)
// {
//     int sum=0;
//     for (int i=0;i<cnt;i++) sum+=l_list[i].price;
//     printf("총 금액은 %d원입니다\n",sum);
// }
// int main()
// {
//     int cnt=0;
//     int n;
//     pd p_list[10];
//     printf("============\n1. 입고\n2. 판매\n3. 품목삭제\n4. 재고리스트 출력\n5. 품목 검색\n6. 재조금액합계출력\n7. 종료\n============\n\n");
//     while(1)
//     {
//         printf("선택 => ");scanf("%d",&n);
//         if(n==7) break;
//         switch(n)
//         {
//             case 1: input(p_list,cnt); cnt++; break;
//             case 2: sell(p_list,cnt); break;
//             case 3: cnt=delete(p_list,cnt); break;
//             case 4: p_print(p_list,cnt); break;
//             case 5: search(p_list,cnt); break;
//             case 6: print_price(p_list,cnt); break;
//             default : printf("올바른 번호를 선택해주세요\n");
//         }
//     }

// }


//14 성적표
// #include<stdio.h>
// #include<string.h>
// typedef struct score{
//     int num;
//     char name[20];
//     int kor;
//     int eng;
//     int math;
//     int tot;
//     int avg;
//     int rank;
// }sc;
// void tot_avg(sc s_l[],int num)
// {
//     for (int i=0;i<num;i++)
//     {
//         s_l[i].tot= s_l[i].kor+s_l[i].eng+s_l[i].math;
//         s_l[i].avg=s_l[i].tot/3;    
//     }
// }
// void rank(sc s_l[],int num)
// {
//     for (int i=0;i<num;i++)s_l[i].rank=1;
//     for (int i=0;i<num;i++){
//         for (int k=0;k<num;k++){
//             if (s_l[k].avg<s_l[i].avg) s_l[k].rank+=1;
//         }
//     }
// }
// void sort(sc s_l[],int num)
// {
//     sc im;
//     for (int i=0;i<num;i++){
//         for (int k=0;k<num-1;k++){
//             if (s_l[k].rank>s_l[k+1].rank){
//                 im=s_l[k];
//                 s_l[k]=s_l[k+1];
//                 s_l[k+1]=im;
//             }
//         }
//     }
// }
// int main()
// {
//     sc s_list[5]={{1,"AAA",70,70,70},{2,"BBB",100,100,100},{3,"CCC",80,80,80},{4,"DDD",60,60,60},{5,"EEE",90,90,90}};
//     int n=5;
//     tot_avg(s_list,n);
//     rank(s_list,n);
//     sort(s_list,n);
//     for (int i=0;i<n;i++) printf("%-5d %-5s %-5d %-5d %-5d %-5d %-5d %-5d\n",s_list[i].num,s_list[i].name,s_list[i].kor,s_list[i].eng,s_list[i].math,s_list[i].tot,s_list[i].avg,s_list[i].rank);
// }




//16 판매데이터
// #include<stdio.h>
// #include<string.h>
// typedef struct product{
//     char name[20];
//     int u_price;
//     int count;
//     int price;
// }pr;
// void price(pr p_l[],int n)
// {
//     for (int i=0;i<n;i++) p_l[i].price= p_l[i].u_price*p_l[i].count;
// }
// void sort(pr p_l[],int n)
// {
//     pr im;
//     for (int i=0;i<n;i++){
//         for (int k=0;k<n-1;k++){
//             if (strcmp(p_l[k].name,p_l[k+1].name)>0) {im=p_l[k]; p_l[k]=p_l[k+1]; p_l[k+1]=im;}
//         }
//     }
// }
// void tot_input(pr p_l[],int n,pr tot[])
// {
//     int im_n=0;
//     for (int i=0;i<n;i++)
//     {
//         strcpy(tot[im_n].name,p_l[i].name);
//         tot[im_n].count+=p_l[i].count;
//         tot[im_n].u_price=p_l[i].u_price;
//         tot[im_n].price+=p_l[i].price;
//         if (strcmp(p_l[i].name,p_l[i+1].name)!=0) im_n++;
//     }
// }
// int main()
// {
//     pr pr_list[8]={{"초코파이",1000,2},{"몽실통통",1200,4},{"바나나킥",1500,5},{"초코파이",1000,6},{"바나나킥",1500,2},{"몽실통통",1200,4},{"바나나킥",1500,2},{"초코파이",1000,1}};
//     pr tot_list[4];
//     int n=8;
//     int im_n=0;
//     int sum_c=0;
//     int sum_pr=0;
//     price(pr_list,n);
//     sort(pr_list,n);
//     tot_input(pr_list,n,tot_list);
//     for (int i=0;i<n;i++) {sum_c+=pr_list[i].count; sum_pr+=pr_list[i].price;}
//     puts("품목            단가   수량  금액");
//     for (int i=0;i<n;i++){
//         if (i==0 || strcmp(pr_list[i].name,pr_list[i-1].name)!=0) printf("%-20s%-8d%-5d%-5d\n",pr_list[i].name,pr_list[i].u_price,pr_list[i].count,pr_list[i].price);
//         else printf("%-16s%-8d%-5d%-5d\n"," ",pr_list[i].u_price,pr_list[i].count,pr_list[i].price);
//         if (strcmp(pr_list[i].name,pr_list[i+1].name)!=0) {printf("%-10s 합계 :         %-5d%-5d\n",tot_list[im_n].name,tot_list[im_n].count,tot_list[im_n].price);im_n++;}
//     }
//     printf("%-20s%-7s%-5d%-d","총합계","",sum_c,sum_pr);
// }



#include<stdio.h>
#include<string.h>
typedef struct pay{
    char ins[20];
    char name[20];
    int pay;
    int ext_pay;
    int tot_pay;
}pay;
void total(pay p_l[],int n)
{
    for (int i=0;i<n;i++)
    {
        p_l[i].tot_pay=p_l[i].pay+p_l[i].ext_pay;
    }
}
void sort(pay p_l[],int n)
{
    pay im;
    for (int i=0;i<n;i++){
        for (int k=0;k<n-1;k++){
            if (strcmp(p_l[k].ins,p_l[k+1].ins)>0) {im=p_l[k]; p_l[k]=p_l[k+1]; p_l[k+1]=im;}
        }
    }
}
void ins_tot(pay p_l[],int n,pay ins_tot_pay[])
{
    int im_n=0;
    for (int i=0;i<n;i++){
        ins_tot_pay[im_n].pay+=p_l[i].pay;
        ins_tot_pay[im_n].ext_pay+=p_l[i].ext_pay;
        ins_tot_pay[im_n].tot_pay+=p_l[i].tot_pay;
        if (strcmp(p_l[i].ins,p_l[i+1].ins)!=0) im_n++;
    }
}
void jipye(pay ins_tot_pay[])
{
    int m=50000;
    int tot;
    int sum[8]={0};
    printf("\n                                    부서별 화폐매수 집계표\n");
    printf("                                           화폐종류\n");
    printf("%-13s%-10d%-10d%-10d%-10d%-10d%-10d%-10d%-10d\n\n\n","",50000,10000,5000,1000,500,100,50,10);
    for (int i=0;i<3;i++){
        m=50000;
        tot=ins_tot_pay[i].tot_pay;
        printf("%-20s",ins_tot_pay[i].ins);
        for (int k=0;k<8;k++){
            printf("%-10d",tot/m);
            sum[k]+=tot/m;
            tot%=m;
            if (k%2==0) m/=5;
            else m/=2;
        }
        puts("");
   } 
    puts("");
    printf("%-17s","합계");
    for (int i=0;i<8;i++) printf("%-10d",sum[i]);
}
int main()
{
    pay p_l[7]={{"총무부","김가나",1540000,53900},{"인사부","나준성",1500000,52500},{"영업부","홍길동",1698000,59430},{"인사부","이하늘",2470000,86450},{"영업부","강감찬",2496000,87360},{"인사부","이유나",3478000,121730},{"총무부","김고운",1600000,56000}};
    pay ins_tot_pay[3]={{"영업부 합계"},{"인사부 합계"},{"총무부 합계"}};
    int n=7;
    int im_n=0;
    total(p_l,n);
    sort(p_l,n);
    ins_tot(p_l,n,ins_tot_pay);
    for (int i=0;i<n;i++) {
    printf("%-20s %-20s %-10d %-10d %-10d\n",p_l[i].ins,p_l[i].name,p_l[i].pay,p_l[i].ext_pay,p_l[i].tot_pay);
    if (strcmp(p_l[i].ins,p_l[i+1].ins)!=0) {printf("%-20s %-20s%-10d %-10d %-10d\n",ins_tot_pay[im_n].ins,"",ins_tot_pay[im_n].pay,ins_tot_pay[im_n].ext_pay,ins_tot_pay[im_n].tot_pay);
            im_n++;
        }
    }
    jipye(ins_tot_pay);
}
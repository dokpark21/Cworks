//1 배열기반 원형 큐
// #include<stdio.h>
// #include<stdlib.h>
// #include "queue.h"

// int main()
// {
//     QueueType q;
//     init(&q);
//     int cho,num;
//     printf("front=%d rear=%d\n",q.front,q.rear);

//     while(1){
//         printf("1.enqueue 2.depueue 3.종료\n");
//         scanf("%d",&cho);
//         if (cho==1){
//             printf("정수입력 :"); scanf("%d",&num);
//             enqueue(&q,num);
//             printf("front=%d rear=%d\n",q.front, q.rear);
//         }
//         if (cho==2){
//             printf("dequeue()=%d\n",dequeue(&q));
//             printf("front=%d rear=%d\n",q.front,q.rear);
//         }
//         if(cho==3) break;
//     }
// }



//3 은행서비스 시뮬레이션
// #include<stdlib.h>
// #include<stdio.h>
// #include<math.h>
// #include "queue.h"

// int duration = 10; //시뮬레이션 시간
// double arrival_prob = 0.7; //하나의 시간 단위에 도착하는 평균 고객의 수
// int max_serv_time = 5; //하나의 고객에 대한 최대 서비스 시간
// int clock;

// int customers; // 전체고객수
// int served_customers; //서비스받은 고객수
// int waited_time; //고객들이 기다린 시간

// double random()
// {
//     return rand() / (double)RAND_MAX;
// }

// //랜덤 숫자를 생성하여 고객이 도착했는지 도착하지 않았는지를 판단
// int is_customer_arrived()
// {
//     if (random() < arrival_prob)
//             return TRUE;
//     else return FALSE;
// }

// //새로 도착한 손님을 큐에 삽입
// void insert_customer(int arrival_time)
// {
//     element customer;

//     customer.id = customers++;
//     customer.arrival_time = arrival_time;
//     customer.service_time = (int)(max_serv_time * random()) +1;
//     enqueue(&queue, customer);
//     printf("고객이 %d이 %d분에 들어옵니다. 서비스시간은 %d분입니다.\n",
//     customer.id, customer.arrival_time, customer.service_time);
// }

// //큐에서 기다리는 고객을 꺼내어 고객의 서비스 시간을 반환
// int remove_customer()
// {
//     element customer;
//     int service_time = 0;

//     if(is_empty(&queue)) return 0;
//     customer = dequeue(&queue);
//     service_time = customer.service_time - 1;
//     served_customers++;
//     waited_time += clock - customer.arrival_time;
//     printf("고객 %d이 %d분에 서비스를 시작합니다. 대기시간은 %d분이었습니다.\n",
//     customer.id,clock, clock-customer.arrival_time);
//     return service_time;
// }

// void print_stat()
// {
//     printf("서비스받은 고객수 = %d\n",served_customers);
//     printf("전체 대기 시간 = %d\n",waited_time);
//     printf("1인당 평균 대기 시간 = %f분\n",(double)waited_time / served_customers);
//     printf("아직 대기중인 고객수 = %d\n",customers - served_customers);
// }

// int main()
// {
//     int service_time = 0;

//     clock =0;
//     while(clock <duration){
//         clock++;
//         printf("현재시각 = %d\n",clock);
//         if (is_customer_arrived()){
//             insert_customer(clock);
//         }
//         if (service_time>0)
//                 service_time--;
//         else{
//             service_time = remove_customer();
//         }
//     }
//     print_stat();
// }


//문제 1
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// #include"queue.h"

// int main()
// {
//    queueType q;
//    int num;
//    init(&q);
//    int input;
//    int delete;
//    int len;
//    while(1)
//    {
//     if (q.front >= q.rear) len = q.front-q.rear;
//     else len = q.rear-q.front;
//      printf("front=%d rear=%d\n",q.front,q.rear);
//      printf("1.enqueue 2.dequeue 3.큐의개수 4.종료\n");
//      printf("==> ");scanf("%d",&num);
//      if (num==4) break;
//      switch(num)
//      {
//         case 1:printf("정수입력 : ");scanf("%d",&input);enqueue(&q,input); break;
//         case 2:delete = dequeue(&q); printf("dequeue()=%d\n",delete);break;
//         case 3:printf("큐의 개수 : %d\n",len); break;
//         default : printf("올바른 번호를 입력하세요\n\n");
//      }
//    } 
// }


//문제2 스택2개로 큐 구현
// #include<stdio.h>
// #include<stdlib.h>
// #include"queue.h"

// void queue_init(StackType *in,StackType *out)
// {
//     init(in);
//     init(out);
// }

// int queue_is_empty(StackType *in,StackType *out)
// {
//     return (is_empty(in) && is_empty(out));
// }

// int queue_is_full(StackType *in,StackType *out)
// {
//     return (is_full(in) && is_full(out));
// }

// void enqueue(StackType *in,StackType *out,element item)
// {
//     if (is_full(in)){
//         printf("큐가 포화상태 입니다\n");
//         return;
//     }
//     in->stack[++(in->top)] = item;
// }

// element dequeue(StackType *in,StackType *out)
// {
//     if (queue_is_empty(in,out)){
//         printf("큐가 공백상태 입니다\n");
//     }else{
//         if (!is_empty(out)){
//             return pop(out);
//         }else if (is_empty(out)){
//             while(!is_empty(in)){
//                 push(out,pop(in));
//             }
//             return pop(out);
//         }
//     }
// }

// int main()
// {
//     int num;
//     int delete;
//     int input;
//     StackType in;
//     StackType out;
//     queue_init(&in,&out);
//     while(1)
//     {
//         printf("1.enqueue 2.dequeue 3.큐의개수 4.종료\n");
//         printf("==>"); scanf("%d",&num);
//         if (num==4) break;
//         switch(num)
//         {
//             case 1: printf("정수 입력 : ");scanf("%d",&input);enqueue(&in,&out,input); break;
//             case 2: delete=dequeue(&in,&out); printf("dequeue() = %d\n",delete); break;
//             case 3: printf("큐의 개수 : %d\n",in.top+out.top+2); break;
//             default : printf("올바른 번호를 입력하세요\n");
//         }
//     }
// }


//문제 3 큐를 이용한 햄버거 가게 시뮬레이션
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"queue.h"

#define CUS_COME_TERM 15    //고객의 주문 간격, 초 단위

#define CHE_BUR 0    //치즈버거 상수
#define BUL_BUR 1    //불고기버거 상수
#define DUB_BUR 2    //더블버거 상수

#define CHE_TERM 12    //치즈버거 제작 시간, 초 단위
#define BUL_TERM 15    //불고기버거 제작 시간, 초 단위
#define DUB_TERM 24    //더블버거 제작 시간, 초 단위

#define REPEAT 2000    //시뮬레이션 반복 횟수
int SEAT = MAX_QUEUE_SIZE;        //대기실 수용 인원

int main(void)
{
	int makeProc;    //햄버거 제작 시간
	int wait;        //대기인원

	QueueType que;
	init(&que);   

	srand((unsigned int)time(NULL));    //난수 생성을 위한 seed 입력, time(NULL)은 1970년 01월 01일 00시 00분 00초로부터 현재까지 걸린 시간, 초 단위

	int success = 0, fail = 0;

	int i;
	for (i = 0; i < REPEAT; i++)    //시뮬레이션 반복
	{
		makeProc = 0;    
		wait = 0;

		//아래 for문의 1회 회전은 1초의 시간 흐름을 의미함
		int sec;
		for (sec = 0; sec < 3600; sec++)
		{
			makeProc--;    //햄버거 제작 시간 카운트

			if (sec % CUS_COME_TERM == 0)
			{
				wait++;
				switch (rand() % 3)    //0 ~ 2 의 난수 생성
				{
				case CHE_BUR:
					enqueue(&que, CHE_TERM);
					break;

				case BUL_BUR:
					enqueue(&que, BUL_TERM);
					break;

				case DUB_BUR:
					enqueue(&que, DUB_TERM);
					break;
				}
			}

			if (makeProc <= 0 && !is_empty(&que))
			{
				makeProc = dequeue(&que);    //햄버거 제작 시작
				wait--;
			}

			if (wait > SEAT) break;
		}

		(wait > SEAT) ? fail++ : success++;

		while (!is_empty(&que))    //다음 시뮬레이션을 위해 큐 비우기
		{
			dequeue(&que);
		}
	}

	printf("Simulation Report! \n");
	printf("Waiting room size : %d \n", SEAT);
	printf("Success : %d, fail : %d, Percentage : %d", success, fail, success * 100 / REPEAT);
	putchar('%');
	printf("\n");
	
	return 0;
}


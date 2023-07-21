//1 배열기반 원형 큐
// #ifndef CircularQUEUE
// #define DircularQUEUE

// #define MAX_QUEUE_SIZE 10
// typedef int element;
// typedef struct {
//     element queue[MAX_QUEUE_SIZE];
//     int front, rear;
// } QueueType;

// void error(char *message);
// void init(QueueType *q);
// int is_empty(QueueType *q);
// int is_full(QueueType *q);
// void enqueue(QueueType *q,element item);
// element dequeue(QueueType *q);
// element peek(QueueType *q);
// #endif


// #include<stdio.h>
// #include<stdlib.h>

// void error(char *message)
// {
//     fprintf(stderr,"%s\n",message);
//     exit(1);
// }

// void init(QueueType *q)
// {
//     q->front = q->rear =0;
// }

// int is_empty(QueueType *q)
// {
//     //큐의 프론트와 리어가 같다면 공백상태
//     return (q->front == q->rear);
// }

// int is_full(QueueType *q)
// {
//     //만약 큐의 꼬라+1을 큐의 사이즈로 나눠서 프론트이면 큐는 집꽉찾아?
//     return ((q->rear +1) % MAX_QUEUE_SIZE == q->front);
// }

// void enqueue(QueueType *q, element item)
// {
//     if (is_full(q))
//                 error("큐가 포화상태입니다");
//     q->rear  = (q->rear +1) %MAX_QUEUE_SIZE;
//     q->queue[q->rear] = item;
// }
// //삭제 함수
// element dequeue(QueueType *q)
// {
//     if (is_empty(q))
//                 error("큐가 공백상태입니다");
//     q->front = (q->front +1) % MAX_QUEUE_SIZE;
//     return q->queue[q->front];
// }

// //rear 보여주기
// element peek(QueueType *q)
// {
//     if (is_empty(q))
//             error("큐가 공백상태입니다");
//     return q->queue[(q->front+1)%MAX_QUEUE_SIZE];
// }


//3 은행서비스 시뮬레이션

// #ifndef QUEUE
// #define QUEUE
// #define TRUE 1
// #define FALSE 0
// #define MAX_QUEUE_SIZE 100

// typedef struct {
//     int id;
//     int arrival_time;
//     int service_time;
// } element;

// typedef struct{
//     element queue[MAX_QUEUE_SIZE];
//     int front,rear;
// } QueueType;

// static QueueType queue;

// void init(QueueType *q);
// int is_full(QueueType *q);
// int is_empty(QueueType *q);
// void enqueue(QueueType *q, element item);
// element dequeue(QueueType *q);
// #endif

// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>

// void init(QueueType *q)
// {
//     q->front = q->rear =0;
// }

// int is_empty(QueueType *q)
// {
//     return (q->front == q->rear);
// }

// int is_full(QueueType *q)
// {
//     return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
// }

// void enqueue(QueueType *q, element item)
// {
//     if (is_full(q)){
//         fprintf(stderr,"큐가 포화상태입니다.\n");
//         return;
//     }
//     q->rear = (q->rear+1) % MAX_QUEUE_SIZE;
//     q->queue[q->rear] =item;
// }

// element dequeue(QueueType *q)
// {
//     if (is_empty(q)){
//         fprintf(stderr,"큐가 공백상태입니다.\n");
//         exit(1);
//     }
//     q->front = (q->front + 1) % MAX_QUEUE_SIZE;
//     return q->queue[q->front];
// }


//문제 1
// #define TRUE 1
// #define FALSE 0
// #define MAX_QUEUE_SIZE 100
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>

// typedef int element;
// typedef struct{
//     element queue[MAX_QUEUE_SIZE];
//     int front,rear;
// }queueType;

// void init(queueType *q)
// {
//     q->front=0;
//     q->rear=0;
// }

// int is_empty(queueType *q)
// {
//     return (q->front == q->rear);
// }

// int is_full(queueType *q)
// {
//     return ((q->rear+1)%MAX_QUEUE_SIZE == q->front);
// }

// void enqueue(queueType *q,element data)
// {
//     if (is_full(q)){
//         fprintf(stderr,"큐가 포화상태 입니다\n");
//         return;   
//     }
//     q->rear = (q->rear+1)%MAX_QUEUE_SIZE;
//     q->queue[q->rear] = data;
// }

// element dequeue(queueType *q)
// {
//     if (is_empty(q)){
//         fprintf(stderr,"큐가 포화상태 입니다\n");
//         exit(1);
//     }
//     q->front = (q->front+1)%MAX_QUEUE_SIZE;
//     return q->queue[q->front];
// }


//문제2 스택2개로 큐 구현
// #ifndef ArraySTACK
// #define ArrayStack
// #define MAX_STACK_SIZE 100

// typedef int element;
// typedef struct {
//     element stack[MAX_STACK_SIZE];
//     int top;
// }StackType;

// void init(StackType *s);
// int is_empty(StackType *s);
// int is_full(StackType *s);
// void push(StackType *s,element item);
// element pop(StackType *s);
// #endif

// #include<stdio.h>
// #include<stdlib.h>

// void init(StackType *s)
// {
//     s->top=-1;
// }

// int is_empty(StackType *s)
// {
//     return (s->top== -1);
// }

// int is_full(StackType *s)
// {
//     return (s->top == (MAX_STACK_SIZE-1));
// }

// void push(StackType *s, element item)
// {
//     if( is_full(s)){
//         fprintf(stderr,"스택 포화 에러\n");
//         return;
//     }
//     else s->stack[++(s->top)] = item;
// }

// element pop(StackType *s)
// {
//     if(is_empty(s)){
//         fprintf(stderr,"스택 공백 에러\n");
//         exit(1);
//     }
//     else return s->stack[(s->top)--];
// }


//문제 3 큐를 이용한 햄버거 가게 시뮬레이션 프로그램
#ifndef CircularQUEUE
#define CircularQUEUE

#define MAX_QUEUE_SIZE 50
typedef int element;
typedef struct {
    element queue[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;

void error(char *message);
void init(QueueType *q);
int is_empty(QueueType *q);
int is_full(QueueType *q);
void enqueue(QueueType *q,element item);
element dequeue(QueueType *q);
#endif


#include<stdio.h>
#include<stdlib.h>

void error(char *message)
{
    fprintf(stderr,"%s\n",message);
    exit(1);
}

void init(QueueType *q)
{
    q->front = q->rear =0;
}

int is_empty(QueueType *q)
{
    //큐의 프론트와 리어가 같다면 공백상태
    return (q->front == q->rear);
}

int is_full(QueueType *q)
{
    //만약 큐의 꼬라+1을 큐의 사이즈로 나눠서 프론트이면 큐는 집꽉찾아?
    return ((q->rear +1) % MAX_QUEUE_SIZE == q->front);
}

void enqueue(QueueType *q, element item)
{
    if (is_full(q))
                error("큐가 포화상태입니다");
    q->rear  = (q->rear +1) %MAX_QUEUE_SIZE;
    q->queue[q->rear] = item;
}

element dequeue(QueueType *q)
{
    if (is_empty(q))
                error("큐가 공백상태입니다");
    q->front = (q->front +1) % MAX_QUEUE_SIZE;
    return q->queue[q->front];
}


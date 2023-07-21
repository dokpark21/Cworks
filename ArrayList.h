#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include "Point.h"

#define TRUE 1
#define FALSE 0

#define LIST_LEN  100
typedef Point * LData;

typedef struct __ArrayList
{
    Point *arr[LIST_LEN];
    int numOfData;
    int curPosition;
}List;


void init(List *plist);
void add(List *plist, LData data);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);

LData delete_entry(List *plist);
int get_length(List *plist);

#endif
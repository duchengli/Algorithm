#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#include <iostream>
using namespace std;

typedef int ElemType;
typedef int Status;

typedef struct
{
    ElemType data[MAXSIZE];
    int lenght;
} SqList;

Status GetElem(SqList L, int i, ElemType *e)
{
    if (L.lenght == 0 || i < 1 || i > L.lenght)
    {
        return ERROR;
    }
    *e = L.data[i - 1];
    return OK;
}

Status ListInsert(SqList *L, int i, ElemType e)
{
    int k;
    if (L->lenght == MAXSIZE)
    {
        return ERROR;
    }
    if (i < 1 || i > L->lenght + 1)
    {
        return ERROR;
    }
    if (i <= L->lenght - 1)
    {
        for (k = L->lenght - 1; k >= i - 1; k--)
        {
            L->data[k + 1] = L->data[k];
        }
    }
    L->data[i - 1] = e;
    L->lenght++;
    return OK;
}

Status ListDelete(SqList *L, int i, ElemType *e)
{
    int k;
    if (L->lenght == 0)
    {
        return ERROR;
    }
    if (i < 1 || i > L->lenght)
    {
        return ERROR;
    }
    *e = L->data[i - 1];
    if (i < L->lenght)
    {
        for (k = i; k < L->lenght; k++)
        {
            L->data[k - 1] = L->data[k];
        }
    }
    L->lenght--;
    return OK;
}

int main()
{

    return 0;
}
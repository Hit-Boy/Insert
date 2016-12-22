#include "TXLib.h"
const int S = 10;

void FillArray(int Array[]);
void PrintArray(int Array[]);
int Search(int Array[], int Target);
void InsertSort(int Array[]);

int main()
    {
    int Array[S] = {};
    FillArray(Array);
    InsertSort(Array);
    PrintArray(Array);
    }

void FillArray(int Array[])
    {
    for(int i = 0; i < S; i++)
        Array[i] = rand() % 100;
    }

void PrintArray(int Array[])
    {
    printf("Барабанная дроообь\n");
    for(int i = 0; i < S; i++)
        printf("%d\n", Array[i]);
    }

int Search(int Array[], int Target)
    {
    int i = 0;
    for(; i < Target; i++)
        if (Array[Target] < Array[i])
            return i;
    return i;
    }

void InsertSort(int Array[])
    {
    int StartShift = 0;
    int TMP = 0;
    for(int Target = 1; Target < S; Target++)
        {
        StartShift = Search(Array, Target);
        if (Target != StartShift)
            {
            TMP = Array[Target];
            for (int j = Target - 1; j > StartShift - 1; j--)
                Array[j+1] = Array[j];
            Array[StartShift] = TMP;
            }
        }
    }

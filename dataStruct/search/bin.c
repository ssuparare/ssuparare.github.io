#include <stdio.h>

int BinSearch(int Data[], int Size, int First, int Target) {
    int Middle, Count;
    if(Size == 0) {
        Count = 0;
    } else {
        Middle = First + Size / 2;
        if(Target == Data[Middle]) {
            Count++;
        } else if(Target < Data[Middle]) {
            Count = BinSearch(Data, Size/2, First, Target);
        } else {
            Count = BinSearch(Data, Size, ++Middle, Target);
        }
    }
    return Count;
}

int main() {
    int Data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        Size = sizeof(Data) / sizeof(Data[0]),
        Num = BinSearch(Data, Size, 0, 5);

    printf("found %d item(s)", Num);
}
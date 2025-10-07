//ค้นหาไล่ตรวจสอบทีละตัว ว่าตรงกับค่าที่ต้องหาหรือไม่

#include <stdio.h>

void SeqSearch(int Data[], int Size, int Item) {
    int Count = 0,
        i = 0;

    while(i < Size) {
        if(Data[i] == Item) {
            printf("found item at Data[%d]!\n", i);
            Count++;
        }
        i++;
    }
    if(Count == 0) {
        printf("not found");
    } else {
        printf("found %d item(s)", Count);
    }
    
}

void main() {
    int Data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        //หาขนาดของ Array
        Size = sizeof(Data) / sizeof(Data[0]);

    SeqSearch(Data, Size, 5);
}
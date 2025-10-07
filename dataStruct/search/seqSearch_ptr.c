//ค้นหาไล่ตรวจสอบทีละตัว ว่าตรงกับค่าที่ต้องหาหรือไม่

#include <stdio.h>

void SeqSearch(int *Pointer, int Size, int Item) {
    int Count = 0,
        i = 0;

    while(i < Size) {
        if(*Pointer == Item) {
            printf("found item at Data[%d]!\n", i);
            Count++;
        }
        //เนื่องจาก pointer เป็นการชี้ไปยัง Address จึงต้องบวกเพิ่ม
        //เช่น
        //pointer ชี้ไปที่ Data[] ที่มี Address = 101 จะมีค่าเท่ากับการเรียก Data[0]
        //หรือก้คือค่าแรกของ Array
        //pointer++ หรือ pointer+1 คือการให้ขยับ Address ไป 1
        //Address = 102 ก็จะเหมือนกับเรียก Data[1]
        Pointer++;
        i++;
    }
    if(Count == 0) {
        printf("not found");
    } else {
        printf("found %d item(s)", Count);
    }
    
}

void main() {
    //int* i, j, k;
    //ตัวแปรทั้งหมดจะเป็นตัวแปร pointer

    //int *i, j, k;
    //มีแค่ i ที่เป็นตัวแปร pointer
    int Data[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
        //หาขนาดของ Array
        Size = sizeof(Data) / sizeof(Data[0]),
        //pointer ชี้ไปที่ Data[]
        *List = Data;

    SeqSearch(List, Size, 5);
}
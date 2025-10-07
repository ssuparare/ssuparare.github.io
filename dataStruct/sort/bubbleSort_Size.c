//เป็นการเรียงข้อมูลโดยกำหนดตำแหน่งที่เริ่มและหยุด

#include <stdio.h>

void BubbleSort2(int Size, int Data[]) {
    int i, j ,Temp;
    for(i = 0; i < Size; i++) {
        for(j = Size; j > i; j--) {
            //ตรงนี้จะกำหนดว่าจะเรียงจาก "มากไปน้อย" หรือ "น้อยไปมาก"
            //        ">" = มาก->น้อย  
            //        "<" = น้อย->มาก
            if(Data[j] > Data[j-1]) {
                Temp = Data[j];
                Data[j] = Data[j-1];
                Data[j-1] = Temp;
            }
        }
    }
}

int main() {
    int Data[10] = {8, 9, 7, 5, 6, 2, 3, 4, 0, 1}, i,
        //หาขนาด Array
        Size = sizeof(Data) / sizeof(Data[0]);

    printf("Array ที่ยังไม่เรียง\n");
    for(i = 0; i <= 9; i++) {
        printf("%d ", Data[i]);
    }
    printf("\n");

    //แทนที่จะมากำหนดว่าเริ่มตรงไหน จบตรงไหน
    //จะเรียงทั้งขนาดของ Array
    BubbleSort2(Size, Data);    

    printf("Array ที่เรียงแล้ว\n");
    for(i = 0; i <= 9; i++) {
        printf("%d ", Data[i]);
    }
}
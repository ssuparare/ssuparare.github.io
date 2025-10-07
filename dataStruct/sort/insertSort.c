//จะเรียงแค่กี่ตัว (จำนวนตัวคือ N)

#include <stdio.h>

void InsertSort(int N, int Data[]) {
    int i, j, Temp;
    for(i = 1; i < N; i++) {
        Temp = Data[i];
        j = i;
        //ตรงนี้จะกำหนดว่าจะเรียงจาก "มากไปน้อย" หรือ "น้อยไปมาก"
        //        ">" = มาก->น้อย  
        //        "<" = น้อย->มาก
        while(Temp < Data[j-1] && j > 0) {
            Data[j] = Data[j-1];
            j--;
        }
        Data[j] = Temp;
    }
}

void main() {
    int Data[10] = {8, 9, 7, 5, 6, 2, 3, 4, 0, 1}, i;

    printf("Array ที่ยังไม่เรียง\n");
    for(i = 0; i <= 9; i++) {
        printf("%d ", Data[i]);
    }
    printf("\n");

    //จากตรงนี้คือ N = 4, ดังนั้นจะเรียงแค่ 4 ตัวแรกคือ {8, 9, 7, 5}
    //ให้เป็น {5, 7, 8, 9} หรือ {9, 8, 7, 5}
    InsertSort(4, Data);

    printf("Array ที่เรียงแล้ว\n");
    for(i = 0; i <= 9; i++) {
        printf("%d ", Data[i]);
    }
}
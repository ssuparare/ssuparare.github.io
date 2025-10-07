//เป็นการเรียงข้อมูลโดยกำหนดตำแหน่งที่เริ่มและหยุด

#include <stdio.h>

void BubbleSort2(int Start, int Stop, int Data[]) {
    int i, j ,Temp;
    for(i = Start; i < Stop; i++) {
        for(j = Stop; j > i; j--) {
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
    int Data[10] = {8, 9, 7, 5, 6, 2, 3, 4, 0, 1}, i;

    printf("Array ที่ยังไม่เรียง\n");
    for(i = 0; i <= 9; i++) {
        printf("%d ", Data[i]);
    }
    printf("\n");

    BubbleSort2(0, 10, Data);

    printf("Array ที่เรียงแล้ว\n");
    for(i = 0; i <= 9; i++) {
        printf("%d ", Data[i]);
    }
}

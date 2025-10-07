//เป็นการเรียงข้อมูลโดยกำหนดตำแหน่งที่เริ่มและหยุด

//เหมือน BubbleSort ทุกประการแค่เพิ่มส่วนที่จะหยุดการทำงานหากไม่เกิดการเปลี่ยนแปลงใน Array ขึ้น

#include <stdio.h>

void BubbleSort2(int Start, int Stop, int Data[]) {
    int i, j ,Temp, Change;
    for(i = Start; i < Stop; i++) {
        Change = 0;
        for(j = Stop; j > i; j--) {
            //ตรงนี้จะกำหนดว่าจะเรียงจาก "มากไปน้อย" หรือ "น้อยไปมาก"
            //        ">" = มาก->น้อย  
            //        "<" = น้อย->มาก
            if(Data[j] > Data[j-1]) {
                Temp = Data[j];
                Data[j] = Data[j-1];
                Data[j-1] = Temp;
                Change = 1;
            }
        }
        if(Change == 0) {
            //                      หรือก็คือมันเรียงกันอยู่แล้ว
            printf("หยุดการทำงานเพราะไม่มีการเปลี่ยนแปลงเพิ่มเติมจากเดิม\n");
            break;
        }
    }
}

void main() {
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

#include <stdio.h>

int BinSearch(int Data[], int Size, int First, int Target) {
    int Middle, Count;
    //เผื่อโค้ดมันหั่นจนไม่เหลือ
    if(Size == 0) {
        Count = 0;
    } else {
        Middle = First + Size / 2;
        if(Target == Data[Middle]) {
            Count++;
            //           v ถ้าเป็น Array ที่จาก น้อยไปมาก ใช้ "<"
            //           v ถ้า มากไปน้อยใช้ ">" ส่วนข้างล่างคงหลักการเดิม
        } else if(Target < Data[Middle]) {
            //                Data - ฐานข้อมูลที่จะหา
            //                Size - ขนาดของ Array หักไปครึ่งนึงเหราะค่าที่จะหาน้อยกว่าค่าตรงกึ่งกลาง
            //                First - เริ่มต้นที่เดิม
            //                Target - คือค่าที่จะหา อันนี้เท่าเดิม
            Count = BinSearch(Data, Size/2, First, Target);
        } else {
            //                Data - ฐานข้อมูลที่จะหา
            //                Size - ขนาดของ Array ที่เป็นเหมือนเดิมเพราะนับแค่ครึ่งขวา
            //                       เพราะค่าเป้าหมายมีค่ามากกว่าค่าที่อยู่ตรงกลาง
            //                Middle - ++Middle มีค่าเท่า Middle + 1
            //                         ที่ต้องบวกเพราะ ค่าเป้าหมายมากกว่าค่ากลาง จึงต้องขยับหาค่าที่มากขึ้น
            //                Target - คือค่าที่จะหา อันนี้เท่าเดิม
            Count = BinSearch(Data, Size, ++Middle, Target);
        }
    }
    return Count;
}

int main() {
    int Data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        //ขนาด Array
        Size = sizeof(Data) / sizeof(Data[0]),
        //คืนค่าว่าเจอกี่ตัวมาที่ตัวแปร Num
        Num = BinSearch(Data, Size, 0, 5);

    printf("found %d item(s)", Num);
}

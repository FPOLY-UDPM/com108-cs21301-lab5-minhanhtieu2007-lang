/******************************************************************************
 * Họ và tên: Tiêu Anh Minh
 * MSSV:      PS48358
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

void doicho (int *a, int *b){
    int x = *a;
    *a=*b;
    *b = x;
}

int main() {
int a= 11, b=12;
    // //Gọi hàm trong hàm main 
    doicho (&a,&b);
    printf (" a= %d, b= %d\n",a,b);

    return 0;
}


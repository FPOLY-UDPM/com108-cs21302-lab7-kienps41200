/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc trung kiên]
 * MSSV:      [PS41200]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[5][50]; // Khai báo mảng 2 chiều lưu 5 chuỗi, mỗi chuỗi tối đa 50 ký tự
    char temp[50];     // Biến tạm để hỗ trợ hoán vị chuỗi

    // Bước 1: Nhập 5 chuỗi từ bàn phím
    printf("Nhap vao 5 chuoi bat ky:\n");
    for (int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        scanf("%s", chuoi[i]);
    }

    // Bước 2: Thuật toán sắp xếp (sử dụng thuật toán Selection Sort)
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            // So sánh theo thứ tự bảng chữ cái (alphabetical order)
            // Nếu chuoi[i] lớn hơn chuoi[j] thì hoán đổi vị trí
            if (strcmp(chuoi[i], chuoi[j]) > 0) {
                // Hoán vị chuỗi bằng hàm strcpy (sao chép nội dung)
                strcpy(temp, chuoi[i]);
                strcpy(chuoi[i], chuoi[j]);
                strcpy(chuoi[j], temp);
            }
        }
    }

    // Bước 3: Xuất kết quả
    printf("\nThu tu cac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", chuoi[i]);
    }

    return 0;
}
/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc trung kiên]
 * MSSV:      [PS41200]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>

int main() {
    // Khai báo thông tin đăng ký mẫu (thực tế sẽ lấy từ Database)
    char userMau[] = "admin";
    char passMau[] = "123456";

    // Khai báo biến để người dùng nhập vào
    char userNhap[50];
    char passNhap[50];

    printf("--- HE THONG DANG NHAP ---\n");
    printf("Username: ");
    scanf("%s", userNhap); // Nhập chuỗi không có khoảng trắng
    printf("Password: ");
    scanf("%s", passNhap);

    // Sử dụng hàm strcmp để so sánh
    // strcmp trả về 0 nếu hai chuỗi hoàn toàn giống nhau
    if (strcmp(userNhap, userMau) == 0 && strcmp(passNhap, passMau) == 0) {
        printf("\nDang nhap thanh cong! Chao mung admin.\n");
    } else {
        printf("\nDang nhap that bai! Sai Username hoac Password.\n");
    }

    return 0;
}
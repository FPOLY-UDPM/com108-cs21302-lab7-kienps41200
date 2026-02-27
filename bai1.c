/******************************************************************************
 * Họ và tên: [Nguyễn Ngọc trung kiên]
 * MSSV:      [PS41200]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY

#include <stdio.h>
#include <string.h>
#include <ctype.h> // Thư viện để dùng hàm tolower (chuyển chữ hoa thành chữ thường)

void demKyTu(char s[]) {
    int nguyenAm = 0, phuAm = 0;

    for (int i = 0; i < strlen(s); i++) {
        char c = tolower(s[i]); // Chuyển về chữ thường để dễ so sánh

        // Kiểm tra nếu là chữ cái từ 'a' đến 'z'
        if (c >= 'a' && c <= 'z') {
            // Kiểm tra xem có phải nguyên âm không
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("So luong nguyen am: %d\n", nguyenAm);
    printf("So luong phu am: %d\n", phuAm);
}

int main() {
    char chuoi[100];

    printf("Nhap vao mot chuoi: ");
    // Sử dụng fgets để đọc được cả chuỗi có khoảng trắng
    fgets(chuoi, sizeof(chuoi), stdin);

    demKyTu(chuoi);

    return 0;
}
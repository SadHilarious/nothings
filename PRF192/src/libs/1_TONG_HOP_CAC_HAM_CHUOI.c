#include <stdio.h>
#include <string.h> 
#include <ctype.h>
/*
1. Nhap chuoi, xuat chuoi, nhap/xuat ky tu:
    1.1 nhapChuoi: Nhap chuoi tu ban phim.
    1.2 xuatChuoi: Xuat chuoi ra man hinh.
    1.3 nhapKyTu: Nhap 1 ky tu tu ban phim.
    1.4 xuatKyTu: Xuat 1 ky tu ra man hinh.

2. Dem do dai chuoi:
    2.1 doDaiChuoi: Dem do dai chuoi.

3. Sao chep va noi chuoi:
    3.1 saoChepChuoi: Sao chep chuoi (src -> dest).
    3.2 noiChuoi: Noi chuoi str2 vao cuoi chuoi str1.

4. So sanh chuoi:
    4.1 soSanhChuoi (1): So sanh hai chuoi giong hay khac nhau.
    4.2 soSanhChuoi (2): So sanh hai chuoi khong phan biet hoa thuong.

5. Cac thao tac tren chuoi:
    5.1 daoNguocChuoi: Dao nguoc chuoi.
    5.2 kiemTraDoiXung: Kiem tra chuoi co phai doi xung hay khong.
    5.3 timKyTu: Tim ky tu trong chuoi.
    5.4 xoaKyTuTrungLap: Xoa cac ky tu trung lap trong chuoi.
    5.5 thayTheKyTu: Thay the ky tu cu bang ky tu moi trong chuoi.
    5.6 timChuoiCon: Tim chuoi con trong chuoi lon.
    5.7 demKyTu: Dem so luong ky tu trong chuoi.
    5.8 demSoTu: Dem so luong tu trong chuoi.
    5.9 xoaChuoiConDauTien: Xoa chuoi con o vi tri dau tien.
	5.10 thayTheChuoiCon: Thay the cac chuoi con thanh chuoi con moi.
	5.11 tachChuoiThanhMangTu: Tach mot chuoi thanh cac mang tu.
 
6. Cac thao tac voi chu hoa chu thuong:
    6.1 chuyenDoiChuHoa: Chuyen doi tat ca ky tu thanh chu hoa.
    6.2 chuyenDoiChuThuong: Chuyen doi tat ca ky tu thanh chu thuong.
    6.3 chuyenDoiThanhThuong: Chuyen doi 1 ky tu thanh chu thuong.
    6.4 chuyenDoiThanhHoa: Chuyen doi 1 ky tu thanh chu hoa.

7. Dem so lan xuat hien ky tu va chuoi con:
    7.1 demSoLanKyTu : Ham nay dung de dem so lan xuat hien cua 1 ky tu trong chuoi.
	7.2 demSoLanXuatHien : Ham nay dung de dem so lan xuat hien cua cac ky tu trong chuoi.
	7.3 demChuoiCon : Ham nay dung de dem so lan xuat hien cua chuoi con trong chuoi lon.
	7.4 demSoNguyen : Ham nay dung de dem so luong cac so nguyen trong chuoi.
	7.5 demSoThapPhan : Ham nay dung de dem so luong cac so thap phan trong chuoi.
	7.6 demSoTrongChuoi : Ham nay dung de dem so luong cac so (ca nguyen va thap phan) trong chuoi.
	7.7 demChuHoa : Ham nay dung de dem so luong cac chu cai hoa trong chuoi.
	7.8 demChuThuong : Ham nay dung de dem so luong cac chu cai thuong trong chuoi.
	7.9 demSoLuongChuSo : Ham nay dung de dem so luong cac chu so trong chuoi.
	7.10 demNguyenAm : Ham nay de dem cac chu cai nguyen am trong chuoi. 
	7.11 demPhuAm : Ham nay de dem cac chu cai phu am trong chuoi. 

8. Loai bo cac ky tu thua:
    8.1 loaiBoKhoangTrangThua: Loai bo cac khoang trang thua trong chuoi.
    8.2 loaiBoKyTu: Loai bo 1 ky tu cu the trong chuoi.

9. Thao tac voi mang chuoi:
    9.1 nhapChuoiMang2Chieu: Nhap nhieu chuoi vao mang 2 chieu.
    9.2 xuatChuoiMang2Chieu: Xuat nhieu chuoi tu mang 2 chieu ra man hinh.
    9.3 timChuoiDaiNhat: Tim chuoi dai nhat trong mang chuoi.
    9.4 xoaChuoi: Xoa chuoi tai vi tri chi dinh trong mang chuoi.
    9.5 daoNguocTatCaChuoi: Dao nguoc tat ca cac chuoi trong mang.
    9.6 demChuoiChanLe: Dem so chuoi co do dai chan va le.
    9.7 noiChuoi: Noi tat ca cac chuoi trong mang thanh 1 chuoi lon.

10. Sap xep chuoi:
    10.1 sortStrings: Sap xep mang chuoi theo bang chu cai.
    10.2 bubbleSort: Sap xep mang chuoi khong phan biet chu hoa hay chu thuong.

11. Chuyen doi so thanh chuoi va chuoi thanh so:
    11.1 soThanhChuoi: Chuyen doi so thanh chuoi.
    11.2 chuoiThanhSo: Chuyen doi chuoi thanh so.

12. Cac thao tac khac voi chuoi:
    12.1 layMangSo: Lay mang cac so tu chuoi.
*/

/* 1. Nhap chuoi, xuat chuoi, nhap/xuat ky tu */

/* 1.1 nhapChuoi */
void nhapChuoi(char str[], int kichThuoc) {
    fgets(str, kichThuoc, stdin);  // Nhap chuoi
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';  // Loai bo ky tu '\n'
    }
}

/* 1.2 xuatChuoi */
void xuatChuoi(const char str[]) {
    printf("%s\n", str);  // Xuat chuoi
}

/* 1.3 nhapKyTu */
void nhapKyTu(char *c) {
    *c = getchar();  // Nhap 1 ky tu
}

/* 1.4 xuatKyTu */
void xuatKyTu(char c) {
    printf("%c\n", c);  // Xuat 1 ky tu
}


/* 2. Dem do dai chuoi */

/* 2.1 doDaiChuoi */
int doDaiChuoi(const char *str) {
    return strlen(str);  
}

/* 3. Sao chep va noi chuoi */

/* 3.1 saoChepChuoi */
void saoChepChuoi(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;  // Sao chep ky tu tu src sang dest
        dest++;
        src++;
    }
    *dest = '\0';  // Them ky tu ket thuc chuoi
}

/* 3.2 noiChuoi */
void noiChuoi(char *str1, const char *str2) {
    while (*str1 != '\0') {
        str1++;  // Di chuyen den vi tri ket thuc cua str1
    }
    while (*str2 != '\0') {
        *str1 = *str2;  // Noi ky tu cua str2 vao str1
        str1++;
        str2++;
    }
    *str1 = '\0';  // Them ky tu ket thuc chuoi
}

/* 4. So sanh chuoi */

/* 4.1 soSanhChuoi (1) */
int soSanhChuoi1(const char *chuoi1, const char *chuoi2) {
    int i;
    for (i = 0; chuoi1[i] != '\0' && chuoi2[i] != '\0'; i++) {
        if (chuoi1[i] != chuoi2[i]) {
            return 0;  // Chuoi khong giong nhau
        }
    }
    return chuoi1[i] == chuoi2[i];  // Kiem tra duoi chuoi
}

/* 4.2 soSanhChuoi (2) */
int soSanhChuoi2(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {  // So sanh cho den khi ky tu khac nhau hoac ket thuc chuoi
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;  // Tra ve ket qua so sanh
}

/* 5. Cac thao tac tren chuoi */

/* 5.1 Dao nguoc chuoi */
void daoNguocChuoi(char *str) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

/* 5.2 Kiem tra doi xung */
int kiemTraDoiXung(const char *str) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;  // Khong phai doi xung
        }
    }
    return 1;  // La doi xung
}

/* 5.3 Tim ky tu trong chuoi */
int timKyTu(const char *str, char c) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return i;  // Tra ve chi so cua ky tu dau tien tim thay
        }
    }
    return -1;  // Neu khong tim thay ky tu
}

/* 5.4 Xoa ky tu trung lap trong chuoi */
void xoaKyTuTrungLap(char *str) {
    int i, j, k;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                // Di chuyen cac ky tu sau ky tu trung lap
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;  // Giam do dai chuoi
                j--;  // Kiem tra lai ky tu o vi tri hien tai
            }
        }
    }
}

/* 5.5 Thay the ky tu */
void thayTheKyTu(char *str, char oldChar, char newChar) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;  // Thay the ky tu cu bang ky tu moi
        }
    }
}

/* 5.6 Tim chuoi con trong chuoi lon */
int timChuoiCon(const char *str, const char *chuoiCon) {
    int lenStr = strlen(str);
    int lenCon = strlen(chuoiCon);
    int i, j;
    for (i = 0; i <= lenStr - lenCon; i++) {
        for (j = 0; j < lenCon; j++) {
            if (str[i + j] != chuoiCon[j]) {
                break;
            }
        }
        if (j == lenCon) {
            return i;  // Tra ve chi so cua vi tri chuoi con dau tien
        }
    }
    return -1;  // Khong tim thay chuoi con
}

/* 5.7 Dem so luong ky tu trong chuoi */
int demKyTu(const char *str, char c) {
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            count++;  // Tang bien dem neu gap ky tu c
        }
    }
    return count;  // Tra ve so lan ky tu xuat hien
}

/* 5.8 Dem so luong tu trong chuoi */
int demSoTu(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        // Bo qua cac khoang trang lien tiep va dem tu moi
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }
        if (str[i] != '\0') {
            count++;  // Dem tu
        }
        // Bo qua cac ky tu khong phai khoang trang
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
    }
    return count;
}

/* 5.9 Xoa chuoi con dau tien */
void xoaChuoiConDauTien(char *str, const char *chuoiCon) {
    int lenStr = strlen(str);
    int lenCon = strlen(chuoiCon);
    int i, j, k;
    for (i = 0; i <= lenStr - lenCon; i++) {
        for (j = 0; j < lenCon; j++) {
            if (str[i + j] != chuoiCon[j]) {
                break;
            }
        }
        if (j == lenCon) {
            // Neu tim thay chuoi con, xoa chuoi con
            for (k = i; k < lenStr - lenCon; k++) {
                str[k] = str[k + lenCon];
            }
            str[lenStr - lenCon] = '\0';  // Ket thuc chuoi
            break;
        }
    }
}

/* 5.10 Thay the chuoi con*/
void thayTheChuoiCon(char *str, const char *oldSubStr, const char *newSubStr) {
    char *pos;
    int oldSubStrLen = strlen(oldSubStr);
    int newSubStrLen = strlen(newSubStr);
    while ((pos = strstr(str, oldSubStr)) != NULL) {  // T�m kiem chuoi con
        // Di chuyen phan c�n lai cua chuoi de tr�nh ghi d� du lieu
        memmove(pos + newSubStrLen, pos + oldSubStrLen, strlen(pos) - oldSubStrLen + 1);
        // Ch�n chuoi moi v�o vi tr� t�m thay
        memcpy(pos, newSubStr, newSubStrLen);
    }
}
/* Tach chuoi thanh mang tu */
void tachChuoiThanhMangTu(const char *str, char result[100][50], int *numWords) {
    int index = 0;     // Vi tri hien tai trong mang ket qua
    int wordLength = 0; // Do dai cua tu hien tai
    *numWords = 0;      // Khoi tao so tu bang 0
    int i = 0;

    // Lap qua chuoi cho den khi gap ky tu ket thuc '\0'
    while (str[i] != '\0') {
        // Bo qua khoang trang dau
        while (isspace(str[i])) {
            i++;
        }

        // Neu het chuoi sau khi bo khoang trang thi dung
        if (str[i] == '\0') {
            break;
        }

        // Bat dau tach mot tu moi
        wordLength = 0;
        while (!isspace(str[i]) && str[i] != '\0' && wordLength < 49) {
            result[index][wordLength] = str[i];
            wordLength++;
            i++;
        }

        // Ket thuc tu bang ky tu '\0'
        result[index][wordLength] = '\0';
        index++;

        // Kiem tra neu vuot qua so luong tu cho phep
        if (index >= 100) {
            printf("Vuot qua so tu cho phep. Chi tach 100 tu dau tien.\n");
            break;
        }
    }

    *numWords = index; // Cap nhat tong so tu tim duoc
}
/* 6. Cac thao tac voi chu hoa chu thuong */

/* 6.1 chuyenDoiChuHoa */
void chuyenDoiChuHoa(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 'a' - 'A';  // Chuyen ki tu thanh chu hoa
        }
    }
}

/* 6.2 chuyenDoiChuThuong */
void chuyenDoiChuThuong(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 'a' - 'A';  // Chuyen ki tu thanh chu thuong
        }
    }
}

/* 6.3 chuyenDoiThanhThuong */
char chuyenDoiThanhThuong(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');  // Chuyen ki tu thanh chu thuong
    }
    return c;  // Tra ve ki tu goc neu khong phai chu hoa
}

/* 6.4 chuyenDoiThanhHoa */
char chuyenDoiThanhHoa(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');  // Chuyen ki tu thanh chu hoa
    }
    return c;  // Tra ve ki tu goc neu khong phai chu thuong
}

/*7. Dem so lan xuat hien ky tu va chuoi con:*/

/* 
7.1 demSoLanKyTu : Ham nay dung de dem so lan xuat hien cua 1 ky tu trong chuoi.
*/
int demSoLanKyTu(const char *str, char kyTu) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == kyTu) {
            count++;  // Tang dem moi khi gap ky tu can dem
        }
        i++;
    }
    return count;  // Tra ve so lan xuat hien cua ky tu
}

/* 
7.2 demSoLanXuatHien : Ham nay dung de dem so lan xuat hien cua cac ky tu trong chuoi.
*/
void demSoLanXuatHien(const char *str) {
    int count[256] = {0};  // Mang dem so lan xuat hien cua tat ca ky tu trong chuoi
    int i = 0;
    while (str[i] != '\0') {
        count[(unsigned char)str[i]]++;  // Tang so lan xuat hien cua ky tu tai vi tri i
        i++;
    }
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c xuat hien %d lan\n", i, count[i]);  // In ra ket qua dem
        }
    }
}

/* 
7.3 demChuoiCon : Ham nay dung de dem so lan xuat hien cua chuoi con trong chuoi lon.
*/
int demChuoiCon(const char *str, const char *chuoiCon) {
    int count = 0;
    int i = 0;
    int lenStr = strlen(str);
    int lenCon = strlen(chuoiCon);
    while (i <= lenStr - lenCon) {
        if (strncmp(&str[i], chuoiCon, lenCon) == 0) {
            count++;  // Tang dem khi gap chuoi con
        }
        i++;
    }
    return count;  // Tra ve so lan chuoi con xuat hien trong chuoi lon
}

/* 
7.4 demSoNguyen : Ham nay dung de dem so luong cac so nguyen trong chuoi.
*/
int demSoNguyen(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;  // Tang dem khi gap chu so
            while (str[i] >= '0' && str[i] <= '9') {
                i++;  // Bo qua cac chu so tiep theo trong so nguyen
            }
        }
        i++;
    }
    return count;  // Tra ve so luong so nguyen trong chuoi
}

/* 
7.5 demSoThapPhan : Ham nay dung de dem so luong cac so thap phan trong chuoi.
*/
int demSoThapPhan(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;  // Tang dem khi gap chu so
            while (str[i] >= '0' && str[i] <= '9') {
                i++;  // Bo qua cac chu so tiep theo trong so
            }
            if (str[i] == '.') {
                i++;  // Bo qua dau cham (neu co) trong so thap phan
                while (str[i] >= '0' && str[i] <= '9') {
                    i++;  // Bo qua phan thap phan
                }
            }
        }
        i++;
    }
    return count;  // Tra ve so luong so thap phan trong chuoi
}

/* 
7.6 demSoTrongChuoi : Ham nay dung de dem so luong cac so (ca nguyen va thap phan) trong chuoi.
*/
int demSoTrongChuoi(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9')) {
            count++;  // Dem khi gap so
            while (str[i] >= '0' && str[i] <= '9') i++;  // Nhanh qua chu so
            if (str[i] == '.') {
                i++;  // Nhanh qua dau cham cho so thap phan
                while (str[i] >= '0' && str[i] <= '9') i++;  // Nhanh qua cac chu so thap phan
            }
        }
        i++;
    }
    return count;  // Tra ve tong so luong so trong chuoi (so nguyen va so thap phan)
}

/* 
7.7 demChuHoa : Ham nay dung de dem so luong cac chu cai hoa trong chuoi.
*/
int demChuHoa(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            count++;  // Tang dem khi gap ky tu in hoa
        }
        i++;
    }
    return count;  // Tra ve so luong chu cai hoa trong chuoi
}

/* 
7.8 demChuThuong : Ham nay dung de dem so luong cac chu cai thuong trong chuoi.
*/
int demChuThuong(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count++;  // Tang dem khi gap ky tu in thuong
        }
        i++;
    }
    return count;  // Tra ve so luong chu cai thuong trong chuoi
}

/* 
7.9 demSoLuongChuSo : Ham nay dung de dem so luong cac chu so trong chuoi.
*/
int demSoLuongChuSo(const char *str) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;  // Tang dem khi gap chu so
        }
        i++;
    }
    return count;  // Tra ve so luong chu so trong chuoi
}

/* 
7.10 demNguyenAm : Ham nay dung de dem so luong cac nguyen am trong chuoi.
*/

int demNguyenAm(const char *chuoi) {
    int count = 0;
    while (*chuoi) {
        char c = tolower(*chuoi);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        chuoi++;
    }
    return count;
}

/* 
7.11 demPhuAm : Ham nay dung de dem so luong cac chu phu am trong chuoi.
*/
int demPhuAm(const char *chuoi) {
    int count = 0;
    while (*chuoi) {
        char c = tolower(*chuoi);
        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
        chuoi++;
    }
    return count;
}
/* 8. Loai bo cac ky tu thua */

/* 8.1 loaiBoKhoangTrangThua */
void loaiBoKhoangTrangThua(char *str) {
    int i = 0, j = 0;
    int len = strlen(str);
    while (i < len) {
        if (str[i] != ' ' || (i > 0 && str[i-1] != ' ')) {
            str[j++] = str[i];  // Chep ky tu khong phai la khoang trang thua
        }
        i++;
    }
    str[j] = '\0';  // Ket thuc chuoi sau khi loai bo khoang trang
}

/* 8.2 loaiBoKyTu */
void loaiBoKyTu(char *str, char c) {
    int i = 0, j = 0;
    int len = strlen(str);
    while (i < len) {
        if (str[i] != c) {
            str[j++] = str[i];  // Giu lai nhung ky tu khac c
        }
        i++;
    }
    str[j] = '\0';  // Ket thuc chuoi sau khi xoa ky tu c
}

/* 9. Thao tac voi mang chuoi */

/* 9.1 nhapChuoiMang2Chieu */
void nhapChuoiMang2Chieu(char arr[][100], int rows) {
    int i;
    for (i = 0; i < rows; i++) {
        printf("Nhap chuoi %d: ", i+1);
        fgets(arr[i], 100, stdin);
        int len = strlen(arr[i]);
        if (len > 0 && arr[i][len-1] == '\n') {
            arr[i][len-1] = '\0';  // Loai bo ky tu newline
        }
    }
}

/* 9.2 xuatChuoiMang2Chieu */
void xuatChuoiMang2Chieu(char arr[][100], int rows) {
    int i;
    for (i = 0; i < rows; i++) {
        printf("Chuoi %d: %s\n", i+1, arr[i]);  // Xuat tung chuoi trong mang 2 chieu
    }
}

/* 9.3 timChuoiDaiNhat */
void timChuoiDaiNhat(char arr[][100], int rows) {
    int maxLen = 0, index = 0;
    int i;
    for (i = 0; i < rows; i++) {
        int len = strlen(arr[i]);
        if (len > maxLen) {
            maxLen = len;
            index = i;  // Luu index cua chuoi dai nhat
        }
    }
    printf("Chuoi dai nhat: %s\n", arr[index]);  // In chuoi dai nhat
}

/* 9.4 xoaChuoi */
void xoaChuoi(char arr[][100], int *rows, int index) {
    if (index < 0 || index >= *rows) {
        printf("Chi so khong hop le!\n");
        return;
    }
    int i;
    for (i = index; i < *rows - 1; i++) {
        strcpy(arr[i], arr[i+1]);  // Di chuyen chuoi tiep theo ve truoc
    }
    (*rows)--;  // Giam so luong chuoi trong mang
}

/* 9.5 daoNguocTatCaChuoi */
void daoNguocTatCaChuoi(char arr[][100], int rows) {
    int i;
    for (i = 0; i < rows; i++) {
        daoNguocChuoi(arr[i]);  // Goi ham daoNguocChuoi cho tung chuoi trong mang
    }
}

/* 9.6 demChuoiChanLe */
void demChuoiChanLe(char arr[][100], int rows) {
    int chan = 0, le = 0;
    int i;
    for (i = 0; i < rows; i++) {
        int len = strlen(arr[i]);
        if (len % 2 == 0) {
            chan++;  // Chuoi co do dai chan
        } else {
            le++;  // Chuoi co do dai le
        }
    }
    printf("So chuoi chan: %d, So chuoi le: %d\n", chan, le);  // In ra ket qua
}

/* 9.7 noiChuoi */
void noiChuoiMang(char arr[][100], int rows, char *result) {
    result[0] = '\0';  // Khoi tao chuoi ket qua rong
    int i;
    for (i = 0; i < rows; i++) {
        strcat(result, arr[i]);  // Noi tung chuoi vao ket qua
    }
}

/* 10. Sap xep chuoi */

/* 10.1 sortStrings */
void sortStrings(char arr[][100], int rows) {
    char temp[100];
    int i, j;
    for (i = 0; i < rows - 1; i++) {
        for (j = i + 1; j < rows; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);  // Swap
                strcpy(arr[j], temp);
            }
        }
    }
}

/* 10.2 bubbleSort */
void bubbleSort(char arr[][100], int rows) {
    char temp[100];
    int i, j;
    for (i = 0; i < rows - 1; i++) {
        for (j = 0; j < rows - 1 - i; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);  // Swap
                strcpy(arr[j+1], temp);
            }
        }
    }
}

/* 11. Chuyen doi so thanh chuoi va chuoi thanh so */

/* 11.1 soThanhChuoi */
void soThanhChuoi(int num, char *str) {
    sprintf(str, "%d", num);  // Su dung sprintf de chuyen doi so thanh chuoi
}

/* 11.2 chuoiThanhSo */
int chuoiThanhSo(const char *str) {
    return atoi(str);  // Su dung atoi de chuyen doi chuoi thanh so nguyen
}

/* 12. Cac thao tac khac voi chuoi */

/* 12.1 layMangSo */
void layMangSo(const char *str, int *arr) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            arr[j++] = str[i] - '0';  // Chuyen doi ky tu so thanh so nguyen
        }
        i++;
    }
}



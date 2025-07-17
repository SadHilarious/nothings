#include <stdio.h>
#include <math.h>
#include <string.h>
// ===========================================
// SRC KIEM TRA VA XU LI CAC TINH CHAT CUA SO
// =========================================== 
/* 1. KiemTraSoNguyenTo : Ham nay dung de kiem tra xem 1 so co phai so nguyen to hay khong. 
   2. KiemTraSoFibonacci : Ham nay dung de kiem tra xem 1 so co phai so Fibonacci hay khong. 
   3. UCLN : Ham nay dung de tinh uoc chung lon nhat cua 2 so a, b. 
   4. BCNN : Ham nay dung de tinh boi chung nho nhat cua 2 so a, b. 
   5. KiemTraSoChinhPhuong : Ham nay dung de kiem tra xem 1 so co phai so chinh phuong hay khong. 
   6. KiemTraSoHoanHao : Ham nay dung de kiem tra xem 1 so co phai so hoan hao hay khong. 
   7. power : Ham nay dung de tinh luy thua cua 1 so. 
   8. giaithua : Ham nay dung de tinh giai thua cua 1 so. 
   9. TinhTongBinhPhuongCacChuSo : Ham nay dung de tinh tong binh phuong cac chu so cua 1 so. 
   10. KiemTraSoHanhPhuc : Ham nay dung de kiem tra xem 1 so co phai so hanh phuc hay khong. 
   11. KiemTraSoMersenne : Ham nay dung de kiem tra xem 1 so co phai so Mersenne hay khong. 
   12. KiemTraSoDaoNguoc : Ham nay dung de kiem tra xem 1 so co phai so dao nguoc hay khong. 
   13. sumOfDigits : Ham nay dung de tinh tong cac chu so cua 1 so. 
   14. countOfDigits : Ham nay dung de dem so luong cac chu so cua 1 so. 
   15. KiemTraSoArmstrong : Ham nay dung de kiem tra xem 1 so co phai so Armstrong hay khong. 
   16. primeFactorization : Ham nay dung de phan tich 1 so thanh tich cac so nguyen to. 
   17. kiem_tra_luy_thua_2 : Ham nay dung de kiem tra xem 1 so co phai luy thua cua 2 hay khong. 
   18. decToBin : Ham nay dung de chuyen doi so he 10 sang he 2. 
   19. decToOct : Ham nay dung de chuyen doi so he 10 sang he 8. 
   20. decToHex : Ham nay dung de chuyen doi so he 10 sang he 16. 
   21. binToDec : Ham nay dung de chuyen doi so he 2 sang he 10. 
   22. octToDec : Ham nay dung de chuyen doi so he 8 sang he 10. 
   23. hexToDec : Ham nay dung de chuyen doi so he 16 sang he 10. 
   24. dayInMonth: Ham nay tra ve so ngay trong mot thang.
*/

/* 1. KiemTraSoNguyenTo : Ham nay dung de kiem tra xem 1 so co phai so nguyen to hay khong. */
int KiemTraSoNguyenTo(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

/* 2. KiemTraSoFibonacci : Ham nay dung de kiem tra xem 1 so co phai so Fibonacci hay khong. */
int KiemTraSoFibonacci(int n) {
    int x1 = 5 * n * n + 4;
    int x2 = 5 * n * n - 4;

    int sqrt_x1 = (int)sqrt(x1);
    int sqrt_x2 = (int)sqrt(x2);

    if (sqrt_x1 * sqrt_x1 == x1 || sqrt_x2 * sqrt_x2 == x2) {
        return 1;
    } else {
        return 0;
    }
} 

/* 3. UCLN : Ham nay dung de tinh uoc chung lon nhat cua 2 so a, b. */
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/* 4. BCNN : Ham nay dung de tinh boi chung nho nhat cua 2 so a, b. */
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b);
}

/* 5. KiemTraSoChinhPhuong : Ham nay dung de kiem tra xem 1 so co phai so chinh phuong hay khong. */
int KiemTraSoChinhPhuong(int n) {
    int sqrt_n = (int)sqrt(n);
    if (sqrt_n * sqrt_n == n) {
        return 1;
    } else {
        return 0;
    }
}

/* 6. KiemTraSoHoanHao : Ham nay dung de kiem tra xem 1 so co phai so hoan hao hay khong. */
int KiemTraSoHoanHao(int n) {
    int sum = 1, i; 
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

/* 7. power : Ham nay dung de tinh luy thua cua 1 so. */
double power(double base, int exponent) {
    double result = 1.0;
    int i;
    
    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }
    
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
} 

/* 8. giaithua : Ham nay dung de tinh giai thua cua 1 so. */
int giaithua(int n) {
    int fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
} 

/* 9. TinhTongBinhPhuongCacChuSo : Ham nay dung de tinh tong binh phuong cac chu so cua 1 so. */
int TinhTongBinhPhuongCacChuSo(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

/* 10. KiemTraSoHanhPhuc : Ham nay dung de kiem tra xem 1 so co phai so hanh phuc hay khong. */
int KiemTraSoHanhPhuc(int n) {
    int slow = n, fast = n;

    do {
        slow = TinhTongBinhPhuongCacChuSo(slow);
        fast = TinhTongBinhPhuongCacChuSo(TinhTongBinhPhuongCacChuSo(fast));
    } while (slow != fast);

    return slow == 1;
}

/* 11. KiemTraSoMersenne : Ham nay dung de kiem tra xem 1 so co phai so Mersenne hay khong. */
int KiemTraSoMersenne(int n) {
    int p = 1;
    while ((1 << p) - 1 <= n) {
        if ((1 << p) - 1 == n && KiemTraSoNguyenTo(p)) {
            return 1;
        }
        p++;
    }
    return 0;
}

/* 12. KiemTraSoDaoNguoc : Ham nay dung de kiem tra xem 1 so co phai so dao nguoc hay khong. */
int KiemTraSoDaoNguoc(int n) {
    int reversed = 0, original = n;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return (original == reversed) ? 1 : 0;
} 

/* 13. sumOfDigits : Ham nay dung de tinh tong cac chu so cua 1 so. */
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

/* 14. countOfDigits : Ham nay dung de dem so luong cac chu so cua 1 so. */
int countOfDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

/* 15. KiemTraSoArmstrong : Ham nay dung de kiem tra xem 1 so co phai so Armstrong hay khong. */
int KiemTraSoArmstrong(int n) {
    int original = n, sum = 0;
    int digits = log10(n) + 1;
    
    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return (sum == original) ? 1 : 0;
}

/* 16. primeFactorization : Ham nay dung de phan tich 1 so thanh tich cac so nguyen to. */
void primeFactorization(int n) {
    int i; 
	for (i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
} 

/* 17. kiem_tra_luy_thua_2 : Ham nay dung de kiem tra xem 1 so co phai luy thua cua 2 hay khong. */
int kiem_tra_luy_thua_2(int n) {
    if (n <= 0) return 0;
    return (n & (n - 1)) == 0;
}

/* 18. decToBin : Ham nay dung de chuyen doi so he 10 sang he 2. */
void decToBin(int num) {
    char bin[32];
    int index = 0;
    do {
        bin[index++] = (num % 2) + '0';
        num /= 2;
    } while (num > 0);
    bin[index] = '\0';
    int i; 
    for (i = 0; i < index / 2; i++) {
        char temp = bin[i];
        bin[i] = bin[index - 1 - i];
        bin[index - 1 - i] = temp;
    }
    printf("Binary: %s\n", bin);
}

/* 19. decToOct : Ham nay dung de chuyen doi so he 10 sang he 8. */
void decToOct(int num) {
    char oct[32];
    int index = 0;
    do {
        oct[index++] = (num % 8) + '0';
        num /= 8;
    } while (num > 0);
    oct[index] = '\0';
    int i;
	for (i = 0; i < index / 2; i++) {
        char temp = oct[i];
        oct[i] = oct[index - 1 - i];
        oct[index - 1 - i] = temp;
    }
    printf("Octal: %s\n", oct);
}

/* 20. decToHex : Ham nay dung de chuyen doi so he 10 sang he 16. */
void decToHex(int num) {
    char hex[32];
    int index = 0;
    do {
        int remainder = num % 16;
        if (remainder < 10) hex[index++] = remainder + '0';
        else hex[index++] = (remainder - 10) + 'A';
        num /= 16;
    } while (num > 0);
    hex[index] = '\0';
    int i;
    for (i = 0; i < index / 2; i++) {
        char temp = hex[i];
        hex[i] = hex[index - 1 - i];
        hex[index - 1 - i] = temp;
    }
    printf("Hexadecimal: %s\n", hex);
}

/* 21. binToDec : Ham nay dung de chuyen doi so he 2 sang he 10. */
int binToDec(const char *bin) {
    int length = strlen(bin), decimal = 0;
    int i;
    for (i = 0; i < length; i++) {
        if (bin[i] == '1') decimal += pow(2, length - 1 - i);
    }
    return decimal;
}

/* 22. octToDec : Ham nay dung de chuyen doi so he 8 sang he 10. */
int octToDec(const char *oct) {
    int length = strlen(oct), decimal = 0;
    int i;
    for (i = 0; i < length; i++) {
        decimal += (oct[i] - '0') * pow(8, length - 1 - i);
    }
    return decimal;
}

/* 23. hexToDec : Ham nay dung de chuyen doi so he 16 sang he 10. */
int hexToDec(const char *hex) {
    int length = strlen(hex), decimal = 0;
    int i;
    for (i = 0; i < length; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') 
            decimal += (hex[i] - '0') * pow(16, length - 1 - i);
        else if (hex[i] >= 'A' && hex[i] <= 'F') 
            decimal += (hex[i] - 'A' + 10) * pow(16, length - 1 - i);
    }
    return decimal;
}

/* 24. dayInMonth: Ham nay tra ve so ngay trong mot thang.*/
#include <stdbool.h>
// Hàm kiểm tra năm nhuận
bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

// Hàm trả về số ngày trong tháng của một năm
int daysInMonth(int month, int year) {
    switch (month) {
        case 1:  // Tháng 1
        case 3:  // Tháng 3
        case 5:  // Tháng 5
        case 7:  // Tháng 7
        case 8:  // Tháng 8
        case 10: // Tháng 10
        case 12: // Tháng 12
            return 31;
        case 4:  // Tháng 4
        case 6:  // Tháng 6
        case 9:  // Tháng 9
        case 11: // Tháng 11
            return 30;
        case 2:  // Tháng 2, xét năm nhuận
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;  // Tháng không hợp lệ
    }
}



int main() {
    int num1 = 29, num2 = 15;

    printf("1. So %d ", num1);
    if (KiemTraSoNguyenTo(num1)) {
        printf("la so nguyen to.\n");
    } else {
        printf("khong la so nguyen to.\n");
    }

    printf("2. So %d ", num1);
    if (KiemTraSoFibonacci(num1)) {
        printf("la so Fibonacci.\n");
    } else {
        printf("khong la so Fibonacci.\n");
    }

    printf("3. UCLN(%d, %d) = %d\n", num1, num2, UCLN(num1, num2));
    printf("4. BCNN(%d, %d) = %d\n", num1, num2, BCNN(num1, num2));

    printf("5. So %d ", num1);
    if (KiemTraSoChinhPhuong(num1)) {
        printf("la so chinh phuong.\n");
    } else {
        printf("khong la so chinh phuong.\n");
    }

    printf("6. So %d ", num1);
    if (KiemTraSoHoanHao(num1)) {
        printf("la so hoan hao.\n");
    } else {
        printf("khong la so hoan hao.\n");
    }

    printf("7. %d^%d = %.2f\n", num1, 3, power(num1, 3));
    printf("8. %d! = %d\n", num2, giaithua(num2));

    printf("9. Tong binh phuong cac chu so cua %d = %d\n", num1, TinhTongBinhPhuongCacChuSo(num1));

    printf("10. So %d ", num1);
    if (KiemTraSoHanhPhuc(num1)) {
        printf("la so hanh phuc.\n");
    } else {
        printf("khong la so hanh phuc.\n");
    }

    printf("11. So %d ", num1);
    if (KiemTraSoMersenne(num1)) {
        printf("la so Mersenne.\n");
    } else {
        printf("khong la so Mersenne.\n");
    }

    printf("12. So %d ", num1);
    if (KiemTraSoDaoNguoc(num1)) {
        printf("la so dao nguoc.\n");
    } else {
        printf("khong la so dao nguoc.\n");
    }

    printf("13. Tong cac chu so cua %d = %d\n", num1, sumOfDigits(num1));
    printf("14. So %d co %d chu so.\n", num1, countOfDigits(num1));

    printf("15. So %d ", num1);
    if (KiemTraSoArmstrong(num1)) {
        printf("la so Armstrong.\n");
    } else {
        printf("khong la so Armstrong.\n");
    }

    printf("16. Phan tich %d thanh cac thua so nguyen to: ", num2);
    primeFactorization(num2);
    printf("\n");

    printf("17. So %d ", num1);
    if (kiem_tra_luy_thua_2(num1)) {
        printf("la luy thua cua 2.\n");
    } else {
        printf("khong la luy thua cua 2.\n");
    }

    printf("18. Doi %d sang nhi phan: ", num2);
    decToBin(num2);

    printf("19. Doi %d sang bat phan: ", num2);
    decToOct(num2);

    printf("20. Doi %d sang thap luc phan: ", num2);
    decToHex(num2);

    char bin[] = "1101";
    printf("21. Nhi phan %s sang thap phan: %d\n", bin, binToDec(bin));

    char oct[] = "17";
    printf("22. Bat phan %s sang thap phan: %d\n", oct, octToDec(oct));

    char hex[] = "1F";
    printf("23. Thap luc phan %s sang thap phan: %d\n", hex, hexToDec(hex));

    return 0;
}


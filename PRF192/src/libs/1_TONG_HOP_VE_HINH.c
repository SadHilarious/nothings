#include <stdio.h>

/*Co huong dan su dung o duoi <line 447> */


// Tam giac vuong o goc trai duoi
//*
//**
//***
//****
//*****
void tamGiacTraiDuoi(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Tam giac vuong o goc phai duoi
//    *
//   **
//  ***
// ****
//*****
void tamGiacPhaiDuoi(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");  // Khoang trong
        }
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Tam giac vuong o goc trai tren
//*****
//****
//***
//**
//*
void tamGiacTraiTren(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Tam giac vuong o goc phai tren
//*****
// ****
//  ***
//   **
//    *
void tamGiacPhaiTren(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf("  ");  // Khoang trong
        }
        for (j = 1; j <= n - i + 1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// *
// **
// * *
// *  *
// *****
void tamGiacTraiDuoiRong(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

//     *
//    **
//   * *
//  *  *
// *****
void tamGiacPhaiDuoiRong(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("  ");  
        }
        for (j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

// *****
// *   *
// *  *
// * *
// *
void tamGiacTraiTrenRong(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i + 1; j++) {
            if (j == 1 || j == n - i + 1 || i == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

// *****
//  *  *
//   * *
//    **
//     *
void tamGiacPhaiTrenRong(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf("  ");  
        }
        for (j = 1; j <= n - i + 1; j++) {
            if (j == 1 || j == n - i + 1 || i == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

// Ve tam giac can
//    *
//   ***
//  *****
// *******
//*********
void veTamGiacCan(int n) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) 
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) 
            printf("*");
        printf("\n");
    }
}

//Ve hinh chu nhat day
//*****
//*****
//*****
//*****
//*****
void veHinhChuNhatRong(int rows, int cols) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
                printf("*");
        }
        printf("\n");
    }
} 
// Ve hinh chu nhat rong
//*****
//*   *
//*   *
//*   *
//*****
void veHinhChuNhatRong(int rows, int cols) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= cols; j++) {
            if (i == 1 || i == rows || j == 1 || j == cols)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Ve hinh binh hanh lech phai 
//    *******
//   *******
//  *******
// *******
//*******
void veHinhBinhHanhLechPhai(int n, int m) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++)
            printf(" ");
        for (j = 1; j <= m; j++)
            printf("*");
        printf("\n");
    }
}

// Ve hinh binh hanh lech trai 

//*******
// *******
//  *******
//   *******
//    *******
void veHinhBinhHanhLechTrai(int n, int m) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++)
            printf(" ");
        for (j = 1; j <= m; j++)
            printf("*");
        printf("\n");
    }
}
// Ve hinh thoi
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *

void veHinhThoi(int n) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}

// Ve ban co
//# # #
// # #
//# # #
// # #
//# # #
void veBanCo(int size) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            if ((i + j) % 2 == 0)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Ve hinh chu X
//*   *
// * *
//  *
// * *
//*   *
void veHinhChuX(int n) {
    if (n % 2 == 0) {
        printf("Kich thuoc n phai la so le!\n");
        return;
    }
    
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == i || j == n - i + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Ve hinh thoi voi so
//    1
//   121
//  12321
// 1234321
//123454321
// 1234321
//  12321
//   121
//    1
void veHinhThoiSo(int n) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }
}

// Ve tam giac can voi so
//    1
//   121
//  12321
// 1234321
//123454321
void veTamGiacCanSo(int n) {
    int i, j; // Khai bao bien i, j trong ham
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) 
            printf(" ");
        for (j = 1; j <= i; j++) 
            printf("%d", j);
        for (j = i - 1; j >= 1; j--) 
            printf("%d", j);
        printf("\n");
    }
}

// Ve tam giac can voi chu
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
void veTamGiacCanChu(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) 
            printf(" ");
        for (j = 1; j <= i; j++) 
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--) 
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
} 

// Ve tam giac chu giam dan
//ABCDE
//ABCD
//ABC
//AB
//A
void tamGiacChuGiamDan(int n) {
    int i, j;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) 
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
} 

// Ve chu X voi chu  
//A       A
// B     B
//  C   C
//   D D
//    E
//   D D
//  C   C
// B     B
//A       A
void hinhChuX(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            if (j == i || j == 2 * n - i)
                printf("%c", 'A' + i - 1);
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= 2 * n - 1; j++) {
            if (j == i || j == 2 * n - i)
                printf("%c", 'A' + i - 1);
            else
                printf(" ");
        }
        printf("\n");
    }
} 

//Kim tu thap nguoc
//ABCDEDCBA
// ABCDCBA
//  ABCBA
//   ABA
//    A
void kimTuThapNguoc(int n) {
    int i, j;
    for (i = n; i >= 1; i--) {
        for (j = i; j < n; j++) 
            printf(" ");
        for (j = 1; j <= i; j++) 
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--) 
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
} 

// Huong dan su dung 
#include <stdio.h>

int main() {
    int n = 5;
    int rows = 5, cols = 10;

    printf("1 Tam giac vuong goc trai duoi\n");
    tamGiacTraiDuoi(n);
    
    printf("\n2 Tam giac vuong goc phai duoi\n");
    tamGiacPhaiDuoi(n);
    
    printf("\n3 Tam giac vuong goc trai tren\n");
    tamGiacTraiTren(n);
    
    printf("\n4 Tam giac vuong goc phai tren\n");
    tamGiacPhaiTren(n);
    
    printf("\n5 Tam giac vuong goc trai duoi rong\n");
    tamGiacTraiDuoiRong(n);
    
    printf("\n6 Tam giac vuong goc phai duoi rong\n");
    tamGiacPhaiDuoiRong(n);
    
    printf("\n7 Tam giac vuong goc trai tren rong\n");
    tamGiacTraiTrenRong(n);
    
    printf("\n8 Tam giac vuong goc phai tren rong\n");
    tamGiacPhaiTrenRong(n);
    
    printf("\n9 Tam giac can\n");
    veTamGiacCan(n);
    
    printf("\n10 Hinh chu nhat rong\n");
    veHinhChuNhatRong(rows, cols);
    
    printf("\n11 Hinh binh hanh lech phai\n");
    veHinhBinhHanhLechPhai(n, cols);
    
    printf("\n12 Hinh binh hanh lech trai\n");
    veHinhBinhHanhLechTrai(n, cols);
    
    printf("\n13 Hinh thoi\n");
    veHinhThoi(n);
    
    printf("\n14 Ban co\n");
    veBanCo(n);
    
    printf("\n15 Hinh chu X\n");
    veHinhChuX(n);
    
    printf("\n16 Hinh thoi so\n");
    veHinhThoiSo(n);
    
    printf("\n17 Tam giac can so\n");
    veTamGiacCanSo(n);
    
    printf("\n18 Tam giac can chu\n");
    veTamGiacCanChu(n);
    
    printf("\n19 Tam giac chu giam dan\n");
    tamGiacChuGiamDan(n);
    
    printf("\n20 Hinh chu X bang chu\n");
    hinhChuX(n);
    
    printf("\n21 Kim tu thap nguoc\n");
    kimTuThapNguoc(n);

    return 0;
}


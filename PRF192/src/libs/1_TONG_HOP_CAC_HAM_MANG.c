#include <stdio.h>
#include <string.h>

/*
=====================
NHOM CAC CHUC NANG
=====================
1. NHAP/XUAT MANG
    1.1. NhapMang: Nhap mang 1 chieu.
    1.2. XuatMang: Xuat mang 1 chieu.
    1.3. nhapMang: Nhap mang 2 chieu.
    1.4. xuatMang: Xuat mang 2 chieu.

2. TIM KIEM VA TINH TOAN TREN MANG
    2.1. findMax: Tim gia tri lon nhat trong mang.
    2.2. findMin: Tim gia tri nho nhat trong mang.
    2.3. findSecondLargest: Tim phan tu lon thu nhi trong mang.
    2.4. sumArray: Tinh tong cac phan tu cua mang.
    2.5. maxSubArraySum: Tim tong lon nhat cua day con lien tiep.

3. SAP XEP VA XU LY MANG
    3.1. sortAscending: Sap xep mang tang dan.
    3.2. sortDescending: Sap xep mang giam dan.
    3.3. reverseArray: Dao nguoc mang.
    3.4. insertElement: Chen phan tu vao vi tri bat ky.
    3.5. deleteElement: Xoa phan tu tai vi tri bat ky.
    3.6. removeDuplicates: Loai bo cac phan tu trung lap.

4. KIEM TRA THONG TIN TRONG MANG
    4.1. linearSearch: Tim kiem tuyen tinh.
    4.2. isSymmetric: Kiem tra doi xung.
    4.3. findMostFrequent: Tim phan tu xuat hien nhieu nhat.
    4.4. countOccurrences: Dem so lan xuat hien cua tung phan tu.
    4.5. countEven: Dem so phan tu chan.
    4.6. countOdd: Dem so phan tu le.
    4.7. countPositive: Dem so phan tu duong.
    4.8. countNegative: Dem so phan tu am.

*/

/////////////////////////////
// NHOM 1: NHAP/XUAT MANG //
/////////////////////////////

/* 1.1 Nhap mang 1 chieu. */
void NhapMang(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

/* 1.2 Xuat mang 1 chieu. */
void XuatMang(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* 1.3 Nhap mang 2 chieu. */
void nhapMang(int rows, int cols, int arr[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

/* 1.4 Xuat mang 2 chieu. */
void xuatMang(int rows, int cols, int arr[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

//////////////////////////////////////////
// NHOM 2: TIM KIEM VA TINH TOAN MANG  //
//////////////////////////////////////////

/* 2.1 Tim gia tri lon nhat. */
int findMax(int arr[], int n) {
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

/* 2.2 Tim gia tri nho nhat. */
int findMin(int arr[], int n) {
    int i;
    int min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

/* 2.3 Tim gia tri lon thu nhi. */
int findSecondLargest(int arr[], int n) {
    int i;
    int largest = arr[0], secondLargest = -1;
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

/* 2.4 Tinh tong cac phan tu cua mang. */
int sumArray(int arr[], int n) {
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

/* 2.5 Tong lon nhat cua day con lien tiep. */
int maxSubArraySum(int arr[], int n) {
    int i;
    int maxSoFar = arr[0], maxEndingHere = arr[0];
    for (i = 1; i < n; i++) {
        maxEndingHere = (arr[i] > maxEndingHere + arr[i]) ? arr[i] : (maxEndingHere + arr[i]);
        maxSoFar = (maxSoFar > maxEndingHere) ? maxSoFar : maxEndingHere;
    }
    return maxSoFar;
}

//////////////////////////////////////////
// NHOM 3: SAP XEP VA XU LY MANG       //
//////////////////////////////////////////

/* 3.1 Sap xep tang dan. */
void sortAscending(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/* 3.2 Sap xep giam dan. */
void sortDescending(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

/* 3.3 Dao nguoc mang. */
void reverseArray(int arr[], int n) {
    int i;
    for (i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

/* 3.4 Chen phan tu vao vi tri bat ky. */
void insertElement(int arr[], int *n, int pos, int value) {
    int i;
    for (i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    (*n)++;
}

/* 3.5 Xoa phan tu tai vi tri bat ky. */
void deleteElement(int arr[], int *n, int pos) {
    int i;
    for (i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

/* 3.6 Loai bo phan tu trung lap. */
void removeDuplicates(int arr[], int *n) {
    int i, j;
    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n; j++) {
            if (arr[i] == arr[j]) {
                deleteElement(arr, n, j);
                j--;
            }
        }
    }
}

//////////////////////////////////////////
// NHOM 4: KIEM TRA THONG TIN TRONG MANG
//////////////////////////////////////////

/* 4.1 Tim kiem tuyen tinh. */
int linearSearch(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

/* 4.2 Kiem tra mang doi xung. */
int isSymmetric(int arr[], int n) {
    int i;
    for (i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

/* 4.3 Tim phan tu xuat hien nhieu nhat. */
int findMostFrequent(int arr[], int n) {
    int i, j;
    int maxCount = 0, maxElement = arr[0];
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    return maxElement;
}

/* 4.4 Dem so lan xuat hien cua cac phan tu. */
void countOccurrences(int arr[], int n) {
    int i, j;
    int visited[n];
    for (i = 0; i < n; i++) visited[i] = 0;
    for (i = 0; i < n; i++) {
        if (visited[i]) continue;
        int countValue = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                countValue++;
                visited[j] = 1;
            }
        }
        printf("Element %d appears %d times\n", arr[i], countValue);
    }
}

/* 4.5 Dem so phan tu chan. */
int countEven(int arr[], int n) {
    int i;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

/* 4.6 Dem so phan tu le. */
int countOdd(int arr[], int n) {
    int i;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

/* 4.7 Dem so phan tu duong. */
int countPositive(int arr[], int n) {
    int i;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}

/* 4.8 Dem so phan tu am. */
int countNegative(int arr[], int n) {
    int i;
    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }
    return count;
}
#include <stdio.h>

int main() {
    int arr[100], n, pos, value;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    /////////////////////////////////////////
    // 1. NHAP/XUAT MANG
    /////////////////////////////////////////

    // 1.1. Nhap mang 1 chieu
    printf("Nhap mang: \n");
    NhapMang(arr, n);

    // 1.2. Xuat mang 1 chieu
    printf("Mang vua nhap: ");
    XuatMang(arr, n);

    /////////////////////////////////////////
    // 2. TIM KIEM VA TINH TOAN TREN MANG
    /////////////////////////////////////////

    // 2.1. Tim gia tri lon nhat
    printf("Gia tri lon nhat: %d\n", findMax(arr, n));

    // 2.2. Tim gia tri nho nhat
    printf("Gia tri nho nhat: %d\n", findMin(arr, n));

    // 2.3. Tim phan tu lon thu nhi
    printf("Phan tu lon thu nhi: %d\n", findSecondLargest(arr, n));

    // 2.4. Tinh tong cac phan tu cua mang
    printf("Tong cac phan tu: %d\n", sumArray(arr, n));

    // 2.5. Tim tong lon nhat cua day con lien tiep
    printf("Tong lon nhat cua day con lien tiep: %d\n", maxSubArraySum(arr, n));

    /////////////////////////////////////////
    // 3. SAP XEP VA XU LY MANG
    /////////////////////////////////////////

    // 3.1. Sap xep tang dan
    sortAscending(arr, n);
    printf("Mang sau khi sap xep tang dan: ");
    XuatMang(arr, n);

    // 3.2. Sap xep giam dan
    sortDescending(arr, n);
    printf("Mang sau khi sap xep giam dan: ");
    XuatMang(arr, n);

    // 3.3. Dao nguoc mang
    reverseArray(arr, n);
    printf("Mang sau khi dao nguoc: ");
    XuatMang(arr, n);

    // 3.4. Chen phan tu vao vi tri bat ky
    printf("Nhap vi tri can chen (0-%d): ", n);
    scanf("%d", &pos);
    printf("Nhap gia tri can chen: ");
    scanf("%d", &value);
    insertElement(arr, &n, pos, value);
    printf("Mang sau khi chen: ");
    XuatMang(arr, n);

    // 3.5. Xoa phan tu tai vi tri bat ky
    printf("Nhap vi tri can xoa (0-%d): ", n - 1);
    scanf("%d", &pos);
    deleteElement(arr, &n, pos);
    printf("Mang sau khi xoa: ");
    XuatMang(arr, n);

    // 3.6. Loai bo cac phan tu trung lap
    removeDuplicates(arr, &n);
    printf("Mang sau khi loai bo trung lap: ");
    XuatMang(arr, n);

    /////////////////////////////////////////
    // 4. KIEM TRA THONG TIN TRONG MANG
    /////////////////////////////////////////

    // 4.1. Tim kiem tuyen tinh
    printf("Nhap gia tri can tim: ");
    scanf("%d", &value);
    int index = linearSearch(arr, n, value);
    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", value, index);
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", value);
    }

    // 4.2. Kiem tra doi xung
    if (isSymmetric(arr, n)) {
        printf("Mang doi xung\n");
    } else {
        printf("Mang khong doi xung\n");
    }

    // 4.3. Tim phan tu xuat hien nhieu nhat
    printf("Phan tu xuat hien nhieu nhat: %d\n", findMostFrequent(arr, n));

    // 4.4. Dem so lan xuat hien cua tung phan tu
    printf("So lan xuat hien cua tung phan tu:\n");
    countOccurrences(arr, n);

    // 4.5. Dem so phan tu chan
    printf("So phan tu chan: %d\n", countEven(arr, n));

    // 4.6. Dem so phan tu le
    printf("So phan tu le: %d\n", countOdd(arr, n));

    // 4.7. Dem so phan tu duong
    printf("So phan tu duong: %d\n", countPositive(arr, n));

    // 4.8. Dem so phan tu am
    printf("So phan tu am: %d\n", countNegative(arr, n));

    return 0;
}


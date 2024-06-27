#include <stdio.h>
#include <math.h>

int tinhTuoi(int namSinh);
int phuongTrinhBacNhat(int a, int b);
float tongHieuTichThuong(float a, float b);
void hoanVi(int *a, int *b);

int LaSNT(int n);

void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void gopMang(int a[], int na, int b[], int nb, int c[], int nc);
void bitCount(int a);


int main() {

    // int a, b;
    // printf("Nhap so a: \n");
    // scanf("%d", &a);
    // printf("Nhap so b: \n");
    // scanf("%d", &b);
    // hoanVi(&a, &b);

    // int soLuongPhanTu = 5;
    // int soLuongPhanTu2 = 4;
    // int soLuongPhanTu3 = soLuongPhanTu2 + soLuongPhanTu;
    // int mangMotChieu[5];
    // nhapMang(mangMotChieu, soLuongPhanTu);
    // int mangHai[4] = {0, 3, 12, 34};
    // int mangGop[9];
    // gopMang(mangMotChieu, soLuongPhanTu, mangHai, soLuongPhanTu2, mangGop, soLuongPhanTu3);
    // xuatMang(mangGop, soLuongPhanTu3);

    // int mangHai[4] = {1, 3, 12, 34};
    // int *pmangHai;
    // pmangHai = mangHai;
    // pmangHai = &mangHai[3];
    // *pmangHai = 30;
    // printf("Phan tu thu ?: %d \n", *pmangHai);
    // printf("Phan tu thu 1: %d \n", mangHai[0]);
    // printf("Phan tu thu 2: %d \n", mangHai[1]);
    // printf("Phan tu thu 3: %d \n", mangHai[2]);
    // printf("Phan tu thu 4: %d", mangHai[3]);

    int a = 6;
    bitCount(a);
    printf("Test git - TTin");

    return 0;
}

int phuongTrinhBacNhat(int a, int b) {
    int x;
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo so nghiem");
        }
        else {
            printf("Phuong trinh vo nghiem");
        }
    }
    else {
        x = -b/a;
        printf("Ket qua = %d", x);
    }
    return 0;
}

int tinhTuoi(int namSinh) {
    int namHienTai = 2024;
    int tuoi;

    tuoi = namHienTai - namSinh;
    printf("Tuoi cua ban la: %d", tuoi);

    return 0;
}

float tongHieuTichThuong(float a, float b) {
    printf("Tong cua 2 so la: %f\n", a + b);
    printf("Hieu cua 2 so la: %f\n", a - b);
    printf("Tich cua 2 so la: %f\n", a * b);
    printf("Thuong cua 2 so la: %f\n", a / b);

    return 0;
}

void hoanVi(int *a,  int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("Gia tri sau khi hoan doi la: \n");
    printf("a = %d\n", *a);
    printf("b = %d\n", *b);
}

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri thu %d cua mang: ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    printf("Mang sau khi nhap la: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu mang thu %d la %d\n", i, a[i]);
    }
}

int LaSNT(int n) {
    int i, dem = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            dem++;

        if (dem==2)
            return 1;
    
    return 0;
    }
}

void gopMang(int a[], int na, int b[], int nb, int c[], int nc) {
    nc = 0;
    for(int i = 0; i < na; i++ ) {
        c[nc] = a[i];
        nc++;
    }
    for(int i = 0; i < nb; i++ ) {
        c[nc] = b[i];
        nc++;
    }
}

void bitCount(int a) {
    int dem1 = 0;
    for(int i = 0; i < 3; i++) {
        if((a >> i) & 0x1 == 0x1)
        dem1++;
    }
    printf("So bit 1 cua so %d la: %d", a, dem1);
}

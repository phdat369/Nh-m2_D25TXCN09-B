#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
float array[100];
int n=0;
void nhap_diem(float array[]){
	printf("\nNhap so luong diem : ");
	scanf("%d",&n);
	printf("\nNhap cac con diem cua sinh vien : ");
	for(int i=0;i<n;i++){
		scanf("%f",&array[i]);
	}
}
void hien_thi_diem(float array[]){
	if(n==0){
		printf("\nChua co diem nao");
		printf("\nVui long chon chuc nang 1");
		return;
	}
	printf("\nCac diem cua sinh vien : ");
	for(int i=0;i<n;i++){
		printf("%.1f ",array[i]);
	}
}
void diemCaoThap(float array[])
{
    if (n == 0)
    {
        printf("\nChua co diem nao!");
        printf("\nVui long chon chuc nang 1 ");
        return;
    }
    float max = array[0], min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
            max = array[i];
        if (array[i] < min)
            min = array[i];
    }
    printf("Diem cao nhat: %.1f\n", max);
    printf("Diem thap nhat: %.1f\n", min);
}
void themDiem(float array[],float k,int x){
	printf("\nNhap diem muon them : ");
	scanf("%f",&k);
	printf("\nNhap vi tri muon them diem : ");
	scanf("%d",&x);
	for(int i=n;i>x+1;i--){
		array[i+1]=array[i];
	}
	array[x]=k;
	n++;
}
void xoaDiem(float array[]) {
    if (n == 0) {
        printf("Khong co diem de xoa!\n");
        printf("Vui long chon chu nang 1");
        return;
    }
    int vitri;
    printf("Nhap vi tri muon xoa (1 -> %d): ", n);
    scanf("%d", &vitri);

    if (vitri < 1 || vitri > n) {
        printf("Vi tri khong hop le!\n");
        return ;
    }
    for (int i = vitri - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    --n;
}
void tinhTrungBinh(float array[]) {
    if (n == 0) {
        printf("Chua co diem!\n");
        printf("\nVui long chon chuc nang 1 ");
        return;
    }
    float sum = 0;
    for (int i = 0; i < n ; i++){
        sum += array[i];
}
float diemTB=sum/n;
    printf("Trung binh diem: %.1f\n", diemTB);
}
void loc_diem(float array[]) {
    if (n == 0) {
        printf("=> Danh sach diem rong.");
        printf("\nVui long chon chuc nang 1 ");
        return;
    }
    printf("Cac diem lon hon 8.0\n");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 8.0) {
            printf("Cac diem lon hon 8 : %.1f", array[i]);
            found = 1;
        }
    }
    if (found==0) {
        printf("Khong co diem nao lon hon 8.0.\n");
    }
}
int main(){
	int choose;
	int k,x;
	do{
	    printf("\n======================MENU=======================");
	    printf("\n||1.Nhap danh sach diem mon hoc.               ||");
	    printf("\n||2.Hien thi tat ca diem cua sinh vien.        ||");
	    printf("\n||3.Hien thi diem cao nhat va thap nhat.       ||");
	    printf("\n||4.Them diem cho sinh vien.                   ||");
	    printf("\n||5.Xoa diem cua sinh vien.                    ||");
	    printf("\n||6.Tinh trung binh cong cac diem.             ||");
	    printf("\n||7.Loc tat ca cac diem >8.0.                  ||");
	    printf("\n||8.Thoat.                                     ||"); 
	    printf("\n=================================================\n"); 
	    printf("Hay nhap chuc nang ma ban can : ");
	    scanf("%d" , &choose);
		switch(choose){
			case 1:
				nhap_diem(array);
			break;
			case 2:
				hien_thi_diem(array);
			break;
			case 3:
				diemCaoThap(array);
			break;
			case 4:
				themDiem(array,k,x);
			break;
			case 5:
				xoaDiem(array);
			break;
			case 6:
				tinhTrungBinh(array);
			break;
			case 7:
				loc_diem(array);
			break;
			case 8:
				return 0;
		} 
	}while(choose!=8);
}

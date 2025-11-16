
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
float array[100];
int n=0;
int nhap_diem(float array[]){
	int flag = 1 ; 
	printf("\nNhap so luong diem : ");
	scanf("%d",&n);
	if ( n <= 0 || n > 100 ){
		printf("So luong diem khong hop le ! ");
		n = 0 ;
		return 0; 
	} 
	printf("\nNhap cac con diem cua sinh vien : ");
	flag = 1; 
	for(int i=0;i<n;i++){
	do {
		printf("\nHay nhap diem thu %d : " , i + 1 ); 
		scanf("%f",&array[i]);  
		if ( array[i] < 0 || array[i] > 10   ){
			printf("Diem khong hop le ! Nhap lai diem thu %d : " , i+1 ); 
		} 
     } while ( array[i] < 0 || array[i] > 10 ); 
	}
	if ( flag == 1 ){
		printf("Tat ca diem deu hop le ! \n"); 
	} else {
		printf("Co diem khong hop le trong danh sach ! \n Vui long nhap lai diem \n"); 
	} 
	return flag ; 
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
void themDiem(float array[]){
	float k;
	int x;
	if(n>=100){
		printf("Danh sach da day,khong the them\n");
		return;
	}
	printf("\nNhap diem muon them : ");
	scanf("%f",&k);
	if (k < 0 || k > 10) {
    printf("Diem khong hop le!\n");
    return;
}
	printf("\nNhap vi tri muon them diem : ");
	scanf("%d",&x);	
	if (x < 1 || x > n + 1) {
        printf("Vi tri khong hop le!\n");
        return;
    }
	for(int i=n;i>=x;i--){
		array[i]=array[i-1];
	}
	array[x-1]=k;
	n++;
	printf("Da them diem thanh cong ");
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
    printf("Cac diem lon hon 8.0 : ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 8.0) {
            printf(" %.1f ", array[i]);
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
				themDiem(array);
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
			default:
				printf("Loi vui long chon lai :");
		} 
	}while(choose!=8);
}


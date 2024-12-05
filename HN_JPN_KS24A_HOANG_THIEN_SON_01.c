#include<stdio.h>
int main(){
	int menu;
	int i,j,n;
	int arr[100];
	long long int tong=0;
	long long int min=1000;
	int max=0;
	long long int value;
	int position;
	int value_1;
	int flag=-1;
	int uocso=0;
	
	
	do{
		printf("\n----MENU----");
		printf("\n1:nhap so phan tu va gia tri cho mang in ra gia tri cac phan tu trong mang\n");
		
		printf("\n2:tim gia tri lon nhat va nho nhat trong mang\n");
		printf("\n3:in ra tong tat ca cac phan tu\n");
		printf("\n4:them mot phan tu vao cuoi mang\n");
		printf("\n5:xoa phan tu tai vi tri cu the\n");
		printf("\n6:xap xep mang theo thu tu giam dan\n");
		printf("\n7:tim kiem phan tu do co ton tai trong mang hay khong\n");
		printf("\n8:In ra toan bo so nguyen to trong mang\n ");
		printf("\n9:Sap xep mang theo thu tu tang dan \n");
		printf("\n10:thoat chuong trinh\n");
		printf("\nmoi ban nhap lua chon\n");
		scanf("%d",&menu);
		printf("\n");
		switch(menu){
			case 1:
				
				printf("moi ban nhap so phan tu co trong mang \n");
				scanf("%d",&n);
				if(n<0||n>100){
					printf("moi ban nhap lai so luong phan tu");
					break;
				}else{
					for(i=0;i<n;i++){
						printf("\nphan tu thu %d",i+1);
						scanf("%d",&arr[i]);
					}
				}
				
			
				printf("cac phan tu co trong mang la\n");
				for(i=0;i<n;i++){
					printf("\narr[%d]=%d",i,arr[i]);
				}
				break;	
			case 2:
				for(i=0;i<n;i++){
					if(arr[i]>max){
						max=arr[i];
					}
					
				}
				for(j=0;j<n;j++){
					if(arr[j]<min){
						min=arr[j];
					}
				}		
				printf("gia tri lon nhat cua mang la ll%d\n",max);
				printf("gia tri nho nhat cua mang la ll%d\n",min);
				break;
			case 3:
				for(i=0;i<n;i++){
					tong+=arr[i];
				}
				printf("tong tat ca cac phan tu co trong mang la:ll%d\n",tong);
				break;
			case 4:
				printf(" moi ban nhap gia tri can them vao cuoi mang\n");
				scanf("%lld",&value);
				for(i=0;i<=n;i++){
					if(i=n){
						arr[n]=value;
					}
				}
				n++;
				printf("mang sau khi them la\n");
				for(i=0;i<n;i++){
					printf("arr[%d]=%d\n",i,arr[i]);
				}
				break;
			case 5:
				printf("moi ban nhap vi tri cua phan tu can xoa\n");
				scanf("%d",&position);
				for(i=position-1;i<n;i++){
					arr[i]=arr[i+1];
				}
				n--;
				printf("cac phan tu co trong mang sau khi xoa la\n");
				for(i=0;i<n;i++){
					printf("\narr[%d]=%d",i,arr[i]);
				}
				break;
			case 7:
				printf("moi ban nhap vao gia tri can tim kiem trong mang\n");
				scanf("%d",&value_1);
				for(i=0;i<n;i++){
					if(arr[i]==value_1){
						printf("gai tri ban dang tim co trong mang\n");
						printf("va gia tri do nam o vi tri : %d\n",i+1);
						break;
					}else{
						printf("gia tri ban muon tim khong co trong mang\n");
						break;
					}
				}
			case 8:
				printf("cac so nguyen to la\n");
				for(i=1;i<n;i++){
					uocso=0;
					for(j=2;j<arr[i];j++){
						if(arr[i]%j==0){
							uocso++;
						}
							
					}
					if(uocso==0){
						printf("%d\n",arr[i]);
					}
					
				}
				
					
				
					
					
				
				
				
				break;
			case 9:
				printf("\n");
				break;
			case 6:
				printf("\n");
				break;
			case 10:
				printf("thoat chuong trinh\n");
				break;
				
			
			
				
				
			
		}
		
	
		
	}while(menu!=10);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

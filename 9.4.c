#include <stdio.h>
const int MAX_SIZE = 100;

int size = 0;

int main(void) {
    int array[MAX_SIZE];
    while (1) {
        printf("============MENU================\n");
        printf("1. Nhap phan tu cho mang.\n");
        printf("2. Hien thi mang.\n");
        printf("3. Them moi gia tri vao mang.\n");
        printf("4. Cap nhat gia tri phan tu.\n");
        printf("5. Xoa phan tu.\n");
        printf("6. Thoat.\n");
        printf("================================\n");
        int choice;
        printf("Moi ban nhap chuc nang: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                int n;
                printf("Moi ban nhap so luong phan tu cho mang: ");
                scanf("%d", &n);
                if (n <= 0 || n > MAX_SIZE) {
                    printf("So luong phan tu khong hop le, vui long nhap tu 1 - %d\n", MAX_SIZE);
                    break;
                }
                for(int i = 0; i < n; ++i){
                    printf("Nhap array[%d] = ", i);
                    scanf("%d", &array[i]);
                }
                size = n;
                printf("Ban vua nhap thanh cong cho %d phan tu\n", n);
                break;
            
            case 2:
                if(size == 0){
                    printf("Mang chua co phan tu nao\n");
                } else{
                    printf("Danh sach cac phan tu trong mang la: ");
                    for(int i = 0; i < size; ++i){
                        printf("%d ", array[i]);
                    }
                    printf("\n");
                }
                break;

            case 3: 
                if(size >= MAX_SIZE){
                    printf("Mang da day, khong the them phan tu moi\n");
                    break;
                }
                int them, moi;
                printf("Moi ban nhap gia tri can them: ");
                scanf("%d", &moi);
                printf("Moi ban nhap vi tri can them: ");
                scanf("%d", &them);
                if (them < 0) {
                    them = 0;
                } else if(them > size){
                    them = size;
                }
                for(int i = size; i > them; i--){
                    array[i] = array[i - 1];
                }
                array[them] = moi;
                size++;
                printf("Them thanh cong\n");
                break;
            

            case 4:
                int sua, moi1;
                printf("Moi ban nhap vi tri can sua: ");
                scanf("%d", &sua);
                if(sua < 0 || sua >= size){
                    printf("Vi tri khong hop le\n");
                    break;
                }
                printf("Moi ban nhap gia tri moi (gia tri cu la %d): ", array[sua]);
                scanf("%d", &moi1);
                array[sua] = moi1;
                printf("Cap nhat thanh cong\n");
                break;
            

            case 5: 
                if(size == 0){
                    printf("Mang khong co phan tu nao de xoa\n");
                    break;
                }
                int xoa;
                printf("Moi ban nhap vi tri can xoa: ");
                scanf("%d", &xoa);
                if(xoa < 0 || xoa >= size){
                    printf("Vi tri khong hop le\n");
                    break;
                
                for(int i = xoa; i < size - 1; ++i){
                    array[i] = array[i + 1];
                }
                size--;
                printf("Xoa thanh cong\n");
                break;
            }

            case 6:
                printf("Thoat chuong trinh\n");
                return 0;

            default:
                printf("Lua chon khong hop le, vui long nhap lai\n");
                break;
        }
    }
    return 0;
}
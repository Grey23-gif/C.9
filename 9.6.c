#include <stdio.h>

int main() {
    int arr[100][100];
    int cot,dong, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cua cac phan tu\n");
        printf("2. In gia tri cua mang theo ma tran\n");
        printf("3. In gia tri phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co gia tri cac phan tu lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: {
                
                printf("Nhap so dong: ");
                scanf("%d", &dong);
                printf("Nhap so cot: ");
                scanf("%d", &cot);
                for (int i = 0; i < dong; i++) {
                    for (int j = 0; j < cot; j++) {
                        printf("Nhap gia tri tai vi tri [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }
            case 2: {
                
                printf("Cac phan tu cua mang:\n");
                for (int i = 0; i < dong; i++) {
                    for (int j = 0; j < cot; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3: {
                
                int sum = 0;
                printf("Cac so le: ");
                for (int i = 0; i < dong; i++) {
                    for (int j = 0; j < cot; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac so le: %d\n", sum);
                break;
            }
            case 4: {
                
                int tich = 1;
                printf("Cac phan tu tren duong bien: ");
                for (int i = 0; i < dong; i++) {
                    for (int j = 0; j < cot; j++) {
                        if (i == 0 || i == dong - 1 || j == 0 || j == cot - 1) 
                        {
                            printf("%d ", arr[i][j]);
                            tich *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tru tren duong bien: %d\n",tich);
                break;
            }
            case 5: {
                
                printf("Cac phan tu tren duong cheo chinh: ");
                for (int i = 0; i < dong && i < cot; i++) 
                {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            }
            case 6: {
               
                printf("Cac phan tu tren duong cheo phu: ");
                for (int i = 0; i <dong && i < cot; i++) {
                    printf("%d ", arr[i][cot - i - 1]);
                }
                printf("\n");
                break;
            }
            case 7: {
               
                int maxSum = -1, maxRow = -1;
                for (int i = 0; i < dong; i++) {
                    int rowSum = 0;
                    for (int j = 0; j < cot; j++) {
                        rowSum += arr[i][j];
                    }
                    if (rowSum > maxSum) {
                        maxSum = rowSum;
                        maxRow = i;
                    }
                }
                printf("Dong co tong gia tri lon nhat la dong %d voi tong  = %d\n", maxRow + 1, maxSum);
                break;
            }
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

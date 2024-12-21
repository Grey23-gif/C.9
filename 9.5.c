#include <stdio.h>
#include <math.h>

int main() {
    int arr[100];
    int n, choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri nho nhat va lon nhat\n");
        printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
        printf("6. Nhap vao 1 so va thong ke co bao nhieu phan tu do\n");
        printf("7. Them 1 phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lau chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: 
            {
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                printf("Cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int sum = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < n; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;
            }
            case 4: {
                if (n == 0) {
                    printf("Mang rong\n");
                    break;
                }
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++) 
                {
                    if (arr[i] > max) 
                    {
                    max = arr[i];
                    }
                    if (arr[i] < min) 
                    {
                    min = arr[i];
                    }
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;
            }
            case 5: {
                int sum11 = 0;
                printf("Cac so nguyen so la: ");
                for (int i = 0; i < n; i++) {
                    int check = 1;
                    if (arr[i] < 2) {
                        check = 0;
                    } else {
                        for (int j = 2; j <= sqrt(arr[i]); j++) {
                            if (arr[i] % j == 0) {
                                check = 0;
                                break;
                            }
                        }
                    }
                    if (check) {
                        printf("%d ", arr[i]);
                        sum1 += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to: %d\n", sumPrime);
                break;
            }
            case 6: {
                int value, count = 0;
                printf("Nhap so can thong ke: ");
                scanf("%d", &value);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        count++;
                    }
                }
                printf("Số so phan tu bang %d la: %d\n", value, count);
                break;
            }
            case 7: {
                int value, index;
                printf("Nhap phan tu can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can chen vao (0 đến %d): ", n);
                scanf("%d", &index);
                if (index >= 0 && index <= n) {
                    for (int i = n; i > index; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    n++;
                } else {
                    printf("Vi tri k hop le.\n");
                }
                break;
            }
            case 8:
                printf("Thoat.\n");
                break;
            default:
                printf("Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

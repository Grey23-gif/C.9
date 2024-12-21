#include <stdio.h>

int main()
{
    int array[100], n;
    do
    {
         printf("Nhap so luong phan tu muon nhap (toi da 100): ");
        scanf("%d", &n);

        if(n < 0 || n > 100)
        {
         printf("So luong phan tu khong hop le! Vui long nhap lai.\n");
        }
    } 
    while(n < 0 || n > 100);
    
    printf("\nVui long nhap %d phan tu:\n", n);
    for(int i = 0; i < n; i++)
    {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &array[i]);
    }

    int dai = n;
    int xoa;    
    do{
    printf("\nNhap vi tri can xoa (1 - %d): ", dai);
        scanf("%d", &xoa);

        if(xoa < 0 || xoa >= dai){
            printf("Vui long nhap lai.\n");
        }
    } while(xoa < 0 || xoa >= dai);
    xoa = xoa - 1;

    for(int i = xoa; i < dai-1 ; i++){
        array[i] = array[i + 1];
    }
    dai--;
    
    printf("\nMang sau khi xoa:\n");
    for (int i = 0; i < dai; i++) {
    printf("%d ", array[i]);
    }
    
    
    printf("\n");

    return 0;
}
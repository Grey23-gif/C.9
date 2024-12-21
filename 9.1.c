    #include <stdio.h>
    
    int main()
    {
        int arr[100], n;
        do 
        {
            printf("Nhap so luong phan tu muon nhap (toi da 100): ");
            scanf("%d", &n);
    
            if (n < 0 || n > 100) {
                printf("Vui long nhap lai.\n");
            }
        } while (n < 0 || n > 100);
        printf("\nVui long nhap %d phan tu:\n", n);
        for(int i = 0; i < n; i++){
            printf("Phan tu thu %d: ", i+1);
            scanf("%d", &arr[i]);
        }
        int dai  = n;
        int them, so;
        printf("\nNhap gia tri can them : ");
        scanf("%d", &them);
    
        do
        {
            printf("\nNhap vi tri can them (bat dau tu 0): ");
            scanf("%d", &so);
    
            if(so < 0 || so >= 100)
            {
                printf("Vui long nhap lai.\n");
            }
        }
        while(so < 0 || so >= 100);
    
        if(so>= dai){
            arr[so] = them;
            dai = so + 1;
        } else
        {
            for(int i = dai; i > so; i--)
            {
                arr[i] = arr[i - 1];
            }          
            arr[so] = them;
            dai++;
        }
    
        printf("\nMang sau khi them:\n");
        for (int i = 0; i < dai; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    
        
    
        return 0;
    }

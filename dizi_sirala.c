#include <stdio.h>
// değerleri klavyeden girilen 10 elemanlı dizinin elemanlarını küçükten büyüğe sırala ve ekrana yazdır

int main() 

{
    
 int dizi[10];
 int gecici;
 int i,j;
 
 for(i = 0 ; i < 10 ; i++)
 {
  printf("dizi[%d]: ",i);
  scanf("%d",&dizi[i]);
 }
 
 for(i = 1 ; i < 10 ; i++)
 {
  for(j = i  ; j > 0 ; j--)
  {
   if(dizi[j] < dizi[j - 1])
   {
    gecici = dizi[j];
    
    dizi[j] = dizi[j - 1];
    
    dizi[j - 1] = gecici;
   }
  }
 }
 
 printf("\nkucukten buyuge siralanmis dizi: ");
 for(i = 0 ; i < 10 ; i++)
 {
  printf("%d ",dizi[i]);
 }
 
 return 0;
  
}
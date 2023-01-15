//3
#include <stdio.h>
 
void printUnion(int arr1[], int arr2[], int m, int n)
{
    printf("Union is: ");
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            printf(" %d ", arr1[i++]);
        else if (arr2[j] < arr1[i])
            printf(" %d ", arr2[j++]);
        else {
            printf(" %d ", arr2[j++]);
            i++;
        }
    }
 
    while (i < m)
        printf(" %d ", arr1[i++]);
    while (j < n)
        printf(" %d ", arr2[j++]);
}

void printIntersection(int arr1[], int arr2[], int *arr3, int m, int n)
{
    printf("\nIntersection is: ");
    int i = 0, j = 0,l = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            arr3[l] = arr2[j];
            printf(" %d ", arr2[j++]);
            i++;
            l++;
        }
    }
}
      
void set_difference(int arr1[], int arr2[], int arr3[], int m, int n){

    printf("\nA-B: ");
    int l = 0;
    for(int i = 0; i < m; i++){
      if(arr1[i] == arr3[l]){
           l++;
      }
      else{
        printf("%d ",arr1[i]);
            
      }
    }
    
    printf("\nB-A: ");
    l = 0;
    for(int i = 0; i < n; i++){
      if(arr2[i] == arr3[l]){
           l++;
      }
      else{
        printf("%d ",arr2[i]);
      }
    }
}

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int arr3[10];
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printUnion(arr1, arr2, m, n);
    printIntersection(arr1, arr2, arr3, m, n);
    set_difference(arr1,arr2, arr3,m,n);
    return 0;
}
// 5
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int ft,i=0;
    fp=fopen("abc.txt","r");
    if(fp==NULL)
    {
        printf("ERROR");
        return 0;
    }
    fseek(fp,0,SEEK_END);
    ft=ftell(fp);
    while(i<ft)
    {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));
    }
    fclose(fp);
    return 0;
}
*/
// 6
/*
#include<stdio.h>

int main(){
    FILE * filepointer;
    FILE * fp;
    fp = fopen("Textright.txt", "w");
    filepointer = fopen("test.txt","r");
  
    char arr;
  
    arr = fgetc(filepointer); 
    while (arr != EOF){

        if(arr == 'a' || arr == 'e' || arr == 'i' || arr == 'o' || arr == 'u'){

            
        }
        else{
          
            fprintf (fp,"%c", arr);
        }  
        arr = fgetc(filepointer);
        }
    fclose(filepointer);

  return 0;

}
*/
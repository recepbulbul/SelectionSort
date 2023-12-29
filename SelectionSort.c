#include <stdio.h>

void listeyazdir(int liste[],int boyut){
    for (int i = 0; i < boyut; i++)
    {
        printf("%d ",liste[i]);
    }
}
void SelectionSort(int liste[],int boyut){
    int temp = 0;
    for (int i = 0; i < boyut-1; i++)
    {
        int minimum = i;
        for (int j = i+1; j < boyut; j++)
        {
            if (liste[j]<liste[minimum])
            {
                minimum = j;
            }
            
        }
        temp = liste[i];
        liste[i] = liste[minimum];
        liste[minimum] = temp;
        
    }
    

}

int main() {
   int listem[] = {22,34,56,37,67,12,51,63,52,33,88,99,10,103,154,121};
   int listesize = sizeof(listem)/sizeof(listem[0]);
   printf("                      **LIST**\n");
   listeyazdir(listem,listesize);
   printf("\n                    **NEW LIST**\n");
   SelectionSort(listem,listesize);
   listeyazdir(listem,listesize);


    return 0;
}

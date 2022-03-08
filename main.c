

#include <stdio.h>
#include <stdbool.h>


void Elemek(int meret, const int tomb[]){
    for (int i = 0; i < meret; ++i){
    if(tomb[i] < 0){
    printf("%d,",tomb[i]*-1);
    }
    else {printf("%d,",tomb[i]);}
    }
} 

int main()
{
   
    int tomb[5];
    int meret = 5;
    int szam;
    printf("Adjon meg 5 számot! \n");
    for (int i = 0; i < meret; ++i) {
        printf("%d. szám: ",i+1);
        scanf("%d\n",&szam);
        tomb[i] = szam;
    }
    
Elemek(meret, tomb);
    return 0;
}


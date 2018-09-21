#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int mark[5] = {0, 1, 2, 3, 4};
    for(i = 0; i<4; i++){
        mark[i] = mark[i] *2;
    }
    for(j = 0;j < 4; j++ ){
        printf("%d",mark[j]);
        printf("\n");
    }
    return 0;
}

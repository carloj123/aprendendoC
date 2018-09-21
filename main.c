#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE *fp;

   fp = fopen("test.txt", "r");
   char aux[80];
   fgets(aux, 80, fp);
   printf(aux)
   fclose(fp);

    return 0;
}

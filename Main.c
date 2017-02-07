#include <stdio.h>
#include <stdlib.h>
#define N 100
int main()
{
    FILE *fp;
    char str[N+1];
    if( (fp=fopen("d:\\demo.txt","rt")) == NULL )
    {
        printf("Cannot open file, press any key to exit!\n");
        getch();
        exit(1);
    }
   
    while(fgets(str, N, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    system("pause");
    return 0;
}

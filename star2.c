#include <stdio.h>

void main()
{
        int starcount = 0;
        int i = 0, j = 0;
        int blankcnt = 0, starcnt = 0;
        printf("별의 크기는 ?");
        scanf("%d", &starcount);

        blankcnt = 1;
        starcnt = 2 * starcount - 1;

        for (j = 0; j < starcount - 1; j++){
                for (i = 0; i < blankcnt; i++)
                        printf(" ");
                for (i = 0; i < starcnt ; i++)
                        printf("*");
                printf("\n");
                blankcnt ++;
                starcnt -= 2;
        }
	blankcnt = starcount;
	starcnt = 1;
        for (j = 0; j < starcount; j++){
                for (i = 0; i < blankcnt; i++)
                        printf(" ");
                for (i = 0; i < starcnt ; i++)
                        printf("*");
                printf("\n");
                blankcnt --;
                starcnt += 2;
        }
}


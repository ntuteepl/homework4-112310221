#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int num;

    scanf("%d", &num);

    int inputs[num];

    for(int i = 0; i < num ; i++){
        scanf("%d", &inputs[i]);
    }

    for(int k = 0; k < num ; k++){
        int test = inputs[k];
        bool printed = false;

        for(int j = 2; j < test ;j++ ){
            if(test % j == 0){
                printf("NO ");
                printed = true;
                break;
            }
        }

        if(!printed) printf("YES ");
    }
    return 0;
}


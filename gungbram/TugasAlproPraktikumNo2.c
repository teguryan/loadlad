#include <stdio.h>


void papancatur(int x, int y, int *papan){
    int blok[8][2] = {{1,-2},{2,-1},{2,1},{1,2}, {-1,2},{-2,1},{-2,-1},{-1,-2}};

    for(int i=0; i<8; i++){
        int save1 =x+blok[i][0];
        int save2 =y+blok[i][1];
        if(save1<8 && save1>=0){
            if(save2<8 && save2>=0){
                papan[save1*8+save2]=1;
            }
        }
    }
}




int main(){

    int x, y;
    int i, j;
    int papan[8][8];
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            papan[i][j]=0;
        }
    }
    for(int a=0;a<=8; a++){
        printf("%d ", a);
    }
    for(int b=1;b<=8;b++){
        printf("\n%d", b);
    }
    printf("\n\nmasukan koordinat y : ");
    scanf("%d", &x);
    printf("masukan koordinat x : ");
    scanf("%d", &y);

    papancatur(x, y, (int*)papan);


    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%d ", papan[i][j]);
        }
        printf("\n");
    }


    



    return 0;
}
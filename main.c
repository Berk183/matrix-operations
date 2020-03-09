#include <stdio.h>
#include <stdlib.h>
#define SIZE 101

int main()
{
    int x,column1,column2,column3,raw1,raw2,raw3,i=0,a=0,m=0;
    int number1[SIZE][SIZE]={0};
    int number2[SIZE][SIZE]={0};
    int number3[SIZE][SIZE]={0};

    printf("Please choose the calculation that you want(-1 to exit)\n1-Transpose\n2-Addition\n3-Multiplication\n");
    scanf("%d",&x);
    while(x!=-1){
    printf("-----------------------------------------------------------------------\n");
    if(x==1){
        printf("Enter 2 numbers to generate matrix limits(should be between 0-100)\n");
        scanf("%d%d",&raw1,&column1);
    if((column1>=0 && column1<=100) &&(raw1>=0 && raw1<=100)){

        srand(time(NULL));
        printf("\nOriginal generated matrix:\n");
        for(i=0;i<raw1;i++){
            for(a=0;a<column1;a++){
                number1[i][a]=rand()%100;
                printf("[%d][%d]=%d\t",i,a,number1[i][a]);
            }
            printf("\n");
        }

        printf("\nTranspose matrix:\n");
        column2=raw1;
        raw2=column1;
        for(i=0;i<SIZE;i++){
            for(a=0;a<SIZE;a++){
                number2[a][i]=number1[i][a];
            }
        }
        for(i=0;i<raw2;i++){
            for(a=0;a<column2;a++){
                printf("[%d][%d]=%d\t",i,a,number2[i][a]);
            }
            printf("\n");
        }

    }
    else{
        printf("\n ****invalid number****\n");
    }
    }
    else if(x==2){
        srand(time(NULL));
        printf("Enter 2 numbers to generate matrix limits(should be between 0-100)\n");
        scanf("%d%d",&raw1,&column1);
        if((column1>=0 && column1<=100) &&(raw1>=0 && raw1<=100)){
            printf("\nfirst generated matrix\n");
            for(i=0;i<raw1;i++){
                for(a=0;a<column1;a++){
                    number1[i][a]=rand()%100;
                    printf("[%d][%d]=%d\t",i,a,number1[i][a]);
            }
            printf("\n");
        }
            printf("\nsecond generated matrix\n");
            for(i=0;i<raw1;i++){
                for(a=0;a<column1;a++){
                    number2[i][a]=rand()%100;
                    printf("[%d][%d]=%d\t",i,a,number2[i][a]);
            }
            printf("\n");
        }
        printf("\nmatrix addition\n");
        for(i=0;i<SIZE;i++){
            for(a=0;a<SIZE;a++){
                number3[i][a]=number1[i][a]+number2[i][a];
            }
        }

        for(i=0;i<raw1;i++){
            for(a=0;a<column1;a++){
                printf("[%d][%d]=%d\t",i,a,number3[i][a]);
            }
            printf("\n");
        }
        }
        else{
        printf("\n ****invalid number****\n");
        }

    }
    else if(x==3){

        srand(time(NULL));
        printf("Enter 2 numbers to generate first matrix limits(should be between 0-100)\n");
        scanf("%d%d",&raw1,&column1);
        printf("Enter 2 numbers to generate second matrix limits(should be between 0-100)\n");
        scanf("%d%d",&raw2,&column2);
        if(((column1>=0 && column1<=100) &&(raw1>=0 && raw1<=100))&&((column2>=0 && column2<=100) &&(raw2>=0 && raw2<=100))){
           if(column1==raw2){
           printf("\nfirst generated matrix\n");
            for(i=0;i<raw1;i++){
                for(a=0;a<column1;a++){
                    number1[i][a]=rand()%100;
                    printf("[%d][%d]=%d\t",i,a,number1[i][a]);
            }
            printf("\n");
            }
            printf("\nsecond generated matrix\n");
            for(i=0;i<raw2;i++){
                for(a=0;a<column2;a++){
                    number2[i][a]=rand()%100;
                    printf("[%d][%d]=%d\t",i,a,number2[i][a]);
            }
            printf("\n");
        }

            for(i=0;i<SIZE;i++){
                for(a=0;a<SIZE;a++){
                    for(m=0;m<SIZE;m++){
                        number3[i][a]=(number1[i][m]*number2[m][a])+number3[i][a];

                        }

                    }
                }


            printf("\nmatrix multiplication\n");

            for(i=0;i<raw1;i++){
            for(a=0;a<column2;a++){
                printf("[%d][%d]=%d\t",i,a,number3[i][a]);
            }
            printf("\n");
        }


                }
        else
        printf("\nfirst and second matrix are not proper for multiplication\n");

        }

        else
            printf("\n ****invalid number****\n");

        }
        printf("-----------------------------------------------------------------------\n");
        printf("\nPlease choose the calculation that you want(-1 to exit)\n1-Transpose\n2-Addition\n3-Multiplication\n");
        scanf("%d",&x);
        }

    return 0;
}



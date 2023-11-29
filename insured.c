#include<stdio.h>
int main()
{
    int age;
    char ms,gender;
    printf("enter the age,marital status[M or UM] and gender[M or F]");
    scanf("%d %f %f",&age,&ms,&gender);
    if (ms=='M')
        printf("you should get insured");
    else{
        if(gender=='M')
        {
            if (age>30)
                printf("you should get insured");
            else
                printf("you should not get insured");
        }
        else{
            if (age>25)
                printf("you should get insured");
                else
                printf("you should not get insured");


        }

    }

}

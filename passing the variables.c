#include<stdio.h>
float calarea(float x ,float y);

int main(){
    float a,b,area;
    printf("enter any two values : ");
    scanf("%f %f",&a,&b);
    area =calarea(a,b);
    return 0;

}
float calarea(float x, float y){
    float d;
    d=(x*y)/2;
    printf("sum =%f\n",d);
    return 0;
}

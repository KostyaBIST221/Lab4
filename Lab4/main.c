#include <stdio.h>

void task1(){
    int i1;
    char c1;
    double d1;
    float f1;
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;
    scanf("%c",&c1);
    scanf("%i",&i1);
    scanf("%f",&f1);
    scanf("%e",&d1);
    printf("Char %c;\nInt %i;\nFloat %f;\nDouble %1.2e;\n",c,i,f,d);
    printf("Char %c;\nInt %i;\nFloat %f;\nDouble %1.2e;\n",c1,i1,f1,d1);
}

void task11(){
    char c;
    scanf("%c",&c);
    printf("10)%i\n8)%o\n16)%x\n",c,c,c);
}

void task1a(){
    float f,res;
    scanf("%f",&f);
    res =  - f;
    printf("%1.0f - %0.4f",f,f);
}

void task3(){
    float t,of;
    int i,i1,i2,i3;
    scanf("%f",&t);
    i = t;
    of = t-i;
    i=of*1000;
    i1 = i%10;
    i /= 10;
    i2 = i%10;
    i /= 10;
    i3 = i%10;
    printf("%i %i %i\n",i3,i2,i1);
}


int main(int argc, const char * argv[]) {
    task3();
}

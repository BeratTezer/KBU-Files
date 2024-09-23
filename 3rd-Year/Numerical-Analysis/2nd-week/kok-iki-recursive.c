#include <stdio.h>

double kokIkiRec(int itr_num) {
    if (itr_num == 1) return 1;
    double y = kokIkiRec(itr_num-1);
    return (y+(2/y))/2;
}


int main()
{
    int b = 5;
    double a = kokIkiRec(b);

    printf("[%d]:[%.15lf]", b, a);
    return 0;
}

#include <stdio.h>

double kokIkiRec(double y, double itr_num) {
    if (itr_num == 0) return y;
    y = (y+(2/y))/2;
    kokIkiRec(y, itr_num-1);
}
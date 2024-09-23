#include <stdio.h>

double kokIkiParam(double y, int itr_num) {
    double X; // Sonuç

    for (int n = 0; n < itr_num; n++)
    {
        y = (y+(2/y))/2;
    }

    return X;
    
}

int main()
{
    
    return 0;
}

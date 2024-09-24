#include <stdio.h>
#include <math.h>

double fakt (int k) {
    if (k == 0) return 1;
    else return k*fakt(k-1);
}

double taylorTheorem(int intr_num) {
    double X = 0.1, total = 0.0, turev = 1.0;

    for (int k = 0; k < intr_num; k++)
    {
        if (k%2!=0) continue;
        total += (turev*pow(X, k))/fakt(k);
        turev *= -4;
    }
    
    return total;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

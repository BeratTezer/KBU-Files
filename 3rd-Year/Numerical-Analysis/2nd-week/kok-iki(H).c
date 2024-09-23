double hesap(double y, int itr_num) {
    double X[itr_num+1];
    X[0] = y;

    for (int n = 0; n < itr_num; n++)
    {
        X[n+1] = (X[n]+(2/X[n]))/2;
    }
    return X[itr_num];    
}
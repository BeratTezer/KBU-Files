void fun (int n, int a, int b) {
    if (n >= 10) return;
    fun(n + 2, a, b + n);
    printf("%d %d %d\n", n, a, b);
}

// Write the output of this function when it used:

// n=0, a=5, c=7 => 
// 8 5 19
// 6 5 13
// 4 5 9
// 2 5 7
// 0 5 7
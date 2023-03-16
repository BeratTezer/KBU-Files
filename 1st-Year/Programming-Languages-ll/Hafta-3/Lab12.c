// What does the following  function  print  for  n  =  25?

void fun(int n) { 
    if (n == 0) return;
    fun(n/2);
    printf("%d", n%2);
}

// OUTPUT:
// 1
// 1
// 0
// 0
// 1
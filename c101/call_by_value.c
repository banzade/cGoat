# include <stdio.h>
// call by value
void therealnumber(int x) {
    x = 45;
}

int main()  {
    int z = 666;
    therealnumber(z);
    printf("the real value is %d \n", z);
    
    return 0;
}

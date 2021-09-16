# include <stdio.h>

//call by reference using pointer
void realnumber(int *x) {
    *x = 45;
}

//call by reference using array in the same program
void insertElements (int arr[], int len) {
    for ( int i = 0; i < len; i++)
    {
        arr[i] = i + 1;
    } // no return yet the array is changed   
}

int main(){
    int z = 666;
    
    realnumber(&z);
    printf("the real number is %d\n", z);

    //array part
    int values[10];

    printf("the value at location 4 starts as %d\n", values[4]);
    //call the arr func
    insertElements(values, 10);
    printf("the value at location 4 is now %d\n", values[4]);
}



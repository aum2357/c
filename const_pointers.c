#include <stdio.h>


int main(void) {

    int num = 100;
    //  pointer to an integer
    int *iptr = &num;


    /*
     * pointer to  constant integer i.e.
     * we cannot change the content by dereferencing it, but we can change the pointer to point
     * somewhere else i.e.
     *   (*iptr_const) = some_number; // invalid
     * iptr_const = &some_var // valid
     */
    const int *iptr_const = &num;


    /*
     * constant pointer to an integer
     * we can change the content by dereferencing it, but we cannot change the pointer to point
     * somewhere else i.e.
     * *ptr = some_number; //valid
     * ptr = &some_var; //invalid
     */
    int *const ptr = &num;


    /*
     * constant pointer to constant integer nothing can be modified
     *  *ptr_const = some_number; //invalid
     *  ptr_const = &some_var; //invalid
     */
    const int *const ptr_const = &num;
    return 0;
}
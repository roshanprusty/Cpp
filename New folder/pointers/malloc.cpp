#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        cout << "enter the value for array[" << i << "]" << endl;
        cin >> ptr[i];
    }
    for (int i = 0; i < 6; i++)
        cout << ptr[i] << endl;
    free(ptr);
    return 0;
}
// If the sufficient memory is not available, then the memory can be resized using realloc() function. As we know that all the dynamic memory requirements are fulfilled using heap memory, so malloc() function also allocates the memory in a heap and returns the pointer to it. The heap memory is very limited, so when our code starts execution, it marks the memory in use, and when our code completes its task, then it frees the memory by using the free() function. If the sufficient memory is not available, and our code tries to access the memory, then the malloc() function returns the NULL pointer. The memory which is allocated by the malloc() function can be deallocated by using the free() function.
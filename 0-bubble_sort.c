#include "sort.h"
/**
 * swap_ints - swaps two integers in an array
 * @a: the first integer to swap
 * @b: the second integer to swap
*/
void swap_ints(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}


/**
 * bubble_sort - sort an array integers in an ascending order
 * @array: Array of integers to sort
 * @size: The size of the array.
*/
void bubble_sort(int *array, size_t size)
{
size_t i;
size_t len = size;
bool bubble = false;

    if (array == NULL || size < 2)
            return;

    while (bubble == false)
    {
        bubble = true;
        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_ints(array + i, array + i + 1);
                print_array(array, size);
                bubble = false;
            }

        }
        len--;
    }
}

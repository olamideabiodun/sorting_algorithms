#include "sort.h"
/**
 * shell_sort - extension of inserton sort
 * @array: the array to be sorted
 * @size: the size of the array
*/
void shell_sort(int *array, size_t size)
{
    size_t i, gap;
    int temp;
    size_t j;
    gap = 1;

    while(gap < size / 3)
    {
        gap = gap * 3 + 1;

    }

    while (gap > 0)
    {
        for (i = gap; i < size; i++)
        {
            temp = array[i];
            j = i;
            while (j >= gap && array[j - gap] > temp)
            {
                array[j] = array[j - gap];
                j = j - gap;
            }
            array[j] = temp;
        }
        gap = (gap > 1) ? (size_t)((gap - 1) / 3) : 0;
        print_array(array, size);
    }
    

}

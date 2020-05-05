/*
 *
 *
 * ██╗    ██╗ ██████╗ ██╗████████╗███████╗██╗  ██╗
 * ██║    ██║██╔═══██╗██║╚══██╔══╝██╔════╝██║ ██╔╝
 * ██║ █╗ ██║██║   ██║██║   ██║   █████╗  █████╔╝
 * ██║███╗██║██║   ██║██║   ██║   ██╔══╝  ██╔═██╗
 * ╚███╔███╔╝╚██████╔╝██║   ██║   ███████╗██║  ██╗
 *  ╚══╝╚══╝  ╚═════╝ ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝
 *
 *
 *
 *  ______
 * /\  ___\
 * \ \ \____
 *  \ \_____\
 *   \/_____/
 *
 *
 *
 * This program reads a set of integer numbers from a data file, and stores
 * these values in an integer array. Then the program uses this array to
 * compute the average of the numbers in the file.
 *
 *
 */

#include <stdio.h>

#define FILE_NAME "elephant_seal_data.txt"

/*
 * This function reads the data file, and returns the number of values in the
 * file.
 */
int determine_size_nums()
{
    FILE* data_file;
    unsigned int size_nums;

    data_file = fopen(FILE_NAME, "r");
    if (data_file == NULL) {
        return -1;
    } else {
        size_nums = 0;
        /* The values in the data file are separated by tabs. */
        while (fscanf(data_file, "%*d\t") != EOF) {
            size_nums += 1;
        }
        fclose(data_file);
        return (int) size_nums;
    }
}

/*
 * This function receives the number of values in the data file and an integer
 * array. Then the function loads this array with the integer numbers in the
 * file.
 */
void load_nums(unsigned int size_nums, int nums[])
{
    FILE* data_file;
    unsigned int i;

    data_file = fopen(FILE_NAME, "r");
    for (i = 0; i < size_nums; i++) {
        /* The values in the data file are separated by tabs. */
        fscanf(data_file, "%d\t", &nums[i]);
    }
    fclose(data_file);
}

/*
 * This function receives an integer array and its size. Then the function
 * returns the average of the values in the array.
 */
double average(unsigned int size_nums, int nums[])
{
    unsigned int i;
    long int sum = 0;

    for (i = 0; i < size_nums; i++) {
        sum += (long int) nums[i];
    }
    return sum / ((double) size_nums);
}

/*
 * This function receives the number of values in the data file. Then the
 * function loads an integer array with the numbers in the file, and returns
 * the average of these numbers.
 */
double load_average(unsigned int size_nums)
{
    int nums[size_nums];

    load_nums(size_nums, nums);
    return average(size_nums, nums);
}

int main()
{
    double avg;
    unsigned int size_nums;
    int temp;

    /* Determines the number of values in the data file. */
    temp = determine_size_nums();
    if (temp == -1) {
        printf("\nThe file %s doesn't exist!\n\n", FILE_NAME);
        return -1;
    } else if (temp == 0) {
        printf("\nThere are no values in the file %s!\n\n", FILE_NAME);
        return -1;
    } else {
        size_nums = (unsigned int) temp;
        printf("\nNumber of values in the file %s: %u\n", FILE_NAME, size_nums);
    }
    /* Loads the values in the data file into an array, and computes the
       average of these numbers. */
    avg = load_average(size_nums);
    printf("\nAverage of these values: %.5lf\n\n", avg);
    return 0;
}

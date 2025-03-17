int *ft_rrange(int start, int end)
{
    int i = 0;
    // Defining the length of the range
    // Since we don't have access to the abse function, we have
    // to make a manual absolute value
    int len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
    // Allocating the range needed
    int *range = (int *) malloc(len * sizeof(int));
    
    // Fill in the range
    while (i < len)
    {
        // Next lines are for numbers going up
        if (end < start)
            range[i] = end++;
        // Next lines are for numbers going down
        else
            range[i] = end--;
        i++;
    }
    // Returning the filled range
    return (range);
}

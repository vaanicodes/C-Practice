int FindUnique(int * arr, int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int i,j;

    for (i=0; i< size; i++){
        for( j=0; j< size; j++){
            if (arr[j]==arr[i] && j!=i)
                break;
        }
        if (j==size)
            return arr[i];

    }
}


void swapAlternate(int *arr, int size)
{
    int i;
      for (i = 0; i < size; i += 2)
    {
       
        if (i + 1 == size)
        {
            break;
        }

       int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

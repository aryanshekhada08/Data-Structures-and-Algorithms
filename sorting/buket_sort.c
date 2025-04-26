void buket_sort(int a[], int n)
{
    int buket[100] = {0};
    for (int i = 0; i < n; i++)
    {
        buket[a[i]]++;
    }
    int index = 0;
    for (int i = 0; i < 100; i++)
    {
        while (buket[i] > 0)
        {
            a[index++] = i;
            buket[i]--;
        }
    }
}
void print_array(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void main()
{
    int a[] = {10, 27, 3, 84, 65, 6, 87, 8, 999};
    int n = sizeof(a) / sizeof(a[0]);
    print_array(n, a);
    buket_sort(a, n);
    print_array(n, a);
}
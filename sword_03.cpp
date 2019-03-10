class Solution {
public:
    // Parameters:
    //        a:     an array of integers
    //        n:      the length of array numbers
    //        repeat: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int a[], int n, int *repeat)
    {
	    // Restriction
	    if (a == nullptr || n <= 0)
		    return false;

	    for (int i = 0; i < n; ++i)
	    {
		    if (a[i] < 0 || a[i] > n - 1)
			    return false;
	    }

	    for (int i = 0; i < n; ++i)
	    {
		    while (a[i] != i)
		    {
			    if (a[i] == a[a[i]])
			    {
				    *repeat = a[i];
				    return true;
			    }
			    else
			    {
				    int temp = a[i];
				    a[i] = a[temp];
				    a[temp] = temp;
			    }
		    }
	    }
	    return false;
    }
};
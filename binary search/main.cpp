
 #include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    long long n ,k,x;
    long long mid =0;
   scanf("%lld%lld",&n,&k);
     long long  arr[n];
    for (int i=0;i<n;i++)
    {
    scanf( "%lld",&arr [i]);
    }
    long long l =0;
    long long h =n-1;
    for (int j=0;j<k;j++)
    {
       scanf( "%lld",& x);
        if (x >arr[n-1]||x<arr[0])
        {
            printf("%d\n",-1);

        }
        else {
      for (int y=0;y<300;y++)

        {
             mid = l + ((h-l)/2);
            if (arr[mid]==x)
             {
              break;
             }
        if (arr [mid]>x)
        {
            h=mid-1;
        }
        else if (arr [mid]<x)
         {
            l=mid+1 ;
         }

        }
        if (arr[mid]==x)
      printf("%lld\n",mid);

        else
        printf("%d\n",-1);
        }
        l=0;
        h=n-1;
    }
           return 0;
}

/*

 #include <iostream>
 #include <stdio.h>
 #define ARRAY_SIZE(array) (sizeof((array))/sizeof((array[0])))
 using namespace std;

 int binarySearch (int * array, int left, int right, int key) {
	if (left > right)
                return -1;
 	int mid = (left + right) / 2;
 	if (array[mid] == key) {
 		if (mid == 0 || array[mid - 1] != key)
 			return mid;
 		return binarySearch (array, left, mid - 1, key);
 	}
 	if (array[mid] > key)
 	 		return binarySearch(array, left, mid - 1, key);
   return binarySearch(array, mid + 1, right, key);
 }


 int main () {
 	int n, q, k;
 	int array[100000];
 	scanf ("%d %d", &n, &q);
 	for (int i = 0; i < n; i++)
 		scanf ("%d", &array[i]);
 	for (int z = 0; z < q; z++) {
 		scanf ("%d", &k);
 		printf ("%d\n", binarySearch(array, 0, n-1, k));
 	}
 }

*/

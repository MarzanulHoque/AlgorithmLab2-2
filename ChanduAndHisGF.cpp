#include<bits/stdc++.h>
using namespace std;

void merge(int A[ ] , int start, int mid, int End) {

int p = start ,q = mid+1;

int Arr[End-start+1] , k=0;

for(int i = start ;i <= End ;i++) {
    if(p > mid)
       Arr[ k++ ] = A[ q++] ;

   else if ( q > End)
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] > A[ q ])
      Arr[ k++ ] = A[ p++ ];

   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
     A[ start++ ] = Arr[ p ] ;
  }
}
void merge_sort (int A[ ] , int start , int End )
   {
           if( start < End ) {
           int mid = (start + End ) / 2 ;           //
           merge_sort (A, start , mid ) ;
           merge_sort (A,mid+1 , End ) ;

          merge(A,start , mid , End );
   }
}
 void printArray(int A[], int Size)
{
    int i;
    for (i=0; i < Size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

 int main()
 {
     int i,j,t,n;
    cin>>t;
    for(i=0;i<t;i++){
    cin>>n;
    int arr[n];

    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr, 0, arr_size - 1);

    printArray(arr, arr_size);


    }
     return 0;
}

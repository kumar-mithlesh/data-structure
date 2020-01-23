#include<iostream>
using namespace std;

void arraySort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] < a[min])
            min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main() {
   int arr[20],i,pos,n,insert,cont=0;
   cout<<"enter the size of array:"<<endl;
   cin>>n;
   cout<<"enter the elements in array:"<<endl;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"\n entered array is \n"<<endl;
   for (i = 0; i < n; i++)
   cout<< arr[i] <<" ";
   cout<<endl;
   arraySort(arr, n);
   cout<<("\n Sorted array is: \n");
   for (i = 0; i < n; i++)
   cout<< arr[i] <<" ";
   cout<<" \n Enter element to be insert : \n ";
	cin>>insert;

	for(i=0;i<=n;i++)
    {
        if(insert==arr[i])
           {
               cout<<"\n\nelement is already present,try again\n "<<endl;
               cont++;
           }
    }
     if(cont==0)
	{cout<<"\n\nAt which position (Enter index number) ?\n ";
	cin>>pos;
	for(i=n; i>pos; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=insert;
	cout<<"\n Element inserted successfully \n\n";
	cout<<"\n \nNow the new array is : \n";
	for(i=0; i<n+1; i++)
	{
		cout<<arr[i]<<" ";
	}
   arraySort(arr, n);
   cout<<("\n\n Sorted array is: \n");
   for (i = 0; i <=n; i++)
   cout<< arr[i] <<" ";
	}
   return 0;
}

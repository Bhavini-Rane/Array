#include<iostream>
using namespace std;
const int N = 100;

class Array
{
	private:
		int arr[N];	
		int size;
	
	// Array read and show
	public:
		Array(int s)
		{
			size = s;
		}
		
		void read()
		{
			cout<<"Enter array "<<endl;
			for(int i = 0;i<size;i++)
			{
				cin>>arr[i];	
			}	
		}
		
		void show()
		{
			cout<<"Array  is"<<endl;
			for(int i = 0;i<size;i++)
			{
				cout<<arr[i]<<"   ";	
			}
			cout<<endl;
		}
		

		void sum()
		{
			int sum=0;
			for(int i=0;i<size;i++)
			{
				sum=sum+arr[i];
			}
			cout<<"Sum = "<<sum<<endl;
		}
		
		// find the occurance of the number
		void occurance(int n)  //n = 10      arr:10 100 40 30 50 
		{
			int count = 0;
			for(int i = 0; i<size; i++)
			{
				if(arr[i] == n)
				{
					count++;
				}
			}
			
			cout<<"occurance is "<<count<<endl;
		}
        
		// linear search
		int  lsearch(int m)
		{
			for(int i=0; i<size; i++)
			{
				if(arr[i]== m)
				{
					return i ;    // Return index if found
				}
			}
			return -1;	 // Return -1 if not found
		}
        

		// largest number
		void largest()   // 10 20 33 30 25
		{
			int largest = arr[0];
			for(int i=1;i<size;i++)
			{
				if(arr[i]>largest)
				{
					largest = arr[i];
				}
			}
			cout<<"Largest = "<<largest<<endl;
		}
		

		// Reverse the Array
		void reverse()
		{
			int i;
			int temp;
			int j = size - 1;
			for(i=0; i<=j; i++ ,j--)
			{
				temp = arr[i];
				arr[i]= arr[j];
				arr[j] = temp;
			}
			cout<<"Reverse Array"<<endl;
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<"   ";
			}
			cout<<endl;
		}
};
int main()
{
	int s;
	cout<<"Enter size "<<endl;
	cin>>s;
	
	Array a(s);
	a.read();
	a.show();
	
	int n;
	cout<<"Enter any number to search "<<endl;
	cin>>n; 
	
	a.occurance(n);
	
	a.sum();
	
	a.largest();
	
	a.reverse();
	
	int m;
	cout<<"Enter the key"<<endl;
	cin>>m;
	
	int result = a.lsearch(m);
    if(result != -1)
	{
	    cout<<"Key found at index : "<<result<<endl;	
	}
	else
	{
        cout<<"key not found"<<endl;	
	} 
	return 0;	
}

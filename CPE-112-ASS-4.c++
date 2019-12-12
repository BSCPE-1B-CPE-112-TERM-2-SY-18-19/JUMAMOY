#include <iostream>


using namespace std;
	class davee{ 
		public:
			long wasteful_number(long num); 
			long binary(long x);
			void exam(long num[1000],long size);
			void sorting_ascending(long num[1000],long size);
			
			long num[100]; 
			long factor,digit,temp1,j,n,x,t,rem;
			long bin, pdtemp, rem2, base, i, size, num2;
};
int main() 
	{
		long i,inp[1000],size; 
		davee shiela; 
		cout<<"Inputs: ";  
		size=0; 
		
		for(i=0;;i++){ 
			cin>>inp[i];
			if(inp[i]==0){
				break; 
			}
			size++; 
		}
	cout<< "Size: "<<size<<endl;
	shiela.exam(inp,size);
	
	cout<<"Binary: ";
	for (i=0; i<size; i++)
		{
			shiela.binary(inp[i]);
			
		}					
	}						
	
long davee::wasteful_number(long num2) {	
	n=num2;
	x=n;
	digit=0;
	for (;n!=0;)
		{
		n=n/10;
		digit++;
		}
	t=0;
	j=2;
	factor=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem=j;
			t++;
			factor++;
			if (x==1)
				{
				break;
				}
			}
		else
			{
			j++;
			}
		}
	if(factor>digit){	
			return 1; 
		}else{
			return 0; 
		}
	}
void davee::exam(long num[1000],long size){
		davee shiela;
		if(shiela.wasteful_number(size)==1){
			cout<<" Wasteful Number"<<endl;
			cout<<"Sorted: ";
			shiela.sorting_ascending(num,size);
			cout<<endl;
		}
		else
		{
			cout<<" Not Wasteful Number "<<endl;
			cout<<"Not Sorted: ";
			for(i=0;i<size;i++)
				{
					cout<<" "<<num[i];
				}
				cout<<endl;
		}
}

void davee::sorting_ascending(long num[1000],long size){
		long temp1;
		for(i=0;i<size;i++){
		
		for(j=i+1;j<size;j++){
			if(num[i]<num[j]){
				temp1=num[i];
				num[i]=num[j];
				num[j]=temp1;
			}
		}		
	cout<<" "<<num[i];
	}
}
		
long davee::binary(long x){

	pdtemp = x;
	bin=0;
	base = 1;
	cout<<endl;
				
	for (;pdtemp>0;){
		rem2=pdtemp%2;
		bin=bin+rem2*base;
		base = base*10;
		pdtemp=pdtemp/2;
		}
	cout<<bin;
	}

		


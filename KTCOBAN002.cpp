#include<bits/stdc++.h>
using namespace std; 

void Tao_So_Tu_Chuoi(int size, long long &number, char arr[])
{
    int i = 0;
    while(i<size)
    {
        int temp = arr[size-i-1] -'0';
        number += pow(10,i) * temp;
        i++;
    }
}

void ktao_sodau(char m[],int k){
	m[0]='1';
	for(int i=1;i<k-1;i++){
		m[i]='0'; 
	} 
} 
void ktao_socuoi(char m[],int k){
	for(int i=0;i<k-1;i++){
		m[i]='9'; 
	} 
} 

void kiemtra_cp(int a[]){
	for(int i=0;i<=9;i++){
		int h=sqrt(i);
		if(h*h!=i){
			a[i]=1; 
		} 
	} 
} 

int main(){
	int t;
	cin >> t;
	while(t--){ 
		int k;
        long long b=0, c=0;
		cin>>k; 
	    char s[k+1]; 
	    ktao_sodau(s,k+1); 
	 	Tao_So_Tu_Chuoi(k,b,s);
	 	ktao_socuoi(s,k+1);
		Tao_So_Tu_Chuoi(k,c,s);

        if(k % 2 == 0)
        {
            int d1=sqrt(b)+0.5,d2=sqrt(c); 
            if(d1*d1!=b){
                d1++; 
            } 
            if(d2*d2!=c){
                d2--;
            }
            int a[10];
            kiemtra_cp(a);
            int u=1; 
            for(int z=d1;z<=d2;z++)
            {
                int check=1;
                long long p = 1ll*z*z;
                long long g = 1ll*z*z;
                while(g!=0)
                {
                    int h= g % 10;
                    if(a[h]==1)
                    {
                        check=0;
                        if(z==d2)
                        {
                            u=0;
                        }
                        break; 
                    } 
                    g/=10; 
                } 
                if(check == 1)
                {
                    cout<<p<<endl;
                    break; 
                }
            } 
            if(u==0)
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout << b << endl;
        }
		memset(s,'\0',sizeof(s));
	} 
}
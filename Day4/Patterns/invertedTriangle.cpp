#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    for(i=1;i<=n;i++)
    {   
        for(int k=0;k<i-1;k++)
        {
            cout << " ";
        }

    	for(j=1;j<=n-i+1;j++)
    	{
    		cout << i;
    	}
        cout << endl;
    }
    return 0;
}
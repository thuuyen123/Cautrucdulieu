#include <iostream>
#include <cstring>

using namespace std;
int n, k, dem=0;
char B[100], kq[1000][100];
void inkq()
{
    cout<<dem<<endl;
    for (int i = 1; i <= dem; i++)
       	cout<<kq[i]+1<<endl;
}
void update()
{
    dem++;
    for (int i = 1; i <= n; i++)
        kq[dem][i] = B[i];
}
bool check()
{
	int t=0, d = 0;
	for(int i=1; i<=n; i++)
		if(B[i] == 'A')
		{
			t++;
            if (t == k)
                d++;
            if (t > k)
                return false;
		} else
            t = 0;
	if(d==1)
        return true;
	return false;
}
void Try( int i )
{
	for(char j='A'; j<='B'; j++ )
	{
		B[i] = j;
		if(i==n)
		{
			if(check())
				update();
		}
		else Try(i+1);
	}
}
int main()
{
    memset(kq, 0, sizeof(kq));
	cin>>n>>k;
	Try(1);
	inkq();
	return 0;
}

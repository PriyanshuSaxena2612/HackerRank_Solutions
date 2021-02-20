#include<iostream>
using std::cin;
using std::cout;
using std::endl;
void update(int *a,int *b) {
    int x, y;
    if(*a>*b)
    {
        x = *a - *b;
    }
    else {
        x = *b - *a;
    }
    
    y = *a+ *b; 
    *a = y;
    *b = x;   
}
int main()
{
	int a, b;
	int *pa = &a, *pb = &b;
	cin>>a>>b;
	update(pa, pb);
	cout<<a<<endl<<b;
	return 0;
}


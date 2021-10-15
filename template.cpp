// Program to implement template in cpp.

#include<iostream>

using namespace std;

template<class test>

void largest_num(test t1, test t2)
{
  if(t1>t2)
  {
      cout<<t1<<" is largest"<<endl;
  }
  else
  {
      cout<<t2<<" is largest"<<endl;
  }
};

int main()
{
    int a, b;
    double m, n;
    char p, q;

    cout<<"\nEnter two integer values :\n";
    cin>>a>>b;

    largest_num(a,b);

    cout<<"\nEnter two floating point values :\n";
    cin>>m>>n;

    largest_num(m,n);

    cout<<"\nEnter two character values :\n";
    cin>>p>>q;

    largest_num(p,q);

    return 0;

}

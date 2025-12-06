#include <iostream>
using namespace std;
int main()
{
    int totalorders;
    cout<<"how many print order do you want to enter?";
    cin>>totalorder;
    const int priceperphoto=30;
    double totalrevenue=0;
    for(int i=1;<=totalorder;i++)
    {
            cout<<"\nEnter number of photos for order"<<i<<";";
            cin>>photos;
            double bill =photos*priceperphoto;
            if(photos>75)
            {
                         double discout =bills*0.15;
                         bill-=discoubt;
                         cout<<"A15% discountapplied!(Amount discounted:"<<discount<<")\n;
                         }
                         cout <<"Bill for order "<<i<<":"<< bill << "PKR\n;
                         totalrevenue+=bill;
                         }
                         cout<<
                         "\n--------------------------\n";
                         cout <<"total revenue from all orders:"<<totalRevenue <<"PKR\n";
                         cout<<
                         "------------------------------\n";
                         return 0;
                         }

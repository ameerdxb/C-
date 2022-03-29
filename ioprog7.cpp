 //fill()
 #include<iostream>
 #include<cmath>
 using namespace std;

 int main()
 {
     char items[4][8]={"Rin","Lux","Nirma","Ariel"};
     float cost[4]={12.50,15.00,13.50,25.50};
     system("cls");
     cout << "Item\tPrice\n";

     for(int i=0;i<4;i++)
     {
         cout.fill(' ');
         cout.width(5);
         cout.setf(ios::left,ios::adjustfield);
         cout << items[i];
         cout.setf(ios::right,ios::adjustfield);
         cout.setf(ios::showpoint);
         cout.setf(ios::showpoint);
         cout.precision(2);
         cout.fill('-');
         cout.width(10);
         cout << cost[i];
         cout << "\n";
     }
     return 0;
 }

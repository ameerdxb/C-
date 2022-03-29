#include<iostream>
#include<iomanip>
using namespace std;

ostream &currency(ostream &output)
{
	output<<"Rs";
	return output;
}

ostream &frmt(ostream &output)
{
	output.setf(ios::showpos);
	output.setf(ios::showpoint);
	output.precision(2);
	output.fill('*');
	output<<setw(10);
	return output;
}

int main()
{
	system("cls");
	cout<<currency<<frmt<<345.57456;
	cout<<endl<<"$"<<frmt<<23.4356;

	return 0;
}

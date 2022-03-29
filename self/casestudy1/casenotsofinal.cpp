// accepting a file input and displaying it
// word by word

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

/*void histoprint(int values[], int sz)
{
 for(int i = 0; i < sz; i++) {
   for(int k = 0; k < values[i]; k++)
    cout << "x";
    cout << endl;
 }
}*/

int main()
{
    ifstream infile;
    int wcount=1,scount=0,i,j;
    char ch;
    int slen[200];
    //opening a file
    infile.open("fruits.txt");

    if(infile.fail())
    {
        //prompt the user for incorrect file
        cout<<"Your file does not exist.";
    }
    else
    {
        while(!infile.eof())
        {

            infile.get(ch);
            if(ch==' ')         //separate words
            {
                ++wcount;       //count words separated by space
            }
            else if(ch=='\n')
            {
                wcount=1;       //reset word counter when going to new line
            }
            if(ch=='.')
            {

                slen[scount] = wcount;  //wcount stored in slen
                ++scount;               //increment sentence counter
                wcount = 0;             //reset wcount
            }

        }
        //printing histogram
        cout<<"Printing Histogram..\n";
                for(i=0;i<scount;i++)
                {
                        cout<<"\n"<<i+1<<"\t";
                        for(j=0;j<slen[i];j++)
                        {
                                cout<<"# ";
                        }
                }

    }

    infile.close();

    return 0;
}

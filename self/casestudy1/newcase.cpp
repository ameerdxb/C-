// accepting a file input and displaying it
// as a histogram based on word count

#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;    //object of ifstream class
    int wcount=1,scount=0,i,j;
    char ch;
    int slen[200];
    //opening a file
    cout<<"Enter the input file name: ";
    string infilename;
    getline(cin,infilename);
    infile.open(infilename.c_str());

    if(infile.fail())
    {
        //prompt the user for incorrect file
        cout<<"Your file does not exist!";
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
        cout<<"\nGenerting Histogram.....\n";
                for(i=0;i<scount;i++)
                {
                        cout<<"\n"<<i+1<<"\t";
                        for(j=0;j<slen[i];j++)
                        {
                                cout<<"x ";
                        }
                }

    }

    //closing the file
    infile.close();

    return 0;
}

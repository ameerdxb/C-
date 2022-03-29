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
    //string s;
    int slen[200];
    //slen= s.size();;
    //int length=0;
    infile.open("fruits.txt");

    if(infile.fail())
    {
        cout<<"Your file does not exist.";
    }
    else
    {
        while(!infile.eof())
        {

            infile.get(ch);
            if(ch==' ')
            {
                ++wcount;
            }
            else if(ch=='\n')
            {
                wcount=1;
            }
            if(ch=='.')
            {

                slen[scount] = wcount;
                ++scount;
                wcount = 0;
            }

        }
        //cout<<s<<endl;
        cout<<"\n\nSentence\tWords";
                for(i=0;i<scount;i++)
                {
                        cout<<"\n"<<i+1<<"\t";
                        for(j=0;j<slen[i];j++)
                        {
                                cout<<"x ";
                        }
                }

    }
  //  histoprint(slen[],15)

    infile.close();

    return 0;
}

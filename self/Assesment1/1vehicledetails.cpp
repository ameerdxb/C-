#include<iostream>
#include<cstring>
using namespace std;

class vehicle
{
    public:
            //data members
            int vid;
            char vtype[30];
            char fuel[30];
            float dist;

            //member functions
            vehicle()
            {
                strcpy(fuel,"Petrol");
            }

            vehicle(int vid,char *vtype, char *fuel, float dist)
            {
                this->vid=vid;
                strcpy(this->vtype,vtype);
                strcpy(this->fuel,fuel);
                this->dist=dist;

            }
            void addVehicle();
            void showVehicle();

};



void vehicle::addVehicle()
{
    cout<<"Enter vehicle id: ";
    cin>>vid;
    cout<<"Enter vehicle type: ";
    cin>>vtype;
    cout<<"Enter fuel: ";
    cin>>fuel;
    cout<<"Enter the distance traveled : ";
    cin>>dist;
}


void vehicle::showVehicle()
{
    cout<<"Vehicle id: "<<vid<<endl;
    cout<<"Vehicle type: "<<vtype<<endl;
    cout<<"Fuel is: "<<fuel<<endl;
    cout<<"Distance travelled: "<<dist<<endl;

}

int main()
{
    vehicle v[20];
    int ch, id, n, pos;
    char reply;
    menu:
    system("cls");
    cout<<"    MENU"<<endl;
    cout<<"===============\n"<<endl;
    cout<<"1.Add vehicle \n2.Find vehicle \n3.Modify vehicle \n"<<endl;
    cout<<"Choose an option: "<<endl;
    cin>>ch;
    do
    {
        switch(ch)
        {
            case 1 : cout<<"Number of vehicles to be added: ";
                     cin>>n;
                     for(int i=0;i<n;i++)
                     {
                        v[i].addVehicle();
                        v[i].showVehicle();
                     }
                     break;

            case 2 : cout<<"\nEnter the vehicle id to be searched: ";
                     cin>>id;
                     for(int i=0;i<n;i++)
                     {
                        if(v[i].vid==id)
                            {
                                cout<<"Vehicle found!";
                            }
                            else
                                cout<<"Vehicle not found!";
                     }

                     break;


            case 3 : cout<<"\nEnter the position of the vehicle to be updated: ";
                     cin>>pos;
                     if(pos<0 || pos>n)
                        {
                        cout<<"Invalid position! Please enter position between 1 to "<<n;
                        }
                    else
                    {
                        for(int i=0;i<n;i++)
                        {
                            if(i==pos)
                            {
                                cout<<"Enter vehicle id: ";
                                cin>>v[i].vid;
                                cout<<"Enter vehicle type: ";
                                cin>>v[i].vtype;
                                cout<<"Enter fuel: ";
                                cin>>v[i].fuel;
                                cout<<"Enter the distance travelled: ";
                                cin>>v[i].dist;
                            }
                        }
                    }
                    for(int i=0;i<n;i++)
                     {
                        v[i].showVehicle();
                     }
                     break;

            default: break;

        }
    cout<<"\nDo you wish to continue?(y/n)";
    cin>>reply;

    if(reply=='y' || reply=='Y')
    {
       goto menu ;
     }
    else
     {
        break;
    }

    }while(reply=='y' || reply=='Y');

    return 0;
}

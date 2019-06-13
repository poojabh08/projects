#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>
#include<cstdlib>
using namespace std;
int i,j;
class user
{
    protected:
        int id;
    public:
            virtual void read()
            {
                cout<<"Enter your ID :\t";
                cin>>id;
            }
};
class timetable;
class student:public user
{
    protected:
        int sem;
         string arr[6][10];
    public: void read()
             {
                 cout<<"Enter your semester :\t";
                 cin>>sem;
                 if(sem!=2&&sem!=4&&sem!=6&&sem!=8)
                 {
                     cout<<"\nyou are in even semester;Enter semester 2/4/6/8:";
                     cin>>sem;
                 }
             }
             friend class timetable1;
};
void printline(int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"_";
    }
}
class timetable
{
    char day[10];
    char time[10];
    char sub[10];
    public:void read()
            {
                cout<<"enter day:";
                cin>>day;
                cout<<"enter time:";
                cin>>time;
                cout<<"enter subject:";
                cin>>sub;
            }
            friend class timetable1;
            void display()
            {
                cout<<setw(10)<<sub<<"\t";
            }
};
class timetable1
{
    char day[10];
    char time[10];
    char sub[10];
    string arr[6][10];
    public: fstream file;
            void read()
            {
                cout<<"enter day,time,sub:\n";
                cin>>day>>time>>sub;
                   for(i=0;i<6;i++)
                    {
                        for(j=0;j<10;j++)
                        {
                             arr[i][j]=="  ---  ";
                        }
                    }
            }
            void display()
             {
                 for(i=0;i<6;i++)
                 {
                        for(j=0;j<10;j++)
                        {
                             cout<<arr[i][j]<<"\t";
                        }
                        cout<<"\n";
                }
             }
             void time1(int ch2,student& stu)
             {
                 timetable arr[6][10];
                 string x1="monday",x2="tuesday",x3="wednesday",x4="thursday",x5="friday",x6="saturday",x7="sunday";
                 string y1="8:00-9:00",y2="9:00-10:00",y3="10:00-10:30",y4="10:30-11:30",y5="11:30-12:30",y6="12:30-2:00",y7="2:00-3:00",y8="3:00-4:00",y9="4:00-5:00";
                 switch(stu.sem)
                 {
                     if(stu.sem==2||stu.sem==4||stu.sem==6||stu.sem==8)
                    {
                        case 2:{
                             switch(ch2)
                             {
                                case 1:{
                                            timetable t[6][10];
                                            ifstream fi;
                                            fi.open("two.dat",ios::in);
                                            printline(160);
                                            cout<<"\n";
                                            cout<<"   DAY\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                            for(int i=0;i<6;i++)
                                            {
                                                    for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&t[i][j],sizeof(t[i][j]));

                                                    t[i][j].display();
                                                    cout<<"|";
                                                }
                                                        cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                            }
                                                    fi.close();
                                        break;}
                                case 2:{ string sday;
                                         cout<<"enter the day to display:\n";
                                         cin>>sday;
                                         ifstream fi;
                                            fi.open("two.dat",ios::in);
                                            printline(160);
                                            cout<<"\n";
                                            cout<<"   DAY\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                             for(int i=0;i<6;i++)
                                            {
                                                    for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                        if(sday==x1)
                                        {
                                            int i=0;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                       else if(sday==x2)
                                        {
                                            int i=1;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x3)
                                        {
                                            int i=2;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x4)
                                        {
                                            int i=3;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x5)
                                        {
                                            int i=4;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                           }
                                                 cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if((sday==x6))
                                        {
                                            int i=5;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";

                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x7)
                                        {
                                            cout<<"Sunday is a holiday\n";
                                        }
                                        else
                                            {
                                                cout<<"invalid day\n";
                                            }
                                        fi.close();
                                        break;
                                }
                                case 3: {
                                            string time;
                                            cout<<"enter time in format hh:mm-hh:mm\n";
                                            cin>>time;
                                            ifstream fi;
                                            fi.open("two.dat",ios::in);
                                            printline(96);
                                            cout<<"\n";
                                            cout<<"MONDAY\t"<<"\t|"<<"TUESDAY\t|"<<"WEDNESDAY\t|"<<setw(10)<<"THURSDAY\t|"<<setw(10)<<"FRIDAY\t|"<<setw(10)<<"SATURDAY\t|"<<endl;
                                            printline(96);
                                            cout<<"\n";
                                             for(i=0;i<6;i++)
                                            {
                                                    for(j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                            if(time==y1)
                                            {
                                                j=1;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                    arr[i][j].display();
                                                     cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y2)
                                            {
                                                j=2;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y3)
                                            {
                                                j=3;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y4)
                                            {
                                            j=4;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y5)
                                        {

                                            for(i=0;i<6;i++)
                                            {
                                               j=5;
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y6)
                                        {
                                            j=6;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y7)
                                        {
                                            j=7;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y8)
                                        {
                                            j=8;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y9)
                                        {
                                            j=9;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else
                                            cout<<"invalid time\n";
                                        break;
                                        fi.close();
                                }
                            }
                            break;
                           }
                           break;

                    case 4:{
                             switch(ch2)
                             {
                                 case 1:{
                                    timetable t[6][10];
                                            ifstream fi;
                                            fi.open("four.dat",ios::in);
                                                printline(160);
                                            cout<<"\n";
                                            cout<<"   DATE\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                            for(int i=0;i<6;i++)
                                            {
                                                    for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&t[i][j],sizeof(t[i][j]));

                                                    t[i][j].display();
                                                    cout<<"|";
                                                }
                                                        cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                            }
                                                    fi.close();
                                        break;}
                                case 2:{ string sday;
                                         cout<<"enter the day to display:\n";
                                         cin>>sday;
                                           ifstream fi;
                                            fi.open("four.dat",ios::in);
                                             printline(160);
                                            cout<<"\n";
                                            cout<<"   DAY\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                             for(int i=0;i<6;i++)
                                            {
                                                    for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                        if(sday==x1)
                                        {
                                            int i=0;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                       else if(sday==x2)
                                        {
                                            int i=1;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x3)
                                        {
                                            int i=2;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x4)
                                        {
                                            int i=3;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x5)
                                        {
                                            int i=4;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if((sday==x6))
                                        {
                                            int i=5;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x7)
                                        {
                                            cout<<"Sunday is a holiday\n";
                                        }
                                        else
                                            {
                                                cout<<"invalid day\n";
                                            }
                                        fi.close();
                                        break;
                                }
                                case 3: {
                                            string time;
                                            cout<<"enter time in format hh:mm-hh:mm\n";
                                            cin>>time;
                                            ifstream fi;
                                            fi.open("four.dat",ios::in);
                                             printline(96);
                                            cout<<"\n";
                                            cout<<"MONDAY\t"<<"\t|"<<"TUESDAY\t|"<<"WEDNESDAY\t|"<<setw(10)<<"THURSDAY\t|"<<setw(10)<<"FRIDAY\t|"<<setw(10)<<"SATURDAY\t|"<<endl;
                                            printline(96);
                                            cout<<"\n";
                                             for(i=0;i<6;i++)
                                            {
                                                    for(j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                            if(time==y1)
                                            {
                                                j=1;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                    arr[i][j].display();
                                                     cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y2)
                                            {
                                                j=2;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y3)
                                            {
                                                j=3;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y4)
                                            {
                                            j=4;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y5)
                                        {

                                            for(i=0;i<6;i++)
                                            {
                                               j=5;
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y6)
                                        {
                                            j=6;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y7)
                                        {
                                            j=7;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y8)
                                        {
                                            j=8;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y9)
                                        {
                                            j=9;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else
                                            cout<<"invalid time\n";
                                        break;
                                        fi.close();
                                }
                            }
                            break;
                           }

                            break;
                    case 6:{
                            switch(ch2)
                             {
                                 case 1:{
                                    timetable t[6][10];
                                            ifstream fi;
                                            fi.open("six.dat",ios::in);
                                                printline(160);
                                            cout<<"\n";
                                            cout<<"   DAY\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                            for(int i=0;i<6;i++)
                                            {
                                                    for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&t[i][j],sizeof(t[i][j]));

                                                    t[i][j].display();
                                                    cout<<"|";
                                                }
                                                        cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                            }
                                                    fi.close();
                                        break;}
                                case 2:{ string sday;
                                         cout<<"enter the day to display:\n";
                                         cin>>sday;
                                         ifstream fi;
                                            fi.open("six.dat",ios::in);
                                             printline(160);
                                            cout<<"\n";
                                            cout<<"   DAY\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                             for(int i=0;i<6;i++)
                                            {
                                                for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                        if(sday==x1)
                                        {
                                            int i=0;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                       else if(sday==x2)
                                        {
                                            int i=1;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x3)
                                        {
                                            int i=2;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x4)
                                        {
                                            int i=3;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x5)
                                        {
                                            int i=4;
                                            {
                                            for(j=0;j<10;j++)

                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if((sday==x6))
                                        {
                                            int i=5;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x7)
                                        {
                                            cout<<"Sunday is a holiday\n";
                                        }
                                        else
                                            {
                                                cout<<"invalid day\n ";
                                            }
                                        fi.close();
                                        break;
                                }
                                case 3: {
                                            string time;
                                            cout<<"enter time in format hh:mm-hh:mm\n";
                                            cin>>time;
                                            ifstream fi;
                                            fi.open("six.dat",ios::in);
                                             printline(96);
                                            cout<<"\n";
                                            cout<<"MONDAY\t"<<"\t|"<<"TUESDAY\t|"<<"WEDNESDAY\t|"<<setw(10)<<"THURSDAY\t|"<<setw(10)<<"FRIDAY\t|"<<setw(10)<<"SATURDAY\t|"<<endl;
                                            printline(96);
                                            cout<<"\n";
                                             for(i=0;i<6;i++)
                                            {
                                                for(j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                            if(time==y1)
                                            {
                                                j=1;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                    arr[i][j].display();
                                                     cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y2)
                                            {
                                                j=2;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y3)
                                            {
                                                j=3;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                            }
                                            else if(time==y4)
                                            {
                                            j=4;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y5)
                                        {
                                            for(i=0;i<6;i++)
                                            {
                                               j=5;
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y6)
                                        {
                                            j=6;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y7)
                                        {
                                            j=7;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y8)
                                        {
                                            j=8;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else if(time==y9)
                                        {
                                            j=9;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(96);
                                                    cout<<"\n";
                                        }
                                        else
                                            cout<<"invalid time\n";
                                        break;
                                        fi.close();
                                }
                            }
                            break;
                        }
                        break;
                      case 8:{

                                switch(ch2)
                                {
                                 case 1:{
                                    timetable t[6][10];
                                            ifstream fi;
                                            fi.open("Eight.dat",ios::in);
                                                printline(160);
                                            cout<<"\n";
                                            cout<<"   DAY\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                            for(int i=0;i<6;i++)
                                            {
                                                    for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&t[i][j],sizeof(t[i][j]));

                                                    t[i][j].display();
                                                    cout<<"|";
                                                }
                                                        cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                            }
                                                    fi.close();
                                        break;}
                                case 2:{ string sday;
                                         cout<<"enter the day to display:\n";
                                         cin>>sday;
                                         ifstream fi;
                                            fi.open("Eight.dat",ios::in);
                                            printline(160);
                                            cout<<"\n";
                                            cout<<"   DAY\\TIME"<<"\t|   8:00-9:00"<<"\t|"<<"9:00-10:00\t|"<<"10:00-10:30\t|"<<setw(10)<<"10:30-11:30\t|"<<setw(10)<<"11:30-12:30\t|"<<setw(10)<<"12:30-2:00\t|"<<setw(10)<<"2:00-3:00\t|"<<setw(10)<<"3:00-4:00\t|"<<setw(10)<<"4:00-5:00\t|"<<endl;
                                            printline(160);
                                            cout<<"\n";
                                             for(int i=0;i<6;i++)
                                            {
                                                for(int j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                        if(sday==x1)
                                        {
                                            int i=0;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                       else if(sday==x2)
                                        {
                                            int i=1;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x3)
                                        {
                                            int i=2;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x4)
                                        {
                                            int i=3;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x5)
                                        {
                                            int i=4;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if((sday==x6))
                                        {
                                            int i=5;
                                            for(j=0;j<10;j++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                arr[i][j].display();
                                                 cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(sday==x7)
                                        {
                                            cout<<"Sunday is a holiday\n";
                                        }
                                        else
                                            {
                                                cout<<"invalid day\n";
                                            }
                                        fi.close();
                                        break;
                                }
                                case 3: {
                                            string time;
                                            cout<<"enter time in format hh:mm-hh:mm \n";
                                            cin>>time;
                                            ifstream fi;
                                            fi.open("Eight.dat",ios::in);
                                             printline(96);
                                            cout<<"\n";
                                            cout<<"MONDAY\t"<<"\t|"<<"TUESDAY\t|"<<"WEDNESDAY\t|"<<setw(10)<<"THURSDAY\t|"<<setw(10)<<"FRIDAY\t|"<<setw(10)<<"SATURDAY\t|"<<endl;
                                            printline(96);
                                            cout<<"\n";
                                            for(i=0;i<6;i++)
                                            {
                                                    for(j=0;j<10;j++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                }
                                            }
                                            if(time==y1)
                                            {
                                                j=1;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                    arr[i][j].display();
                                                     cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                            }
                                            else if(time==y2)
                                            {
                                                j=2;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                            }
                                            else if(time==y3)
                                            {
                                                j=3;
                                                for(i=0;i<6;i++)
                                                {
                                                    fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                     arr[i][j].display();
                                                      cout<<"|";
                                                }
                                                      cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                            }
                                            else if(time==y4)
                                            {
                                            j=4;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(time==y5)
                                        {

                                            for(i=0;i<6;i++)
                                            {
                                               j=5;
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(time==y6)
                                        {
                                            j=6;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(time==y7)
                                        {
                                            j=7;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(time==y8)
                                        {
                                            j=8;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else if(time==y9)
                                        {
                                            j=9;
                                            for(i=0;i<6;i++)
                                            {
                                                fi.read((char *)&arr[i][j],sizeof(arr[i][j]));
                                                 arr[i][j].display();
                                                  cout<<"|";
                                            }
                                                  cout<<"\n";
                                                printline(160);
                                                    cout<<"\n";
                                        }
                                        else
                                            cout<<"invalid time\n";
                                        break;
                                        fi.close();
                                }
                              }
                            }
                            break;
                            default:cout<<"invalid semester:\n";
                                    break;

                            }
                            else
                            {
                                cout<<"Invalid semester\n";
                                return;
                            }
                 }
             }
};
int main()
{
    int ch;
    timetable1 t;
     char choice;
     student s;
    do
    {
        cout<<"\n1.Do you want timetable details\n2.Exit\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:{
                        user *ptr;
                        student s;
                        ptr=&s;
                        ptr->read();
                        int ch2;//for selection of format of display
                        do
                            {
                                cout<<"Select the format of Time Table :";
                                cout<<"\n1.Whole week Time Table\n2.Particular Day Time Table\n3.Particular time slot\n";
                                cin>>ch2;
                                t.time1(ch2,s);
                                cout<<"\nDo you want to display more ?? (Y/N)";
                                cin>>choice;
                            }while(choice=='y'||choice=='Y');
                    }
                    break;
            case 2:exit(1);
                   break;
            default:cout<<"Invalid choice\n";
        }
    }while(ch<0||ch>2);
    return 0;
}

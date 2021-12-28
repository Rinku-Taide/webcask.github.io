#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
    int choice;
    cout<<"how many students do you want to enter??"<<endl;
    cin>>choice;
    if(total==0)
    {
    total=total+choice;
    for(int i=0;i<=choice;i++)
    {
        cout<<"enter the data of student"<<i+1<<endl<<endl;
        cout<<"enter name";
        cin>>arr1[i];
        cout<<" enter roll no.";
        cin>>arr2[i];
        cout<<"enter course";
        cin>>arr3[i];
        cout<<"enter class";
        cin>>arr4[i];
        cout<<"enter contact";
        cin>>arr5[i];
            }
}
else
{
    for(int i=total;i<choice+total;i++)
    {
        cout<<"/n enter the data of student"<<i+1<<endl<<endl;
        cout<<"enter name";
        cin>>arr1[i];
        cout<<"enter roll no.";
        cin>>arr2[i];
        cout<<"enter course";
        cin>>arr3[i];
        cout<<"enter class";
        cin>>arr4[i];
        cout<<"enter contact";
        cin>>arr5[i];
    }
    total=choice+total;
}
}
    void show()
{
    if(total==0)
    {
        cout<<"no data is entered"<<endl;
    }
    else{
    for(int i=0;i<=total;i++)
    {
        cout<<"/n data of student:"<<i+1<<endl<<endl;
        cout<<"name:"<<arr1[i]<<endl;
        cout<<"roll no.:"<<arr2[i]<<endl;
        cout<<"course:"<<arr3[i]<<endl;
        cout<<"class:"<<arr4[i]<<endl;
        cout<<"contact:"<<arr5[i]<<endl;
    

    }
    }

}
void search()
{
    if(total==0)
    {
    cout<<"no data is entered"<<endl;
    }
    else{
    string rollno;
    cout<<"enter the roll no. of student "<<endl;
    cin>>rollno;
    for(int i=0;i<total;i++)
    {
        if(rollno==arr2[i])
        {
            cout<<"data of student"<<i+1<<endl<<endl;
        cout<<"name:"<<arr1[i]<<endl;
        cout<<"roll no.:"<<arr2[i]<<endl;
        cout<<"course:"<<arr3[i]<<endl;
        cout<<"class:"<<arr4[i]<<endl;
        cout<<"contact:"<<arr5[i]<<endl;
        }
    }
}
}

void update()
{
    if (total==0)
    {
    cout<<"no data is entered"<<endl;
    }
    else{

        string rollno;
        cout<<"enter the rollno of student which you want to update "<<endl;
        cin>>rollno;

        for(int i=0;i<total;i++)
        {
            if(rollno==arr2[i])
            {
            cout<<" previous data"<<endl<<endl;
            cout<<" data of student"<<i+1<<endl;
            cout<<" name "<<arr1[i]<<endl;
            cout<<" rollno"<<arr2[i]<<endl;
            cout<<" course"<<arr3[i]<<endl;
            cout<<" class"<<arr4[i]<<endl;
            cout<<" contact"<<arr5[i]<<endl;
            cout<<"/n enter new data"<<endl;
            cout<<"/n enter name";
            cin>>arr1[i];
            cout<<"enter roll no.";
            cin>>arr2[i];
            cout<<"enter course";
            cin>>arr3[i];
            cout<<"enter class";
            cin>>arr4[i];
            cout<<"enter contact";
            cin>>arr5[i];
            }
        }
    }

}
void deleterecord()
{
    if (total==0)
    {
    cout<<" no data is entered"<<endl;
    }
    else{
        int a;
        cout<<"press 1 to delete all record "<<endl;
        cout<<" press 2 to delete specific record"<<endl;
        cin>>a;
        if(a==1)
        {
            total=0;
            cout<<"all record is deleted!!"<<endl;
        }
    else if(a==2)
    {
        string rollno;
        cout<<"enter the rollno of student which you wanted to delete"<<endl;
        cin>>rollno;
        for(int i=0;i<total;i++)
        {
            if(rollno==arr2[i])
            {
                for (int j=i;j<total;j++)
                {
                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+1];
                    arr3[j]=arr3[j+1];
                    arr4[j]=arr4[j+1];
                    arr5[j]=arr5[j+1];
                }
                total--;
                cout<<"your required record is deleted "<<endl;
            }
        }
    }
    else{
        cout<<"invalid input";
    }
    }
    }
main(){
    int value;
    while (true)
    {
    cout<<"Press 1 to enter data"<<endl;
    cout<<"Press 2 to show data"<<endl;
    cout<<"Press 3 to search data"<<endl;
    cout<<"Press 4 to update data"<<endl;
    cout<<"Press 5 to delete data"<<endl;
    cout<<"Press 6 to exit data"<<endl;
    cin>>value;
    switch(value)
    {
       
       case 1:
       enter();
       break;
       case 2:
       show();
       break;
       case 3:
       search();
       break;
       case 4:
       update();
       break;
       case 5:
       deleterecord();
       break;
       case 6:
       exit(0);
       break;
       default:
       cout<<"invalid input "<<endl;
       break;
    }
 }
}

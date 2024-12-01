#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

 int arr_size, arr_elm;



 void display()
 {
      system("Color 0B");
    cout<<"///////////////// - WELCOME TO ARRAY MASTER- ///////////////////"<<endl;
    cout<<"________________________________________________________________"<<endl;
    cout<<"---------------------Created by SHOVON117-----------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
 }

 int menu(int arr[],int y);


int odd(int arr[],int y)
{

    system("cls");
    display();
    cout<<endl;
    cout<<endl;
    cout<<"Odd elements of the array are : ";
    for(int i=0;i<y;i++)
    {
        if(arr[i] % 2 !=0)
        {
            cout<<arr[i]<<" ";
        }

    }
    cout<<endl;
    cout<<endl;
     cout<<"Do you want to go back to the menu ?(yes/no) : ";
    string s;
    cin>>s;
    if(s=="YES"|| s=="yes")
    {
        menu(arr,y);
    }
    else if(s=="No" || s=="no")
    {
        return 0;
    }

}

int even(int arr[],int y)
{

    system("cls");
    display();
    cout<<endl;
    cout<<endl;
    cout<<"Even elements of the array are : ";
    for(int i=0;i<y;i++)
    {
        if(arr[i] % 2 ==0)
        {
            cout<<arr[i]<<" ";
        }

    }
    cout<<endl;
    cout<<endl;
    cout<<"Do you want to go back to the menu ?(yes/no) : ";
    string s;
    cin>>s;
    if(s=="Yes"|| s=="yes")
    {
        menu(arr,y);
    }
    else if(s=="No"|| s=="no")
    {
        return 0;
    }

}

int swapx(int arr[],int y)
{
    system("cls");
    display();

    cout<<endl<<endl<<endl;
    cout<<"YOUR ARRAY : ";


    for(int i=0;i<y;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"INDEX      : ";
    for(int i=0;i<y;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Tell me indexes of numbers you want to swap : ";
    int m,n;
    cin>>m>>n;
    swap(arr[m],arr[n]);
    cout<<endl<<endl;
    cout<<"Current array after swaping : ";
    for(int i=0;i<y;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Do you want to go back to menu (yes/no)? : ";
    string s;
    cin>>s;
    if(s=="YES" || s=="yes")
    {
        swap(arr[m],arr[n]);
        menu(arr,y);
    }
    else if(s=="NO"|| s=="no")
    {
        return 0;
    }


}

int searchx(int arr[],int y)
{
    system("cls");
    display();
    cout<<endl;
    cout<<endl;
    cout<<"Search a element : ";
    int e;
    cin>>e;
    int m=0;
    for(int i=0;i<y;i++)
    {
        if(arr[i]==e)
        {
            cout<<"Your element is at position : "<<i+1<<endl;
            break;
        }
        else
        {
            m++;
        }

    }
    cout<<endl;
    cout<<endl;
    if(m==y)
    {
        cout<<"Element does not exist in the array"<<endl;
    }
    cout<<endl;
    cout<<endl;

    cout<<"Do you want to search again (y/n)? : ";
    char ch;
    cin>>ch;

    if(ch=='Y' || ch=='y')
    {
        searchx(arr,y);
    }

    cout<<endl;
    cout<<endl;
    cout<<"Do you want to go back to menu (yes/no)? : ";
    string s;
    cin>>s;
    if(s=="Yes" || s=="yes")
    {
        menu(arr,y);
    }
    else if(s=="No" || s=="no")
    {
        return 0;
    }
}


int insertx(int arr[],int y)
{
    system("cls");
    display();
    cout<<endl;
    cout<<endl;

    if(arr_size == arr_elm)
    {
        cout<<"YOU CAN NOT INSERT ANY VALUE . THE ARRAY IS FULL"<<endl;
    }
    else
    {
        cout<<endl;
        int m,n;
        cout<<"INSERT AT POSITION : ";
        cin>>m;
        cout<<endl;
        cout<<"VALUE TO BE INSERTED : ";
        cin>>n;
        for(int i=y;i>=m;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[m-1]=n;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"NEW ARRAY AFTER INSERTION : ";
        for(int i=0;i<=y;i++)
        {

            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Do you want to go back to menu (yes/no) : ";
        string s;
        cin>>s;
        if(s=="Yes" || s=="yes")
        {
            y++;
            menu(arr,y);
        }
        else if(s=="No" || s=="no")
        {
            return 0;
        }
    }
}


int deletex(int arr[],int y)
{
    system("cls");
    display();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"YOUR ARRAY  : ";
    for(int i=0;i<y;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"INDEX       : ";
    for(int i=0;i<y;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"INDEX OF THE ELEMENT TO BE DELETED : ";
    int m;
    cin>>m;
    for(int i=m;i<y;i++)
    {
        arr[i]=arr[i+1];
    }
    y--;
    cout<<endl;
    cout<<endl;
    cout<<"YOUR ARRAY AFTER DELETION  : ";
    for(int i=0;i<y;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"Do you want to go back to menu (yes/no)? : ";
    string s;
    cin>>s;
    if(s=="Yes" || s=="yes")
    {
        menu(arr,y);
    }
    else if(s=="No" || s=="no")
    {
        return 0;
    }
}




 int menu(int arr[],int y)
{
    system("cls");
    display();
    cout<<endl;
    cout<<endl;

    cout<<"1.Print odd elements"<<endl;
    cout<<"2.Print even elements"<<endl;
    cout<<"3.Swap two elements"<<endl;

    cout<<"4.Search for a element"<<endl;
    cout<<"5.Insert new elements"<<endl;
    cout<<"6.Delete any element"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"What do you want to do ?  : ";
    int n;
    cin>>n;
    if(n==1)
    {
        odd(arr,y);
    }
    else if(n==2)
    {
        even(arr,y);
    }
    else if(n==3)
    {
        swapx(arr,y);
    }
    else if(n==4)
    {
        searchx(arr,y);
    }
    else if(n==5)
    {
        insertx(arr,y);
    }
    else if(n==6)
    {
        deletex(arr,y);
    }

}






int start()
{
    display();

    cout<<"PLEASE ENTER ARRAY SIZE : ";
    cin>>arr_size;

     if(arr_size<=0)
    {
        cout<<endl;
        cout<<endl;
        cout<<"INVALID ARRAY SIZE (Array size can't be 0 or negative)"<<endl;
        cout<<endl;
        cout<<endl;
        string str;
        cout<<"If you want to re-enter value again , then type YES   :  ";

        cin>>str;
        if(str=="YES" || str=="yes")
        {
            system("cls");
            start();
        }
    }



    cout<<endl;
    cout<<"PLEASE ENTER NUMBER OF ELEMENTS : ";
    cin>>arr_elm;
    if(arr_size < arr_elm)
    {
        cout<<endl;
        cout<<endl;
        cout<<"INVALID !! Number of elements can't be greater than array size"<<endl;
        cout<<"If you want to re-enter value again, then type YES : ";
        string str2;
        cin>>str2;
        if(str2=="YES" || str2=="yes")
        {
            system("cls");
            start();

        }
    }
    cout<<endl;
    cout<<endl;

   return arr_size,arr_elm;




}



int ARRAY(int x,int y, int arr[] )
{
    system("cls");
    display();
    cout<<endl;
    cout<<endl;
    cout<<"Enter array elements : ";
    for(int i=0;i<y;i++)
    {
        cin>>arr[i];
    }
    system("cls");
    display();
    cout<<endl;
    cout<<endl;
    cout<<"Your Array elements are : ";
    for(int i=0;i<y;i++)
    {

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"-----------Want to do some fun !!!---------"<<endl;
    cout<<"                Type Y : ";
    char s;
    cin>>s;
    if(s=='Y' || s=='y')
    {
        menu(arr,y);
    }

}



int main()
{

    start();
    int len = arr_size;
    int elm = arr_elm;

    int arr[len];

    ARRAY(len,elm,arr);




}


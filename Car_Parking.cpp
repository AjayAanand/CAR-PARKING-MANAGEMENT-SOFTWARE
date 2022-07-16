#include<iostream>
using namespace std;

int main(){
    int b=0;
    int c=0;
    int a=0;
    int amount=0,count=0;
    int avl;
    while(true){

    int parking_input;
    cout<<" "<<endl;
    cout<<"|| WELLCOME TO PARKING SERVICES RECORD BOOK ||"<<endl;
    cout<<" "<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Press 1 for Bike"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Press 2 for Car"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Press 3 for Auto"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Press 4 for Show Record"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Press 5 for Delect All Record"<<endl;
    cout<<"*************************************"<<endl;
    cout<<"Press 6 for Check Avaible Seat"<<endl;
    cout<<"*************************************"<<endl;
    cin>>parking_input;

    if(parking_input==1){
        if(count<=10){
        amount=amount+100;
        count=count+1;
        b++;
        cout<<" "<<endl;
        cout<<"|| Bike Successfully Parked ||"<<endl;
        cout<<" "<<endl;

    }
    else{
        cout<<"No more Vehicles, Parking is full"<<endl;
    }
    }
    else if(parking_input==2){
        if(count<=10){

        amount= amount+200;
        count=count+1;
        c++;
        cout<<" "<<endl;
        cout<<"|| Car Successfully Parked ||"<<endl;
        cout<<" "<<endl;
    }
    else{
        cout<<"No more Vehicles, Parking is full"<<endl;
    }
    }
    else if(parking_input==3){
        if(count<=10){

        amount=amount+300;
        count=count+1;
        a++;
        cout<<" "<<endl;
        cout<<"|| Auto  Successfully Parked ||"<<endl;
        cout<<" "<<endl;


    }
    else{
        cout<<"No more Vehicles, Parking is full"<<endl;
    }
    }
    else if(parking_input==4){
        cout<<"***********************************************************"<<endl;
        cout<<" "<<endl;

        cout<<"The total amount =  "<<amount<<endl;
        cout<<" "<<endl;
        cout<<"The total number vehicles parked = "<<count<<endl;
        cout<<" "<<endl;
        cout<<"The total number of Bike = "<<b<<endl;
        cout<<" "<<endl;
        cout<<"The total number of Car  = "<<c<<endl;
        cout<<" "<<endl;
        cout<<"The total number of Auto = "<<a<<endl;
        cout<<" "<<endl;
        cout<<"***********************************************************"<<endl;
    }
    else if(parking_input==5){

        amount=0;
        count=0;
        cout<<"**************************************************"<<endl;
        cout<<"                                                                         "<<endl;
        cout<<"|| Record is delected ||"<<endl;
        cout<<"                                                                         "<<endl;
        cout<<"***************************************************"<<endl;
    }
    else if(parking_input==6){
        avl=10-count;
        cout<<"###################################################"<<endl;
        cout<<" "<<endl;
        cout<<"The Number of Seat Availble = "<<avl<<endl;
        cout<<" "<<endl;
        cout<<"###################################################"<<endl;
    }
    else{
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
        cout<<"                                                                         "<<endl;
        cout<<"Invalid Number !! Press again"<<endl;
        cout<<"                                                                         "<<endl;
        cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    }
    }

    
}
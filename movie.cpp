#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num1;
    cout<<"**Welcome to movie ticket booking system*\n\n*Press 1 to view list of Hollywood Movie*s:\n*Press 2 to view list of Bollywood Movies*:\n*Press 3 to view list of Lollywood Movies**:"<<endl;
    cin>>num1;
    if(num1==1){
        cout<<"1. Titanic"<<endl;
        cout<<"2. Avengers"<<endl;
        cout<<"3. Avatar"<<endl;
        cout<<"4. Game of thrones"<<endl;
        cout<<"5. Need for speed"<<endl;
        cout<<"6. Iron man"<<endl;
        cout<<"7. Wrong turn"<<endl;
        cout<<"8. Rush"<<endl;
        cout<<"9. Harry potter"<<endl;
        cout<<"10. Spider man"<<endl;
    }
    else if(num1==2){
        cout<<"1. Dabang"<<endl;
        cout<<"2. Pathan"<<endl;
        cout<<"3. Jab we met"<<endl;
        cout<<"4. Singham"<<endl;
        cout<<"5. Suryavanshi"<<endl;
        cout<<"6. Gabbar is back"<<endl;
        cout<<"7. Race (2)"<<endl;
        cout<<"8. Jawaan"<<endl;
        cout<<"9. Dangal"<<endl;
        cout<<"10. Dhoom (3)"<<endl;
        
    }
    else{
        cout<<"1. War"<<endl;
        cout<<"2. The Legends of Maulajutt"<<endl;
        cout<<"3. Na Maloom Afraad"<<endl;
        cout<<"4. To Strike"<<endl;
    }
    int num2;
    cout<<"**Press 4 to view total seats**:";
    cin>>num2;
    if(num2==4){
        cout<<"70 out of 100 seats are available"<<endl;
    }
    else{
        cout<<"Wrong input"<<endl;
    }
    //int a;
    //a=600;
    //float result;
    //result=a*num3;
    
    int num3;
    cout<<"Enter how many seats do you want to book you can book maximum five seats:";
    cin>>num3;
    
    int a;
    a=600;
    float result;
    result=a*num3;
    if(num3==1){
    cout<<"Congractulations you have book your seat your bill is:"<<result<<"rs"<<endl;
    }
    else if(num3==2){
        cout<<"Congractulations you have book your seat your bill is:"<<result<<"rs"<<endl;
    }
    else if(num3==3){
        cout<<"Congractulations you have book your seat your bill is:"<<result<<"rs"<<endl;
    }
    else if(num3==4){
        cout<<"Congractulations you have book your seat your bill is:"<<result<<"rs"<<endl;
    }
    else if(num3==5){
        cout<<"Congractulations you have book your seat your bill is:"<<result<<"rs"<<endl;
    }
    int num4;
    cout<<"**Press 6 for contact info**:";
    cin>>num4;
    if(num4==6){
        cout<<"Contact:021-36362636\nEmail:Movie123@gmail,com\nWebsite:www.Movies123.pk";
    }
    else{
        cout<<"Wrong input"<<endl;
    }
    return 0;
}
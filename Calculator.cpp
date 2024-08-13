#include<bits/stdc++.h>
using namespace std;

void add(){
    double a,b;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    cout<<"Result : "<<a+b<<endl;
}

void sub(){
    double a,b;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    cout<<"Result : "<<a-b<<endl;
}

void mul(){
    double a,b;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    cout<<"Result : "<<a * b<<endl;
}

void div(){
    double a,b;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    if(b!=0)
    cout<<"Result : "<< fixed << setprecision(2) <<a / b<<endl;

    else
    cout<<"Error"<<endl;
}

void power(){
    double a,b;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    cout<<"Result : "<< pow(a,b)<<endl;
}

void squareR(){
    double a;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Result : "<<sqrt(a)<<endl;
}

void logr(){
    double a, base;
    cout<<"Enter number and base: ";
    cin>>a>>base;
    cout<<"Result : "<<log(a) / log(base)<<endl;
}

void sine(){
    double a;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Result : "<< sin(a * M_PI / 180.0)<<endl;
}

void cosine(){
    double a;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Result : "<< cos(a * M_PI / 180.0)<<endl;
}

void tangent(){
    double a;
    cout<<"Enter number: ";
    cin>>a;
    cout<<"Result : "<< tan(a * M_PI / 180.0)<<endl;
}

void factorial(){
    double a;
    cout<<"Enter number: ";
    cin>>a;

    long long res = 1;

    for(int i=1;i<=a;i++){
        res*=i;
    }
    cout<<"Result: "<<res<<endl;
}


int main(){

    int choice;
    do{
        cout<<"Enter operation: \n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exponential\n";
        cout<<"6. SquareRoot\n";
        cout<<"7. log\n";
        cout<<"8. sine\n";
        cout<<"9. cosine\n";
        cout<<"10. tan\n";
        cout<<"11. fatorial\n";
        cout<<"12. Exit\n";

        cout<<"Enter choice 1-12: ";
        cin>>choice;

        switch(choice){
            case 1: add(); break;
            case 2: sub(); break;
            case 3: mul(); break;
            case 4: div(); break;
            case 5: power(); break;
            case 6: squareR(); break;
            case 7: logr(); break;
            case 8: sine(); break;
            case 9: cosine(); break;
            case 10: tangent(); break;
            case 11: factorial(); break;
            case 12: "Off\n"; break;
            default: cout<<"Invalid choice.\n Try again.\n";

        }
    } while(choice != 12);

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Una {
public:
    string On[10] = {"Never","gonna","give", "you", "up", "never", "gonna", "let", "you","down"};
    string Snd[10] = {"I", "gonna", "give", "you", "up", "I","gonna", "let", "you", "down"};
    string trd[10] = {"You","wanna", "give","me","up","you", "wonna", "let", "me", "down"};
};

void arr(string One[10], string nam) {
    int a = 0;
    int total;
    string one[10];
    for(int k=0; k<10; k++) {
        cout<<" "<<One[k]<<"," ;
    }
    cout<<"\n\n";
    cout<<"==========\n\n";
    for(int i=0; i < 10; i++) {
        cout<<One[i]<<": ";
        cin>>one[i];
        if(one[i] == One[i]) {
            a++;
        }
    }
    cout<<"\n\n==========";
    total = a;
    cout<<"\n\nHey "<<nam<<" \n you have Scored: "<< total<<"/10\n\n";
}

void may(string nam) {
    Una One;
    int select;
    cout<<"\e[1m"<<"\t Retype the Word Game\n"<<"\e[0m"<<endl;
    cout<<"\tSelect only the number.\n\n";
    cout<<"\e[1m(1)\e[0m"<<" Never gonna give you up never gonna let you down.\n\n";
    cout<<"\e[1m(2)\e[0m"<<" I gonna give you up I gonna let you down.\n\n";
    cout<<"\e[1m(3)\e[0m"<<"You wanna give me up you gonna let me down.\n\n";
    cout<<"Input: ";
    cin>>select;
    cout<<"\n\n";
    switch(select) {
        case 1:
            arr(One.On,  nam);
            break;
        case 2:
            arr(One.Snd,  nam);
            break;
        case 3:
            arr(One.trd,  nam);
            break;
    }
}

int main() {
    string again;
    string nam;
    cout<<"Kindly Enter Your Name Before the Game Start!!\n\n \tName: ";
    getline(cin, nam);
    do {
        may(nam);
        cout<<"\t  "<<nam<<"!!\n\n\tWant to try again?\n\t      Type\n  \t [\e[1mY\e[0m]yes  [\e[1mN\e[0m] no \n";
        cin>> again;
    } while( again =="Y" || again =="y" || again =="Yes" || again =="yes" || again =="agree" || again =="[Y]yes" || again=="[Y]" );
    return 0;
}

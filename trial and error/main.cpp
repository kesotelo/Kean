#include <iostream>
#include <stdlib.h>


using namespace std;


int main ()
{
int f,select,i,dec,rem;
int flag;
int num;
int bin[9999];
int octal[23417];
char hexa[270];
char repeat = 'Y';


while(repeat == 'y' || repeat == 'Y'){


cout << "============================================= \n";

cout << "== Welcome to Decimal to Binary Conversion == \n";

cout << "=============================================\n";

cout <<"\n";

cout << "Please choose a conversion: \n";
cout << "[1]. Decimal to Binary \n";
cout << "[2]. Decimal to Octadecimal \n";
cout << "[3]. Decimal to Hexadecimal \n";
cout << "[4]. Binary to Decimal \n";
cout << "[5]. Octadecimal to decimal \n";
cout << "[6]. Hexadecimal to decimal \n";
cout << "Choose a number: ";
cin >> select;





if(select <= 3){
cout << "Please Enter a Decimal: ";
}

else if(select == 4){
    cout << "Please Enter a Binary: ";
}

else if(select == 5){
    cout << "Please Enter a Octadecimal: ";
}

else if(select == 6){
    cout << "Please Enter a Hexadecimal: ";
}


while(!(cin >> num)){
        cout << "Must be a number! \n";
        cin.clear();
        cin.ignore(100, '\n');}




switch(select){

    case 1:
        f = 0;
        cout << "The Binary is: ";
        while(num > 0){
        bin[f] = num % 2;
        num = num / 2;
        f++;
     }
     for(int j = f-1; j >= 0; j--){
        cout << bin[j];

     }break;

    case 2:
         f = 0;
        cout << "The Octadecimal is: ";
        while(num > 0){
            octal[f] = num % 8;
            num = num / 8;
            f++;
        }
        for(int j = f - 1; j >= 0; j--){
            cout << octal[j];
        }break;

    case 3:
        f = 0;
        i = 0;
        cout << "The Hexidecimal is: ";
        while(num > 0){
                rem = num % 16;
                if(rem < 10){
                    hexa[i++] = rem + 48;
                }
                else {
                    hexa[i++] = rem + 55;
                }
            num = num / 16;
            f++;
            }

        for(int j = f - 1; j >= 0; j--){
                cout << hexa[j];
            }break;
    // This is for Vice Versa Operation
    case 4:
        flag = 0;
        i = 1;
        cout << "The decimal is: ";
        while( num != 0){
            rem = num % 10;
            flag = flag + (rem * i);
            i = i * 2;
            num = num / 10;

        }cout << flag;
        break;

    case 5:
        flag = 0;
        i = 1;
        cout << "The decimal is: ";
        while(num != 0){
            rem = num % 10;
            flag = flag + (rem *i);
            i = i * 8;
            num = num / 10;

        }cout << flag;
        cout << "\n";
        break;

    case 6:
        cout << "Sorry po sir hindi ko na kinaya hehe \n";


}
    cout << endl;
    cout << endl;

    cout << "Would you like to try again? [y] or [n] \n";
    cout << "Enter here: ";
    cin >> repeat;

    system("CLS");}
    cout << "\n";
    cout << "Thankyou for using the system!";
    cout << "\n";
return 0;
}

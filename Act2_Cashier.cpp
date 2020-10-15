#include <iostream>
using namespace std;

int main(){
    //(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧ These help me place values for my variables
    double item1 = 7.00, item2 = 25.00, item3 = 12.00, item4 = 10.00, payment, change;
     //☆ ～('▽^人) now this shall be the identifier for the conditionals
    int select;

    cout << "\n Welcome To Hobbies Central!\n\n"
            "\t  Items\n"
            " =========================\n"
            " 1 - Pencil [P7.00]\n"                 //╰(▔∀▔)╯
            " 2 - Pad Paper [P25.00]\n"             //this is my catalog,
            " 3 - Ballpen [P12.00]\n"               //anything you want to buy?
            " 4 - Eraser [P10.00]\n"
            " =========================\n";
    //∑d(°∀°d) you have to place a number here if you chose something from the catalog!
    cout << "\n Enter Item Number: ";
    cin >> select;

    switch(select){
        //ヾ(*'▽'*) if you chose number 1, you get placed here. Same goes with other numbers
        case 1:
                //⊂(･ω･*⊂) you got money right? You are buying something. Place your amount here.
                cout << "\n Input Payment: ";
                cin >> payment;
                //∠( ᐛ 」∠)_ The program will now calculate your change
                change = payment - item1;
                if(payment < item1){
                    //o(TヘTo) oh no, you dont have enough money.
                    cout << "\n Insufficient Funds\n";
                }
                else{
                    //(*˘︶˘*).｡.:*♡ The program says that you had enough money and will give your change now.
                    cout << "\n Transaction Successful\n Change:" << change << "\n";
                    //ヽ(>∀<☆)ノ thank you for shopping!
                }
        break;
        case 2:
                cout << "\n Input Payment: ";
                cin >> payment;
                change = payment - item2;
                if(payment < item2){
                    cout << "\n Insufficient Funds\n";
                }
                else{
                    cout << "\n Transaction Successful\n Change:" << change << "\n";
                }
        break;
        case 3:
                cout << "\n Input Payment: ";
                cin >> payment;
                change = payment - item3;
                if(payment < item3){
                    cout << "\n Insufficient Funds\n";
                }
                else{
                    cout << "\n Transaction Successful\n Change:" << change << "\n";
                }
        break;
        case 4:
                cout << "\n Input Payment: ";
                cin >> payment;
                change = payment - item4;
                if(payment < item4){
                    cout << "\n Insufficient Funds\n";
                }
                else{
                    cout << "\n Transaction Successful\n Change:" << change << "\n";
                }
        break;
    }

    cout << "\n Thank you! Come again!\n";

    return 0;
}

/*	٩(◕‿◕｡)۶ oh hello there, welcome to my code (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧

    This code is made by

    Roanne Zoe M. Cayanan

    please do not steal my code (´｡• ᵕ •｡`) ♡

    Thank you	♡ ～('▽^人)
*/

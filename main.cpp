#include <iostream>
#include <string>

using namespace std;

class Shop{

private:
    string products[5] = {"x","y","a","b","c"};
    double cost[5] = {10,15,1,2,3};
    int quantity[5] = {0,0,0,0,0};
    string command;
    int purchase = 0;
    int charge = 0;

public:
    Shop(){
        cout << "Welcome to the shop, please input your request (view,buy,cart,checkout,exit)" << endl;
        input();
    };
        void input(){

            cout << "Your input: ";
            cin >> command;

                if(command == "view"){view();}
                else if(command == "buy"){buy();}
                else if(command == "cart"){cart();}
                else if(command == "checkout"){checkout();}
                else if(command == "exit"){exit();}
                else{
                    cout << "Invalid command." << endl;
                    input();
                };
        };

        void view(){
            cout << "Viewing currently available products" << endl;
            for(int i = 0;i < sizeof(products)/sizeof(string);i++){
                cout << (i+1) << ". Name: " << products[i] << " - $" << cost[i] << " (Ordered: " << quantity[i] << ")" << endl;
            }
            input();
        };

        void buy(){
            cout << "What do you want to buy? ";
            cin >> purchase;
            purchase = purchase - 1;

            if(purchase > sizeof(products)/sizeof(string)){
                cout << "That product does not exist." << endl;
            }
            else{
                quantity[purchase] = quantity[purchase] + 1;
                charge = charge + cost[purchase];
                cout << "Bought 1 of " << products[purchase] << endl;
            }
            input();
        };

        void cart(){
            cout << "cart is a valid command" << endl;
            input();
        };

        void checkout(){
            cout << "checkout is a valid command" << endl;
            input();
        };

        void exit(){
            cout << "Goodbye" << endl;
        };
};

int main(){
    Shop shop;
};

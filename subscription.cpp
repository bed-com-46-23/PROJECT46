#include <iostream>
#include <random>
using namespace std;

int main() {
random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0,11);

    int daysUntilExpiration = dist(gen);
     switch(daysUntilExpiration) {
        case 0: cout<<"your subscrition has expired"; break;
        case 1: cout<<"your subscription expires within a day! Renew now and save 20% "; break;
        case 2:
        case 3:
        case 4:
        case 5: cout<<"your subscription expires in 5 days \n Renew now and save 10%"; break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10: cout<<"your subscription will expire soon. Renew now! "; break;
        default: cout<<"you have an active subscription. ";

     }
     return 0;
}
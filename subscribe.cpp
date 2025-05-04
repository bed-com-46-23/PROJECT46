#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0,11);

    int daysUntilExpiration = dist(gen);

    if (daysUntilExpiration <= 10 ) {
    cout<<"your subscription will expire soon. Renew now! "<<endl;
    }
    else if(daysUntilExpiration <= 5) {
        cout<<"your subscription expires will in 5 days"<<endl;
        cout<<"renew and save 10% "<<endl;
    }
    else if (daysUntilExpiration == 1) {
        cout<<"your subscription will expire within a day! "<<endl;
        cout<<"rew now and save 20% "<<endl;
    }
    else if(daysUntilExpiration < 1){
        cout<<"your subscription has expired. "<<endl;
    }
    else {
    cout<<"you have an active subscription. "<<endl;
    }
    return 0;
}
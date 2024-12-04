
#include <iostream>
#include "Overcoat.h"
#include "Flat.h"
using namespace std;

int main()
{
    //завданн€ 1

    Overcoat coat1("куртка", 1000);
    Overcoat coat2("пальто", 3000);
    Overcoat coat3("шапка", 500);

    coat1.Show();
    coat2.Show();
    coat3.Show();

    

    if (coat1 == coat2) {
        cout << "coat1 ≥ coat2 мають однаковий тип од€гу" << endl;
    }
    else {
        cout << "coat1 ≥ coat2 мають р≥зний тип од€гу" << endl;
    }

    if (coat1 == coat3) {
        cout << "coat1 ≥ coat3 мають однаковий тип од€гу" << endl;
    }
    else {
        cout << "coat1 ≥ coat3 мають р≥зний тип од€гу" << endl;
    }

    

    cout << "ѕочатков≥ дан≥:" << endl;
    coat1.Show();
    coat2.Show();

    
    coat2 = coat1;

    
    cout << "ѕ≥сл€ присвоЇнн€:" << endl;
    coat1.Show();
    coat2.Show();



    

    if (coat1 > coat2) {
        cout << "куртка дорожча за пальто" << endl;
    }
    else {
        cout << "куртка дешевша або маЇ таку ж ц≥ну, €к ≥ пальто" << endl;
    }

    if (coat2 > coat3) {
        cout << "пальто дорожче за шапку" << endl;
    }
    else {
        cout << "пальто дешевше або маЇ таку ж ц≥ну, €к ≥ шапка" << endl;
    }



    //завданн€ 2

    Flat flat1(50.5, 120000, "123 Main St");
    Flat flat2(75.0, 200000, "456 Elm St");
    Flat flat3(50.5, 100000, "789 Pine St");



    if (flat1 == flat3) {
        cout << "Flat 1 and Flat 3 have the same area\n";
    }
    else {
        cout << "Flat 1 and Flat 3 have different areas\n";
    }

    


    flat3 = flat2;
    cout << "After assignment, Flat 3:\n";
    flat3.printInfo();



    if (flat2 > flat1) {
        cout << "Flat 2 is more expensive than Flat 1\n";
    }
    else {
        cout << "Flat 2 is cheaper than or equal to Flat 1 in price\n";
    }

}


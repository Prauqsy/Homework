#include <iostream>
#include <iomanip>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
   int Dys; 
   float Dly, Org, Pr, Y;
   
    cout <<"Starting number of organisms(no less than 2): ";
        cin>> Org;
        
            //All while's to repeat till correct input 
            while (Org<2||Org<0)
                {
                cout<<"Less than two please re-enter starting number: ";
                    cin >> Org;
                }
    cout<<"Average daily population increase (as a percentage, no negative numbers): ";
        cin>>Dly;
            while (Dly<0)
                {
                cout<<"Cannot accept negative numbers please re-enter average daily: ";
                    cin>>Dly;
                }   
        //equation to turn Dly into percent
        Pr=Dly/100;
        
        
    cout <<"Number of days that will be multiplied(no less than 1): ";
        cin>>Dys;
            while (Dys<1||Dys<0)
                {
                cout <<"Less than 1 please re-enter days to be multiplied";
                    cin>>Dys;
                }
        //for to output set number of days
        for (int X=1; X<=Dys; X++)
            {
            //Daily population increase equation
            Y=(Pr*Org)+Org;
            //Equation so that the new amount increases along side the days
            Org=Y;
            
            //output of final equations
           cout << "Day: " << X << "        Increase " << fixed << setprecision (2) << Y << endl;
            }
        
        
    return 0;
}


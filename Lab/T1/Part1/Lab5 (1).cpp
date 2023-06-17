#include <iostream>
using namespace std;

int main(){
    int membership_type;
    double monthly_purchase;
    int reward_points;

    cout<<"Enter (1, 2 or 3) for the membership type: \n";
    cout<<"1. Standard \n";
    cout<<"2. Plus \n";
    cout<<"3. Premium \n>>> ";
    cin>>membership_type;  
    cout<<"Enter the monthly purchase for the customer : ";
    cin>>monthly_purchase;

    switch (membership_type)
    {
        case 1:// Standard
        {
            if (monthly_purchase < 75 ) // less than 75
                reward_points = 0.05 * monthly_purchase; // 5% 

            else if (monthly_purchase < 150)// less than 150
                reward_points = 0.075 * monthly_purchase;// 7.5%
            else  //above 150
                reward_points = 0.1 * monthly_purchase;// 10%
        } 
            cout<<"Rewards points   : "<<reward_points<<endl;
        break;

        case 2://Plus
        {
            if (monthly_purchase < 150)// less 150
                reward_points = 0.06 * monthly_purchase;// 6%
            else //above 150
                reward_points = 0.13 * monthly_purchase; // 13%
            cout<<"Rewards points   : "<<reward_points<<endl;
        } 
        break;

        case 3://Premium
        {   
            if (monthly_purchase < 200)// less than 200
            reward_points = 0.04 * monthly_purchase;// 4%
            else //above 200
            reward_points = 0.15 * monthly_purchase;// 15%
        }
        default:
        cout<< "You entered invalid number for the membership type.";
    }

        return 0;
}

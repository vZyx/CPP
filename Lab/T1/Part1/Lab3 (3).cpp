
#include <iostream>
using namespace std;
int main(){
	/*Your program should read from the user the item price
	and number of pieces to be purchased. Cost is calculated as = price * number of items. */
	int noItems,price;
	double cost=0;

	cout<<"Enter item price: ";
	cin>>price;
	cout<<"Enter No items: ";
	cin>>noItems;
	cost= noItems*price;
/*If the item’s price was greater than or equal to 100 SR and the number of items is greater than 2
pieces, then the user can get a 5% discount on the total cost and no delivery cost will be added;
otherwise no discount will be given and additional delivery charge of 10 SR will be added. */
	if (noItems>2 && price>=100){
	cost=cost * 0.95;
	if (cost>1000)
	cost*=0.95;
}
/*Also, the customer can get additional discount only if the total cost after discount was greater
than 1000 SR. */
	else
	cost=noItems*price+10;
	cout<<"Total cost = "<<cost;

	return 0;
}
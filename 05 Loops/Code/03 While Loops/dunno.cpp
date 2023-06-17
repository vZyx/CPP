// #include<iostream>
// using namespace std;
 
// int main() {
// 	int x = 0;
 
// 	while(x++ < 50) {
// 		cout<<x++<<" ";
// 		++x += 10;
// 	}
// 	return 0;
// }
// idk how...



// #include<iostream>
// using namespace std;
 
// int main() {
// 	int n = 60;
 
// 	while (n > 5) {
// 		if (n % 2 == 0)
// 			n /= 2;
// 		else
// 			n = (n - 1) / 2;
// 	}
// 	cout<<n;
// 	return 0;
// } //3


// #include<iostream>
// using namespace std;
 
// int main() {
// 	int n = 60;
 
// 	while (n > 5) {
// 		if (n == 7) {
// 			n = 70;
// 			continue;
// 		}
 
// 		if (n % 2 == 0) 
// 			n /= 2;// 30 >> 15 >>7 move up n=70
// 		else
// 			n = (n - 1) / 2;
 
// 		if (n == 8)
// 			break;
// 	}
// 	cout << n;
// 	return 0;
// }

#include <iostream>
using namespace std;
 
int main() {
	int x = 10;
 
	while( x --> 0 ) { // while( (x--) > 0 )

	      cout<<x;
	}
	return 0;
}
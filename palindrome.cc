
#include <iostream>
using namespace std;
bool palindrome (string mot){
	
	if (mot.size() <= 1){
		return true;
		}
	else if (mot.front() != mot.back()){
		return false;
		}
	else {
		return palindrome(mot.substr(1,mot.size()-2));
		}
	}
	
string creerplaindrome(string mot){
	string pal(mot);
	for(auto lettre : mot){
		pal = lettre + pal ;
		}
	return pal;
	}
int main()
{
	cout<<palindrome("rever");
	cout<<creerplaindrome("avec");
	return 0;
}


#include <iostream>
using namespace std;

int main() {
  	cout << "Polybot: choose theme number\n1:Dark or 2:Light: ";
	int userin;
	cin >> userin;	
	
	switch(userin) {
		case 1 : system("cp -f $HOME/.config/polybar/dots/configDarkTheme $HOME/.config/polybar/config"); 
			break;
		case 2 : system("cp -f $HOME/.config/polybar/dots/configLightTheme $HOME/.config/polybar/config");
			break;
	}
  	return 0;
}


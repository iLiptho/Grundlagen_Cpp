// Uebung_1_Adventure.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "windows.h"
#include <iostream>
#include <time.h>
using namespace std;



int wuerfeln()
{
	srand((unsigned int)time(0));
	int xfaktor= (rand() % 6) + 1;
	return xfaktor;
}
int main()
{
	int command;
	cout << wuerfeln() << endl;
	cout << "Ich vs Dragon\nDu befindest dich in der Hoehle des schlafenden Drachens" << endl;
	cout << "Was tust du?"<< endl;
	cout << "(1) Den Drachen angreifen" << endl;
	cout << "(2) Dich umsehen" << endl;
	cout << "(3) Dich an ihn heranschleichen"  << endl;
	cin >> command;
	if (command == 1) 
	{
		if (wuerfeln() < 6)
		{
			cout << "Der Drache erwacht und speit sofort Feuer. Du bist sofort Tot" << endl;
			ShellExecute(NULL, "Open" , "http://www.feelsbadman.com/", NULL, NULL, 1);
		}
		else 
		{
			cout << "Zu deinem Glueck erwacht der Drache nicht \nund du versetzt den ersten Schlag" << endl;
			if (wuerfeln() < 6)
			{
				cout << "Dieser war zu deinem Glueck sofort toedlich. \nDu hast gewonnen! (AlwaysLucky)" << endl;
			}
			cout << "Nun ist auch der Drache erwacht und baeumt sich auf.\n Was tust du?"<< endl;
			cout << "(1) Ich versuche Abstand zu gewinnen!" << endl;
			cout << "(2) Ich sehe mich um!" << endl;
			cin >> command;
			if (command == 1)
			{
				if (wuerfeln() < 4)
				{
					cout << "Der Drache schlägt wild um sich, \ntrifft dich dabei aber toedlich. \nRiP Dreams" << endl;
				}
				else 
				{
					cout << "Der Drache schlaegt wild um sich, \ndu kannst allerdings ausweichen!\n Was tust du?" << endl;
					cout << "(1) Jetzt wo er erschoepft ist greife ich erneut an!" << endl;
					cout << "(2) Ich versuche hinter ihn zu kommen" << endl;
					cin >> command;
					if (command == 1) 
					{
						if (wuerfeln() < 5) {
							cout << "Du kommst an ihn heran und versetzt ihm einen toedlichen Schlag. \nDu gewinnst!" << endl;
						}
						else
						{
							cout << "Der Drache hat sich laengst erholt als du bei ihm wieder ankommst \nund erschlaegt dich!\n never skip leg day" << endl;
						}
					}
					if (command== 2)
					{
						cout << "yo dude, der Drache is ziemlich BIG. \nEr dich einfach mit seinem Schwanz erschlagen. REKT!" << endl;
					}
				}
			}
			if (command == 2)
			{
				cout << "Im Eifer des Gefechts achtest du nicht auf den Drachen \nund endest als gegartes Dosenfutter!" << endl;
			}
		}
	}
	if (command == 2)
	{
		cout << "Du erkennst einen grosse instabile Wand genau neben dem Drachen \nund eine scheinbar funktionstuechtige Glocke" << endl;
		cout << "Was tust du?" << endl;
		cout << "(1) Versuchen die Wand einstuerzen zu lassen" << endl;
		cout << "(2) Die Glocke laeuten" << endl;
		cin >> command;
		if (command == 1)
		{
			if (wuerfeln() < 5)
			{
				cout << "Du bekommst die Wand nicht zum Einbruch allerdings erwacht der Drache, \ndu bist allerdings zu abgelenkt ihn es zu bemerken. \nDen Rest kannst  du dir denken!" << endl;
			}
			else
			{
				if(wuerfeln() < 4)
				{
					cout << "Die Wand stuerzt ein und begraebt den Drachen. Ez Game Ez Life." << endl;
				}
				else
				{
					cout << "Die Wand stuerzt ein und begraebt dich und den Drachen. \nWar jetzt nicht so zweckdienlich oder?" << endl;
				}
			}
		}
		if (command == 2)
		{
			if (wuerfeln() < 4)
			{
				cout << "Der Steinwand scheint dem nicht standzuhalten und bricht ein" << endl;
			}
			else
			{
				cout << "Der Drache ist scheinbar anfaellig gegenueber lauten Geraeuschen. Er schreit und rennt schlagartig aus der Hoehle und ueberrennt dich dabei. 5 Tonnen sind unbequem! " << endl;
			}
		}
	}
	if (command == 3)
	{
		cout << "Du bist Leider ein schwerer Ritter, \nder Drache hoert dich und und speit sofort Feuer" << endl;
		ShellExecute(NULL, "Open", "http://www.feelsbadman.com/", NULL, NULL, 1);
	}
	
    return 0;
}


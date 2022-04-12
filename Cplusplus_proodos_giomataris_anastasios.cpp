#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <windows.h>


using namespace std;
     void welcome();
	 void chapter1();
	 void chapter2();
	 void chapter3();
	 void chapter4();
	 void chapter5();
	 void chapter6();
	 void chapter7();
int main() {
	
	 welcome();
	 chapter1();
	 chapter2();
	 chapter3();
	 chapter4();
	 chapter5();
	 chapter6();
	 chapter7();
} 


void welcome() {
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
        if (i<10)
        Beep(0,300);
        if (i>=10 && i<20)
        Beep(0,200);
        if (i>=10)
        Beep(0,100);
      
    }
    system("CLS");
	cout << "\t\t\t                                               **Welcome tarnished**                                   " << endl << endl;
	cout << "\t You will soon face your most feared nightmares come to life, as the elden ring shatered and the undead Elden Lord have wake up from their long last sleep, stealing the shards!!" << endl << endl << "\t He came to defend his throne from the tarnished one once more." << endl << endl;
	cout << "\t Your goal is to deafeat the first elden lord and claim the throne and collect the ring, in conclusion of being the ultimate Elden lord protecting those in need and slautering those who disrespect your name and power..." << endl << endl;
	cout << "\t You wake up in a strange but real world, you realise you have been followed by a stanger and starts asking you questions" << endl << endl;
	cout << "\t What are you doing next?" << endl << endl;
}
void chapter1() {
	int answer;
	int strangerhealth = 100;
	int health = 100;

	int chapter2();
	do {

		cout << "\t 1: You take out your sword and start slashing his body." << endl << endl;
		cout << "\t 2: You sit down and hear what hes saying." << endl << endl;
		cin >> answer;
		system("CLS");

		if (answer == 1) {

			cout << "\t You've chosen to take your sword out and start slashing his body, that was a bad move as he dodges every attack and starts slaping you." << endl << endl;
			health = 0;
		}
		else if (answer == 2) {

			cout << "\t You've chosen to sit down and hear what hes saying, he said to you to take his katana to defeat your oponents." << endl << endl;
			system("pause");
			
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\tLoading";
        char x=219;
        cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,250);
    if (i>=10 && i<20)
        Beep(0,150);
    if (i>=10)
        Beep(0,70);
      
    }
	
			system("CLS");
			chapter2();
			
			
		}
		else {
			cout << "\t invalid number" << endl << endl;
			Beep(1000,1000);
			system("CLS");
			chapter1();

		}

	} while (strangerhealth > 0 && health > 0);
	if (health <= 0) {
		cout << "\tThe stranger slaped the shit out of and and you died istantly when he was done. " << endl << endl;
		cout << "\tYour health after battle is :" << health << endl << endl;
		cout << "\tYou will be revived shotly please wait while the chapter is loading..." << endl << endl;
		Beep (0,4000);
		system("CLS");
		welcome();
        chapter1();
		
	}

}
void chapter2() {
	
	system("CLS");
	cout << "\t You took the katana from the hands of the stranger...You noticed there is something strange about it, a weird blood magic surrounding the blade." << endl << endl;
	cout << "\t The stranger left a message in your poket saying its an old blood controling magic that lets you control the blood levels of the enemies" << endl << endl;
	cout << "\t What are you doing next?" << endl << endl;

    int answer;
	int strangerhealth = 100;
	int health = 100;
	int chapter3();
	do {

		cout << "\t 1: You burn the message you found." << endl << endl;
		cout << "\t 2: You try to control this new power you just find out." << endl << endl;
		cin >> answer;
		system("CLS");

		if (answer == 1) {

			cout << "\t You've chosen to burn the message but it was a cursed paper that the moment you tried to burn you burned yourself." << endl << endl;
			health = 0;
		}
		else if (answer == 2) {

			cout << "\t Your training has began and you start learning the new powers of your katana in conclusion for you to be upgraded into a sorcerer." << endl << endl;
			system("pause");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,300);
    if (i>=10 && i<20)
        Beep(0,200);
    if (i>=10)
        Beep(0,100);
      
    }
			system("CLS");
			
			chapter3();
			
			
		}
		else {
			cout << "\t invalid number" << endl << endl;
			Beep(1000,1000);
			system("CLS");
			chapter2();

		}

	} while (strangerhealth > 0 && health > 0);
	if (health <= 0) {
		
		
		cout << "\tYou will be revived shotly please wait while the chapter is loading..." << endl << endl;
		Beep (0,4000);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\tLoading";
        char x=219;
        cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,250);
    if (i>=10 && i<20)
        Beep(0,150);
    if (i>=10)
        Beep(0,70);
      
    }
		system("CLS");
        chapter2 ();
		
	}

}
void chapter3() {
	int answer;
	int strangerhealth = 100;
	int health = 100;
	int strangerdmg = rand() % 10 + 15;
	int herodmg = rand() % 15 + 20;
	do {
        cout << "\t You are heading now into the lair of the first elden lord in the history of the elden world.\n" << endl << endl;
        cout << "\t Suddenly you face 2 cursed humanoids who charge towards you with their long swords.. What do you do next?" << endl << endl; 
		cout << "\t 1: You cast a spell at them with the help of your katana and hope they fall with one hit." << endl << endl;
		cout << "\t 2: You flee the scene of the battle and go into the lair of the elden lord." << endl << endl;
		cin >> answer;
		system("CLS");

		if (answer == 1) {

			cout << "\t You've chosen to cast a spell at them, you took your katana out and you speak the magic words..." << endl << endl;
			system ("CLS");
			cout << "\t\t\t aaaAAAAAVADAAA CATABRAAAA"<< endl << endl;
			cout << "\t The spell acually worked!! The hit you did vanished them instantly they didnt even manage to take a breath!!!" << endl << endl;
			Beep(0, 6000);
			system ("CLS");
		    chapter4();
			
		}
		else if (answer == 2) {

			cout << "\t You've chosen to flee the scene of the battle, the humanoids left you alone at the end because the sensed a coward not worthy to loose their lifes for." << endl << endl;
			Beep(0, 4000);
			system ("CLS");
		    chapter4();
			
		}
		else {
			cout << "\t invalid number" << endl << endl;
			
			Beep(1000, 1000);
			system("CLS");
			chapter3();

		}

	} while (strangerhealth > 0 && health > 0);
	
}                
void chapter4() {
	
	system("CLS");
	cout << "\t You arived into the lair of the first elden lord." << endl << endl;
	cout << "\t The doors are opening as soon as you arived, you see a buffed up old man with a spirit lion behind him. The lion helps the man to fight." << endl << endl;
	cout << "\t The old man start speaking about the future and warns you that you dont want this fight." << endl << endl;
	cout << "\t What do you do next?" << endl << endl;

    int answer;
	int strangerhealth = 100;
	int health = 100;
	int chapter5();
	do {

		cout << "\t 1: You ignore the warnings and you start running into him and his lion." << endl << endl;
		cout << "\t 2: You ignore the warnings and you cast a spell to him and his lion." << endl << endl;
		cin >> answer;
		system("CLS");

		if (answer == 1) {

			cout << "\t You've chosen to charge at him and his lion, bad move, the lion sits infront of the man and bites your head clean off." << endl << endl;
			health = 0;
		}
		else if (answer == 2) {

			cout << "\t You've chosen to cast a spell at him and his lion, the lion sits infront of the man but your spell sends the lion straight to hell. " << endl << endl;
			system("pause");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,300);
    if (i>=10 && i<20)
        Beep(0,200);
    if (i>=10)
        Beep(0,100);
      
    }
			system("CLS");
			
			chapter5();
			
			
		}
		else {
			cout << "\t invalid number" << endl << endl;
			Beep(1000,1000);
			system("CLS");
			chapter4();

		}

	} while (strangerhealth > 0 && health > 0);
	if (health <= 0) {
		
		
		cout << "\tYou will be revived shotly please wait while the chapter is loading..." << endl << endl;
		Beep (0,4000);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\tLoading";
        char x=219;
        cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,250);
    if (i>=10 && i<20)
        Beep(0,150);
    if (i>=10)
        Beep(0,70);
      
    }
	
		system("CLS");
        chapter4 ();
		
	}

}
void chapter5() {
	
	system("CLS");
	cout << "\t The old man saw his own spirit animan/friend beign killed infron of him." << endl << endl;
	cout << "\t Old man: HOW DARE YOU... TARNISHED ONE!!!!" << endl << endl;
	cout << "\t Then he proceeds to absorb the spirit powers of the lion and now you are in his eyesight." << endl << endl;
	cout << "\t He charges full of rage at you and makes a powerfull strike with the spirit he just absorbed." << endl << endl;
	cout << "\t What do you do?" << endl << endl;

    int answer;
	int strangerhealth = 100;
	int health = 100;
	int chapter6();
	do {

		cout << "\t 1: Cast a shield spell." << endl << endl;
		cout << "\t 2: try to dodge the attack." << endl << endl;
		cin >> answer;
		system("CLS");

		if (answer == 1) {

			cout << "\t The spell you casted it was not enough to stop his attack his had passed right through it and the rest is history." << endl << endl;
			health = 0;
		}
		else if (answer == 2) {

			cout << "\t That was close! You barely dodged the attack now you have 2 choices" << endl << endl;
			system("pause");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,300);
    if (i>=10 && i<20)
        Beep(0,200);
    if (i>=10)
        Beep(0,100);
      
    }
			
			chapter6();
			
			
		}
		else {
			cout << "\t invalid number" << endl << endl;
			Beep(1000,1000);
			system("CLS");
			chapter5();

		}

	} while (strangerhealth > 0 && health > 0);
	if (health <= 0) {
		
		
		cout << "\tYou will be revived shotly please wait while the chapter is loading..." << endl << endl;
		Beep (0,4000);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\tLoading";
        char x=219;
        cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,250);
    if (i>=10 && i<20)
        Beep(0,150);
    if (i>=10)
        Beep(0,70);
      
    }
	
		system("CLS");
        chapter5 ();
		
	}

}
void chapter6() {
	
	system("CLS");

    int answer;
	int strangerhealth = 100;
	int health = 100;
	int chapter7();
	do {
        
		cout << "\t 1: Use the most powerfull spell you have learned." << endl << endl;
		cout << "\t 2: Use the katana." << endl << endl;
	    
		cin >> answer;
		system("CLS");

		if (answer == 1) {

			cout << "\t You are now casting your spell.. Some weird blue magic super beam came out of your hands, the spell is so stong you didnt make it through.." << endl << endl;
			health = 0;
		}
		else if (answer == 2) {

			cout << "\t You took your katana out and with the blood magic it has you drained every last of the old mans blood in conclusion of killing him. " << endl << endl;
			system("pause");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\tLoading";
    char x=219;
    cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,300);
    if (i>=10 && i<20)
        Beep(0,200);
    if (i>=10)
        Beep(0,100);
      
    }
			system("CLS");
			
			chapter7();
			
			
		}
		else {
			cout << "\t invalid number" << endl << endl;
			Beep(1000,1000);
			system("CLS");
			chapter6();

		}

	} while (strangerhealth > 0 && health > 0);
	if (health <= 0) {
		
		
		cout << "\tYou will be revived shotly please wait while the chapter is loading..." << endl << endl;
		Beep (0,4000);
		cout<<"\n\n\n\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\tLoading";
        char x=219;
        cout<<x;

    for (int i=0; i<35; i++)
    {
        cout<<x;
    if (i<10)
        Beep(0,250);
    if (i>=10 && i<20)
        Beep(0,150);
    if (i>=10)
        Beep(0,70);
      
    }
	
		system("CLS");
        chapter6();
		
	}

}
void chapter7() {
	int welcome();
	system("CLS");
	cout << "\t\t\t CONGRATS!!! YOU WON..You are now the new elden lord!!!" << endl << endl;

	
welcome();		
	

}

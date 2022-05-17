#include "MyForm.h"
/*	A webbrowser program made in C++. Created by Kttra.
 
	This program has a very specific use case, so I do not expect
	much people to have a need for it.
	
	Main Takeaway:
	I have decided to publish this program on github just in the event
	it helps someone else in creating their own webbrowser application
	or help understand how the header files should be formatted.
	
	This program also shows examples of using background workers to cancel
	tasks or run them simutaneously. In addition, system commands are used
	to open other web browsers like brave/edge/or chrome. Ways to convert
	the Standard String to a System::String to use in this winform are present.

	What the Program Does:
	To load different various web pages for different browser types. The main website
	we will use is in the link global variable in MyForm.cpp. In the code, there are
	vectors that contain strings/words to append to our global link. Each button
	in the main form corresponds to different vectors.

	After clicking a button, the program will run background workers that That will
	load the websites on chrome and edge/webbrowser simultaneously with random times
	in between.
*/
using namespace System;
using namespace System::Windows::Forms;

// Global variable declaration:
int index = 0;
int maxPage = 4;
int indexM = 0;
int maxPageM = 4;
int indexEdge = 0;
int maxPageEdge = 4;
//This is the main link we will use
string link = "https://www.google.com/search?q=define+";

// Functions
void rword(char* word);
string convertToString(char* a, int size);
void extraSearches(int numSearches, string mode);
bool isCorrect(int numSearches, int numArgsRead, string mode);

[STAThread]
void main() {
	//srand(time(NULL));
	//int level;
	//int numArgsRead;

	cout << "Webbrowser program created by Kttra.\n";
	//Load the browsers on bootup if you wish
	//system("start microsoftedge.exe");
	//system("start brave.exe");
	//system("start chrome.exe");

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Webbrower::MyForm form;
	Application::Run(% form);
}

void rword(char* word) {
	int len = rand() % 6 + 1;
	word[len] = 0;
	while (len) word[--len] = 'a' + rand() % 26;
}

string convertToString(char* a, int size) {
	int i;
	string s = "";
	for (i = 0; i < size; i++) {
		s = s + a[i];
	}
	return s;
}

void extraSearches(int numSearches, string mode) {
	char word[7];
	int x = 0;
	int wordSize = sizeof(word) / sizeof(char);
	string command;

	if (mode == "desktop") {
		command = "start chrome.exe " + link;
	}
	else if (mode == "mobile") {
		command = "start brave.exe " + link;
	}
	else {
		command = "start microsoft-edge:" + link;
	}

	srand(time(0));
	while (x < numSearches) {
		rword(word);
		string s_a = convertToString(word, wordSize);
		x = x + 1;
		string runStr = command + s_a;
		system(runStr.c_str());
		cout << "Extra Search progress: " << x << " / " << numSearches << "\n";
		Sleep(rand() % 2000 + 7000);
	}
}

bool isCorrect(int numSearches, int numArgsRead, string mode) {
	bool isValid = (numArgsRead == 1);
	char lastChar;
	int num = 0;

	do {
		scanf("%c", &lastChar);
		if (!isspace(lastChar)) {
			isValid = false;
		}
	} while (lastChar != '\n');

	if (!isValid) {
		cout << "Not implemented! Try again." << std::endl;
		return true;
	}
	if (numSearches > num) {
		//cout << "Changing " << mode << " searches count to " << level << "\n";
		extraSearches(numSearches, mode);
		return false;
	}
	else {
		cout << "Not implemented! Try again." << std::endl;
		return true;
	}
}

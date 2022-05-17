#pragma once
#include "MyForm.h"
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib> // For rand()
#include <vector>
#include <string>
#include <ctime> // For time(NULL)
#include <fstream>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

// Calling Global variables
extern int index;
extern int maxPage;
extern int indexM;
extern int maxPageM;
extern int indexEdge;
extern int maxPageEdge;
extern string link;

// Calling external functions
extern void rword(char* word);
extern string convertToString(char* a, int size);
extern void extraSearches(int numSearches, string mode);
extern bool isCorrect(int numSearches, int numArgsRead, string mode);

namespace Webbrower {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//Constructor code here
			//Disables script errors from popping up due to internet explorer being outdated
			webBrowser1->ObjectForScripting = this;
			webBrowser1->AllowWebBrowserDrop = false;
			webBrowser1->ScriptErrorsSuppressed = true;
			webBrowser1->WebBrowserShortcutsEnabled = false;
			webBrowser1->IsWebBrowserContextMenuEnabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;
	protected:

	private: System::Windows::Forms::Button^ btnForward;
	private: System::Windows::Forms::TextBox^ txtNavigate;
	protected:


	protected:

	protected:


	private: System::Windows::Forms::Button^ btnNavigate;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::ComponentModel::BackgroundWorker^ tuDesktop;
	private: System::ComponentModel::BackgroundWorker^ wedDesktop;
	private: System::ComponentModel::BackgroundWorker^ trDesktop;
	private: System::ComponentModel::BackgroundWorker^ friDesktop;
	private: System::ComponentModel::BackgroundWorker^ satDesktop;
	private: System::ComponentModel::BackgroundWorker^ sunDesktop;
	private: System::ComponentModel::BackgroundWorker^ monMobile;


	private: System::ComponentModel::BackgroundWorker^ wedMobile;
	private: System::ComponentModel::BackgroundWorker^ trMobile;
	private: System::ComponentModel::BackgroundWorker^ friMobile;
	private: System::ComponentModel::BackgroundWorker^ satMobile;
	private: System::ComponentModel::BackgroundWorker^ sunMobile;
	private: System::Windows::Forms::Button^ monday;
	private: System::Windows::Forms::Label^ mode;
	private: System::Windows::Forms::Label^ tracker;
	private: System::Windows::Forms::Button^ testButton;
	private: System::ComponentModel::BackgroundWorker^ testBackground;

	private: System::Windows::Forms::Button^ tuesday;
	private: System::Windows::Forms::Button^ wednesday;
	private: System::Windows::Forms::Button^ thursday;
	private: System::Windows::Forms::Button^ friday;
	private: System::Windows::Forms::Button^ saturday;
	private: System::Windows::Forms::Button^ sunday;
	private: System::ComponentModel::BackgroundWorker^ tuesMobile;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Label^ tracker2;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::Label^ tracker3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ load;
	private: System::Windows::Forms::Label^ Run;
	private: System::ComponentModel::BackgroundWorker^ easyRun;
	private: System::ComponentModel::BackgroundWorker^ easyRun2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{	
			this->components = (gcnew System::ComponentModel::Container());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnForward = (gcnew System::Windows::Forms::Button());
			this->txtNavigate = (gcnew System::Windows::Forms::TextBox());
			this->btnNavigate = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->tuDesktop = (gcnew System::ComponentModel::BackgroundWorker());
			this->wedDesktop = (gcnew System::ComponentModel::BackgroundWorker());
			this->trDesktop = (gcnew System::ComponentModel::BackgroundWorker());
			this->friDesktop = (gcnew System::ComponentModel::BackgroundWorker());
			this->satDesktop = (gcnew System::ComponentModel::BackgroundWorker());
			this->sunDesktop = (gcnew System::ComponentModel::BackgroundWorker());
			this->monMobile = (gcnew System::ComponentModel::BackgroundWorker());
			this->wedMobile = (gcnew System::ComponentModel::BackgroundWorker());
			this->trMobile = (gcnew System::ComponentModel::BackgroundWorker());
			this->friMobile = (gcnew System::ComponentModel::BackgroundWorker());
			this->satMobile = (gcnew System::ComponentModel::BackgroundWorker());
			this->sunMobile = (gcnew System::ComponentModel::BackgroundWorker());
			this->monday = (gcnew System::Windows::Forms::Button());
			this->mode = (gcnew System::Windows::Forms::Label());
			this->tracker = (gcnew System::Windows::Forms::Label());
			this->testButton = (gcnew System::Windows::Forms::Button());
			this->testBackground = (gcnew System::ComponentModel::BackgroundWorker());
			this->tuesday = (gcnew System::Windows::Forms::Button());
			this->wednesday = (gcnew System::Windows::Forms::Button());
			this->thursday = (gcnew System::Windows::Forms::Button());
			this->friday = (gcnew System::Windows::Forms::Button());
			this->saturday = (gcnew System::Windows::Forms::Button());
			this->sunday = (gcnew System::Windows::Forms::Button());
			this->tuesMobile = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->tracker2 = (gcnew System::Windows::Forms::Label());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->tracker3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->load = (gcnew System::Windows::Forms::Label());
			this->Run = (gcnew System::Windows::Forms::Label());
			this->easyRun = (gcnew System::ComponentModel::BackgroundWorker());
			this->easyRun2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btnBack->Location = System::Drawing::Point(13, 13);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(22, 23);
			this->btnBack->TabIndex = 0;
			this->btnBack->Text = L"<";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &MyForm::btnBack_Click);
			// 
			// btnForward
			// 
			this->btnForward->ForeColor = System::Drawing::SystemColors::Highlight;
			this->btnForward->Location = System::Drawing::Point(41, 13);
			this->btnForward->Name = L"btnForward";
			this->btnForward->Size = System::Drawing::Size(22, 23);
			this->btnForward->TabIndex = 1;
			this->btnForward->Text = L">";
			this->btnForward->UseVisualStyleBackColor = true;
			this->btnForward->Click += gcnew System::EventHandler(this, &MyForm::btnForward_Click);
			// 
			// txtNavigate
			// 
			this->txtNavigate->Location = System::Drawing::Point(69, 13);
			this->txtNavigate->Name = L"txtNavigate";
			this->txtNavigate->Size = System::Drawing::Size(561, 20);
			this->txtNavigate->TabIndex = 2;
			this->txtNavigate->TextChanged += gcnew System::EventHandler(this, &MyForm::txtNavigate_TextChanged);
			// 
			// btnNavigate
			// 
			this->btnNavigate->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnNavigate->Location = System::Drawing::Point(695, 10);
			this->btnNavigate->Name = L"btnNavigate";
			this->btnNavigate->Size = System::Drawing::Size(75, 23);
			this->btnNavigate->TabIndex = 3;
			this->btnNavigate->Text = L"Navigate";
			this->btnNavigate->UseVisualStyleBackColor = true;
			this->btnNavigate->Click += gcnew System::EventHandler(this, &MyForm::btnNavigate_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(-1, 66);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1085, 604);
			this->webBrowser1->TabIndex = 4;
			this->webBrowser1->Url = (gcnew System::Uri(L"http://google.com", System::UriKind::Absolute));
			this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MyForm::webBrowser1_DocumentCompleted);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(872, 13);
			this->progressBar1->Maximum = 22;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(90, 20);
			this->progressBar1->TabIndex = 5;
			// 
			// tuDesktop
			// 
			this->tuDesktop->WorkerSupportsCancellation = true;
			this->tuDesktop->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::tuDesktop_DoWork);
			// 
			// wedDesktop
			// 
			this->wedDesktop->WorkerSupportsCancellation = true;
			this->wedDesktop->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::wedDesktop_DoWork);
			// 
			// trDesktop
			// 
			this->trDesktop->WorkerSupportsCancellation = true;
			this->trDesktop->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::trDesktop_DoWork);
			// 
			// friDesktop
			// 
			this->friDesktop->WorkerSupportsCancellation = true;
			this->friDesktop->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::friDesktop_DoWork);
			// 
			// satDesktop
			// 
			this->satDesktop->WorkerSupportsCancellation = true;
			this->satDesktop->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::satDesktop_DoWork);
			// 
			// sunDesktop
			// 
			this->sunDesktop->WorkerSupportsCancellation = true;
			this->sunDesktop->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::sunDesktop_DoWork);
			// 
			// monMobile
			// 
			this->monMobile->WorkerSupportsCancellation = true;
			this->monMobile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::monMobile_DoWork);
			// 
			// wedMobile
			// 
			this->wedMobile->WorkerSupportsCancellation = true;
			this->wedMobile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::wedMobile_DoWork);
			// 
			// trMobile
			// 
			this->trMobile->WorkerSupportsCancellation = true;
			this->trMobile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::trMobile_DoWork);
			// 
			// friMobile
			// 
			this->friMobile->WorkerSupportsCancellation = true;
			this->friMobile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::friMobile_DoWork);
			// 
			// satMobile
			// 
			this->satMobile->WorkerSupportsCancellation = true;
			this->satMobile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::satMobile_DoWork);
			// 
			// sunMobile
			// 
			this->sunMobile->WorkerSupportsCancellation = true;
			this->sunMobile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::sunMobile_DoWork);
			// 
			// monday
			// 
			this->monday->ForeColor = System::Drawing::SystemColors::ControlText;
			this->monday->Location = System::Drawing::Point(69, 39);
			this->monday->Name = L"monday";
			this->monday->Size = System::Drawing::Size(75, 23);
			this->monday->TabIndex = 6;
			this->monday->Text = L"Monday";
			this->monday->UseVisualStyleBackColor = true;
			this->monday->Click += gcnew System::EventHandler(this, &MyForm::monday_Click);
			// 
			// mode
			// 
			this->mode->AutoSize = true;
			this->mode->BackColor = System::Drawing::Color::Transparent;
			this->mode->Location = System::Drawing::Point(12, 44);
			this->mode->Name = L"mode";
			this->mode->Size = System::Drawing::Size(41, 13);
			this->mode->TabIndex = 8;
			this->mode->Text = L"Default";
			this->mode->Click += gcnew System::EventHandler(this, &MyForm::mode_Click);
			// 
			// tracker
			// 
			this->tracker->AutoSize = true;
			this->tracker->BackColor = System::Drawing::Color::Transparent;
			this->tracker->Location = System::Drawing::Point(877, 44);
			this->tracker->Name = L"tracker";
			this->tracker->Size = System::Drawing::Size(71, 13);
			this->tracker->TabIndex = 9;
			this->tracker->Text = L"Progress: 0/4";
			this->tracker->Click += gcnew System::EventHandler(this, &MyForm::tracker_Click);
			// 
			// testButton
			// 
			this->testButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->testButton->Location = System::Drawing::Point(695, 37);
			this->testButton->Name = L"testButton";
			this->testButton->Size = System::Drawing::Size(75, 23);
			this->testButton->TabIndex = 10;
			this->testButton->Text = L"Cancel All";
			this->testButton->UseVisualStyleBackColor = true;
			this->testButton->Click += gcnew System::EventHandler(this, &MyForm::testButton_Click);
			// 
			// testBackground
			// 
			this->testBackground->WorkerReportsProgress = true;
			this->testBackground->WorkerSupportsCancellation = true;
			this->testBackground->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::testBackground_DoWork);
			// 
			// tuesday
			// 
			this->tuesday->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tuesday->Location = System::Drawing::Point(150, 39);
			this->tuesday->Name = L"tuesday";
			this->tuesday->Size = System::Drawing::Size(75, 23);
			this->tuesday->TabIndex = 11;
			this->tuesday->Text = L"Tuesday";
			this->tuesday->UseVisualStyleBackColor = true;
			this->tuesday->Click += gcnew System::EventHandler(this, &MyForm::tuesday_Click);
			// 
			// wednesday
			// 
			this->wednesday->ForeColor = System::Drawing::SystemColors::ControlText;
			this->wednesday->Location = System::Drawing::Point(231, 39);
			this->wednesday->Name = L"wednesday";
			this->wednesday->Size = System::Drawing::Size(75, 23);
			this->wednesday->TabIndex = 12;
			this->wednesday->Text = L"Wednesday";
			this->wednesday->UseVisualStyleBackColor = true;
			this->wednesday->Click += gcnew System::EventHandler(this, &MyForm::wednesday_Click);
			// 
			// thursday
			// 
			this->thursday->ForeColor = System::Drawing::SystemColors::ControlText;
			this->thursday->Location = System::Drawing::Point(312, 39);
			this->thursday->Name = L"thursday";
			this->thursday->Size = System::Drawing::Size(75, 23);
			this->thursday->TabIndex = 13;
			this->thursday->Text = L"Thursday";
			this->thursday->UseVisualStyleBackColor = true;
			this->thursday->Click += gcnew System::EventHandler(this, &MyForm::thursday_Click);
			// 
			// friday
			// 
			this->friday->ForeColor = System::Drawing::SystemColors::ControlText;
			this->friday->Location = System::Drawing::Point(393, 39);
			this->friday->Name = L"friday";
			this->friday->Size = System::Drawing::Size(75, 23);
			this->friday->TabIndex = 14;
			this->friday->Text = L"Friday";
			this->friday->UseVisualStyleBackColor = true;
			this->friday->Click += gcnew System::EventHandler(this, &MyForm::friday_Click);
			// 
			// saturday
			// 
			this->saturday->ForeColor = System::Drawing::SystemColors::ControlText;
			this->saturday->Location = System::Drawing::Point(474, 39);
			this->saturday->Name = L"saturday";
			this->saturday->Size = System::Drawing::Size(75, 23);
			this->saturday->TabIndex = 15;
			this->saturday->Text = L"Saturday";
			this->saturday->UseVisualStyleBackColor = true;
			this->saturday->Click += gcnew System::EventHandler(this, &MyForm::saturday_Click);
			// 
			// sunday
			// 
			this->sunday->ForeColor = System::Drawing::SystemColors::ControlText;
			this->sunday->Location = System::Drawing::Point(555, 39);
			this->sunday->Name = L"sunday";
			this->sunday->Size = System::Drawing::Size(75, 23);
			this->sunday->TabIndex = 16;
			this->sunday->Text = L"Sunday";
			this->sunday->UseVisualStyleBackColor = true;
			this->sunday->Click += gcnew System::EventHandler(this, &MyForm::sunday_Click);
			// 
			// tuesMobile
			// 
			this->tuesMobile->WorkerSupportsCancellation = true;
			this->tuesMobile->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::tuesMobile_DoWork_1);
			// 
			// backgroundWorker2
			// 
			this->backgroundWorker2->WorkerSupportsCancellation = true;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(968, 13);
			this->progressBar2->Maximum = 10;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(84, 20);
			this->progressBar2->TabIndex = 17;
			// 
			// tracker2
			// 
			this->tracker2->AutoSize = true;
			this->tracker2->BackColor = System::Drawing::Color::Transparent;
			this->tracker2->Location = System::Drawing::Point(970, 43);
			this->tracker2->Name = L"tracker2";
			this->tracker2->Size = System::Drawing::Size(71, 13);
			this->tracker2->TabIndex = 18;
			this->tracker2->Text = L"Progress: 0/4";
			this->tracker2->Click += gcnew System::EventHandler(this, &MyForm::tracker2_Click);
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(777, 13);
			this->progressBar3->Maximum = 24;
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(89, 20);
			this->progressBar3->TabIndex = 19;
			// 
			// tracker3
			// 
			this->tracker3->AutoSize = true;
			this->tracker3->BackColor = System::Drawing::Color::Transparent;
			this->tracker3->Location = System::Drawing::Point(781, 44);
			this->tracker3->Name = L"tracker3";
			this->tracker3->Size = System::Drawing::Size(71, 13);
			this->tracker3->TabIndex = 20;
			this->tracker3->Text = L"Progress: 0/4";
			this->tracker3->Click += gcnew System::EventHandler(this, &MyForm::tracker3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(799, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Edge";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(894, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Desktop";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(989, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Mobile";
			// 
			// load
			// 
			this->load->AutoSize = true;
			this->load->BackColor = System::Drawing::Color::Transparent;
			this->load->Location = System::Drawing::Point(646, 44);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(31, 13);
			this->load->TabIndex = 24;
			this->load->Text = L"Load";
			this->load->Click += gcnew System::EventHandler(this, &MyForm::load_Click);
			// 
			// Run
			// 
			this->Run->AutoSize = true;
			this->Run->BackColor = System::Drawing::Color::Transparent;
			this->Run->Location = System::Drawing::Point(647, 19);
			this->Run->Name = L"Run";
			this->Run->Size = System::Drawing::Size(27, 13);
			this->Run->TabIndex = 25;
			this->Run->Text = L"Run";
			this->Run->Click += gcnew System::EventHandler(this, &MyForm::Run_Click);
			// 
			// easyRun
			// 
			this->easyRun->WorkerSupportsCancellation = true;
			this->easyRun->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::easyRun_DoWork);
			// 
			// easyRun2
			// 
			this->easyRun2->WorkerSupportsCancellation = true;
			this->easyRun2->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::easyRun2_DoWork);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1084, 668);
			this->Controls->Add(this->Run);
			this->Controls->Add(this->load);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tracker3);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->tracker2);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->sunday);
			this->Controls->Add(this->saturday);
			this->Controls->Add(this->friday);
			this->Controls->Add(this->thursday);
			this->Controls->Add(this->wednesday);
			this->Controls->Add(this->tuesday);
			this->Controls->Add(this->testButton);
			this->Controls->Add(this->tracker);
			this->Controls->Add(this->mode);
			this->Controls->Add(this->monday);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->btnNavigate);
			this->Controls->Add(this->txtNavigate);
			this->Controls->Add(this->btnForward);
			this->Controls->Add(this->btnBack);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Webbrowser";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->GoBack();
}
private: System::Void btnForward_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->GoForward();
}
private: System::Void txtNavigate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//webBrowser1->Navigate(txtNavigate->Text);
}
private: System::Void btnNavigate_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->Navigate(txtNavigate->Text);
}
private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
//Cancel All Background Workers
private: System::Void testButton_Click(System::Object^ sender, System::EventArgs^ e) {
	backgroundWorker1->CancelAsync();
	monMobile->CancelAsync();
	tuDesktop->CancelAsync();
	tuesMobile->CancelAsync();
	wedDesktop->CancelAsync();
	wedMobile->CancelAsync();
	trDesktop->CancelAsync();
	trMobile->CancelAsync();
	friDesktop->CancelAsync();
	friMobile->CancelAsync();
	satDesktop->CancelAsync();
	satMobile->CancelAsync();
	sunDesktop->CancelAsync();
	sunMobile->CancelAsync();
	easyRun->CancelAsync();
	easyRun2->CancelAsync();
}
//Test Background worker
private: System::Void testBackground_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
//Change between Desktop and Mobile mode
private: System::Void mode_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode->Text == "Default") {
		mode->Text = "Desktop";
	}
	else if (mode->Text == "Desktop") {
		mode->Text = "Mobile";
	}
	else {
		mode->Text = "Default";
	}
}
//Monday Button---------------------------------------------------------------------------------------
private: System::Void monday_Click(System::Object^ sender, System::EventArgs^ e) {
	//Deskstop Mode
	if (mode->Text == "Desktop") {
		//If the thread is running, send a cancel request
		if (backgroundWorker1->IsBusy) {
			backgroundWorker1->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			backgroundWorker1->RunWorkerAsync();
		}
	}
	//Mobile mode
	else if (mode->Text == "Mobile"){
		//If the thread is running, send a cancel request
		if (monMobile->IsBusy) {
			monMobile->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			monMobile->RunWorkerAsync();
		}
	}
	else {
		//If the thread is running, send a cancel request
		if (monMobile->IsBusy || backgroundWorker1->IsBusy) {
			monMobile->CancelAsync();
			backgroundWorker1->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			backgroundWorker1->RunWorkerAsync();
			monMobile->RunWorkerAsync();
		}
	}
}
//Monday Desktop
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr = { "abandon", "ability", "able", "about", "about", "above", "above+the+sky", "abroad", "absence", "absent", "absolute",
							"abstract", "abstraction", "abuse", "bus", "abusive", "academic", "accept", "acceptable", "acceptance", "success",
							"access", "accident", "accompany", "according", "account", "noun", "accountant", "accurate", "forecast", "Scrumptious", "Agastopia"};
	vector<string> micEdge = { "garnidelia", "karakuri", "kimi+no+shiranai", "cosmic+train", "brawny", "alike", "smart", "tedious", "rot", "tested",
							   "theory", "group", "political", "bolt", "highpitched", "dispensable", "river", "lucky", "insidious", "subtract", "rare",
							   "sip", "pigs", "lush"};
	
	index = 0;
	indexEdge = 0;

	for (int i = 0; i < maxPageEdge; i++) {
		string str1 = "start microsoft-edge:" + link;
		string runStr = str1 + micEdge[i];
		system(runStr.c_str());
		indexEdge = indexEdge + 1;
		cout << "MonEdge Progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (backgroundWorker1->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}

	for (int i = 0; i < maxPage; i++) {
		string runStr = link + vectStr[i];
		//Convert Standard String to System::String
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		index = index + 1;
		cout << "MonDesktop Progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (backgroundWorker1->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}

	cout << "\nMonday desktop progress is complete.\n";
}
//Monday Mobile
private: System::Void monMobile_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr2 = { "Balance", "Be+nice", "Becoming", "Begin", "Believe", "Belong", "Brave", "Bread", "Breathe", "Bring", "Build",
							"Calm", "Care", "Change", "Cherish", "I+used+to", "rule+the+world", "Feel+the+fear", "in+my", "enemys+eyes", 
							"Gobbledygook", "Halfpace"};
	indexM = 0;

	for (int i = 0; i < maxPageM; i++) {
		string str1 = "start chrome.exe " + link;
		string runStr = str1 + vectStr2[i];
		system(runStr.c_str());
		indexM = indexM + 1;
		cout << "MonMobile Progress:   " << indexM << " / " << maxPageM << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (monMobile->CancellationPending) {
			indexM = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nMonday mobile progress is complete.\n";
}
//Tuesday Button---------------------------------------------------------------------------------------
private: System::Void tuesday_Click(System::Object^ sender, System::EventArgs^ e) {
	//Deskstop Mode
	if (mode->Text == "Desktop") {
		//If the thread is running, send a cancel request
		if (tuDesktop->IsBusy) {
			tuDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			tuDesktop->RunWorkerAsync();
		}
	}
	//Mobile mode
	else if (mode->Text == "Mobile"){
		//If the thread is running, send a cancel request
		if(tuesMobile->IsBusy){
			tuesMobile->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			tuesMobile->RunWorkerAsync();
		}
	}
	else {
	//If the thread is running, send a cancel request
		if (tuesMobile->IsBusy || tuDesktop->IsBusy) {
			tuesMobile->CancelAsync();
			tuDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			tuesMobile->RunWorkerAsync();
			tuDesktop->RunWorkerAsync();
		}
	}
}
//Tuesday Desktop
private: System::Void tuDesktop_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr = { "Choose", "Circle", "Commit", "Commitment", "Compassion", "Complete", "Connect", "Content", "Courage", "Courageous", "Craft",
							"Create", "Cultivate", "Curious", "Dance", "Delight", "Desire", "Develop", "Discipline", "Embrace", "Engage",
							"En+marche", "Enough", "Exert", "Explore", "Faithful", "Fascinate", "Fill", "Find", "Flourish", "Impignorate", "Jentacular"};
	vector<string> micEdge = { "love+and+joy", "rain+and+asphalt", "daybreak+and+fireflies", "Odds+and+Ends", "chain", "or", "precedent", "reckless",
							   "silence", "butterfly", "crude", "mother", "fist", "convulsion", "mutual", "rugby", "majority", "ordinary", "offense",
							   "football", "fruit", "ancestor", "defeat", "keep"};
	
	index = 0;
	indexEdge = 0;

	for (int i = 0; i < maxPageEdge; i++) {
		string str1 = "start microsoft-edge:" + link;
		string runStr = str1 + micEdge[i];
		system(runStr.c_str());
		indexEdge = indexEdge + 1;
		cout << "TuesEdge Progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (tuDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n";
			return;
		}
	}
	for (int i = 0; i < maxPage; i++) {
		string runStr = link + vectStr[i];
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		index = index + 1;
		cout << "TuesDesktop Progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (tuDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n";
			return;
		}
	}
	cout << "\nTuesday desktop progress is complete.\n";
}
//Tuesday Mobile
private: System::Void tuesMobile_DoWork_1(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr2 = { "Flow", "Focus", "Forty", "Forward", "Free", "Fresh", "Fun", "Gather", "Gift", "Grace", "Grateful",
						"Gratitude", "Grow", "Growth", "Habit", "Easily", "playing", "never", "bat", "an+eye", "Nudiustertian", "Quire" };
	
	indexM = 0;

	for (int i = 0; i < maxPageM; i++) {
		string str1 = "start chrome.exe " + link;
		string runStr = str1 + vectStr2[i];
		system(runStr.c_str());
		indexM = indexM + 1;
		cout << "TuesMobile Progress: " << indexM << " / " << maxPageM << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (tuesMobile->CancellationPending) {
			indexM = 0;
			cout << "\nCanceled!\n";
			return;
		}
	}
	cout << "\nTuesday mobile progress is complete.\n";
}
//Wednesday button---------------------------------------------------------------------------------------
private: System::Void wednesday_Click(System::Object^ sender, System::EventArgs^ e) {
	//Deskstop Mode
	if (mode->Text == "Desktop") {
		//If the thread is running, send a cancel request
		if (wedDesktop->IsBusy) {
			wedDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			wedDesktop->RunWorkerAsync();
		}
	}
	//Mobile mode
	else if (mode->Text == "Mobile") {
		//If the thread is running, send a cancel request
		if (wedMobile->IsBusy) {
			wedMobile->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			wedMobile->RunWorkerAsync();
		}
	}
	else {
	//If the thread is running, send a cancel request
		if (wedMobile->IsBusy || wedDesktop->IsBusy) {
			wedMobile->CancelAsync();
			wedDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			wedDesktop->RunWorkerAsync();
			wedMobile->RunWorkerAsync();
		}
	}
}
//Wednesday Desktop
private: System::Void wedDesktop_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr = { "Kind", "Lean", "Learn", "Less", "Leven", "Light", "Listen", "Live", "Look", "Love", "Magic",
							"Make", "Mindful", "Moments", "More", "Move", "Nest", "New", "Notice", "Nourish", "Now", "Tittynope",
							"Nurture", "Open", "Pace", "Passion", "Patience", "Pause", "Peace", "Play", "Possibility", "Yarborough"};
	vector<string> micEdge = { "spica", "deco+27", "adagio", "MINIKOMA", "guitar", "riot", "brave", "worm", "penalty", "inspire",
							   "frequency", "south", "punish","soldier", "meat", "confine", "arrangement", "federation", "inch", "follow",
							   "trunk", "fling", "tell", "judge"};

	index = 0;
	indexEdge = 0;

	//Microsoft edge searches
	for (int i = 0; i < maxPageEdge; i++) {
		string str1 = "start microsoft-edge:" + link;
		string runStr = str1 + micEdge[i];
		system(runStr.c_str());
		indexEdge = indexEdge + 1;
		cout << "WedEdge Progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (wedDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}

	for (int i = 0; i < maxPage; i++) {
		string runStr = link + vectStr[i];
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		index = index + 1;
		cout << "WedDesktop Progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (wedDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nWednesday desktop progress is complete.\n";
}
//Wednesday Mobile
private: System::Void wedMobile_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr2 = { "Happy", "Crescent", "Harmony", "Heal", "Health", "Heart", "Home", "Hope", "Hygge", "Imperfect", "Invest", "Ulotrichous",
							"Invigorate", "Invite", "Journey", "Joy", "Fine?+Oh", "fine?+Sewn", "eyes+I", "broke+to", "see+Well", "Winklepicker"};

	indexM = 0;

	for (int i = 0; i < maxPageM; i++) {
		string str1 = "start chrome.exe " + link;
		string runStr = str1 + vectStr2[i];
		system(runStr.c_str());
		indexM = indexM + 1;
		cout << "WedMobile Progress: " << indexM << " / " << maxPageM << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (wedMobile->CancellationPending) {
			indexM = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nWednesday mobile progress is complete.\n";
}
//Thursday Button---------------------------------------------------------------------------------------
private: System::Void thursday_Click(System::Object^ sender, System::EventArgs^ e) {
	//Deskstop Mode
	if (mode->Text == "Desktop") {
		//If the thread is running, send a cancel request
		if (trDesktop->IsBusy) {
			trDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			trDesktop->RunWorkerAsync();
		}
	}
	//Mobile mode
	else if (mode->Text == "Mobile") {
		//If the thread is running, send a cancel request
		if (trMobile->IsBusy) {
			trMobile->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			trMobile->RunWorkerAsync();
		}
	}
	else {
		//If the thread is running, send a cancel request
		if (trMobile->IsBusy || trDesktop->IsBusy) {
			trMobile->CancelAsync();
			trDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			trDesktop->RunWorkerAsync();
			trMobile->RunWorkerAsync();
		}
	}
}
//Thursday Desktop
private: System::Void trDesktop_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr = { "Running+in+the", "nineties+is", "a+new+way", "I+like+to", "be+Im+just", "running+in", "the+nineties", "come+on", "baby+run", "to+me", "We+are",
							"running+in+the+nineties,", "is+a+new+way+to+set", "me+free", "yes+I+wanna+know", "yes+I+wanna+see", "Running+in+a+crowd", "In+a+faceless", "town", "I+need+to", "feel+the",
							"touch+of", "a+friend", "In+the", "countryside", "I+wander", "far+and+wide", "The+isolation", "gets+me", "again", "Kakorrhaphiophobia", "Xertz" };
	vector<string> micEdge = { "hand+in+hand", "ano+ko+secret", "kimi+no+shiranai", "cosmic+train", "cucumber", "flatware", "disappear", "understand", "wriggle", "staff", "occupation",
							   "place", "guilt", "groan", "hiccup", "salad", "modernize", "tick", "glow", "cooperation", "trip", "snub", "lay", "repetition"};

	index = 0;
	indexEdge = 0;

	//Microsoft edge searches
	for (int i = 0; i < maxPageEdge; i++) {
		string str1 = "start microsoft-edge:" + link;
		string runStr = str1 + micEdge[i];
		system(runStr.c_str());
		indexEdge = indexEdge + 1;
		cout << "ThursEdge Progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);
		
		//Cancel Thread when user presses the button again
		if (trDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}

	for (int i = 0; i < maxPage; i++) {
		string runStr = link + vectStr[i];
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		index = index + 1;
		cout << "ThursDesktop Progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (trDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nThursday desktop progress is complete.\n";
}
//Thursday Mobile
private: System::Void trMobile_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr2 = { "I+dont+know", "where+to+go", "When+I+feel", "like+crying", "Oh+my!", "Its+time", "to+open+myself", "Do+something", "new", "I+want+to+stop", "abjure",
							"and+grow+up+a+bit", "Then+suddenly", "my+power", "and+confidence", "start+swelling", "up", "Magically", "erupt", "MECHAMECHA", "kurushii+kabe", "abide"};

	indexM = 0;

	for (int i = 0; i < maxPageM; i++) {
		string str1 = "start chrome.exe " + link;
		string runStr = str1 + vectStr2[i];
		system(runStr.c_str());
		indexM = indexM + 1;
		cout << "ThursMobile Progress: " << indexM << " / " << maxPageM << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (trMobile->CancellationPending) {
			indexM = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nThursday mobile progress is complete.\n";
}
//Friday Button---------------------------------------------------------------------------------------
private: System::Void friday_Click(System::Object^ sender, System::EventArgs^ e) {
	//Deskstop Mode
	if (mode->Text == "Desktop") {
		//If the thread is running, send a cancel request
		if (friDesktop->IsBusy) {
			friDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			friDesktop->RunWorkerAsync();
		}
	}
	//Mobile mode
	else if (mode->Text == "Mobile") {
		//If the thread is running, send a cancel request
		if (friMobile->IsBusy) {
			friMobile->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			friMobile->RunWorkerAsync();
		}
	}
	else {
		//If the thread is running, send a cancel request
		if (friMobile->IsBusy || friDesktop->IsBusy) {
			friMobile->CancelAsync();
			friDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			friDesktop->RunWorkerAsync();
			friMobile->RunWorkerAsync();
		}
	}
}
private: System::Void friDesktop_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr = { "Although+no+is", "what+I+meant", "for+some+reason", "YES+is+what", "I+said+The+bad", "thing+bout+having", "regrets+is+if", "you+can+fool+them", "then+youre", "innocent",
								"So+busy", "blabbing+away", "unknown+to+me", "Things+donÅft", "look+better+today", "the+mask+I+wear", "is+crumbling+away",
							 "Lapsing+in+depravity", "I+didnt+see", "what+was", "happening", "to+me", "Mayday", "If+you", "find+out", "that+its", "me", "all+that", "I+ask+is", "that+you+simply", "laugh", "at+me"};
	vector<string> micEdge = { "BST+tree", "Black+Red+tree", "JSON", "shared+pointer", "standard", "recommend", "deer", "football", "shorts", "compete", "bacon", "review", "compromise", "wrist", "crackpot",
							   "magazine", "broadcast", "marsh", "prosper", "channel", "danger", "create", "dish", "analyst"};

	index = 0;
	indexEdge = 0;

	for (int i = 0; i < maxPageEdge; i++) {
		string str1 = "start microsoft-edge:" + link;
		string runStr = str1 + micEdge[i];
		system(runStr.c_str());
		indexEdge = indexEdge + 1;
		cout << "FriEdge Progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (friDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}

	for (int i = 0; i < maxPage; i++) {
		string runStr = link + vectStr[i];
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		index = index + 1;
		cout << "FriDesktop Progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (friDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nFriday desktop progress is complete.\n";
}
private: System::Void friMobile_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr2 = { "laugh+at+me", "This+small", "book", "it+holds", "the+story", "of+my+life", "laid+out", "upon+a", "single+page", "for+you", "Like+a+fluffy", "short", "cake",
							"I+know+Im", "nothing", "more+than+an", "empty+ghost", "An+empty", "shell+of+lies", "and+it+haunts", "me+so", "AVL+trees", "abroad", "adamant" };

	indexM = 0;

	for (int i = 0; i < maxPageM; i++) {
		string str1 = "start chrome.exe " + link;
		string runStr = str1 + vectStr2[i];
		system(runStr.c_str());
		indexM = indexM + 1;
		cout << "FriMobile Progress: " << indexM << " / " << maxPageM << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (friMobile->CancellationPending) {
			indexM = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nFriday mobile progress is complete.\n";
}
//Saturday Button---------------------------------------------------------------------------------------
private: System::Void saturday_Click(System::Object^ sender, System::EventArgs^ e) {
	//Deskstop Mode
	if (mode->Text == "Desktop") {
		//If the thread is running, send a cancel request
		if (satDesktop->IsBusy) {
			satDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			satDesktop->RunWorkerAsync();
		}
	}
	//Mobile mode
	else if (mode->Text == "Mobile") {
		//If the thread is running, send a cancel request
		if (satMobile->IsBusy) {
			satMobile->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			satMobile->RunWorkerAsync();
		}
	}
	else {
		//If the thread is running, send a cancel request
		if (satMobile->IsBusy || satDesktop->IsBusy) {
			satMobile->CancelAsync();
			satDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			satDesktop->RunWorkerAsync();
			satMobile->RunWorkerAsync();
		}
	}
}
//Saturday Desktop
private: System::Void satDesktop_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr = { "I+am+in", "love+with+you", "able", "But+its", "a+lie", "and+nobody+knew", "The+truth+is", "I+am", "crazy", "for+you", "Listen",
							"Let+me+tell+you", "something+that+you", "dont+know", "That+Ive", "thought+about", "for+a+very", "long+time", "Id+never+hope", "for+another", "dream ",
							"to+come", "true", "If+we", "could", "just+return", "to+being", "partners", "in+crime", "From+the", "palm", "of+my+hands"};
	vector<string> micEdge = { "natural", "born", "coward", "tainted", "wheel", "turn", "pride", "attention", "motivation", "tree", "jaw", "detective",
							   "lack", "glue","pair", "permanent", "industry", "tourist", "penalty", "temple", "mayor", "qualified", "hostage", "transfer" };

	index = 0;
	indexEdge = 0;

	for (int i = 0; i < maxPageEdge; i++) {
		string str1 = "start microsoft-edge:" + link;
		string runStr = str1 + micEdge[i];
		system(runStr.c_str());
		indexEdge = indexEdge + 1;
		cout << "SatEdge Progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (satDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}

	for (int i = 0; i < maxPage; i++) {
		string runStr = link + vectStr[i];
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		index = index + 1;
		cout << "SatDesktop Progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (satDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nSaturday desktop progress is complete.\n";
}
//Saturday Mobile
private: System::Void satMobile_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr2 = { "palm+of", "my+hands", "trickles+out", "all+of", "your+love", "Is+there+a", "way+for+me+to", "pack+it+up", "and+throw", "it+all", "away",
							"through+the", "lies+and", "deceit", "can+I+find", "any+truth", "at+all", "well+I", "dont+really", "care", "aforetime", "adagio2" };

	indexM = 0;

	for (int i = 0; i < maxPageM; i++) {
		string str1 = "start chrome.exe " + link;
		string runStr = str1 + vectStr2[i];
		system(runStr.c_str());
		indexM = indexM + 1;
		cout << "SatMobile Progress: " << indexM << " / " << maxPageM << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (satMobile->CancellationPending) {
			indexM = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nSaturday mobile progress is complete.\n";
}
//Sunday Button---------------------------------------------------------------------------------------
private: System::Void sunday_Click(System::Object^ sender, System::EventArgs^ e) {
	//Deskstop Mode
	if (mode->Text == "Desktop") {
		//If the thread is running, send a cancel request
		if (sunDesktop->IsBusy) {
			sunDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			sunDesktop->RunWorkerAsync();
		}
	}
	//Mobile mode
	else if (mode->Text == "Mobile") {
		//If the thread is running, send a cancel request
		if (sunMobile->IsBusy) {
			sunMobile->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			sunMobile->RunWorkerAsync();
		}
	}
	else {
		//If the thread is running, send a cancel request
		if (sunMobile->IsBusy || sunDesktop->IsBusy) {
			sunMobile->CancelAsync();
			sunDesktop->CancelAsync();
		}
		//Thread is not running, run like normal
		else {
			sunDesktop->RunWorkerAsync();
			sunMobile->RunWorkerAsync();
		}
	}
}
//Sunday Desktop
private: System::Void sunDesktop_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr = { "I+do+whatever", "I+want+to", "I+fight+who", "I+donÅft+like", "Im+a+rebel", "through+and", "through+Without", "a+single+hope", "for+the+future", "I+wanted+so", "badly+to",
							 "live+within", "a+dream", "And+yet", "Im+still", "afraid+of", "the+future", "While+hating", "tomorrow+and", "wishing+things", "were+the+way", "they+were+But",
							 "time+stops", "for+no+one", "and+so+I+shout", "Im+a+machine", "and+my+purpose+is", "to+live+And+the+one", "who+has+given+me+this", "new+purpose+is+me", "Halfpace", "compliment" };
	vector<string> micEdge = { "The+moment", "man+devoured", "the+fruit", "of+knowledge", "laborer", "identification", "picture", "heel", "like", "retreat", "unfortunate", "mile", "morale", "add", "due", "blonde",
							   "passive", "ostracize", "fan", "regular", "bulb", "engagement", "standard", "edge"};

	index = 0;
	indexEdge = 0;

	for (int i = 0; i < maxPageEdge; i++) {
		string str1 = "start microsoft-edge:" + link;
		string runStr = str1 + micEdge[i];
		system(runStr.c_str());
		indexEdge = indexEdge + 1;
		cout << "SunEdge Progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (sunDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}

	for (int i = 0; i < maxPage; i++) {
		string runStr = link + vectStr[i];
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		index = index + 1;
		cout << "SunDesktop Progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (sunDesktop->CancellationPending) {
			index = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nSunday desktop progress is complete.\n";
}
//Sunday Mobile
private: System::Void sunMobile_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	vector<string> vectStr2 = { "Ever+since", "the+faithful", "day+we+met", "I+thought+that", "the+world", "had+changed+And", "yet+no", "matter+how", "I+hoped", "itd+be", "my+future",
							"remained+the", "same+But", "even+so+its", "no+lie", "As+I+thought", "people+die", "when+they+are", "killed", "lmao", "ellipses", "lexicographical" };
	
	indexM = 0;

	for (int i = 0; i < maxPageM; i++) {
		string str1 = "start chrome.exe " + link;
		string runStr = str1 + vectStr2[i];
		system(runStr.c_str());
		indexM = indexM + 1;
		cout << "SunMobile Progress: " << indexM << " / " << maxPageM << "\n";
		Sleep(rand() % 2000 + 7000);

		//Cancel Thread when user presses the button again
		if (sunMobile->CancellationPending) {
			indexM = 0;
			cout << "\nCanceled!\n\n";
			return;
		}
	}
	cout << "\nSunday mobile progress is complete.\n";
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	//Desktop Searches
	tracker->Text = "Progress " + index + "/" + maxPage;
	progressBar1->Value = index;
	progressBar1->Maximum = maxPage;
	//Mobile Searches
	tracker2->Text = "Progress " + indexM + "/" + maxPageM;
	progressBar2->Maximum = maxPageM;
	progressBar2->Value = indexM;
	//Edge Searches
	tracker3->Text = "Progress " + indexEdge + "/" + maxPageEdge;
	progressBar3->Maximum = maxPageEdge;
	progressBar3->Value = indexEdge;
}
//Edge Progress text
private: System::Void tracker3_Click(System::Object^ sender, System::EventArgs^ e) {
	int level;
	int numArgsRead;
	do{
		std::cout << "How many edge pages would you like to load? ";
		numArgsRead = scanf("%d", &level);
	}while (isCorrect(level, numArgsRead, "edge"));
}
private: System::Void tracker_Click(System::Object^ sender, System::EventArgs^ e){
	int level;
	int numArgsRead;
	do {
		std::cout << "How many desktop pages would you like to load? ";
		numArgsRead = scanf("%d", &level);
	} while (isCorrect(level, numArgsRead, "desktop"));
}
private: System::Void tracker2_Click(System::Object^ sender, System::EventArgs^ e) {
	int level;
	int numArgsRead;
	do {
		std::cout << "How many mobile pages would you like to load? ";
		numArgsRead = scanf("%d", &level);
	} while (isCorrect(level, numArgsRead, "mobile"));
}
private: System::Void load_Click(System::Object^ sender, System::EventArgs^ e) {
	//Open json file
	std::ifstream file;
	file.open("C:\\WebSettings.json");
	nlohmann::json jsonObject;

	if (file.is_open()) {
		file >> jsonObject;
	}

	maxPageEdge = jsonObject["edge"];
	maxPage = jsonObject["desktop"];
	maxPageM = jsonObject["mobile"];
}
//Runs program for edge, mobile, desktop through edge, chrome, brave respectively
private: System::Void Run_Click(System::Object^ sender, System::EventArgs^ e) {
	//If the thread is running, send a cancel request
	if (easyRun->IsBusy || easyRun2->IsBusy) {
		easyRun->CancelAsync();
		easyRun2->CancelAsync();
	}
	//Thread is not running, run like normal
	else {
		easyRun->RunWorkerAsync();
		easyRun2->RunWorkerAsync();
	}
}
//Background worker for Quick run
private: System::Void easyRun_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	int result, digitIndex, curDigit;
	int resultNum;
	index = 0;
	indexEdge = 0;
	indexM = 0;
	string command;
	srand(time(NULL));
	//Initalizing random word generator variables
	char word[7];
	int wordSize = sizeof(word) / sizeof(char);

	//Open json file
	std::ifstream file;
	file.open("C:\\sample.json");
	nlohmann::json jsonObject;

	if (file.is_open()) {
		file >> jsonObject;
	}

	maxPageEdge = jsonObject["edge"];
	maxPage = jsonObject["desktop"];
	maxPageM = jsonObject["mobile"];

	// init rand seed
	srand(time(NULL));

	//Edge searches

	command = "start microsoft-edge:" + link;

	while (indexEdge < maxPageEdge) {
		rword(word);
		string s_a = convertToString(word, wordSize);
		indexEdge = indexEdge + 1;
		string runStr = command + s_a;
		system(runStr.c_str());
		cout << "Extra Search progress: " << indexEdge << " / " << maxPageEdge << "\n";
		Sleep(rand() % 2000 + 7000);
	}

	//chrome/Mobile searches
	command = "start chrome.exe " + link;

	while (indexM < maxPageM) {
		rword(word);
		string s_a = convertToString(word, wordSize);
		indexM = indexM + 1;
		string runStr = command + s_a;
		system(runStr.c_str());
		cout << "Extra Search progress: " << indexM << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);
	}
}
//Part 2 of easyrun that runs as same time
private: System::Void easyRun2_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e){
	string command = link;
	int result, digitIndex, curDigit;

	srand(time(NULL));
	//Desktop searches
	char word[7];
	int wordSize = sizeof(word) / sizeof(char);

	command = "start microsoft-edge:" + link;


	srand(time(0));
	while (index < maxPage) {
		rword(word);
		string s_a = convertToString(word, wordSize);
		index = index + 1;
		string runStr = link + s_a;
		webBrowser1->Navigate(gcnew String(runStr.c_str()));
		cout << "Extra Search progress: " << index << " / " << maxPage << "\n";
		Sleep(rand() % 2000 + 7000);
	}
}
};
}


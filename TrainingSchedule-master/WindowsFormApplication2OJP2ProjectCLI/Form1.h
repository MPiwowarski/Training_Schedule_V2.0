#pragma once
#include"Form2.h"
#include"Form3Registration.h"
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Security::Cryptography;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Xml;
	using namespace System::Xml::Linq;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  addNewUserButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  exitButton;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  loginBox;
	private: System::Windows::Forms::TextBox^  passwordBox;


	private: System::Windows::Forms::Button^  loginButton;


	protected:

	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->addNewUserButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->exitButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->loginBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// addNewUserButton
			// 
			this->addNewUserButton->Location = System::Drawing::Point(24, 123);
			this->addNewUserButton->Name = L"addNewUserButton";
			this->addNewUserButton->Size = System::Drawing::Size(111, 23);
			this->addNewUserButton->TabIndex = 5;
			this->addNewUserButton->Text = L"Add new user";
			this->addNewUserButton->UseVisualStyleBackColor = true;
			this->addNewUserButton->Click += gcnew System::EventHandler(this, &Form1::addNewUserButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->Location = System::Drawing::Point(18, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(584, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Please log in to see or modify your training schedule";
			// 
			// exitButton
			// 
			this->exitButton->Location = System::Drawing::Point(145, 152);
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(75, 23);
			this->exitButton->TabIndex = 3;
			this->exitButton->Text = L"Exit";
			this->exitButton->UseVisualStyleBackColor = true;
			this->exitButton->Click += gcnew System::EventHandler(this, &Form1::exitButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(32, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Login";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(2, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Password";
			// 
			// loginBox
			// 
			this->loginBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->loginBox->Location = System::Drawing::Point(86, 59);
			this->loginBox->Name = L"loginBox";
			this->loginBox->Size = System::Drawing::Size(134, 26);
			this->loginBox->TabIndex = 0;
			// 
			// passwordBox
			// 
			this->passwordBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->passwordBox->Location = System::Drawing::Point(86, 91);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->PasswordChar = '*';
			this->passwordBox->Size = System::Drawing::Size(134, 26);
			this->passwordBox->TabIndex = 1;
			// 
			// loginButton
			// 
			this->loginButton->Location = System::Drawing::Point(145, 123);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(75, 23);
			this->loginButton->TabIndex = 2;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &Form1::loginButton_Click);
			// 
			// Form1
			// 
			this->AcceptButton = this->loginButton;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 190);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->loginBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->exitButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->addNewUserButton);
			this->MaximumSize = System::Drawing::Size(636, 228);
			this->MinimumSize = System::Drawing::Size(636, 228);
			this->Name = L"Form1";
			this->Text = L"Training shedule";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void addNewUserButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 WindowsFormApplication2OJP2ProjectCLI::Form3Registration ^ frm3 = gcnew WindowsFormApplication2OJP2ProjectCLI::Form3Registration(this);
				 frm3->Show();
				 this->Hide();
	}
	private: System::Void exitButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
	}
	private: System::Void loginButton_Click(System::Object^  sender, System::EventArgs^  e) {

				 String ^ strFilename = L"Files/LoginsAndPasswords.xml";
				 XmlDocument ^ docLoginsAndPasswords = gcnew XmlDocument;

				 System::Int32^ UserID = -1;
				 System::String^ UserLogin;
				 bool checkIfLoginAndPassCor = false;
				 if (File::Exists(strFilename))
				 {
					 docLoginsAndPasswords->Load(strFilename);
					 XmlElement  ^ elm = docLoginsAndPasswords->DocumentElement;
					 XmlNodeList ^ lstUsers = elm->ChildNodes;

					 for (int i = 0; i < lstUsers->Count; i++)
					 {
						 if (loginBox->Text == lstUsers[i]->ChildNodes[1]->InnerText &&getMD5String(passwordBox->Text->ToString()) == lstUsers[i]->ChildNodes[2]->InnerText)
						 {
							 UserID = Int32::Parse(lstUsers[i]->FirstChild->InnerText);
							 UserLogin = loginBox->Text;
							 MessageBox::Show("Login and password are correct!");
							 checkIfLoginAndPassCor = true;
							 loginBox->Text = "";
							 passwordBox->Text = "";
							 break;
						 }
					 }
				 }
				

				 if (checkIfLoginAndPassCor == true)
				 {
					 WindowsFormApplication2OJP2ProjectCLI::Form2 ^ frm2 = gcnew WindowsFormApplication2OJP2ProjectCLI::Form2(this, UserID, UserLogin);
					 frm2->Show();
					 this->Hide();
				 }
				 else
				 {
					 MessageBox::Show("Login or password are worng! Try again!");
					 loginBox->Text = "";
					 passwordBox->Text = "";
				 }
	}


			 String^ getMD5String(String^ inputString)
			 {
				 array<Byte>^ byteArray = Encoding::ASCII->GetBytes(inputString);
				 MD5CryptoServiceProvider^ md5provider = gcnew MD5CryptoServiceProvider();
				 array<Byte>^ byteArrayHash = md5provider->ComputeHash(byteArray);
				 return BitConverter::ToString(byteArrayHash);
			 }
	};
}


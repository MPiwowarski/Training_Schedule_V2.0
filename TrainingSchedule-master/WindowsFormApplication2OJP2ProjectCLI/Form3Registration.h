#pragma once
//XML tutorial http://www.functionx.com/vccli/xml/Lesson03.htm


namespace WindowsFormApplication2OJP2ProjectCLI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Xml;
	using namespace System::Xml::Linq;
	using namespace System::Security::Cryptography;
	using namespace System::Text;
	/// <summary>
	/// Summary for Form3Registration
	/// </summary>
	public ref class Form3Registration : public System::Windows::Forms::Form
	{
	public:
		Form3Registration(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form3Registration(System::Windows::Forms::Form ^ frm1)
		{
			otherform = frm1;
			InitializeComponent();

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form3Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  cancelButton;
	protected:
	private: System::Windows::Forms::Form ^ otherform;
	private: System::Windows::Forms::Label^  LoginLabel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  loginBox;
	private: System::Windows::Forms::TextBox^  passwordBox;
	private: System::Windows::Forms::TextBox^  passwordConfirmationBox;
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
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->LoginLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->loginBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordConfirmationBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancelButton
			// 
			this->cancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelButton->Location = System::Drawing::Point(162, 121);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 5;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &Form3Registration::cancelButton_Click);
			// 
			// LoginLabel
			// 
			this->LoginLabel->AutoSize = true;
			this->LoginLabel->Location = System::Drawing::Point(92, 32);
			this->LoginLabel->Name = L"LoginLabel";
			this->LoginLabel->Size = System::Drawing::Size(33, 13);
			this->LoginLabel->TabIndex = 2;
			this->LoginLabel->Text = L"Login";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password confirmation";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add user";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3Registration::button1_Click);
			// 
			// loginBox
			// 
			this->loginBox->Location = System::Drawing::Point(137, 29);
			this->loginBox->Name = L"loginBox";
			this->loginBox->Size = System::Drawing::Size(100, 20);
			this->loginBox->TabIndex = 1;
			// 
			// passwordBox
			// 
			this->passwordBox->Location = System::Drawing::Point(137, 59);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->PasswordChar = '*';
			this->passwordBox->Size = System::Drawing::Size(100, 20);
			this->passwordBox->TabIndex = 2;
			// 
			// passwordConfirmationBox
			// 
			this->passwordConfirmationBox->Location = System::Drawing::Point(137, 85);
			this->passwordConfirmationBox->Name = L"passwordConfirmationBox";
			this->passwordConfirmationBox->PasswordChar = '*';
			this->passwordConfirmationBox->Size = System::Drawing::Size(100, 20);
			this->passwordConfirmationBox->TabIndex = 3;
			// 
			// Form3Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 175);
			this->Controls->Add(this->passwordConfirmationBox);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->loginBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LoginLabel);
			this->Controls->Add(this->cancelButton);
			this->Name = L"Form3Registration";
			this->Text = L"Registration";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form3Registration::Form3Registration_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 otherform->Show();
	}
	private: System::Void Form3Registration_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 this->Hide();
				 otherform->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 //1 VALIDATION CONDITION: None textBox can be empty
				 bool emptyRgstBox = false;
				 if (loginBox->Text == ""){ MessageBox::Show("Login box can not be empty!"); emptyRgstBox = true; }
				 if (passwordBox->Text == ""){ MessageBox::Show("Password box can not be empty!"); emptyRgstBox = true; }

				 //2 VALIDATION CONDITION: Check if given passwords are the same
				 bool passwordsAreTheSame = true;
				 if (passwordBox->Text != passwordConfirmationBox->Text)
				 {
					 MessageBox::Show("Passwords are not the same, try again");
					 passwordBox->Text = "";
					 passwordConfirmationBox->Text = "";
					 passwordsAreTheSame = false;
				 }

				 //3 VALIDATION CONDITION: Check if given login already exists in db
				 bool loginTaken = false;							   				
				 String ^ strFilename = L"Files/LoginsAndPasswords.xml";
				 XmlDocument ^ docLoginsAndPasswords = gcnew XmlDocument;

				 if (File::Exists(strFilename))
				 {
					 docLoginsAndPasswords->Load(strFilename);
					 XmlElement  ^ elm = docLoginsAndPasswords->DocumentElement;
					 XmlNodeList ^ lstUsers = elm->ChildNodes;
					
					 for (int i = 0; i < lstUsers->Count; i++)
					 {
						 if (loginBox->Text == lstUsers[i]->ChildNodes[1]->InnerText)
						 {
							 MessageBox::Show("Login already exists, choose another login");
							 loginTaken = true;
						 }
					 }
					 
				 }
				 else
				 {
					 MessageBox::Show(L"The file " + strFilename + L" was not found");
				 }

				 //Checks whether the conditions have been met
				 if (passwordsAreTheSame == true && emptyRgstBox == false && loginTaken==false)
				 {
					 //Finding greatest id of all users
					 int maxId = -1;
					 if (File::Exists(strFilename))
					 {
						 docLoginsAndPasswords->Load(strFilename);
						 XmlElement  ^ elm = docLoginsAndPasswords->DocumentElement;
						 XmlNodeList ^ lstUsers = elm->ChildNodes;

						 for (int i = 0; i < lstUsers->Count; i++)
						 {
							 if (maxId < int::Parse(lstUsers[i]->ChildNodes[0]->InnerText))
								 maxId = int::Parse(lstUsers[i]->ChildNodes[0]->InnerText);
						 }
						 //MessageBox::Show("maxId= " + maxId);
						 maxId++;
					 }

					 //Adding new user to db 
					 if (File::Exists(strFilename))
					 {
						 docLoginsAndPasswords->Load(strFilename);

						 XmlElement ^ Element = docLoginsAndPasswords->CreateElement(L"User");
						 String ^ strUser = L"<idUser>" + maxId + L"</idUser>" +
							 L"<login>" + loginBox->Text + L"</login>" +
							 L"<password>" + getMD5String(passwordBox->Text->ToString()) + "</password>";

						 Element->InnerXml = strUser;
						 docLoginsAndPasswords->DocumentElement->AppendChild(Element);

						 docLoginsAndPasswords->Save(strFilename);
						 MessageBox::Show("User has been added sucessfully!");
						 
						 //Cleans texBoxes
						 passwordBox->Text = "";
						 passwordConfirmationBox->Text = "";
						 loginBox->Text = "";
						 
						 
					 }
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

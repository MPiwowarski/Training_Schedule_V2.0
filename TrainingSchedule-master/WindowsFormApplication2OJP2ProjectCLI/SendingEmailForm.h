#pragma once

namespace WindowsFormApplication2OJP2ProjectCLI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Web;
	using namespace System::Net::Mail;
	/// <summary>
	/// Summary for SendingEmailForm
	/// </summary>
	public ref class SendingEmailForm : public System::Windows::Forms::Form
	{
	public:
		SendingEmailForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SendingEmailForm(System::Windows::Forms::Form ^ frm5, System::String^ pathToPDFFile)
		{
			otherform = frm5;
			InitializeComponent();
			PathToPDFFile = pathToPDFFile;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SendingEmailForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  buttonSendMail;
	private: System::Windows::Forms::TextBox^  textBox_TO;
	private: System::Windows::Forms::TextBox^  textBox_SUBJECT;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_BODY;
	private: System::Windows::Forms::Form ^ otherform;
	private: System::String^ PathToPDFFile;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonSendMail = (gcnew System::Windows::Forms::Button());
			this->textBox_TO = (gcnew System::Windows::Forms::TextBox());
			this->textBox_SUBJECT = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_BODY = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonSendMail
			// 
			this->buttonSendMail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonSendMail->Location = System::Drawing::Point(12, 305);
			this->buttonSendMail->Name = L"buttonSendMail";
			this->buttonSendMail->Size = System::Drawing::Size(374, 32);
			this->buttonSendMail->TabIndex = 0;
			this->buttonSendMail->Text = L"Send Mail";
			this->buttonSendMail->UseVisualStyleBackColor = true;
			this->buttonSendMail->Click += gcnew System::EventHandler(this, &SendingEmailForm::buttonSendMail_Click);
			// 
			// textBox_TO
			// 
			this->textBox_TO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox_TO->Location = System::Drawing::Point(114, 8);
			this->textBox_TO->Name = L"textBox_TO";
			this->textBox_TO->Size = System::Drawing::Size(272, 29);
			this->textBox_TO->TabIndex = 1;
			// 
			// textBox_SUBJECT
			// 
			this->textBox_SUBJECT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox_SUBJECT->Location = System::Drawing::Point(114, 43);
			this->textBox_SUBJECT->Name = L"textBox_SUBJECT";
			this->textBox_SUBJECT->Size = System::Drawing::Size(272, 29);
			this->textBox_SUBJECT->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(8, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Your email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(8, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Subject";
			// 
			// textBox_BODY
			// 
			this->textBox_BODY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBox_BODY->Location = System::Drawing::Point(12, 88);
			this->textBox_BODY->Multiline = true;
			this->textBox_BODY->Name = L"textBox_BODY";
			this->textBox_BODY->Size = System::Drawing::Size(374, 211);
			this->textBox_BODY->TabIndex = 3;
			// 
			// SendingEmailForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(398, 349);
			this->Controls->Add(this->textBox_BODY);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_SUBJECT);
			this->Controls->Add(this->textBox_TO);
			this->Controls->Add(this->buttonSendMail);
			this->Name = L"SendingEmailForm";
			this->Text = L"SendingEmailForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &SendingEmailForm::SendingEmailForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SendingEmailForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 this->Hide();
				 otherform->Show();
	}
	private: System::Void buttonSendMail_Click(System::Object^  sender, System::EventArgs^  e) {
				 //--------------------BUTTON SEND----------------------------//
				 /*System::String^ FROM = "moniabr.83@gmail.com";
				 System::String^ USERNAME = "moniabr.83@gmail.com";
				 System::String^ PASSWORD = "moniabrozkova1";*/
				 System::String^ FROM = "abcdefghijklm11113@gmail.com";
				 System::String^ USERNAME = "abcdefghijklm11113@gmail.com";
				 System::String^ PASSWORD = "schedule";
				 System::String^ SMTP = "smtp.gmail.com";
				 
				 MailMessage^ mail = gcnew MailMessage(FROM, textBox_TO->Text,textBox_SUBJECT->Text,textBox_BODY->Text );
				 //add attachment:
				 mail->Attachments->Add(gcnew Attachment(PathToPDFFile));

				 
				 // SmtpServer = smtp.company.com; Ex: Gmail - smtp.gmail.com | Yahoo - smtp.yahoo.com
				 SmtpClient^ client = gcnew SmtpClient(SMTP);
				 // Port 587 is the preffered port for mail submission. Port 25 is widely abused by malware to spread worms
				 // As a result, many ISPs are restricting its use. I tried to use it but it didn't work!
				 client->Port = 587;
				 client->Credentials = gcnew System::Net::NetworkCredential(USERNAME,PASSWORD);
				 
				 // Port 587 allows you to use a SSL Connection.
				 client->DeliveryMethod = SmtpDeliveryMethod::Network;
				 client->EnableSsl = true;
				 try{
					 client->Send(mail);
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->ToString());
				 }

				 MessageBox::Show("Mail Sent!", "Success", MessageBoxButtons::OK);
	}
};
}

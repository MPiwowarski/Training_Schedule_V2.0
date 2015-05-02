#pragma once

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
	/// Summary for ViewHelpForm
	/// </summary>
	public ref class ViewHelpForm : public System::Windows::Forms::Form
	{
	public:
		ViewHelpForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ViewHelpForm(System::Windows::Forms::Form ^ frm4)
		{
			otherform = frm4;
			InitializeComponent();

			viewHelp();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewHelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Form ^ otherform;
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(449, 289);
			this->textBox1->TabIndex = 0;
			// 
			// ViewHelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 313);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(489, 351);
			this->Name = L"ViewHelpForm";
			this->Text = L"ViewHelpForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ViewHelpForm::ViewHelpForm_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewHelpForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 this->Hide();
				 otherform->Show();
	}
	private: System::Void viewHelp()
	{
				 System::String^ text;
				 String ^ strFilename = "Files/Help.txt";
				 StreamReader^ file =
					 gcnew StreamReader(strFilename, System::Text::Encoding::Default);
				 if (File::Exists(strFilename)){
					 text = file->ReadToEnd();
					 textBox1->Text = text;
					 file->Close();
				 }
				 else
				 {
					 textBox1->Text = "Help.txt doesn't exists!";
				 }
	}
	};
}

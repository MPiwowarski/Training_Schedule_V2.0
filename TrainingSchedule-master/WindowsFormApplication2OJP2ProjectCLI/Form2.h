#pragma once
#include "ViewHelpForm.h"
#include "SendingEmailForm.h"
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

	using namespace System::Reflection;
	using namespace iTextSharp::text;
	using namespace itextsharp;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form2(System::Windows::Forms::Form ^ frm1, System::Int32^ UserId, System::String^ userLogin)
		{
			otherform = frm1;
			InitializeComponent();

			UserLogin = userLogin;
			UserID = UserId;
			label1->Text =  userLogin;
			showShedule();
		}
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  exerciseNameTextBox;





	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  addExerciseButton;
	private: System::Windows::Forms::Button^  deleteExerciseButton;
	private: System::Windows::Forms::MaskedTextBox^  restAfterMaskedTextBox;



	private: System::Windows::Forms::MaskedTextBox^  durationMaskedTextBox;

	private: System::Windows::Forms::MaskedTextBox^  repsMaskedTextBox;
	private: System::Windows::Forms::Button^  showSheduleButton;
	private: System::Windows::Forms::Button^  saveChangesButton;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  createPDFFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sendScheduleToYourEmailToolStripMenuItem;


	public:
	private: System::Windows::Forms::Form ^ otherform;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Int32^ UserID;
	private: System::String^ UserLogin;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->restAfterMaskedTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->durationMaskedTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->repsMaskedTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->exerciseNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->addExerciseButton = (gcnew System::Windows::Forms::Button());
			this->deleteExerciseButton = (gcnew System::Windows::Forms::Button());
			this->showSheduleButton = (gcnew System::Windows::Forms::Button());
			this->saveChangesButton = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createPDFFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sendScheduleToYourEmailToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cancelButton
			// 
			this->cancelButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cancelButton->Location = System::Drawing::Point(390, 19);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(155, 42);
			this->cancelButton->TabIndex = 0;
			this->cancelButton->Text = L"Log out";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &Form2::cancelButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(141, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"user\'s login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(6, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Logged as:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(6, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(378, 49);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(388, 81);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Exercise name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(130, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Reps";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(42, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Rest after [ s ]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"BankGothic Lt BT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 17);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Duration [ s ]";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->restAfterMaskedTextBox);
			this->groupBox2->Controls->Add(this->durationMaskedTextBox);
			this->groupBox2->Controls->Add(this->repsMaskedTextBox);
			this->groupBox2->Controls->Add(this->exerciseNameTextBox);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(6, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(367, 169);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Exercise";
			// 
			// restAfterMaskedTextBox
			// 
			this->restAfterMaskedTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->restAfterMaskedTextBox->Location = System::Drawing::Point(192, 120);
			this->restAfterMaskedTextBox->Mask = L"0000000";
			this->restAfterMaskedTextBox->Name = L"restAfterMaskedTextBox";
			this->restAfterMaskedTextBox->Size = System::Drawing::Size(148, 26);
			this->restAfterMaskedTextBox->TabIndex = 6;
			// 
			// durationMaskedTextBox
			// 
			this->durationMaskedTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->durationMaskedTextBox->Location = System::Drawing::Point(192, 88);
			this->durationMaskedTextBox->Mask = L"0000000";
			this->durationMaskedTextBox->Name = L"durationMaskedTextBox";
			this->durationMaskedTextBox->Size = System::Drawing::Size(148, 26);
			this->durationMaskedTextBox->TabIndex = 6;
			// 
			// repsMaskedTextBox
			// 
			this->repsMaskedTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->repsMaskedTextBox->Location = System::Drawing::Point(192, 54);
			this->repsMaskedTextBox->Mask = L"0000000";
			this->repsMaskedTextBox->Name = L"repsMaskedTextBox";
			this->repsMaskedTextBox->Size = System::Drawing::Size(148, 26);
			this->repsMaskedTextBox->TabIndex = 6;
			// 
			// exerciseNameTextBox
			// 
			this->exerciseNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->exerciseNameTextBox->Location = System::Drawing::Point(192, 24);
			this->exerciseNameTextBox->Name = L"exerciseNameTextBox";
			this->exerciseNameTextBox->Size = System::Drawing::Size(148, 26);
			this->exerciseNameTextBox->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 323);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(539, 277);
			this->dataGridView1->TabIndex = 6;
			// 
			// addExerciseButton
			// 
			this->addExerciseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->addExerciseButton->Location = System::Drawing::Point(6, 249);
			this->addExerciseButton->Name = L"addExerciseButton";
			this->addExerciseButton->Size = System::Drawing::Size(367, 31);
			this->addExerciseButton->TabIndex = 7;
			this->addExerciseButton->Text = L"Add exercise to list";
			this->addExerciseButton->UseVisualStyleBackColor = true;
			this->addExerciseButton->Click += gcnew System::EventHandler(this, &Form2::addExerciseButton_Click);
			// 
			// deleteExerciseButton
			// 
			this->deleteExerciseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->deleteExerciseButton->Location = System::Drawing::Point(6, 286);
			this->deleteExerciseButton->Name = L"deleteExerciseButton";
			this->deleteExerciseButton->Size = System::Drawing::Size(367, 31);
			this->deleteExerciseButton->TabIndex = 7;
			this->deleteExerciseButton->Text = L"Delete selected exercise/s";
			this->deleteExerciseButton->UseVisualStyleBackColor = true;
			this->deleteExerciseButton->Click += gcnew System::EventHandler(this, &Form2::deleteExerciseButton_Click);
			// 
			// showSheduleButton
			// 
			this->showSheduleButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->showSheduleButton->Location = System::Drawing::Point(388, 249);
			this->showSheduleButton->Name = L"showSheduleButton";
			this->showSheduleButton->Size = System::Drawing::Size(157, 31);
			this->showSheduleButton->TabIndex = 8;
			this->showSheduleButton->Text = L"show shedule";
			this->showSheduleButton->UseVisualStyleBackColor = true;
			this->showSheduleButton->Click += gcnew System::EventHandler(this, &Form2::showSheduleButton_Click);
			// 
			// saveChangesButton
			// 
			this->saveChangesButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->saveChangesButton->Location = System::Drawing::Point(388, 286);
			this->saveChangesButton->Name = L"saveChangesButton";
			this->saveChangesButton->Size = System::Drawing::Size(157, 31);
			this->saveChangesButton->TabIndex = 9;
			this->saveChangesButton->Text = L"save changes";
			this->saveChangesButton->UseVisualStyleBackColor = true;
			this->saveChangesButton->Click += gcnew System::EventHandler(this, &Form2::saveChangesButton_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->cancelButton);
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Controls->Add(this->saveChangesButton);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Controls->Add(this->showSheduleButton);
			this->groupBox3->Controls->Add(this->monthCalendar1);
			this->groupBox3->Controls->Add(this->deleteExerciseButton);
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->addExerciseButton);
			this->groupBox3->Location = System::Drawing::Point(2, 27);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(552, 613);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->optionsToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(566, 24);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->createPDFFileToolStripMenuItem,
					this->sendScheduleToYourEmailToolStripMenuItem
			});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->optionsToolStripMenuItem->Text = L"Options";
			// 
			// createPDFFileToolStripMenuItem
			// 
			this->createPDFFileToolStripMenuItem->Name = L"createPDFFileToolStripMenuItem";
			this->createPDFFileToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->createPDFFileToolStripMenuItem->Text = L"Create .PDF file";
			this->createPDFFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::createPDFFileToolStripMenuItem_Click);
			// 
			// sendScheduleToYourEmailToolStripMenuItem
			// 
			this->sendScheduleToYourEmailToolStripMenuItem->Name = L"sendScheduleToYourEmailToolStripMenuItem";
			this->sendScheduleToYourEmailToolStripMenuItem->Size = System::Drawing::Size(223, 22);
			this->sendScheduleToYourEmailToolStripMenuItem->Text = L"Send schedule to your email";
			this->sendScheduleToYourEmailToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::sendScheduleToYourEmailToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgramToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutProgramToolStripMenuItem
			// 
			this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
			this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(125, 22);
			this->aboutProgramToolStripMenuItem->Text = L"View help";
			this->aboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form2::aboutProgramToolStripMenuItem_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(566, 652);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(582, 690);
			this->MinimumSize = System::Drawing::Size(582, 38);
			this->Name = L"Form2";
			this->Text = L"Your training shedule";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form2::Form2_FormClosing);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult question = MessageBox::Show("Are you sure you want to log out?",
					 "Attention!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

				 if (question == System::Windows::Forms::DialogResult::Yes)
				 {
					 this->Hide();
					 otherform->Show();
				 }
				 
	}
	private: System::Void Form2_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 System::Windows::Forms::DialogResult question = MessageBox::Show("Are you sure you want to log out?",
					 "Attention!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

				 if (question == System::Windows::Forms::DialogResult::Yes)
				 {
					 this->Hide();
					 otherform->Show();
				 }
	}
	private: System::Void addExerciseButton_Click(System::Object^  sender, System::EventArgs^  e) {

				 //1 VALIDATION CONDITION: exerciseNameTextBox can not be empty!
				 bool validation = true;
				 if (exerciseNameTextBox->Text == "")
				 {
					 MessageBox::Show("You must write the name of exercise!");
					 validation = false;
				 }

				 if (validation == true)
				 {

					 String ^ strFilename = L"Files/ExercisesList.xml";
					 XmlDocument ^ docLoginsAndPasswords = gcnew XmlDocument;
					 //Finding greatest id of all exercises
					 int maxId = -1;
					 int maxSequenceNumber = -1;
					 if (File::Exists(strFilename))
					 {
						 docLoginsAndPasswords->Load(strFilename);
						 XmlElement  ^ elm = docLoginsAndPasswords->DocumentElement;
						 XmlNodeList ^ lstUsers = elm->ChildNodes;

						 //checking what is the greatest value of id of all exercises
						 for (int i = 0; i < lstUsers->Count; i++)
						 {
							 if (maxId < int::Parse(lstUsers[i]->ChildNodes[0]->InnerText))
								 maxId = int::Parse(lstUsers[i]->ChildNodes[0]->InnerText);
						 }
						 maxId++;

						 //checking what is the greates sequence number of all exercises for logged user:
						 for (int i = 0; i < lstUsers->Count; i++)
						 {
							 if (lstUsers[i]->ChildNodes[2]->InnerText->ToString() == UserLogin)
							 {
								 if (lstUsers[i]->ChildNodes[1]->InnerText->ToString() == monthCalendar1->SelectionRange->Start.ToShortDateString())
								 {
									 if (maxSequenceNumber < int::Parse(lstUsers[i]->ChildNodes[3]->InnerText))
										 maxSequenceNumber = int::Parse(lstUsers[i]->ChildNodes[3]->InnerText);
								 }
							 }
						 }
						 maxSequenceNumber++;

						 docLoginsAndPasswords->Load(strFilename);

						 XmlElement ^ Element = docLoginsAndPasswords->CreateElement(L"Exercise");
						 String ^ strUser = L"<idExercise>" + maxId + L"</idExercise>" +
							 L"<calendarDate>" + monthCalendar1->SelectionRange->Start.ToShortDateString() + L"</calendarDate>" +
							 L"<userLogin>" + UserLogin + L"</userLogin>" +
							 L"<sequenceNumber>" + maxSequenceNumber + L"</sequenceNumber>" +
							 L"<exerciseName>" + exerciseNameTextBox->Text + L"</exerciseName>" +
							 L"<reps>" + repsMaskedTextBox->Text->ToString()->Trim() + L"</reps>" +
							 L"<duration>" + durationMaskedTextBox->Text->ToString()->Trim() + L"</duration>" +
							 L"<restAfter>" + restAfterMaskedTextBox->Text->ToString()->Trim() + L"</restAfter>"
							 ;

						 Element->InnerXml = strUser;
						 docLoginsAndPasswords->DocumentElement->AppendChild(Element);

						 docLoginsAndPasswords->Save(strFilename);
						 showShedule();
						 MessageBox::Show("Exercise has been added sucessfully!");
					 }
					 else
					 {
						 MessageBox::Show("File with exercises doesnt exist!");
					 }
				 }
	}
	private: System::Void showSheduleButton_Click(System::Object^  sender, System::EventArgs^  e) {

				 showShedule();
	}
	private: System::Void deleteExerciseButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::Windows::Forms::DialogResult question = MessageBox::Show("Are you sure you want delete selected items?",
					 "Attention!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

				 if (question == System::Windows::Forms::DialogResult::Yes)
				 {
					 saveChanges();
				 }

	}
	private: System::Void saveChangesButton_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Windows::Forms::DialogResult question = MessageBox::Show("Are you sure you would like to save the changes:",
					 "Attention!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

				 if (question == System::Windows::Forms::DialogResult::Yes)
				 {
					 saveChanges();
				 }											 
	}
	private: System::Void aboutProgramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 WindowsFormApplication2OJP2ProjectCLI::ViewHelpForm ^ vHelp = gcnew WindowsFormApplication2OJP2ProjectCLI::ViewHelpForm(this);
			 vHelp->Show();
			 /*this->Hide();*/
}
	
#pragma region Other functions
	private: System::Void showShedule()
				{
							 String ^ strFilename = L"Files/ExercisesList.xml";
							 XmlDocument ^ docLoginsAndPasswords = gcnew XmlDocument;
							 if (File::Exists(strFilename))
							 {
								 docLoginsAndPasswords->Load(strFilename);
								 XmlElement  ^ elm = docLoginsAndPasswords->DocumentElement;
								 XmlNodeList ^ lstUsers = elm->ChildNodes;

								 //1.Creating headers of table
								 dataGridView1->ColumnCount = 5;
								 dataGridView1->Columns[0]->HeaderCell->Value = "Sequence number";
								 dataGridView1->Columns[1]->HeaderCell->Value = "Exercise name";
								 dataGridView1->Columns[2]->HeaderCell->Value = "Reps";
								 dataGridView1->Columns[3]->HeaderCell->Value = "Duration[s]";
								 dataGridView1->Columns[4]->HeaderCell->Value = "Rest after[s]";

								 //2.Counting dataGridView1->RowCount and adding rows 
								 dataGridView1->DefaultCellStyle->BackColor = Color::White;
								 dataGridView1->AlternatingRowsDefaultCellStyle->BackColor = Color::LightGreen;

								 dataGridView1->RowCount = 1;
								 for (int i = 0; i < lstUsers->Count; i++)
								 {
									 if (lstUsers[i]->ChildNodes[1]->InnerText->ToString() == monthCalendar1->SelectionRange->Start.ToShortDateString())
									 {
										 if (lstUsers[i]->ChildNodes[2]->InnerText->ToString() == UserLogin)
										 {
											 dataGridView1->RowCount++;
										 }
									 }
								 }
						

								 int j = 0;//current number of created row
								 for (int i = 0; i < lstUsers->Count; i++)
								 {
									 if (lstUsers[i]->ChildNodes[2]->InnerText->ToString() == UserLogin)
									 {
										 if (lstUsers[i]->ChildNodes[1]->InnerText->ToString() == monthCalendar1->SelectionRange->Start.ToShortDateString())
										 {
											 dataGridView1->Rows[j]->Cells[0]->Value = lstUsers[i]->ChildNodes[3]->InnerText;
											 dataGridView1->Rows[j]->Cells[1]->Value = lstUsers[i]->ChildNodes[4]->InnerText;
											 dataGridView1->Rows[j]->Cells[2]->Value = lstUsers[i]->ChildNodes[5]->InnerText;
											 dataGridView1->Rows[j]->Cells[3]->Value = lstUsers[i]->ChildNodes[6]->InnerText;
											 dataGridView1->Rows[j]->Cells[4]->Value = lstUsers[i]->ChildNodes[7]->InnerText;
											 j++;
										 }
									 }
								 }



								 //dataGridView1->DefaultCellStyle->BackColor = Color::White;
								 //dataGridView1->AlternatingRowsDefaultCellStyle->BackColor = Color::LightGreen;
								 //for (System::Int32 i = 0; i < 5; i++) {
								 // for (System::Int32 j = 0; j < 5; j++) {
								 //	 dataGridView1->Rows[i]->Cells[j]->Value = i + j;
								 //	 dataGridView1->Columns[j]->HeaderCell->Value = j.ToString();
								 // }
								 // /*dataGridView1->Rows[i]->HeaderCell->Value = i.ToString();*/
								 //}
							 }
				}
	private: System::Void saveChanges()
	{
				 String ^ strFilename = L"Files/ExercisesList.xml";
				 XmlDocument ^ docLoginsAndPasswords = gcnew XmlDocument;
				 if (File::Exists(strFilename))
				 {
					 docLoginsAndPasswords->Load(strFilename);
					 XmlElement  ^ elm = docLoginsAndPasswords->DocumentElement;
					 XmlNodeList ^ lstUsers = elm->ChildNodes;


					 //Algorithm: 1 Delete all rows of logged user and save file 
					 //2. Save rows which are left in datagrid to xml file as new 

					 for (int i = 0; i < lstUsers->Count; i++)
					 {
						 if (lstUsers[i]->ChildNodes[2]->InnerText->ToString() == UserLogin)
						 {
							 if (lstUsers[i]->ChildNodes[1]->InnerText->ToString() == monthCalendar1->SelectionRange->Start.ToShortDateString())
							 {
								 elm->RemoveChild(elm->ChildNodes[i]);
								 i = -1;
							 }
						 }
					 }

					 docLoginsAndPasswords->Save(strFilename);
					 docLoginsAndPasswords->Load(strFilename);


					 int j = 0;//current number of created row
					 for (int i = 0; i < dataGridView1->RowCount - 1; i++)
					 {
						 if (dataGridView1->Rows[j] == nullptr)
						 {
							 break;
						 }
						 if (dataGridView1->Rows[i]->Selected == false)
						 {
							 int maxId = -1;
							 for (int i = 0; i < lstUsers->Count; i++)
							 {
								 if (maxId < int::Parse(lstUsers[i]->ChildNodes[0]->InnerText))
									 maxId = int::Parse(lstUsers[i]->ChildNodes[0]->InnerText);
							 }
							 maxId++;

							 docLoginsAndPasswords->Load(strFilename);

							 XmlElement ^ Element = docLoginsAndPasswords->CreateElement(L"Exercise");
							 String ^ strUser = L"<idExercise>" + maxId + L"</idExercise>" +
								 L"<calendarDate>" + monthCalendar1->SelectionRange->Start.ToShortDateString() + L"</calendarDate>" +
								 L"<userLogin>" + UserLogin + L"</userLogin>" +
								 L"<sequenceNumber>" + j + L"</sequenceNumber>" +
								 L"<exerciseName>" + dataGridView1->Rows[i]->Cells[1]->Value->ToString() + L"</exerciseName>" +
								 L"<reps>" + dataGridView1->Rows[i]->Cells[2]->Value->ToString() + L"</reps>" +
								 L"<duration>" + dataGridView1->Rows[i]->Cells[3]->Value->ToString() + L"</duration>" +
								 L"<restAfter>" + dataGridView1->Rows[i]->Cells[4]->Value->ToString() + L"</restAfter>"
								 ;

							 Element->InnerXml = strUser;
							 docLoginsAndPasswords->DocumentElement->AppendChild(Element);

							 docLoginsAndPasswords->Save(strFilename);
							 j++;
						 }
					 }
					 docLoginsAndPasswords->Save(strFilename);
					 showShedule();
				 }
	}
	private: System::Void createPDF()
	{
				 //showShedule();

				 iTextSharp::text::Document^ document;
				 document = gcnew iTextSharp::text::Document();
				 pdf::PdfWriter::GetInstance(document, gcnew FileStream("Schedules/" + UserLogin + "_TrainingSchedule_" + monthCalendar1->SelectionRange->Start.ToShortDateString() + ".pdf", System::IO::FileMode::Create));

				 document->Open();
				 document->Add(gcnew Paragraph("Training schedule for: " + monthCalendar1->SelectionRange->Start.ToShortDateString()));
				 document->Add(gcnew Paragraph("\n"));


				 //Creating iTextSharp Table from the DataTable data
				 pdf::PdfPTable pdfTable(dataGridView1->ColumnCount);
				 pdfTable.DefaultCell->Padding = 3;
				 pdfTable.WidthPercentage = 70;
				 pdfTable.DefaultCell->BorderWidth = 1;

				 //Adding Header row
				 for each (DataGridViewColumn^ column in dataGridView1->Columns)
				 {
					 pdf::PdfPCell^ cell = gcnew pdf::PdfPCell(% Phrase(column->HeaderText));
					 cell->BackgroundColor = gcnew iTextSharp::text::BaseColor(240, 240, 240);
					 pdfTable.AddCell(cell);
					 /* pdfTable.AddCell(column->HeaderText->ToString());*/
				 }

				 //Adding DataRow

				 for (int i = 0; i < dataGridView1->RowCount - 1; i++)
				 {
					 for (int j = 0; j < dataGridView1->ColumnCount; j++)
					 {
						 pdfTable.AddCell((dataGridView1->Rows[i]->Cells[j]->Value)->ToString());
					 }
				 }

				 try{
					 document->Add(%pdfTable);
				 }
				 catch (Exception^ ex)
				 {
					 MessageBox::Show(ex->ToString());
				 }
				 document->Close();
				 MessageBox::Show("Training schedule named as \" " + UserLogin + "_TrainingSchedule_" + monthCalendar1->SelectionRange->Start.ToShortDateString() + ".pdf\" has been created!\n You can find it in folder named \"Schedules\" in the place where you installed the programm.");

	}
#pragma endregion 
private: System::Void createPDFFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 try{
				 createPDF();
			 }
			 catch (Exception^ ex)
			 {
				 MessageBox::Show(ex->ToString());
			 }
			 }
private: System::Void sendScheduleToYourEmailToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 System::Windows::Forms::DialogResult question = MessageBox::Show("Before you send your training schedule the PDF file must be created! Do you want to continue?",
				 "Attention!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Question);

			 if (question == System::Windows::Forms::DialogResult::Yes)
			 {			
					 createPDF();
					 WindowsFormApplication2OJP2ProjectCLI::SendingEmailForm ^ vHelp = gcnew WindowsFormApplication2OJP2ProjectCLI::SendingEmailForm(this, "Schedules/" + UserLogin + "_TrainingSchedule_" + monthCalendar1->SelectionRange->Start.ToShortDateString() + ".pdf");
					 vHelp->Show();			
			 }		 
}
};
}

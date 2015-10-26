#pragma once
#include <vector>
#include <string>

namespace GUI1 {

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
			//
			//TODO: Add the constructor code here
			//
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
		int clicks = 0;
		int clicks1 = 0;
	private: System::Windows::Forms::Button^  button_mainButton;
	protected:


	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->button_mainButton = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_mainButton
			// 
			this->button_mainButton->Location = System::Drawing::Point(23, 82);
			this->button_mainButton->Name = L"button_mainButton";
			this->button_mainButton->Size = System::Drawing::Size(75, 23);
			this->button_mainButton->TabIndex = 1;
			this->button_mainButton->Text = L"button1";
			this->button_mainButton->UseVisualStyleBackColor = true;
			this->button_mainButton->Click += gcnew System::EventHandler(this, &MyForm::button_mainButton_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(171, 88);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::label1_MouseDown);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &MyForm::label1_MouseLeave);
			this->label1->MouseHover += gcnew System::EventHandler(this, &MyForm::label1_MouseHover);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 152);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 98);
			this->textBox2->TabIndex = 4;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(685, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->closeToolStripMenuItem,
					this->openToolStripMenuItem, this->printToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->closeToolStripMenuItem->Text = L"close";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->openToolStripMenuItem->Text = L"open";
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(101, 22);
			this->printToolStripMenuItem->Text = L"print";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fontToolStripMenuItem });
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"edit";
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->fontToolStripMenuItem->Text = L"font";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(295, 27);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(250, 250);
			this->webBrowser1->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 489);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button_mainButton);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_mainButton_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if  (clicks %2 == 0)
		{
			checkBox1->Checked = true;
			textBox2->Text = "there is text here";
		}
		else 
		{

			checkBox1->Checked = false;
			textBox2->Text = " ";
		}
		
		clicks++;
	}



private: System::Void label1_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = "You are hovering. stop it, it's annoying. :(";
}
private: System::Void label1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	//I need to work on this a little bit. THis isn't working. I'll probably have to use a vector or array
	while (clicks1 < 16)
	{
		std::vector<std::string> strings;
		strings[0] = "Hehe you poked me.\r\n";
		strings[1] = "Stop it! it tickles!\r\n";
		strings[2] = "hahahahahahahaha!\r\n";
		strings[3] = "Okay, it's getting a little annoying!\r\n";
		strings[4] = "Really dude, you'd better stop.\r\n";
		strings[5] = "Ouch! Quit poking me! That hurts!";
		strings[6] = "I'm going to start crying!\r\n";
		strings[7] = "Are you really going to do this?\r\n ";
		strings[8] = "Great I'm crying :'( :'( :'( \r\n";
		strings[9] = "You're so evil. We're not even friends any more.\r\n";
		strings[10] = "I'm just going to ignore you now."; 
		strings[11] = "   \r\n";
		strings[12] = "   \r\n";
		strings[13] = "   \r\n";
		strings[14] = "I'm going to call the cops if you don't stop!\r\n";
		strings[15] = "I'm serious!\r\n";

		//textBox2->Text = strings[clicks1];
		textBox2->Text = strings[clicks1];
		clicks1++;
	};
	
}
private: System::Void label1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = "okay, that actually kind of tickles :P";
}
};
}

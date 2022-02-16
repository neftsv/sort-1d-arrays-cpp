#pragma once

namespace ArraySortingAlgirithms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(12, 49);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Create Array";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Cursor = System::Windows::Forms::Cursors::Help;
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Open Array";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(6, 63);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 31);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Create Array";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Location = System::Drawing::Point(18, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 31);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Sort";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(117, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(451, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"1. Натисніть на одну з кнопок (Не тут, в програмі)";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Location = System::Drawing::Point(12, 86);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Панель створення масиву";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(72, 20);
			this->textBox1->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(85, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(109, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Випадкові числа";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(218, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(350, 48);
			this->label3->TabIndex = 0;
			this->label3->Text = L"2.1 У випадку \"Open Array\" відкриться діалогове вікно вибору файлу";
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(218, 138);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(350, 48);
			this->label4->TabIndex = 0;
			this->label4->Text = L"2.2 У випадку \"Create Array\" відкриться панель створення масиву";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(218, 202);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(350, 29);
			this->label5->TabIndex = 0;
			this->label5->Text = L"3. Виберіть метод(и) сортування";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(218, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(350, 29);
			this->label6->TabIndex = 0;
			this->label6->Text = L"4. Натисніть копку \"Sort\"";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(18, 202);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(67, 17);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Метод 1";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(18, 225);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(67, 17);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"Метод 2";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(97, 225);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(67, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Метод 4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(97, 202);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(67, 17);
			this->checkBox5->TabIndex = 3;
			this->checkBox5->Text = L"Метод 3";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Coral;
			this->button5->Location = System::Drawing::Point(18, 304);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 31);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Reset";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(218, 294);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"5. В кінці натисніть кнопочку \"Reset\", щоб мати змогу повторити сортування";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(580, 358);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Help";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

};
}

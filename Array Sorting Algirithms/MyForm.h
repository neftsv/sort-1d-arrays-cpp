#pragma once

#include <time.h>
#include <cmath>
#include <windows.h>
#include <fstream>
#include "MyForm1.h"
#include "MyForm2.h"

namespace ArraySortingAlgirithms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

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
	public: System::Windows::Forms::DataGridView^ Array;
	protected:

	private: System::Windows::Forms::Button^ Button_Create;
	protected:

	private: System::Windows::Forms::TextBox^ Input;
	private: System::Windows::Forms::Button^ Reset;


	private: System::Windows::Forms::CheckBox^ Random;
	private: System::Windows::Forms::DataGridView^ Sorting;
	public: System::Windows::Forms::Button^ Sort;
	private:

	public: System::Windows::Forms::CheckBox^ sorting_algorithm_1;
	public: System::Windows::Forms::CheckBox^ sorting_algorithm_2;
	public: System::Windows::Forms::CheckBox^ sorting_algorithm_3;
	public: System::Windows::Forms::CheckBox^ sorting_algorithm_4;
	private:









	private: System::Windows::Forms::DataGridView^ Info;
	public: System::Windows::Forms::CheckBox^ sorting_algorithm_5;
	private:
	public: System::Windows::Forms::CheckBox^ sorting_algorithm_6;









	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ Open_Array;
	private: System::Windows::Forms::Button^ Create_Box;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;












	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Array = (gcnew System::Windows::Forms::DataGridView());
			this->Button_Create = (gcnew System::Windows::Forms::Button());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->Random = (gcnew System::Windows::Forms::CheckBox());
			this->Sorting = (gcnew System::Windows::Forms::DataGridView());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->sorting_algorithm_1 = (gcnew System::Windows::Forms::CheckBox());
			this->sorting_algorithm_2 = (gcnew System::Windows::Forms::CheckBox());
			this->sorting_algorithm_3 = (gcnew System::Windows::Forms::CheckBox());
			this->sorting_algorithm_4 = (gcnew System::Windows::Forms::CheckBox());
			this->Info = (gcnew System::Windows::Forms::DataGridView());
			this->sorting_algorithm_5 = (gcnew System::Windows::Forms::CheckBox());
			this->sorting_algorithm_6 = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Open_Array = (gcnew System::Windows::Forms::Button());
			this->Create_Box = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Array))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sorting))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Info))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Array
			// 
			this->Array->AllowUserToAddRows = false;
			this->Array->AllowUserToDeleteRows = false;
			this->Array->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Array->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->Array->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->Array->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Array->ColumnHeadersVisible = false;
			this->Array->Location = System::Drawing::Point(12, 135);
			this->Array->Name = L"Array";
			this->Array->RowHeadersVisible = false;
			this->Array->Size = System::Drawing::Size(715, 43);
			this->Array->TabIndex = 0;
			// 
			// Button_Create
			// 
			this->Button_Create->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_Create->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Create->Location = System::Drawing::Point(6, 63);
			this->Button_Create->Name = L"Button_Create";
			this->Button_Create->Size = System::Drawing::Size(160, 48);
			this->Button_Create->TabIndex = 1;
			this->Button_Create->Text = L"Create array";
			this->Button_Create->UseVisualStyleBackColor = false;
			this->Button_Create->Click += gcnew System::EventHandler(this, &MyForm::Create_Click);
			// 
			// Input
			// 
			this->Input->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Input->Location = System::Drawing::Point(6, 28);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(61, 29);
			this->Input->TabIndex = 2;
			// 
			// Reset
			// 
			this->Reset->BackColor = System::Drawing::Color::Coral;
			this->Reset->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Reset->Location = System::Drawing::Point(633, 412);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(94, 32);
			this->Reset->TabIndex = 3;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = false;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// Random
			// 
			this->Random->AutoSize = true;
			this->Random->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Random->Location = System::Drawing::Point(89, 34);
			this->Random->Name = L"Random";
			this->Random->Size = System::Drawing::Size(114, 23);
			this->Random->TabIndex = 5;
			this->Random->Text = L"Random digits";
			this->Random->UseVisualStyleBackColor = true;
			// 
			// Sorting
			// 
			this->Sorting->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->Sorting->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->Sorting->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->Sorting->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Sorting->ColumnHeadersVisible = false;
			this->Sorting->Cursor = System::Windows::Forms::Cursors::Default;
			this->Sorting->Location = System::Drawing::Point(12, 239);
			this->Sorting->Name = L"Sorting";
			this->Sorting->ReadOnly = true;
			this->Sorting->RowHeadersVisible = false;
			this->Sorting->Size = System::Drawing::Size(715, 43);
			this->Sorting->TabIndex = 6;
			// 
			// Sort
			// 
			this->Sort->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Sort->Enabled = false;
			this->Sort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort->Location = System::Drawing::Point(12, 184);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(155, 49);
			this->Sort->TabIndex = 7;
			this->Sort->Text = L"Sort";
			this->Sort->UseVisualStyleBackColor = false;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::Sort_Click);
			// 
			// sorting_algorithm_1
			// 
			this->sorting_algorithm_1->AutoSize = true;
			this->sorting_algorithm_1->Enabled = false;
			this->sorting_algorithm_1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sorting_algorithm_1->Location = System::Drawing::Point(253, 184);
			this->sorting_algorithm_1->Name = L"sorting_algorithm_1";
			this->sorting_algorithm_1->Size = System::Drawing::Size(150, 25);
			this->sorting_algorithm_1->TabIndex = 8;
			this->sorting_algorithm_1->Text = L"Sorting bubbles";
			this->sorting_algorithm_1->UseVisualStyleBackColor = true;
			// 
			// sorting_algorithm_2
			// 
			this->sorting_algorithm_2->AutoSize = true;
			this->sorting_algorithm_2->Enabled = false;
			this->sorting_algorithm_2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sorting_algorithm_2->Location = System::Drawing::Point(427, 184);
			this->sorting_algorithm_2->Name = L"sorting_algorithm_2";
			this->sorting_algorithm_2->Size = System::Drawing::Size(136, 25);
			this->sorting_algorithm_2->TabIndex = 9;
			this->sorting_algorithm_2->Text = L"Sort by choice";
			this->sorting_algorithm_2->UseVisualStyleBackColor = true;
			// 
			// sorting_algorithm_3
			// 
			this->sorting_algorithm_3->AutoSize = true;
			this->sorting_algorithm_3->Enabled = false;
			this->sorting_algorithm_3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sorting_algorithm_3->Location = System::Drawing::Point(253, 208);
			this->sorting_algorithm_3->Name = L"sorting_algorithm_3";
			this->sorting_algorithm_3->Size = System::Drawing::Size(137, 25);
			this->sorting_algorithm_3->TabIndex = 10;
			this->sorting_algorithm_3->Text = L"Sort by inserts";
			this->sorting_algorithm_3->UseVisualStyleBackColor = true;
			// 
			// sorting_algorithm_4
			// 
			this->sorting_algorithm_4->AutoSize = true;
			this->sorting_algorithm_4->Enabled = false;
			this->sorting_algorithm_4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sorting_algorithm_4->Location = System::Drawing::Point(427, 208);
			this->sorting_algorithm_4->Name = L"sorting_algorithm_4";
			this->sorting_algorithm_4->Size = System::Drawing::Size(128, 25);
			this->sorting_algorithm_4->TabIndex = 11;
			this->sorting_algorithm_4->Text = L"Sorting Shell";
			this->sorting_algorithm_4->UseVisualStyleBackColor = true;
			// 
			// Info
			// 
			this->Info->AllowUserToAddRows = false;
			this->Info->AllowUserToDeleteRows = false;
			this->Info->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->Info->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->Info->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->Info->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Info->Location = System::Drawing::Point(12, 288);
			this->Info->Name = L"Info";
			this->Info->ReadOnly = true;
			this->Info->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->Info->RowHeadersVisible = false;
			this->Info->Size = System::Drawing::Size(447, 156);
			this->Info->TabIndex = 12;
			// 
			// sorting_algorithm_5
			// 
			this->sorting_algorithm_5->AutoSize = true;
			this->sorting_algorithm_5->Enabled = false;
			this->sorting_algorithm_5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sorting_algorithm_5->Location = System::Drawing::Point(592, 184);
			this->sorting_algorithm_5->Name = L"sorting_algorithm_5";
			this->sorting_algorithm_5->Size = System::Drawing::Size(107, 25);
			this->sorting_algorithm_5->TabIndex = 13;
			this->sorting_algorithm_5->Text = L"Quick sort";
			this->sorting_algorithm_5->UseVisualStyleBackColor = true;
			// 
			// sorting_algorithm_6
			// 
			this->sorting_algorithm_6->AutoSize = true;
			this->sorting_algorithm_6->Enabled = false;
			this->sorting_algorithm_6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sorting_algorithm_6->Location = System::Drawing::Point(592, 208);
			this->sorting_algorithm_6->Name = L"sorting_algorithm_6";
			this->sorting_algorithm_6->Size = System::Drawing::Size(135, 25);
			this->sorting_algorithm_6->TabIndex = 14;
			this->sorting_algorithm_6->Text = L"Merge sorting";
			this->sorting_algorithm_6->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(173, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(235, 29);
			this->textBox1->TabIndex = 16;
			this->textBox1->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->Button_Create);
			this->groupBox1->Controls->Add(this->Input);
			this->groupBox1->Controls->Add(this->Random);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(414, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(313, 117);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Enter the length of the array (1-600)";
			this->groupBox1->Visible = false;
			// 
			// Open_Array
			// 
			this->Open_Array->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Open_Array->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Open_Array->Location = System::Drawing::Point(12, 12);
			this->Open_Array->Name = L"Open_Array";
			this->Open_Array->Size = System::Drawing::Size(155, 54);
			this->Open_Array->TabIndex = 19;
			this->Open_Array->Text = L"Open Array";
			this->Open_Array->UseVisualStyleBackColor = false;
			this->Open_Array->Click += gcnew System::EventHandler(this, &MyForm::Open_Array_Click);
			// 
			// Create_Box
			// 
			this->Create_Box->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Create_Box->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Create_Box->Location = System::Drawing::Point(12, 73);
			this->Create_Box->Name = L"Create_Box";
			this->Create_Box->Size = System::Drawing::Size(155, 54);
			this->Create_Box->TabIndex = 20;
			this->Create_Box->Text = L"Create Array";
			this->Create_Box->UseVisualStyleBackColor = false;
			this->Create_Box->Click += gcnew System::EventHandler(this, &MyForm::Create_Box_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(465, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 51);
			this->button1->TabIndex = 21;
			this->button1->Text = L"About Author";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(465, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 51);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Help";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(739, 456);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Create_Box);
			this->Controls->Add(this->Open_Array);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->sorting_algorithm_6);
			this->Controls->Add(this->sorting_algorithm_5);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->sorting_algorithm_4);
			this->Controls->Add(this->sorting_algorithm_3);
			this->Controls->Add(this->sorting_algorithm_2);
			this->Controls->Add(this->sorting_algorithm_1);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Sorting);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->Array);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Array Sorting Algorithms";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Array))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Sorting))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Info))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}











#pragma endregion

	private:
		bool Protect()															//Функція Провірки на коректність вводу
		{
			if (Input->Text->Length == 0) {
				return false;
			}
			for (int i = 0; i < Input->Text->Length; i++)
			{
				if ((Input->Text[i] >= '0') && (Input->Text[i] <= '9')) {}
				else { return false; }
			}
			if ((System::Convert::ToInt32(Input->Text) > 600) || (System::Convert::ToInt32(Input->Text) <= 1)) { return false; }
			return true;
		}


		void bubble_method(float Data[], int a, int colls)	//функція сортування бульбашки
		{
			float temp;	//тимчасова змінна для збереження даних при обміні
			int comparison_counter = 0, permutation_counter = 0;	//лічильники операцій
			float* Arr = new float[a];	//масив
			for (int i = 0; i < a; i++)
			{	
				Arr[i] = Data[i];	//переписуємо масив, щоб з ним маніпулювати
			}
			for (int i = 0; i < a - 1; i++)	//звичайний метод бульбашки
			{
				for (int j = 0; j < a - i - 1; j++)
				{
					comparison_counter++;	//додаємо порівняння
					if (Data[j] > Data[j + 1])
					{
						permutation_counter++;	//додаємо переприсвоєння
						temp = Arr[j];	//заміна знаень
						Arr[j] = Arr[j + 1];
						Arr[j + 1] = temp;
					}
				}
			}
			//Заповнюємо в Info(DataGridView)
			Info->Rows[colls]->Cells[1]->Value = comparison_counter;	
			Info->Rows[colls]->Cells[2]->Value = permutation_counter;
			delete[] Arr;	//звільнення памяті
		}

		void sort_by_choice(float Data[], int a, int colls)	//метод вибору
		{
			int min = 0;	//змінна відповідає за мінімальний елемент (очевидно)
			int temp = 0;	//тимчасова змінна для збереження даних при обміні
			int comparison_counter = 0, permutation_counter = 0;//лічильники операцій
			float* Arr = new float[a];	//масив
			for (int i = 0; i < a; i++)	//переписуємо масив, щоб з ним маніпулювати
			{
				Arr[i] = Data[i];
			}

			for (int i = 0; i < a; i++)
			{
				min = i;
				for (int j = i + 1; j < a; j++)
				{	//знаходимо мінімальний елемент
					comparison_counter++;
					if (Arr[j] < Arr[min])
					{
						min = j;
					}
				}
				comparison_counter++;
				if (i != min)
				{	//присвоюємо мінімальний елемент на "своє" місце
					permutation_counter++;
					temp = Arr[i];
					Arr[i] = Arr[min];
					Arr[min] = temp;
				}
			}
			//Заповнюємо в Info(DataGridView)
			Info->Rows[colls]->Cells[1]->Value = comparison_counter;
			Info->Rows[colls]->Cells[2]->Value = permutation_counter;
			delete[] Arr;
		}

		void insertionSort(float Data[], int a, int colls)	//метод вставки
		{
			float temp;	//тимчасова змінна для збереження даних при обміні
			int item;	//індекс попереднього елемента
			int comparison_counter = 0, permutation_counter = 0;//лічильники операцій
			float* Arr = new float[a];	//масив
			for (int i = 0; i < a; i++)
			{
				Arr[i] = Data[i];
			}
			for (int counter = 1; counter < a; counter++)
			{
				permutation_counter++;
				temp = Arr[counter];//присвоюємо поточне значення елемента масиву
				item = counter - 1;	//присвоюємо індекс попереднього елмента
				
				while (item >= 0 && Arr[item] > temp)
				{
					comparison_counter++;
					permutation_counter++;
					Arr[item + 1] = Arr[item];	//перестановка елементів масиву
					Arr[item] = temp;
					item--;
				}
			}
			//Заповнюємо в Info(DataGridView)
			Info->Rows[colls]->Cells[1]->Value = comparison_counter;
			Info->Rows[colls]->Cells[2]->Value = permutation_counter;
			delete[] Arr;
		}

		void ShellSort(float Data[], int a, int colls)	//метод Шелла
		{
			int temp;	//тимчасова змінна для збереження даних при обміні
			int comparison_counter = 0, permutation_counter = 0;//лічильники
			float* Arr = new float[a];	//масив

			for (int x = 0; x < a; x++)
			{
				Arr[x] = Data[x];
			}

			for (int step = a / 2; step > 0; step /= 2)	//вибір кроку
			{
				for (int i = step; i < a; i++)	
				//перерахування елементів, що сортуються на певному кроці
				{
					
					for (int j = i - step; j >= 0 && Arr[j] > Arr[j + step]; j -= step)
					//перестановка елементів підсписку, поки і-тий елементне буде відсортрваний
					{
						comparison_counter++;
						permutation_counter++;	//перестановка
						temp = Arr[j];
						Arr[j] = Arr[j + step];
						Arr[j + step] = temp;
					}
				}
			}
			Info->Rows[colls]->Cells[1]->Value = comparison_counter;
			Info->Rows[colls]->Cells[2]->Value = permutation_counter;
			delete[] Arr;
		}

		void QuickSort(float Array[], int a, int colls, int L, int R, int comparison_counter, int permutation_counter)
		{
			int iter = L, jter = R; //ліва та права межа сортування
			int middle = (R + L) / 2;	//середина

			float x = Array[middle];//присвоюємо х середній елемент масиву
			int temp;	//тимчасова змінна для збереження даних при обміні

			do
			{	
				
				while (Array[iter] < x)
				{
					comparison_counter++;
					iter++;
				}
				
				while (x < Array[jter])
				{
					comparison_counter++;
					jter--;
				}
				
				if (iter <= jter)
				{
					permutation_counter++;
					temp = Array[iter];
					Array[iter] = Array[jter];
					Array[jter] = temp;

					iter++;
					jter--;
				}
			} while (iter < jter);
			comparison_counter++;
			if (L < jter)
			{	//рекурсивний виклик функції
				QuickSort(Array, a, colls, L, jter, comparison_counter, permutation_counter);
			}
			comparison_counter++;
			if (iter < R)
			{	//рекурсивний виклик функції
				QuickSort(Array, a, colls, iter, R, comparison_counter, permutation_counter);
			}
			Info->Rows[colls]->Cells[1]->Value = comparison_counter;
			Info->Rows[colls]->Cells[2]->Value = permutation_counter;
		}

		void merge(float arr[], int a, int colls, int l, int m, int r, int comparison_counter, int permutation_counter)
		{
			int n1 = m - l + 1;
			int n2 = r - m;

			// Створення тимчасових масивів
			float* L = new float[n1];
			float* R = new float[n2];
			//копіюємо дані в тимчасові масиви L та R
			for (int i = 0; i < n1; i++)
			{
				L[i] = arr[l + i];
			}
			for (int j = 0; j < n2; j++)
			{
				R[j] = arr[m + 1 + j];
			}
			//Початковий індекс першого (і) та другого (j) підмасивів
			int i = 0;
			int j = 0;
			//Початковий індекс об’єднаного підмасиву
			int k = l;

			while (i < n1 && j < n2)
			{
				comparison_counter++;
				if (L[i] <= R[j])
				{
					permutation_counter++;
					arr[k] = L[i];
					i++;
				}
				else
				{
					permutation_counter++;
					arr[k] = R[j];
					j++;
				}
				k++;
			}
			// Копіювання решту елементів L [], якщо такі є
			while (i < n1)
			{
				permutation_counter++;
				arr[k] = L[i];
				i++;
				k++;
			}

			// Копіювання решту елементів R [], якщо такі є
			while (j < n2)
			{
				permutation_counter++;
				arr[k] = R[j];
				j++;
				k++;
			}
			Info->Rows[colls]->Cells[1]->Value = comparison_counter;
			Info->Rows[colls]->Cells[2]->Value = permutation_counter;
			delete[] L;
			delete[] R;
		}
		// l - для лівого індексу, а r - для правого індексу підмасиву arr, який потрібно відсортувати
		void mergeSort(float arr[], int a, int colls, int l, int r, int comparison_counter, int permutation_counter)
		{
			comparison_counter++;
			if (l >= r) { return; }

			int m = (l + r - 1) / 2;
			mergeSort(arr, a, colls, l, m, comparison_counter, permutation_counter);
			mergeSort(arr, a, colls, m + 1, r, comparison_counter, permutation_counter);
			merge(arr, a, colls, l, m, r, comparison_counter, permutation_counter);
		}

	private:
		System::Void Create_Click(System::Object^ sender, System::EventArgs^ e)	//Кнопочка "Crate array"
		{
			if (Protect())	//Виклик функції на провірку
			{
				srand(time(0));	//Підключення часу
				int a = System::Convert::ToInt32(Input->Text);	//Змінна що зберігає введене нами число

				Array->RowCount = 1;	//Розміри Таблиці DataGridViev (Array)
				Array->ColumnCount = a;
				int* Data = new int[a];
				if (Random->Checked)	//Випадкове число(CheckBox)
				{
					for (int i = 0; i < a; i++)	//Заповнення
					{
						Data[i] = sin(rand()) * 100;
						Array->Rows[0]->Cells[i]->Value = Data[i];
					}
				}
				else if (!Random->Checked)	//Якщо вирішили ввести рученьками
				{
					for (int i = 0; i < a; i++)
					{
						Data[i] = Convert::ToInt32(Array->Rows[0]->Cells[i]->Value);
					}
				}

				sorting_algorithm_1->Enabled = true;	//Розблокування checkBox'ів
				sorting_algorithm_2->Enabled = true;	
				sorting_algorithm_3->Enabled = true;	
				sorting_algorithm_4->Enabled = true;	
				sorting_algorithm_5->Enabled = true;	
				sorting_algorithm_6->Enabled = true;	

				Input->ReadOnly = true;	//блокування вводу
				Sort->Enabled = true;	//розблокування кнопки "Sort"

				delete[] Data;	//Видалення масиву
			}
			else { MessageBox::Show("Enter a digit 1-600! Please", "Error"); }
		}

	private:
		System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e)	//Кнопочка "Sort"
		{
			int a = System::Convert::ToInt32(Input->Text);	//ще раз створюємо змінну яка дорівнює введеному числу
			Sorting->RowCount = 1;	//Розміри DataGridViev (Sorting)
			Sorting->ColumnCount = a;
			
			float* Data = new float[a];	//Ще раз створюємо масив

			for (int i = 0; i < a; i++)	//Заповнюємо масив
			{
				Data[i] = Convert::ToInt32(Array->Rows[0]->Cells[i]->Value);
			}

			int sort_row = 0; //Створення змінної, яка рахує кількість поставлених галочок
			if (sorting_algorithm_1->Checked) { sort_row++; }
			if (sorting_algorithm_2->Checked) { sort_row++; }
			if (sorting_algorithm_3->Checked) { sort_row++; }
			if (sorting_algorithm_4->Checked) { sort_row++; }
			if (sorting_algorithm_5->Checked) { sort_row++; }
			if (sorting_algorithm_6->Checked) { sort_row++; }

			if (sort_row != 0)	//провірка чи користувач поставив хоть одну галочку
			{
				Info->RowCount = sort_row;	//Розміри DataGridViev(Info)
				Info->ColumnCount = 3;
				Info->Columns[0]->HeaderCell->Value = L"Method";	//Заголовки 
				Info->Columns[1]->HeaderCell->Value = L"Comparisons";
				Info->Columns[2]->HeaderCell->Value = L"Permutations";
				int i = 0;
				//Виклик функцій методів сортування
				if (sorting_algorithm_1->Checked)	
				{
					Info->Rows[i]->Cells[0]->Value = "Sorting bubbles";
					bubble_method(Data, a, i);
					i++;
				}

				if (sorting_algorithm_2->Checked)
				{
					Info->Rows[i]->Cells[0]->Value = "Sort by choice";
					sort_by_choice(Data, a, i);
					i++;
				}

				if (sorting_algorithm_3->Checked)
				{
					Info->Rows[i]->Cells[0]->Value = "Sort by inserts";
					insertionSort(Data, a, i);
					i++;
				}

				if (sorting_algorithm_4->Checked)
				{
					Info->Rows[i]->Cells[0]->Value = "Sorting Shell";
					ShellSort(Data, a, i);
					i++;
				}

				if (sorting_algorithm_5->Checked)
				{
					Info->Rows[i]->Cells[0]->Value = "Quick sort";
					float* Array = new float[a];
					for (int x = 0; x < a; x++)
					{
						Array[x] = Data[x];
					}
					QuickSort(Array, a, i, 0, a - 1, 0, 0);
					delete[] Array;
					i++;
				}

				if (sorting_algorithm_6->Checked)
				{
					Info->Rows[i]->Cells[0]->Value = "Merge sorting";
					float* Array = new float[a];
					for (int x = 0; x < a; x++)
					{
						Array[x] = Data[x];
					}
					mergeSort(Array, a, i, 0, a - 1, 0, 0);
					i++;
					delete[] Array;
				}

				float m;
				for (int i = 0; i < a - 1; i++) //Сортування бульбашкою, не впливає на результат
				{
					for (int j = 0; j < a - i - 1; j++)
					{
						if (Data[j] > Data[j + 1])
						{
							m = Data[j];
							Data[j] = Data[j + 1];
							Data[j + 1] = m;
						}
					}
				}

				for (int i = 0; i < a; i++)	//Вивід готового масиву в таблицю
				{
					Sorting->Rows[0]->Cells[i]->Value = Data[i];
				}

			}
			else { MessageBox::Show("Choose one of the sorting methods", "Error"); }
		
			Button_Create->Enabled = false;

			delete[] Data;
		}

	private: 
		System::Void Open_Array_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ FileName = "";	//змінна яка збурігає шлях до файлу
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;	//діалогове вікно
			openFileDialog1->Filter = "Text Files (*.txt)|*.txt";	//файли виключно формату .txt

			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{	
				FileName = openFileDialog1->FileName;
				Sort->Enabled = true;	//це блокування і розблокування різних кнопочок
				Create_Box->Enabled = false;
				Open_Array->Enabled = false;
				sorting_algorithm_1->Enabled = true;
				sorting_algorithm_2->Enabled = true;
				sorting_algorithm_3->Enabled = true;
				sorting_algorithm_4->Enabled = true;
				sorting_algorithm_5->Enabled = true;
				sorting_algorithm_6->Enabled = true;
			}
			try
			{
				StreamReader^ file = File::OpenText(FileName);
				textBox1->Text = file->ReadToEnd();	//переписування даних в textBox1
				StreamWriter^ sw = gcnew StreamWriter("temp.txt");	
				sw->WriteLine(textBox1->Text);	//зберігання даних в папці проєкту
				sw->Close();
				ifstream File;	
				string link = "temp.txt";
				//відкриваємо тимчасовий файл
				File.open(link);
				if (File.is_open())
				{
					int a = 0;	//лічильник кількості чисел
					float b;
					while (!File.eof())	//Рахуємо кількість чисел
					{
						File >> b;
						a++;
					}
					File.close();
					a--;	
					File.open(link);
					float* Arr = new float[a];	//створюємо масив
					float digit;	
					for (int i = 0; i < a; i++)	//заповнюємо масив
					{
						File >> digit;
						Arr[i] = digit;
					}	
					//створюємо таблицю
					Array->RowCount = 1;//Розміри Таблиці
					Array->ColumnCount = a;
					for (int i = 0; i < a; i++)	//нереносимо дані в таблицю
					{
						Array->Rows[0]->Cells[i]->Value = Arr[i];
					}
					Input->Text = Convert::ToString(a);	//записуємо розмір масиву (цого поля не видно, але воно є)
					delete[] Arr;
				}
				File.close();
			}
			catch (Exception^ e)
			{
				//MessageBox::Show(this, "File is not open", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	private: 
		System::Void Create_Box_Click(System::Object^ sender, System::EventArgs^ e)
		{
			groupBox1->Visible = true;
			Open_Array->Enabled = false;
			Create_Box->Enabled = false;
		}

	private:
		System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e)	//Кнопочка "Reset"
		{
			Input->Text = L"";
			Array->RowCount = 0;
			Array->ColumnCount = 0;

			Sorting->RowCount = 1;
			Sorting->ColumnCount = 0;

			Info->RowCount = 1;
			Info->ColumnCount = 0;

			sorting_algorithm_1->Enabled = false;
			sorting_algorithm_2->Enabled = false;
			sorting_algorithm_3->Enabled = false;
			sorting_algorithm_4->Enabled = false;
			sorting_algorithm_5->Enabled = false;
			sorting_algorithm_6->Enabled = false;

			Random->Checked = false;
			sorting_algorithm_1->Checked = false;
			sorting_algorithm_2->Checked = false;
			sorting_algorithm_3->Checked = false;
			sorting_algorithm_4->Checked = false;
			sorting_algorithm_5->Checked = false;
			sorting_algorithm_6->Checked = false;

			Input->ReadOnly = false;
			Sort->Enabled = false;
			Button_Create->Enabled = true;

			groupBox1->Visible = false;
			Open_Array->Enabled = true;
			Create_Box->Enabled = true;
		}

	private:
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MyForm2^ f2 = gcnew MyForm2();
			f2->Show();
		}

	private: 
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MyForm1^ f1 = gcnew MyForm1();
			f1->Show();
		}

};
}
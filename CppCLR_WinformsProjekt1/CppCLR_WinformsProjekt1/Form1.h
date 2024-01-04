#include <cliext/list>
#include <vector>
#include <algorithm>
#include <sstream>
#include <numeric>

namespace CppCLRWinformsProjekt {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		cliext::list<double>^ resultsList = gcnew cliext::list<double>();
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private:
		bool radioButtonPressed = false;

	public:
		Form1(void)
		{
			InitializeComponent();
		
		}

	protected:
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aaaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ išsaugotiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uždarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pagalbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ išsaugotiKaipToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ uždarytiToolStripMenuItem1;
	
	private: System::String^ failo_vardas = "";
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aaaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->išsaugotiKaipToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->išsaugotiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uždarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 45);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Įvesti ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Vardas Pavardė";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(386, 27);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(440, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Pažymiai";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(420, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(401, 27);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(811, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Egzaminas";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(827, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 27);
			this->textBox3->TabIndex = 6;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 199);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(660, 116);
			this->listBox1->TabIndex = 7;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(248, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 45);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Atnaujinti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(593, 139);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(79, 21);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(711, 139);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(83, 21);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aaaToolStripMenuItem,
					this->pagalbaToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(900, 28);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aaaToolStripMenuItem
			// 
			this->aaaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->atidarytiToolStripMenuItem1,
					this->išsaugotiKaipToolStripMenuItem, this->uždarytiToolStripMenuItem1
			});
			this->aaaToolStripMenuItem->Name = L"aaaToolStripMenuItem";
			this->aaaToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->aaaToolStripMenuItem->Text = L"Failas";
			// 
			// atidarytiToolStripMenuItem1
			// 
			this->atidarytiToolStripMenuItem1->Name = L"atidarytiToolStripMenuItem1";
			this->atidarytiToolStripMenuItem1->Size = System::Drawing::Size(183, 26);
			this->atidarytiToolStripMenuItem1->Text = L"Atidaryti";
			this->atidarytiToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::atidarytiToolStripMenuItem1_Click);
			// 
			// išsaugotiKaipToolStripMenuItem
			// 
			this->išsaugotiKaipToolStripMenuItem->Name = L"išsaugotiKaipToolStripMenuItem";
			this->išsaugotiKaipToolStripMenuItem->Size = System::Drawing::Size(183, 26);
			this->išsaugotiKaipToolStripMenuItem->Text = L"Išsaugoti kaip";
			this->išsaugotiKaipToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::išsaugotiKaipToolStripMenuItem_Click);
			// 
			// uždarytiToolStripMenuItem1
			// 
			this->uždarytiToolStripMenuItem1->Name = L"uždarytiToolStripMenuItem1";
			this->uždarytiToolStripMenuItem1->Size = System::Drawing::Size(183, 26);
			this->uždarytiToolStripMenuItem1->Text = L"Uždaryti";
			this->uždarytiToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::uždarytiToolStripMenuItem1_Click);
			// 
			// pagalbaToolStripMenuItem
			// 
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(76, 24);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			this->pagalbaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::pagalbaToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->apieToolStripMenuItem->Text = L"Apie";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::apieToolStripMenuItem_Click);
			// 
			// atidarytiToolStripMenuItem
			// 
			this->atidarytiToolStripMenuItem->Name = L"atidarytiToolStripMenuItem";
			this->atidarytiToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->atidarytiToolStripMenuItem->Text = L"Atidaryti";
			// 
			// išsaugotiToolStripMenuItem
			// 
			this->išsaugotiToolStripMenuItem->Name = L"išsaugotiToolStripMenuItem";
			this->išsaugotiToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->išsaugotiToolStripMenuItem->Text = L"Išsaugoti";
			// 
			// uždarytiToolStripMenuItem
			// 
			this->uždarytiToolStripMenuItem->Name = L"uždarytiToolStripMenuItem";
			this->uždarytiToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->uždarytiToolStripMenuItem->Text = L"Uždaryti";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(450, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Pažymiai įvedami atskiriant tarpais";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(599, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Būtina pasirinkti ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Įvesti studentai";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 351);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(662, 200);
			this->textBox4->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(695, 351);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 52);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Kopijuoti studentus";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(695, 413);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(193, 52);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Kopijuoti pažymėtą";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 331);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Laukelis kopijavimui";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(695, 483);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(193, 52);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Valyti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 563);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void UpdateListBox() {
			String^ name = textBox1->Text;
			String^ grades = textBox2->Text;
			String^ exam = textBox3->Text;
				if (String::IsNullOrWhiteSpace(name) || String::IsNullOrWhiteSpace(grades) || String::IsNullOrWhiteSpace(exam)) {
					MessageBox::Show("Please enter values in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			if (!radioButton1->Checked && !radioButton2->Checked) {
				MessageBox::Show("Please select a calculation method (Vidurkis or Mediana).", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			array<String^>^ gradesArray = grades->Split(' ');


			cliext::list<double>^ gradesList = gcnew cliext::list<double>();

			for each (String ^ grade in gradesArray) {
				double parsedGrade;
				if (Double::TryParse(grade, parsedGrade)) {
					gradesList->push_back(parsedGrade);
				}
			}

			double result=0.0;

			if (radioButton1->Checked) {
				double sum = 0.0;
				for each (double grade in gradesList) {
					sum += grade;
				}
				result = (gradesList->size() > 0) ? (sum / gradesList->size()) : 0.0;
				
			}
			else if (radioButton2->Checked) {
				List<double>^ sortedGradesList = gcnew List<double>(gradesList);
				sortedGradesList->Sort();

				int count = sortedGradesList->Count;

				if (count % 2 == 0) {
					result = (sortedGradesList[count / 2 - 1] + sortedGradesList[count / 2]) / 2.0;
				}
				else {
					result = sortedGradesList[count / 2];
				}
			}
			double finalGrade = result * 0.4 + (Double::Parse(exam) * 0.6);

			String^ displayText = String::Format("{0} {1} Exam: {2} {3}: {4:F4}", name, grades, exam,
				(radioButton1->Checked ? "Vidurkis" : "Mediana"), result);
			listBox1->Items->Add(displayText);

			}

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			
			
				UpdateListBox();
				radioButtonPressed = false;
				radioButton1->Enabled = true;
				radioButton2->Enabled = true;
			
		}
		System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			radioButtonPressed = true;
			
			
			
		}

		System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			radioButtonPressed = true;
			
		}

		

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
private: System::Void pagalbaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Programa leidzia ivesti studento varda, pavarde, pazymius(atskiriant tarpais) ir apskaiciuoja pagal pasirinkima mediana ar vidurki",// pranešimas apie programą, išveda pranešimą,
		"Pagalba", MessageBoxButtons::OK);
}
private: System::Void uždarytiToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form1::Close();
}
private: System::Void atidarytiToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->InitialDirectory = "..\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
		while (!sr->EndOfStream) {
			listBox1->Items->Add(sr->ReadLine());
		}

		failo_vardas = openFileDialog1->FileName;
		sr->Close();
	}
}

	private: System::Void išsaugotiKaipToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->InitialDirectory = "..\\";
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt";
		String^ contentToSave = "";

		for each (Object ^ item in listBox1->Items) {
			contentToSave += item->ToString() + "\r\n";
		}

	rep:
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
			sw->Write(contentToSave);
			sw->Close();
		}
		else {
			MessageBox::Show("Error on file input", "Error", MessageBoxButtons::OK);
		}
	}
private: System::Void apieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("2 savarankiskas darbas",// pranešimas apie programą, išveda pranešimą,
		"Apie", MessageBoxButtons::OK);
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Items->Count > 0) {
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			for each (Object ^ item in listBox1->Items) {
				sb->AppendLine(item->ToString() + "\n");
			}
			textBox4->Text += sb->ToString();
		}
		else {
			MessageBox::Show("listBox1 is empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox1->Items->Count > 0) {
			if (listBox1->SelectedIndex != -1) {
				Object^ selectedItem = listBox1->SelectedItem;
				textBox4->Text += selectedItem->ToString() + "\r\n";
			}
			else {
				MessageBox::Show("Please select an item in listBox1.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("listBox1 is empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count > 0) {
		textBox4->Clear();
	}
	else {
		MessageBox::Show("listBox1 is empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

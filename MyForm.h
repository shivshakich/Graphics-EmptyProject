#pragma once

#include <string>

#include "TQueue.h"
#include "TTask.h"

namespace CppWinForm1 {

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
			n = 10;
			t = 10;
			p = 0.5;
			q = 0.5;
			sizeQueue = 100;
			que = new TQueue<TTask>(sizeQueue);
			nPush = nPop = nDel = nAll = 0;
			countTact = 0;
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

			//delete que;
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
	private: System::Windows::Forms::Button^ button2;
		/// </summary>


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label15;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(554, 463);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество шагов N:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(554, 491);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(301, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Вероятность поступления нового задания P:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(554, 519);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Вероятность выполнения задания Q:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(870, 519);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"0,5";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(870, 491);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"0,5";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(870, 463);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"10";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(621, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(349, 358);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"№";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name of task";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(870, 435);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"100";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(554, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Время одного шага T:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 518);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Пуск/Стоп";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(557, 406);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(413, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Установить значения";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(10, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(219, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Здесь будут выводиться ошибки";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(202, 520);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Всего пусков";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(202, 504);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(261, 16);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Не встало в очередь из-за её размера";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(202, 488);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Pop";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(202, 472);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Push";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label10->Location = System::Drawing::Point(476, 504);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label11->Location = System::Drawing::Point(476, 520);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(14, 16);
			this->label11->TabIndex = 17;
			this->label11->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label12->Location = System::Drawing::Point(476, 488);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 16);
			this->label12->TabIndex = 18;
			this->label12->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label13->Location = System::Drawing::Point(476, 472);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 16);
			this->label13->TabIndex = 19;
			this->label13->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(797, 387);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(118, 16);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Задач в очереди";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label15->Location = System::Drawing::Point(919, 387);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(14, 16);
			this->label15->TabIndex = 21;
			this->label15->Text = L"0";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(202, 456);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(115, 16);
			this->label16->TabIndex = 22;
			this->label16->Text = L"Пройдено шагов";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label17->Location = System::Drawing::Point(476, 456);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(14, 16);
			this->label17->TabIndex = 23;
			this->label17->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 553);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		private:

		int n, t;							// n - количество повторов, t - время одного повтора
		double p, q;						// p - вер-ть появления задачи, q - вер-ть решения задачи
		size_t sizeQueue;					// размер очереди
		TQueue<TTask>* que;					// указатель на очередь

		int nPush, nPop, nDel, nAll;

		int countTact;						// для таймера

		// методы
		void UpdateQueue() {
			double r1 = rand(), r2 = rand();
			while (r1 > 1) r1 /= 10;
			while (r2 > 1) r2 /= 10;

			if (r1 <= p) {
				if (que->IsFull()) {
					++nDel;		label10->Text = "" + nDel;
				}
				else {
					TTask task;
					que->Push(task);
					++nPush;	label13->Text = "" + nPush;
				}
			}
			if (r2 <= q) {
				if (!que->IsEmpty()) {
					que->Pop();
					++nPop;		label12->Text = "" + nPop;
				}
			}

			label15->Text = "" + que->GetCount();
		}
		void ChangeTable() {
			TQueue<TTask> tmpQueue(sizeQueue);

			dataGridView1->Rows->Clear();		// очистка рядов

			int i = 0;
			while (!que->IsEmpty()) {
				TTask task = que->Pop();

				dataGridView1->Rows->Add();		// добавить ряд ?
				dataGridView1->Rows[i]->Cells[0]->Value = i;

				dataGridView1->Rows[i]->Cells[1]->Value = "j";

				tmpQueue.Push(task);

				++i;
			}

			while (!tmpQueue.IsEmpty())
				que->Push(tmpQueue.Pop());
		}
		void MakeMessage(int error) {
			switch (error) {
			case 1: label5->Text = "Значение Q должно быть 0 <= Q <= 1"; break;
			case 2: label5->Text = "Значение P должно быть 0 <= P <= 1"; break;
			case 3: label5->Text = "Значение N должно быть >= 0"; break;
			case 4: label5->Text = "Значение T должно быть >= 0"; break;
			}
		}

private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//SetP();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = !(timer1->Enabled);
	if (timer1->Enabled) {
		++nAll;		label11->Text = "" + nAll;
	}
	countTact = 0;
	nPush = nPop = nDel = 0;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//SetQ();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//SetN();
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//SetT();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	UpdateQueue();
	ChangeTable();
	++countTact;	label17->Text = "" + countTact;
	if (countTact == n)
		timer1->Enabled = !timer1->Enabled;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// кнопка "изменить значения"

	bool res;
	int tmp1;
	double tmp2;

	String^ strT = textBox4->Text;
	res = System::Int32::TryParse(strT, tmp1);
	if (!res || tmp1 < 0)
		MakeMessage(4);
	else {
		t = tmp1;
		timer1->Interval = t;
	}

	String^ strN = textBox3->Text;
	res = System::Int32::TryParse(strN, tmp1);
	if (!res || tmp1 < 0)
		MakeMessage(3);
	else
		n = tmp1;

	String^ strP = textBox2->Text;
	res = System::Double::TryParse(strP, tmp2);
	if (!res || tmp2 < 0.0 || tmp2 > 1.0)
		MakeMessage(2);
	else
		p = tmp2;

	String^ strQ = textBox1->Text;
	res = System::Double::TryParse(strQ, tmp2);
	if (!res || tmp2 < 0.0 || tmp2 > 1.0)
		MakeMessage(1);
	else
		q = tmp2;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

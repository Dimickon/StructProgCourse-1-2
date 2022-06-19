#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}

		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ okno;
	private: System::Windows::Forms::Button^ saveTriagle;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ levelTriagle;

	private: System::Windows::Forms::NumericUpDown^ sideTriangle;

	private: System::Windows::Forms::Button^ btncreate;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->okno = (gcnew System::Windows::Forms::PictureBox());
			this->saveTriagle = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->levelTriagle = (gcnew System::Windows::Forms::NumericUpDown());
			this->sideTriangle = (gcnew System::Windows::Forms::NumericUpDown());
			this->btncreate = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->okno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelTriagle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sideTriangle))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(377, 9);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(303, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����������� �����������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// okno
			// 
			this->okno->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->okno->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->okno->Location = System::Drawing::Point(40, 76);
			this->okno->Name = L"okno";
			this->okno->Padding = System::Windows::Forms::Padding(10);
			this->okno->Size = System::Drawing::Size(678, 410);
			this->okno->TabIndex = 1;
			this->okno->TabStop = false;
			// 
			// saveTriagle
			// 
			this->saveTriagle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->saveTriagle->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveTriagle->Location = System::Drawing::Point(777, 439);
			this->saveTriagle->Name = L"saveTriagle";
			this->saveTriagle->Size = System::Drawing::Size(225, 47);
			this->saveTriagle->TabIndex = 2;
			this->saveTriagle->Text = L"���������";
			this->saveTriagle->UseVisualStyleBackColor = true;
			this->saveTriagle->Click += gcnew System::EventHandler(this, &MyForm::saveTriagle_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(775, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"������ ������������";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(775, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"������� ������������";
			// 
			// levelTriagle
			// 
			this->levelTriagle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->levelTriagle->Location = System::Drawing::Point(779, 99);
			this->levelTriagle->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->levelTriagle->Name = L"levelTriagle";
			this->levelTriagle->Size = System::Drawing::Size(223, 20);
			this->levelTriagle->TabIndex = 7;
			// 
			// sideTriangle
			// 
			this->sideTriangle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->sideTriangle->Location = System::Drawing::Point(779, 160);
			this->sideTriangle->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->sideTriangle->Name = L"sideTriangle";
			this->sideTriangle->Size = System::Drawing::Size(223, 20);
			this->sideTriangle->TabIndex = 8;
			// 
			// btncreate
			// 
			this->btncreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btncreate->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 20.29091F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btncreate->Location = System::Drawing::Point(777, 373);
			this->btncreate->Name = L"btncreate";
			this->btncreate->Size = System::Drawing::Size(225, 48);
			this->btncreate->TabIndex = 9;
			this->btncreate->Text = L"���������";
			this->btncreate->UseVisualStyleBackColor = true;
			this->btncreate->Click += gcnew System::EventHandler(this, &MyForm::btncreate_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 541);
			this->Controls->Add(this->btncreate);
			this->Controls->Add(this->sideTriangle);
			this->Controls->Add(this->levelTriagle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->saveTriagle);
			this->Controls->Add(this->okno);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->Name = L"MyForm";
			this->Text = L"����������� �����������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->okno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelTriagle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sideTriangle))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	
	private: System::Void btncreate_Click(System::Object^ sender, System::EventArgs^ e) {
		int side = Convert::ToDouble(sideTriangle->Value);
		int level = Convert::ToDouble(levelTriagle->Value);

		Pen^ redPen = gcnew Pen(Color::Red);
		redPen->Width = 4;
		int pW = okno->Width, pH = okno->Height;
		Bitmap^ img = gcnew Bitmap(pW, pH);
		Graphics^ g = Graphics::FromImage(img);
		float centerX = (okno->Width) / 2;
		float x1 = centerX, x2 = (centerX - side), x3 = (centerX + side), y1 = 0, y2 = (Math::Sqrt(3)/2)*side, y3 = y2;
		g->DrawLine(redPen, x1, y1, x2, y2);
		g->DrawLine(redPen, x2, y2, x3, y3);
		g->DrawLine(redPen, x3, y3, x1, y1);
	}
	private: System::Void okno_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void saveTriagle_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Image(*.png) | *.png | Image(*.jpg) | *.jpg | Image(*.bmp) | *.bmp | All files (*.*) | *.*";
		saveFileDialog1->Title = "���������� �����������";
		saveFileDialog1->FileName = "����������� �����������.png";

		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			okno->Image->Save(saveFileDialog1->FileName);
		}
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}

};
}

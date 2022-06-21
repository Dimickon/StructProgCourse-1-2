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
		Bitmap^ img;
		Graphics^ g;
		Pen^ pen;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//

			Bitmap^ img;
			okno->Image = img;
			Graphics^ g;
			Pen^ pen;
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
	private: System::Windows::Forms::NumericUpDown^ lineThickness;
	private: System::Windows::Forms::Label^ label4;






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
			this->lineThickness = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->okno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelTriagle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sideTriangle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lineThickness))->BeginInit();
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
			// lineThickness
			// 
			this->lineThickness->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->lineThickness->Location = System::Drawing::Point(779, 219);
			this->lineThickness->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->lineThickness->Name = L"lineThickness";
			this->lineThickness->Size = System::Drawing::Size(223, 20);
			this->lineThickness->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(775, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"������� �����";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1046, 541);
			this->Controls->Add(this->lineThickness);
			this->Controls->Add(this->label4);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lineThickness))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buildSerpinsky(Graphics^ g, Pen^ pen, int level, int side, int thickness, Point p1, Point p2, Point p3) {

		/*g->DrawLine(pen, p1, p2);
		g->DrawLine(pen, p2, p3);
		g->DrawLine(pen, p3, p1);
		*/
		if (level == 0) {
			array<Point>^ triagle = { p1, p2, p3 };
			SolidBrush^ blueBrush = gcnew SolidBrush(Color::Blue);
			g->FillPolygon(blueBrush, triagle);
			Point pNew1(p2.X, p2.Y);
			Point pNew2(pNew1.X - side, pNew1.Y + (Math::Sqrt(3) / 2) * side);
			Point pNew3(pNew1.X + side, pNew1.Y + (Math::Sqrt(3) / 2) * side);

			buildSerpinsky(g, pen, level, side, thickness, pNew1, pNew2, pNew3);

			/*Point p12(p2.X, p2.Y);
			Point p23(p3.X, p3.Y);
			Point p13(p2.X, p2.Y);

			buildSerpinsky(level, side, thickness, p1, p12, p13);
			buildSerpinsky(level, side, thickness, p12, p2, p23);
			buildSerpinsky(level, side, thickness, p13, p23, p3);*/
		}

		else {
		}
	};

	private: System::Void btncreate_Click(System::Object^ sender, System::EventArgs^ e) {
		int pW = okno->Width, pH = okno->Height;
		int side;
		if (pW > pH) {
			side = pH;
		}

		else {
			side = pW;
		}
		int level = Convert::ToDouble(levelTriagle->Value);
		int thickness = Convert::ToDouble(lineThickness->Value);

		okno->Image = img;
		img = gcnew Bitmap(pW, pH);
		g = Graphics::FromImage(img);

		pen = gcnew Pen(Color::Red, thickness);

		// ���������� �������� ������������
		float centerX = (okno->Width) / 2;
		float x1 = centerX, y1 = 0;
		float x2 = (x1 - side / 2), y2 = (Math::Sqrt(3) / 2) * side;
		float x3 = (x1 + side / 2), y3 = y2;

		Point p1(x1, y1);
		Point p2(x2, y2);
		Point p3(x3, y3);
	
		buildSerpinsky(g, pen, level, side, thickness, p1, p2, p3);
		//buildSerpinsky(level, side, thickness, p1, p2, p3);
		/*
		float x2 = (x1 - side), y2 = (Math::Sqrt(3) / 2) * side;
		float x3 = (x1 + side), y3 = y2;


		// ��, ����� ����������� ������: 0 - �����, 1 - ������
		int iterationAddTriagle = 0;
		// ������� ������� ����� ����� � ������� ������ ����� ������ �������������
		float AddLeftTriagleX = 0, AddLeftTriagleY = 0;
		float AddRightTriagle = 0, AddRightTriagleY = 0;

		for (int i = 0; i < level; i++) {

			g->DrawLine(redPen, x1, y1, x2, y2);
			g->DrawLine(redPen, x2, y2, x3, y3);
			g->DrawLine(redPen, x3, y3, x1, y1);
			okno->Refresh();

			// ��, ����� ����������� ������: 0 - �����, 1 - ������
			int iteration = 0;

			float addPointX1 = x2, addPointX2 = x3, addPointY1 = y2;
			float addPointX = x2, addPointY = addPointY1;

			while (iteration < 2) {
				if (iteration == 1) {
					addPointX = addPointX2;
				}
				x1 = addPointX, y1 = addPointY1;
				x2 = (addPointX - side), y2 = y1 + (Math::Sqrt(3) / 2) * side;
				x3 = (addPointX + side), y3 = y2;

				g->DrawLine(redPen, x1, y1, x2, y2);
				g->DrawLine(redPen, x2, y2, x3, y3);
				g->DrawLine(redPen, x3, y3, x1, y1);
				okno->Refresh();
				iteration++;
			}

			if (iteration == 0) {

			}

			if (iterationAddTriagle == 0) {
				x1 = x2, y1 = y2;
				x2 = (x1 - side), y2 = y1 + (Math::Sqrt(3) / 2) * side;
				x3 = (x1 + side), y3 = y2;
			}

			else {
				x1 = x3, y1 = y3;
				x2 = (x1 - side), y2 = y1 + (Math::Sqrt(3) / 2) * side;
				x3 = (x1 + side), y3 = y2;
				iterationAddTriagle = 0;
			}
		}*/
	}
	private: System::Void okno_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void saveTriagle_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Image(*.png) | *.png | Image(*.jpg) | *.jpg | Image(*.bmp) | *.bmp | All files (*.*) | *.*";
		saveFileDialog1->Title = "����������� �����������";
		saveFileDialog1->FileName = "����������� �����������.png";

		if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			okno->Image->Save(saveFileDialog1->FileName);
		}
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}

};
}

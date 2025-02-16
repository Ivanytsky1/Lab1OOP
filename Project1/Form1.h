#pragma once
#include "ZavdClass.h"

namespace Lab1App {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form {
    public:
        Form1(void) {
            InitializeComponent();
        }

    protected:
        ~Form1() {
            if (components) {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ xx;
    private: System::Windows::Forms::TextBox^ yy;
    private: System::Windows::Forms::TextBox^ zz;
    private: System::Windows::Forms::TextBox^ aa;
    private: System::Windows::Forms::TextBox^ bb;
    private: System::Windows::Forms::Button^ button1;
    private: System::ComponentModel::Container^ components;

    private:
        void InitializeComponent(void) {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->xx = (gcnew System::Windows::Forms::TextBox());
            this->yy = (gcnew System::Windows::Forms::TextBox());
            this->zz = (gcnew System::Windows::Forms::TextBox());
            this->aa = (gcnew System::Windows::Forms::TextBox());
            this->bb = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());

            this->SuspendLayout();

            // Labels
            this->label1->Text = L"x:";
            this->label1->Location = System::Drawing::Point(20, 20);

            this->label2->Text = L"y:";
            this->label2->Location = System::Drawing::Point(20, 50);

            this->label3->Text = L"z:";
            this->label3->Location = System::Drawing::Point(20, 80);

            this->label4->Text = L"a[x,y,z,b]:";
            this->label4->Location = System::Drawing::Point(20, 140);

            this->label5->Text = L"b[x,y,z]:";
            this->label5->Location = System::Drawing::Point(20, 170);

            // Textboxes
            this->xx->Location = System::Drawing::Point(80, 20);
            this->yy->Location = System::Drawing::Point(80, 50);
            this->zz->Location = System::Drawing::Point(80, 80);
            this->aa->Location = System::Drawing::Point(80, 140);
            this->bb->Location = System::Drawing::Point(80, 170);

            this->aa->ReadOnly = true;
            this->bb->ReadOnly = true;

            // Button
            this->button1->Text = L"Îá÷èñëèòè";
            this->button1->Location = System::Drawing::Point(80, 110);
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);

            // Form Settings
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->xx);
            this->Controls->Add(this->yy);
            this->Controls->Add(this->zz);
            this->Controls->Add(this->aa);
            this->Controls->Add(this->bb);
            this->Controls->Add(this->button1);

            this->Text = L"Îá÷èñëåííÿ ôóíêö³é";
            this->ClientSize = System::Drawing::Size(250, 220);
            this->ResumeLayout(false);
            this->PerformLayout();
        }

        void button1_Click(System::Object^ sender, System::EventArgs^ e) {
            // Ç÷èòóºìî çíà÷åííÿ
            double x = System::Convert::ToDouble(xx->Text);
            double y = System::Convert::ToDouble(yy->Text);
            double z = System::Convert::ToDouble(zz->Text);

            // Âèêîğèñòàííÿ êëàñó ZavdClass
            ZavdClass^ Zavd = gcnew ZavdClass();
            Zavd->Fn_b(x, y, z);
            Zavd->Fn_a(x, y, z);

            // Âèâåäåííÿ ğåçóëüòàò³â
            aa->Text = System::Convert::ToString(Zavd->geta());
            bb->Text = System::Convert::ToString(Zavd->getb());
        }
    };
}

#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Заголовок для класса Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Исходный код добавлять сюда.
			//
		}

	protected:
		/// <summary>
		/// Очищаем ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ContextMenuStrip^  File;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveEsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clearToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  abouyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addNewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::TabControl^  tabControl1;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ToolStripMenuItem^  resetsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  favoritesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  makeMoreLoudToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  dBLevelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  voiceCompressorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vocalEnhancerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  vSTPluginsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  warpingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addMoreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  languagesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  englishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  українськийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;

















	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Требуемая переменная конструрктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Необходимы метод для конструктора форм.
		/// Содержание метода не может быть изменено с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->File = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveEsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->resetsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vSTPluginsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addNewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->favoritesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->makeMoreLoudToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dBLevelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->voiceCompressorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vocalEnhancerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->warpingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addMoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abouyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->languagesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->українськийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->File->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Cross;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(717, 421);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 1;
			// 
			// File
			// 
			this->File->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newToolStripMenuItem, this->openToolStripMenuItem,
					this->editToolStripMenuItem
			});
			this->File->Name = L"File";
			this->File->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->File->Size = System::Drawing::Size(104, 70);
			this->File->UseWaitCursor = true;
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem1, this->viewToolStripMenuItem, this->favoritesToolStripMenuItem, this->languagesToolStripMenuItem,
					this->abouyToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(804, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->newToolStripMenuItem1,
					this->openToolStripMenuItem1, this->saveToolStripMenuItem, this->saveEsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem1
			// 
			this->newToolStripMenuItem1->Name = L"newToolStripMenuItem1";
			this->newToolStripMenuItem1->Size = System::Drawing::Size(114, 22);
			this->newToolStripMenuItem1->Text = L"New";
			// 
			// openToolStripMenuItem1
			// 
			this->openToolStripMenuItem1->Name = L"openToolStripMenuItem1";
			this->openToolStripMenuItem1->Size = System::Drawing::Size(114, 22);
			this->openToolStripMenuItem1->Text = L"Open";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveEsToolStripMenuItem
			// 
			this->saveEsToolStripMenuItem->Name = L"saveEsToolStripMenuItem";
			this->saveEsToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveEsToolStripMenuItem->Text = L"Save As";
			this->saveEsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveEsToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem1
			// 
			this->editToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->clearToolStripMenuItem,
					this->clearToolStripMenuItem1, this->resetsToolStripMenuItem, this->vSTPluginsToolStripMenuItem
			});
			this->editToolStripMenuItem1->Name = L"editToolStripMenuItem1";
			this->editToolStripMenuItem1->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem1->Text = L"Edit";
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->clearToolStripMenuItem->Text = L"Options";
			// 
			// clearToolStripMenuItem1
			// 
			this->clearToolStripMenuItem1->Name = L"clearToolStripMenuItem1";
			this->clearToolStripMenuItem1->Size = System::Drawing::Size(136, 22);
			this->clearToolStripMenuItem1->Text = L"Clear";
			// 
			// resetsToolStripMenuItem
			// 
			this->resetsToolStripMenuItem->Name = L"resetsToolStripMenuItem";
			this->resetsToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->resetsToolStripMenuItem->Text = L"Resets";
			// 
			// vSTPluginsToolStripMenuItem
			// 
			this->vSTPluginsToolStripMenuItem->Name = L"vSTPluginsToolStripMenuItem";
			this->vSTPluginsToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->vSTPluginsToolStripMenuItem->Text = L"VST Plugins";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addNewToolStripMenuItem,
					this->editToolStripMenuItem2, this->aboutToolStripMenuItem
			});
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->viewToolStripMenuItem->Text = L"View";
			this->viewToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::viewToolStripMenuItem_Click);
			// 
			// addNewToolStripMenuItem
			// 
			this->addNewToolStripMenuItem->Name = L"addNewToolStripMenuItem";
			this->addNewToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->addNewToolStripMenuItem->Text = L"Add new";
			// 
			// editToolStripMenuItem2
			// 
			this->editToolStripMenuItem2->Name = L"editToolStripMenuItem2";
			this->editToolStripMenuItem2->Size = System::Drawing::Size(121, 22);
			this->editToolStripMenuItem2->Text = L"Edit";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// favoritesToolStripMenuItem
			// 
			this->favoritesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->makeMoreLoudToolStripMenuItem,
					this->dBLevelToolStripMenuItem, this->voiceCompressorToolStripMenuItem, this->vocalEnhancerToolStripMenuItem, this->warpingToolStripMenuItem,
					this->addMoreToolStripMenuItem
			});
			this->favoritesToolStripMenuItem->Name = L"favoritesToolStripMenuItem";
			this->favoritesToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->favoritesToolStripMenuItem->Text = L"Favourites";
			this->favoritesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::favoritesToolStripMenuItem_Click);
			// 
			// makeMoreLoudToolStripMenuItem
			// 
			this->makeMoreLoudToolStripMenuItem->Name = L"makeMoreLoudToolStripMenuItem";
			this->makeMoreLoudToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->makeMoreLoudToolStripMenuItem->Text = L"+6 dB Level";
			// 
			// dBLevelToolStripMenuItem
			// 
			this->dBLevelToolStripMenuItem->Name = L"dBLevelToolStripMenuItem";
			this->dBLevelToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->dBLevelToolStripMenuItem->Text = L"-6 dB Level";
			// 
			// voiceCompressorToolStripMenuItem
			// 
			this->voiceCompressorToolStripMenuItem->Name = L"voiceCompressorToolStripMenuItem";
			this->voiceCompressorToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->voiceCompressorToolStripMenuItem->Text = L"Voice Compressor";
			// 
			// vocalEnhancerToolStripMenuItem
			// 
			this->vocalEnhancerToolStripMenuItem->Name = L"vocalEnhancerToolStripMenuItem";
			this->vocalEnhancerToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->vocalEnhancerToolStripMenuItem->Text = L"Vocal Enhancer";
			// 
			// warpingToolStripMenuItem
			// 
			this->warpingToolStripMenuItem->Name = L"warpingToolStripMenuItem";
			this->warpingToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->warpingToolStripMenuItem->Text = L"Warping";
			// 
			// addMoreToolStripMenuItem
			// 
			this->addMoreToolStripMenuItem->Name = L"addMoreToolStripMenuItem";
			this->addMoreToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->addMoreToolStripMenuItem->Text = L"Add more...";
			// 
			// abouyToolStripMenuItem
			// 
			this->abouyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->helpToolStripMenuItem });
			this->abouyToolStripMenuItem->Name = L"abouyToolStripMenuItem";
			this->abouyToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->abouyToolStripMenuItem->Text = L"About";
			this->abouyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::abouyToolStripMenuItem_Click);
			// 
			// languagesToolStripMenuItem
			// 
			this->languagesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->englishToolStripMenuItem,
					this->русскийToolStripMenuItem, this->українськийToolStripMenuItem
			});
			this->languagesToolStripMenuItem->Name = L"languagesToolStripMenuItem";
			this->languagesToolStripMenuItem->Size = System::Drawing::Size(76, 20);
			this->languagesToolStripMenuItem->Text = L"Languages";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->englishToolStripMenuItem->Text = L"English";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->русскийToolStripMenuItem->Text = L"Русский";
			// 
			// українськийToolStripMenuItem
			// 
			this->українськийToolStripMenuItem->Name = L"українськийToolStripMenuItem";
			this->українськийToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->українськийToolStripMenuItem->Text = L"Український";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(13, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(223, 381);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(215, 355);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Presets";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Low Frequency";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"High Frequency";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(804, 456);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"oiu";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->File->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void сосиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void contextMenuStrip1_Opening(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void editToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	

	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void saveToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void saveEsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void sdToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void abouyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void viewToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void favoritesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
}
	; }
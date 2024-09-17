#include <cstdlib>
#include <ctime>


namespace RPSPHYSICS {
    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form {
    public:
        MyForm(void) {
            InitializeComponent();
            srand(static_cast<unsigned int>(time(nullptr)));
        }

    protected:
        ~MyForm() {
            if (components) {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;

        System::Windows::Forms::Button^ btnCurrent;
        System::Windows::Forms::Button^ btnResistance;
        System::Windows::Forms::Button^ btnVoltage;
        System::Windows::Forms::Label^ lblResult;
        
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Button^ btnY;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Button^ btnN;
    private: System::Windows::Forms::Label^ playerScoreLabel;
    private: System::Windows::Forms::Label^ computerScoreLabel;
           int playerScore = 0;
           int computerScore = 0;
           int playerChoice; // Declare playerChoice
           int computerChoice; // Declare computerChoice
           

        void InitializeComponent(void) {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->btnCurrent = (gcnew System::Windows::Forms::Button());
            this->btnResistance = (gcnew System::Windows::Forms::Button());
            this->btnVoltage = (gcnew System::Windows::Forms::Button());
            this->lblResult = (gcnew System::Windows::Forms::Label());
            this->btnY = (gcnew System::Windows::Forms::Button());
            this->btnN = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->playerScoreLabel = (gcnew System::Windows::Forms::Label());
            this->computerScoreLabel = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->SuspendLayout();
            // 
            // btnCurrent
            // 
            this->btnCurrent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnCurrent->BackColor = System::Drawing::Color::Yellow;
            this->btnCurrent->ForeColor = System::Drawing::SystemColors::ControlText;
            this->btnCurrent->Location = System::Drawing::Point(155, 260);
            this->btnCurrent->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->btnCurrent->Name = L"btnCurrent";
            this->btnCurrent->Size = System::Drawing::Size(172, 94);
            this->btnCurrent->TabIndex = 0;
            this->btnCurrent->Text = L"CURRENT";
            this->btnCurrent->UseVisualStyleBackColor = false;
            this->btnCurrent->Click += gcnew System::EventHandler(this, &MyForm::btnCurrent_Click);
            // 
            // btnResistance
            // 
            this->btnResistance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnResistance->BackColor = System::Drawing::Color::Red;
            this->btnResistance->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnResistance->Location = System::Drawing::Point(380, 260);
            this->btnResistance->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->btnResistance->Name = L"btnResistance";
            this->btnResistance->Size = System::Drawing::Size(197, 94);
            this->btnResistance->TabIndex = 1;
            this->btnResistance->Text = L"RESISTANCE";
            this->btnResistance->UseVisualStyleBackColor = false;
            this->btnResistance->Click += gcnew System::EventHandler(this, &MyForm::btnResistance_Click);
            // 
            // btnVoltage
            // 
            this->btnVoltage->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnVoltage->BackColor = System::Drawing::Color::CornflowerBlue;
            this->btnVoltage->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnVoltage->Location = System::Drawing::Point(631, 260);
            this->btnVoltage->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->btnVoltage->Name = L"btnVoltage";
            this->btnVoltage->Size = System::Drawing::Size(172, 94);
            this->btnVoltage->TabIndex = 2;
            this->btnVoltage->Text = L"VOLATGE";
            this->btnVoltage->UseVisualStyleBackColor = false;
            this->btnVoltage->Click += gcnew System::EventHandler(this, &MyForm::btnVoltage_Click);
            // 
            // lblResult
            // 
            this->lblResult->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->lblResult->ForeColor = System::Drawing::SystemColors::ControlText;
            this->lblResult->Location = System::Drawing::Point(208, 375);
            this->lblResult->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
            this->lblResult->Name = L"lblResult";
            this->lblResult->Size = System::Drawing::Size(581, 94);
            this->lblResult->TabIndex = 3;
            this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // btnY
            // 
            this->btnY->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnY->BackColor = System::Drawing::Color::Lime;
            this->btnY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnY->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->btnY->Location = System::Drawing::Point(503, 529);
            this->btnY->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->btnY->Name = L"btnY";
            this->btnY->Size = System::Drawing::Size(129, 62);
            this->btnY->TabIndex = 13;
            this->btnY->Text = L"RESTART";
            this->btnY->UseVisualStyleBackColor = false;
            this->btnY->Visible = false;
            this->btnY->Click += gcnew System::EventHandler(this, &MyForm::btnY_Click);
            // 
            // btnN
            // 
            this->btnN->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->btnN->BackColor = System::Drawing::Color::Red;
            this->btnN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnN->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btnN->Location = System::Drawing::Point(679, 529);
            this->btnN->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->btnN->Name = L"btnN";
            this->btnN->Size = System::Drawing::Size(124, 62);
            this->btnN->TabIndex = 14;
            this->btnN->Text = L"EXIT";
            this->btnN->UseVisualStyleBackColor = false;
            this->btnN->Visible = false;
            this->btnN->Click += gcnew System::EventHandler(this, &MyForm::btnN_Click);
            // 
            // textBox1
            // 
            this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox1->BackColor = System::Drawing::Color::LavenderBlush;
            this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
            this->textBox1->Location = System::Drawing::Point(229, 4);
            this->textBox1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
            this->textBox1->Name = L"textBox1";
            this->textBox1->ReadOnly = true;
            this->textBox1->Size = System::Drawing::Size(389, 22);
            this->textBox1->TabIndex = 7;
            this->textBox1->Text = L"Rock Paper Scissors-Physics Edition!!";
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox2
            // 
            this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox2->BackColor = System::Drawing::Color::MediumOrchid;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(116, 50);
            this->textBox2->Margin = System::Windows::Forms::Padding(5);
            this->textBox2->Multiline = true;
            this->textBox2->Name = L"textBox2";
            this->textBox2->ReadOnly = true;
            this->textBox2->Size = System::Drawing::Size(671, 46);
            this->textBox2->TabIndex = 8;
            this->textBox2->Text = L"CURRENT beats RESISTANCE: It is a swift electron flow & can easily overcome the r"
                L"esistance in its path.";
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox3
            // 
            this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox3->BackColor = System::Drawing::Color::Moccasin;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(116, 153);
            this->textBox3->Margin = System::Windows::Forms::Padding(5);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->ReadOnly = true;
            this->textBox3->Size = System::Drawing::Size(671, 48);
            this->textBox3->TabIndex = 9;
            this->textBox3->Text = L"VOLTAGE beats CURRENT: It provides a driving force for the Current. It pushes tho"
                L"se electrons away.";
            this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox4
            // 
            this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->textBox4->BackColor = System::Drawing::Color::LightCoral;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(116, 106);
            this->textBox4->Margin = System::Windows::Forms::Padding(5);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->ReadOnly = true;
            this->textBox4->Size = System::Drawing::Size(671, 26);
            this->textBox4->TabIndex = 10;
            this->textBox4->Text = L"RESISTANCE beats VOLTAGE: It stands strong, blocking the flow of Voltage";
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(105, 414);
            this->textBox5->Margin = System::Windows::Forms::Padding(5);
            this->textBox5->Name = L"textBox5";
            this->textBox5->ReadOnly = true;
            this->textBox5->Size = System::Drawing::Size(89, 22);
            this->textBox5->TabIndex = 11;
            this->textBox5->Text = L"RESULT:";
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(52, 293);
            this->textBox6->Margin = System::Windows::Forms::Padding(5);
            this->textBox6->Name = L"textBox6";
            this->textBox6->ReadOnly = true;
            this->textBox6->Size = System::Drawing::Size(89, 22);
            this->textBox6->TabIndex = 12;
            this->textBox6->Text = L"CHOOSE";
            this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // playerScoreLabel
            // 
            this->playerScoreLabel->AutoSize = true;
            this->playerScoreLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->playerScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->playerScoreLabel->Location = System::Drawing::Point(177, 503);
            this->playerScoreLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->playerScoreLabel->Name = L"playerScoreLabel";
            this->playerScoreLabel->Size = System::Drawing::Size(23, 25);
            this->playerScoreLabel->TabIndex = 15;
            this->playerScoreLabel->Text = L"0";
            // 
            // computerScoreLabel
            // 
            this->computerScoreLabel->AutoSize = true;
            this->computerScoreLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->computerScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->computerScoreLabel->Location = System::Drawing::Point(177, 559);
            this->computerScoreLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->computerScoreLabel->Name = L"computerScoreLabel";
            this->computerScoreLabel->Size = System::Drawing::Size(23, 25);
            this->computerScoreLabel->TabIndex = 16;
            this->computerScoreLabel->Text = L"0";
            // 
            // textBox7
            // 
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox7->Location = System::Drawing::Point(52, 505);
            this->textBox7->Margin = System::Windows::Forms::Padding(4);
            this->textBox7->Name = L"textBox7";
            this->textBox7->ReadOnly = true;
            this->textBox7->Size = System::Drawing::Size(104, 22);
            this->textBox7->TabIndex = 17;
            this->textBox7->Text = L"Your Score:";
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox8
            // 
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox8->Location = System::Drawing::Point(52, 548);
            this->textBox8->Margin = System::Windows::Forms::Padding(4);
            this->textBox8->Multiline = true;
            this->textBox8->Name = L"textBox8";
            this->textBox8->ReadOnly = true;
            this->textBox8->Size = System::Drawing::Size(104, 36);
            this->textBox8->TabIndex = 18;
            this->textBox8->Text = L"Computer\'s Score:";
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(881, 608);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->btnN);
            this->Controls->Add(this->btnY);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->btnCurrent);
            this->Controls->Add(this->btnResistance);
            this->Controls->Add(this->btnVoltage);
            this->Controls->Add(this->lblResult);
            this->Controls->Add(this->computerScoreLabel);
            this->Controls->Add(this->playerScoreLabel);
            this->DoubleBuffered = true;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(5);
            this->MaximumSize = System::Drawing::Size(931, 655);
            this->MinimumSize = System::Drawing::Size(899, 655);
            this->Name = L"MyForm";
            this->Text = L"Rock-Paper-Scissors - Physics Edition";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

        void btnCurrent_Click(Object^ sender, EventArgs^ e) {
            PlayGame(1);
        }

        void btnResistance_Click(Object^ sender, EventArgs^ e) {
            PlayGame(2);
        }

        void btnVoltage_Click(Object^ sender, EventArgs^ e) {
            PlayGame(3);
        }

        

        void btnN_Click(Object^ sender, EventArgs^ e) {
            Application::Exit();
        }

        void UpdateScores(bool playerWins, bool computerWins) {
            if (playerWins) {
                playerScore++;
            }
            else if (computerWins) {
                computerScore++;
            }
            playerScoreLabel->Text = playerScore.ToString();
            computerScoreLabel->Text = computerScore.ToString();

            // Check if either player or computer has reached 5 points
            if (playerScore >= 5) {
                lblResult->Text = "You Won the game!";
                this->Refresh(); // Refresh the form to update the label
                DisableControls(); // Disable controls
                System::Threading::Thread::Sleep(2000); // Wait for 2 seconds
                ResetGame();
                EnableControls(); // Re-enable controls
            }
            else if (computerScore >= 5) {
                lblResult->Text = "Computer Won the game!";
                this->Refresh(); // Refresh the form to update the label
                DisableControls(); // Disable controls
                System::Threading::Thread::Sleep(2000); // Wait for 2 seconds
                ResetGame();
                EnableControls(); // Re-enable controls
            }
        }

        void PlayGame(int playerChoice) {
            int computerChoice = rand() % 3;
            String^ computerChoiceStr;
            String^ result;

            if (computerChoice == 0) {
                computerChoiceStr = "Current";
            }
            else if (computerChoice == 1) {
                computerChoiceStr = "Resistance";
            }
            else {
                computerChoiceStr = "Voltage";
            }

            if (computerChoice == playerChoice - 1) {
                result = "I drew " + computerChoiceStr + " and it's a Draw!";
            }
            else if ((computerChoice == 0 && playerChoice == 3) ||
                (computerChoice == 1 && playerChoice == 1) ||
                (computerChoice == 2 && playerChoice == 2)) {
                result = "I drew " + computerChoiceStr + " and You WON!";
            }
            else {
                result = "I drew " + computerChoiceStr + " and You LOSE!";
            }

            lblResult->Text = result;
            btnY->Visible = true;
            btnN->Visible = true;

            // Call CheckGameOutcome to update the scores
            CheckGameOutcome(playerChoice, computerChoice);
        }

        

        


        void CheckGameOutcome(int playerChoice, int computerChoice) {
            bool playerWins = (playerChoice == 1 && computerChoice == 1) || // Current beats Resistance
                (playerChoice == 2 && computerChoice == 2) || // Resistance beats Voltage
                (playerChoice == 3 && computerChoice == 0);   // Voltage beats Current

            bool computerWins = (computerChoice == 0 && playerChoice == 2) || // Current beats Resistance
                (computerChoice == 1 && playerChoice == 3) || // Resistance beats Voltage
                (computerChoice == 2 && playerChoice == 1);   // Voltage beats Current

            if (playerWins) {
                UpdateScores(true, false);
            }
            else if (computerWins) {
                UpdateScores(false, true);
            }
            else {
                // It's a draw, no points awarded
            }
        }

        void ResetGame() {
            playerScore = 0;
            computerScore = 0;
            playerScoreLabel->Text = "0";
            computerScoreLabel->Text = "0";
            lblResult->Text = ""; // Clear the result label as well
            btnY->Visible = false; // Hide the Yes button
            btnN->Visible = false; // Hide the No button
        }

        void DisableControls() {
            this->Enabled = false;
        }

        void EnableControls() {
            this->Enabled = true;
        }

        private: System::Void btnY_Click(System::Object^ sender, System::EventArgs^ e) {
            playerScore = 0;
            computerScore = 0;
            playerScoreLabel->Text = "0";
            computerScoreLabel->Text = "0";
            lblResult->Text = ""; // Clear the result label as well
            btnY->Visible = false; // Hide the Yes button
            btnN->Visible = false; // Hide the No button
            // Additional code to reset the game state if needed
}


           



};
}


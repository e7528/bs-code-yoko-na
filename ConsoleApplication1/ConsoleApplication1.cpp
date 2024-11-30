#include <iostream>
using namespace std;

// Comp Prog Calculator //
/* pseudocode
 ui
 input grades a/b (a attained score) / b (overall score) multiple inputs allowed
 repeat for class standing; done
 midterm exam single input;
 final exam single input;
 convert to labPercentage;
 then convert to overall grade
 lec
 lab
 or
 allow user to input in labPercentage form
 then calculate
 show grades based on the score obtained*/

int main() {
    string mainUI = "=================== COMP PROG GRADE CALCULATOR ===================\n\n";
    char choice, choiceLec, choiceLab, choiceLecMid, choiceLabMid, choiceFin;
    float gpa = 0;
    double
    // Overall
    labClassStanding = 0, lecClassStanding = 0, lecMidtermExam, labMidtermExam, finalExam, labGrade, lecGrade, finalGrade,

    // Lecture Scores
    lecObtainedScore, lecAllObtained = 0, lecAllOverall = 0, lecOverallScore, lecPercentage,

    // Lecture Midterms
    lecMidtermScore, lecMidtermOverall,

    // Laboratory Scores
    labObtainedScore, labAllObtained = 0, labAllOverall = 0, labOverallScore, labPercentage,

    // Laboratory Midterm
    labMidtermScore, labMidtermOverall,

    // Finals
    finalScore, finalOverall;

    // Display main menu
    do {
        cout << mainUI;
        cout << "[a] Calculate Comp Prog Grades" << endl;
        cout << "[b] Percentage to Final Grade" << endl;
        cout << "[c] Exit" << endl;
        cin >> choice;
        system("cls");

        // Switch case for menu options
        switch (choice) {
            case 'a': {
                do {
                    // Lecture Grade Calculator
                    cout << mainUI << "Lecture\n" << "Input Scores of Seatworks & Quizzes.\n\n" << endl;
                    cout << "Insert Obtained Score: ";
                    cin >> lecObtainedScore;
                    cout << "Insert Overall Score: ";
                    cin >> lecOverallScore;

                    // Calculate Lecture Percentage
                    lecPercentage = (lecObtainedScore / lecOverallScore) * 100;

                    // Display current score
                    cout << lecObtainedScore << "/" << lecOverallScore << " = " << lecPercentage << "%" << endl << endl;

                    // Update totals and calculate cumulative lecClassStanding
                    lecAllObtained += lecObtainedScore;
                    lecAllOverall += lecOverallScore;
                    lecClassStanding = (lecAllObtained / lecAllOverall) * 100;

                    // Display cumulative score
                    cout << "Overall Score" << endl;
                    cout << lecAllObtained << "/" << lecAllOverall << " = " << lecClassStanding << "%\n" << endl;

                    // Prompt for another grade
                    cout << "Input another grade? (y)" << endl;
                    cout << "Convert Lecture Midterm score? (n)" << endl;
                    cout << "exit (x)" << endl;
                    cin >> choiceLec;
                    system("cls");
                    if (choiceLec == 'x') { return 0; }
                    else continue;
                } while (choiceLec != 'n' && choiceLec != 'N');

                // Calculate Lec Midterm Percentage
                cout << mainUI << "Lecture\nMidterms Exam\n\n" << endl;
                cout << "Insert Obtained Score: ";
                cin >> lecMidtermScore;
                cout << "Insert Overall Score: ";
                cin >> lecMidtermOverall;
                lecMidtermExam = (lecMidtermScore / lecMidtermOverall) * 100;

                // Display Lec Midterm Score
                cout << endl << lecMidtermScore << "/" << lecMidtermOverall << "=" << lecMidtermExam << "%\n" << endl;
                cout << "Convert Laboratory Score? (n)" << endl;
                cout << "exit (x)" << endl;
                cin >> choiceLecMid;
                system("cls");
                if (choiceLecMid == 'x') { return 0; }

                // Lab
                do {
                    cout << mainUI << "Laboratory\n" << endl << "Input Scores of Activity." << endl;
                    cout << "Insert Obtained Score: ";
                    cin >> labObtainedScore;
                    cout << "Insert Overall Score: ";
                    cin >> labOverallScore;

                    // Calculate Lab Percentage
                    labPercentage = (labObtainedScore / labOverallScore) * 100;

                    // Display current score
                    cout << labObtainedScore << "/" << labOverallScore << " = " << labPercentage << "%" << endl << endl;

                    // Update totals and calculate cumulative labClassStanding
                    labAllObtained += labObtainedScore;
                    labAllOverall += labOverallScore;
                    labClassStanding = (labAllObtained / labAllOverall) * 100;

                    // Display cumulative score
                    cout << "Overall Score" << endl;
                    cout << labAllObtained << "/" << labAllOverall << " = " << labClassStanding << "%\n" << endl;

                    // Ask for another grade or continue
                    cout << "Input another grade? (y)" << endl;
                    cout << "Convert Laboratory Midterm score? (n)" << endl;
                    cout << "exit (x)" << endl;
                    cin >> choiceLab;
                    system("cls");
                    if (choiceLab == 'x') { return 0; }
                    else continue;
                } while (choiceLab != 'n' && choiceLab != 'N');

                // Calculate Lab Midterm Percentage
                cout << mainUI << "Laboratory Midterm Exam\n" << endl;
                cout << "Insert Obtained Score: ";
                cin >> labMidtermScore;
                cout << "Insert Overall Score: ";
                cin >> labMidtermOverall;
                labMidtermExam = (labMidtermScore / labMidtermOverall) * 100;

                // Display Lab Midterm Score
                cout << endl << labMidtermScore << "/" << labMidtermOverall << "=" << labMidtermExam << "%\n" << endl;
                cout << "Convert Final Score? (n)" << endl;
                cout << "exit (x)" << endl;
                cin >> choiceLabMid;
                system("cls");
                if (choiceLabMid == 'x') { return 0; }

                // Calculate Finals Percentage
                cout << mainUI << "Insert Finals Score: ";
                cin >> finalScore;
                cout << "Insert Finals Overall: ";
                cin >> finalOverall;
                finalExam = (finalScore / finalOverall) * 100;

                // Display Finals Score
                cout << endl << finalScore << "/" << finalOverall << " = " << finalExam << "%\n" << endl;
                cout << "Are You ready to see your finals grade? " << endl << "yes (n)" << endl;
                cout << "no, exit (x)" << endl;
                cin >> choiceFin;
                system("cls");
                if (choiceFin == 'x') { return 0; }

                break;
            }

            case 'b': {
                cout << mainUI;
                cout << "Insert Lecture Seatworks & Quiz Percentage: ";
                cin >> lecClassStanding;
                cout << "Insert Lecture Midterm Percentage: ";
                cin >> lecMidtermExam;
                cout << "Insert Laboratory Activity Percentage: ";
                cin >> labClassStanding;
                cout << "Insert Laboratory Midterm Percentage: ";
                cin >> labMidtermExam;
                cout << "Insert Final Percentage: ";
                cin >> finalExam;
                system("cls");

                break;
            }

            default:
                cout << "Invalid Selection" << endl;
                system("pause");
                system("cls");
                break;
        }

        // Grade Calculation
        lecGrade = (0.60 * lecClassStanding) + (0.15 * lecMidtermExam) + (0.25 * finalExam);
        labGrade = (0.60 * labClassStanding) + (0.15 * labMidtermExam) + (0.25 * finalExam);
        finalGrade = (0.70 * lecGrade) + (0.30 * labGrade);

        // Gpa Conversion
        if (finalGrade >= 0 && finalGrade < 75) {
            gpa = 0.5;
        } else if (finalGrade >= 75 && finalGrade <= 77) {
            gpa = 1.0;
        } else if (finalGrade >= 78 && finalGrade <= 80) {
            gpa = 1.5;
        } else if (finalGrade >= 81 && finalGrade <= 84) {
            gpa = 2.0;
        } else if (finalGrade >= 85 && finalGrade <= 88) {
            gpa = 2.5;
        } else if (finalGrade >= 89 && finalGrade <= 92) {
            gpa = 3.0;
        } else if (finalGrade >= 93 && finalGrade <= 96) {
            gpa = 3.5;
        } else if (finalGrade >= 97 && finalGrade <= 100) {
            gpa = 4.0;
        } else {
            cout << "Invalid score!" << endl;
            system("pause");
            system("cls");
            continue;
        }

        // Output final grade
        cout << mainUI;
        cout << "Your final grade is: " << finalGrade << "%" << endl;
        cout << "Your Gpa is: " << gpa << endl;

        system("pause");
        system("cls");
    } while (choice != 'c');

    return 0;
}

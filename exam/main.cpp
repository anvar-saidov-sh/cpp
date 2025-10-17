#include <iostream>
#include <fstream>
using namespace std;

class Question
{
private:
    string question;
    string options[4];
    string answer_pos;
    string user_ans;

public:
    void setQuestion()
    {
        cout << "Enter the question: " << endl;
        getline(cin, question);
        cout << "Enter the options to the question: " << endl;
        for (int i = 1; i <= 3; i++)
        {
            cout << "Option " << i << ":" << endl;
            getline(cin, options[i - 1]);
        }
        cout << "Enter correct option: " << endl;
        cin >> answer_pos;
        cin.ignore();
    }
    void getQuestion()
    {
        cout << question << endl;
        for (int i = 1; i <= 3; i++)
        {
            cout << i << ")" << options[i - 1] << endl;
        }
        cout << "Enter your option(position):" << endl;
        cin >> user_ans;
        if (user_ans == answer_pos)
        {
            cout << "Correct!" << endl;
        }
        else
        {
            cout << "Wrong!" << endl;
        }
    }
    string getUserAns()
    {
        return user_ans;
    }

    string getAnsPos()
    {
        return answer_pos;
    }
};

class Test : public Question
{
private:
    Question questions[20];
    int num_of_q;
    string Test_ID;
    int correct_ans = 0;
    int wrong_ans = 0;

public:
    void setTest()
    {
        cout << "Enter ID your test will have:" << endl;
        cin >> Test_ID;
        cout << "Enter how many questions your test will have: " << endl;
        cin >> num_of_q;
        cin.ignore();
        for (int i = 0; i < num_of_q; i++)
        {
            questions[i].setQuestion();
        }
    }

    int getCorrAns()
    {
        return correct_ans;
    }
    int getWrongAns()
    {
        return wrong_ans;
    }

    void getTest()
    {

        for (int i = 0; i < num_of_q; i++)
        {
            questions[i].getQuestion();
            if (questions[i].getUserAns() == questions[i].getAnsPos())
            {
                ++correct_ans;
            }
            else
            {
                ++wrong_ans;
            }
        }
    }

    void getAnsCount()
    {
        cout << "Correct answers: " << correct_ans << endl;
        cout << "Wrong answers: " << wrong_ans << endl;
    }
    string getTestID()
    {
        return Test_ID;
    }
};

class Result
{
private:
    string comment;
    string taker_ID;
    int corrAns;
    int wrongAns;

public:
    void setComments()
    {
        cout << "Leave a comment: " << endl;
        cin.ignore();
        getline(cin, comment);
    }

    void setCommentsByParam(string comment)
    {
        this->comment = comment;
    }
    void setTakerID(string takerID)
    {
        taker_ID = takerID;
    }

    string getTakerID()
    {
        return taker_ID;
    }

    void setResults(int correct, int wrong)
    {
        corrAns = correct;
        wrongAns = wrong;
    }

    void getResults()
    {
        cout << "Comment: " << comment << endl;
        cout << "Correct answers: " << corrAns << endl;
        cout << "Wrong answers: " << wrongAns << endl;
    }
};

class Teacher
{
private:
    string ID;
    string password;

public:
    void setTeacher()
    {
        cout << "Enter teacher ID: " << endl;
        cin >> ID;
        cout << "Enter password: " << endl;
        cin >> password;
    }

    void getTeacher()
    {
        cout << "Teacher ID: " << ID << endl;
        cout << "Teacher password: " << password << endl;
    }
    string getPass()
    {
        return password;
    }

    string getID()
    {
        return ID;
    }
};

class Student
{
private:
    string ID;
    string password;

public:
    void setStudent()
    {
        cout << "Enter student ID: " << endl;
        cin >> ID;
        cout << "Enter password: " << endl;
        cin >> password;
    }

    void getStudent()
    {
        cout << "Student ID: " << ID << endl;
        cout << "Student password: " << password << endl;
    }

    string getPass()
    {
        return password;
    }

    string getID()
    {
        return ID;
    }
};

class EssayQuestions
{
private:
    string question;
    string answer;
    string user_ans;

public:
    void setEssayQ()
    {
        cout << "Enter the question: " << endl;
        getline(cin, question);
        cout << "Enter the answer to the question: " << endl;
        getline(cin, answer);
    }

    void getEssayQ()
    {
        cout << question << endl;
        cout << "Your answer: " << endl;
        cin.ignore();
        getline(cin, user_ans);
        if (user_ans == answer)
        {
            cout << "Correct!" << endl;
        }
        else
        {
            cout << "Wrong!" << endl;
        }
    }

    string getUserAns()
    {
        return user_ans;
    }

    string getAns()
    {
        return answer;
    }
};

class EssayTest : public EssayQuestions
{
private:
    string test_ID;
    EssayQuestions questions[20];
    int correct_ans = 0;
    int wrong_ans = 0;
    int num_of_q;

public:
    void setTest()
    {
        cout << "Enter ID your test will have: " << endl;
        cin >> test_ID;
        cout << "Enter number of questions your test will have: " << endl;
        cin >> num_of_q;
        cin.ignore();
        for (int i = 0; i < num_of_q; i++)
        {
            questions[i].setEssayQ();
        }
    }

    string getTestID()
    {
        return test_ID;
    }

    void getTest()
    {
        for (int i = 0; i < num_of_q; i++)
        {
            questions[i].getEssayQ();
            if (questions[i].getUserAns() == questions[i].getAns())
            {
                ++correct_ans;
            }
            else
            {
                ++wrong_ans;
            }
        }
    }

    void getAnsCount()
    {
        cout << "Correct Answers: " << correct_ans << endl;
        cout << "Wrong Answers: " << wrong_ans << endl;
    }
};

int main()
{
    Student s;
    Teacher t;
    Test test;
    Result r;
    EssayTest essay_t;
    int switcher = -1;
    int switcher1 = -1;
    int switcher2 = -1;
    int switcher3 = -1;
    int switcher4 = -1;
    int switcher5 = -1;
    int switcher6 = -1;
    int switcher7 = -1;
    bool t_is_logged = false;
    bool s_is_logged = false;
    string t_pass, t_ID;
    string s_pass, s_ID;
    string test_ID;
    string takerID;
    ofstream student_outfile("StudentBase.txt", ios::app);
    ifstream student_infile("StudentBase.txt");
    ofstream teacher_outfile("TeacherBase.txt", ios::app);
    ifstream teacher_infile("TeacherBase.txt");
    ofstream test_outfile("Test.txt", ios::app);
    ifstream test_infile("Test.txt");
    ofstream comments_outfile("Comments.txt", ios::app);
    ifstream comments_infile("Comments.txt");
    ofstream essay_test_outfile("Essay_test.txt", ios::app);
    ifstream essay_test_infile("Essay_test.txt");

    while (switcher != 0)
    {
        cout << "1.Register\n2.Login\n0.Quit\n";
        cin >> switcher;

        switch (switcher)
        {
        case 1:
            cout << "1.Register as a teacher\n2.Register as a student\n0.Back\n";
            cin >> switcher1;
            switch (switcher1)
            {
            case 1:
                if (!teacher_outfile.is_open())
                {
                    teacher_outfile.open("TeacherBase.txt", ios::app);
                }
                t.setTeacher();
                teacher_outfile.write((char *)&t, sizeof(t));
                teacher_outfile.close();
                cout << "Registered successfully" << endl;
                break;
            case 2:
                if (!student_outfile.is_open())
                {
                    student_outfile.open("StudentBase.txt", ios::app);
                }
                s.setStudent();
                student_outfile.write((char *)&s, sizeof(s));
                student_outfile.close();
                cout << "Registered successfully" << endl;
                break;
            case 0:
                break;
            default:
                cout << "Invalid option" << endl;
            }
            break;

        case 2:
            cout << "1.Login as a teacher\n2.Login as a student\n0.Back\n";
            cin >> switcher2;
            switch (switcher2)
            {
            case 1:
                if (!teacher_infile.is_open())
                {
                    teacher_infile.open("TeacherBase.txt");
                }
                cout << "Enter teacher ID: " << endl;
                cin >> t_ID;
                cout << "Enter teacher password: " << endl;
                cin >> t_pass;
                teacher_infile.seekg(0, ios::beg);
                while (teacher_infile.read((char *)&t, sizeof(t)))
                {
                    if (t.getID() == t_ID && t.getPass() == t_pass)
                    {
                        cout << "Logged in" << endl;
                        t_is_logged = true;
                    }
                }
                if (!t_is_logged)
                {
                    cout << "Incorrect ID or password" << endl;
                }
                switcher3 = -1;
                if (t_is_logged)
                {
                    while (switcher3 != 0)
                    {
                        cout << "1.Set the test\n2.View results and comments\n0.Quit\n";
                        cin >> switcher3;
                        switch (switcher3)
                        {
                        case 1:
                            while (switcher6 != 0)
                            {
                                cout << "1.Set multiple option test\n2.Set essay type test\n";
                                cin >> switcher6;
                                switch (switcher6)
                                {
                                case 1:
                                    if (!test_outfile.is_open())
                                    {
                                        test_outfile.open("Test.txt", ios::app);
                                    }
                                    test.setTest();
                                    test_outfile.write((char *)&test, sizeof(test));
                                    cout << "The test has been saved! ID of test: " << test.getTestID() << endl;
                                    test_outfile.close();
                                    break;

                                case 2:
                                    if (!essay_test_outfile.is_open())
                                    {
                                        essay_test_outfile.open("Essay_test.txt", ios::app);
                                    }
                                    essay_t.setTest();
                                    essay_test_outfile.write((char *)&essay_t, sizeof(essay_t));
                                    cout << "The test has been saved! ID of test: " << essay_t.getTestID() << endl;
                                    essay_test_outfile.close();
                                }
                                break;

                            case 2:
                                if (!comments_infile.is_open())
                                {
                                    comments_outfile.open("Comments.txt", ios::app);
                                }
                                cout << "Enter ID of the student whom you want to view results and comments: " << endl;
                                cin >> takerID;
                                while (comments_infile.read((char *)&r, sizeof(r)))
                                {
                                    if (takerID == r.getTakerID())
                                    {
                                        r.getResults();
                                        cout << endl;
                                    }
                                }
                                comments_infile.close();
                                switcher6 = 0;
                            }
                        }
                    }
                }
                t_is_logged = false;
                teacher_infile.close();
                break;

            case 2:
                if (!student_infile.is_open())
                {
                    student_infile.open("StudentBase.txt");
                }
                cout << "Enter student ID: " << endl;
                cin >> s_ID;
                cout << "Enter student password: " << endl;
                cin >> s_pass;
                student_infile.seekg(0, ios::beg);
                while (student_infile.read((char *)&s, sizeof(s)))
                {
                    if (s.getID() == s_ID && s.getPass() == s_pass)
                    {
                        cout << "Logged in" << endl;
                        s_is_logged = true;
                        break;
                    }
                }
                if (!s_is_logged)
                {
                    cout << "Incorrect ID or password" << endl;
                }
                switcher4 = -1;
                if (s_is_logged)
                {
                    while (switcher4 != 0)
                    {
                        cout << "1.Take Multiple option type test\n2.Take essay type test\n0.Quit\n";
                        cin >> switcher4;
                        switch (switcher4)
                        {
                        case 1:
                            if (!test_infile.is_open())
                            {
                                test_infile.open("Test.txt");
                            }
                            cout << "Enter test ID you want to take: " << endl;
                            cin >> test_ID;
                            test_infile.seekg(0, ios::beg);
                            while (test_infile.read((char *)&test, sizeof(test)))
                            {
                                if (test.getTestID() == test_ID)
                                {
                                    test.getTest();
                                    test.getAnsCount();

                                    switcher5 = -1;
                                    while (switcher5 != 0)
                                    {
                                        cout << "Leave a comment?\n1 - yes\n0 - no\n";
                                        cin >> switcher5;
                                        switch (switcher5)
                                        {
                                        case 1:
                                            if (!comments_outfile.is_open())
                                            {
                                                comments_outfile.open("Comments.txt", ios::app);
                                            }
                                            r.setComments();
                                            r.setTakerID(s.getID());
                                            r.setResults(test.getCorrAns(), test.getWrongAns());

                                            comments_outfile.write((char *)&r, sizeof(r));
                                            comments_outfile.close();
                                            switcher5 = 0;
                                            break;
                                        case 0:
                                            if (!comments_outfile.is_open())
                                            {
                                                comments_outfile.open("Comments.txt", ios::app);
                                            }
                                            r.setCommentsByParam("No comments");
                                            r.setTakerID(s.getID());
                                            r.setResults(test.getCorrAns(), test.getWrongAns());
                                            comments_outfile.write((char *)&r, sizeof(r));
                                            comments_outfile.close();
                                            break;
                                        }
                                    }
                                }
                            }
                            test_infile.close();
                            break;
                        case 2:
                            if (!essay_test_infile.is_open())
                            {
                                essay_test_infile.open("Essay_Test.txt");
                            }
                            cout << "Enter test ID you want to take: " << endl;
                            cin >> test_ID;
                            essay_test_infile.seekg(0, ios::beg);
                            while (essay_test_infile.read((char *)&essay_t, sizeof(essay_t)))
                            {
                                if (essay_t.getTestID() == test_ID)
                                {
                                    essay_t.getTest();
                                    essay_t.getAnsCount();

                                    switcher5 = -1;
                                    while (switcher5 != 0)
                                    {
                                        cout << "Leave a comment?\n1 - yes\n0 - no\n";
                                        cin >> switcher5;
                                        switch (switcher5)
                                        {
                                        case 1:
                                            if (!comments_outfile.is_open())
                                            {
                                                comments_outfile.open("Comments.txt", ios::app);
                                            }
                                            r.setComments();
                                            r.setTakerID(s.getID());
                                            r.setResults(test.getCorrAns(), test.getWrongAns());

                                            comments_outfile.write((char *)&r, sizeof(r));
                                            comments_outfile.close();
                                            switcher5 = 0;
                                            break;
                                        case 0:
                                            if (!comments_outfile.is_open())
                                            {
                                                comments_outfile.open("Comments.txt", ios::app);
                                            }
                                            r.setCommentsByParam("No comments");
                                            r.setTakerID(s.getID());
                                            r.setResults(test.getCorrAns(), test.getWrongAns());
                                            comments_outfile.write((char *)&r, sizeof(r));
                                            comments_outfile.close();
                                            break;
                                        }
                                    }
                                }
                            }
                            essay_test_infile.close();
                        }
                    }
                }
                s_is_logged = false;
                student_infile.close();
                break;
            }
        }
    }

    return 0;
}

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>

using namespace std;


// ==========================================
// CONTENT CLASS
// ==========================================

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    // Default constructor
    Content()
    {
        title = "";
        platform = "";
        views = 0;
        status = "";
    }

    // Parameterized constructor
    Content(string t, string p, int v, string s)
    {
        title = t;
        platform = p;
        views = v;
        status = s;
    }

    // Display all details
    void displayDetails()
    {
        cout << "\nTitle    : " << title << endl;
        cout << "Platform : " << platform << endl;
        cout << "Views    : " << views << endl;
        cout << "Status   : " << status << endl;
    }
};


// ==========================================
// FILE NAME
// ==========================================

const char FILE_NAME[] = "content_list.txt";


// ==========================================
// SAVE NEW CONTENT
// ==========================================

void saveContent(Content c)
{
    ofstream file(FILE_NAME, ios::app);

    if (!file)
    {
        cout << "\nError: Could not open file!" << endl;
        return;
    }

    file << c.title << "|"
         << c.platform << "|"
         << c.views << "|"
         << c.status << endl;

    file.close();

    cout << "\nContent added successfully!" << endl;
}


// ==========================================
// READ ALL CONTENTS FROM FILE
// ==========================================

vector<Content> readContents()
{
    vector<Content> contents;

    ifstream file(FILE_NAME);

    if (!file)
    {
        return contents;
    }

    string line;

    while (getline(file, line))
    {
        if (line == "")
        {
            continue;
        }

        stringstream ss(line);

        string title;
        string platform;
        string viewsText;
        string status;

        getline(ss, title, '|');
        getline(ss, platform, '|');
        getline(ss, viewsText, '|');
        getline(ss, status);

        int views = atoi(viewsText.c_str());

        Content c(title, platform, views, status);

        contents.push_back(c);
    }

    file.close();

    return contents;
}


// ==========================================
// DISPLAY CONTENT LIST
// ==========================================

void displayContentList()
{
    vector<Content> contents = readContents();

    if (contents.empty())
    {
        cout << "\nNo content found!" << endl;
        return;
    }

    cout << "\n========== CONTENT LIST ==========" << endl;

    int i;

    for (i = 0; i < (int)contents.size(); i++)
    {
        cout << i + 1 << ". "
             << contents[i].title
             << " [" << contents[i].platform << "]"
             << endl;
    }

    cout << "==================================" << endl;
}


// ==========================================
// REWRITE COMPLETE FILE
// ==========================================

void rewriteFile(vector<Content> contents)
{
    ofstream file(FILE_NAME);

    if (!file)
    {
        cout << "\nError: Could not open file!" << endl;
        return;
    }

    int i;

    for (i = 0; i < (int)contents.size(); i++)
    {
        file << contents[i].title << "|"
             << contents[i].platform << "|"
             << contents[i].views << "|"
             << contents[i].status << endl;
    }

    file.close();
}


// ==========================================
// ADD NEW CONTENT
// ==========================================

void addContent()
{
    string title;
    string platform;
    string viewsText;
    string status;

    int views;

    // Clear previous input
    cin.ignore(10000, '\n');

    cout << "\n========== ADD NEW CONTENT ==========" << endl;

    cout << "Enter title: ";
    getline(cin, title);

    cout << "Enter platform: ";
    getline(cin, platform);

    cout << "Enter views: ";
    getline(cin, viewsText);

    views = atoi(viewsText.c_str());

    cout << "Enter status: ";
    getline(cin, status);

    Content c(title, platform, views, status);

    saveContent(c);
}


// ==========================================
// UPDATE CONTENT STATUS
// ==========================================

void updateStatus()
{
    vector<Content> contents = readContents();

    if (contents.empty())
    {
        cout << "\nNo content available to update!" << endl;
        return;
    }

    displayContentList();

    int choice;

    cout << "\nEnter content number to update: ";
    cin >> choice;

    if (cin.fail() || choice < 1 ||
        choice > (int)contents.size())
    {
        cout << "\nInvalid content number!" << endl;

        cin.clear();
        cin.ignore(10000, '\n');

        return;
    }

    cin.ignore(10000, '\n');

    string newStatus;

    cout << "Enter new status: ";
    getline(cin, newStatus);

    contents[choice - 1].status = newStatus;

    rewriteFile(contents);

    cout << "\nStatus updated successfully!" << endl;
}


// ==========================================
// DELETE CONTENT
// ==========================================

void deleteContent()
{
    vector<Content> contents = readContents();

    if (contents.empty())
    {
        cout << "\nNo content available to delete!" << endl;
        return;
    }

    displayContentList();

    int choice;

    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if (cin.fail() || choice < 1 ||
        choice > (int)contents.size())
    {
        cout << "\nInvalid content number!" << endl;

        cin.clear();
        cin.ignore(10000, '\n');

        return;
    }

    // Remove selected content
    contents.erase(contents.begin() + choice - 1);

    // Save updated list
    rewriteFile(contents);

    cout << "\nContent deleted successfully!" << endl;

    cout << "\nUpdated Content List:" << endl;

    displayContentList();
}


// ==========================================
// MAIN FUNCTION
// ==========================================

int main()
{
    int choice = 0;

    do
    {
        cout << "\n\n====================================" << endl;
        cout << "       CONTENT IDEA MANAGER" << endl;
        cout << "====================================" << endl;

        cout << "1. Add New Content" << endl;
        cout << "2. View Content List" << endl;
        cout << "3. Update Content Status" << endl;
        cout << "4. Delete Content" << endl;
        cout << "5. Exit" << endl;

        cout << "====================================" << endl;

        cout << "Enter your choice: ";
        cin >> choice;


        // Check invalid input
        if (cin.fail())
        {
            cout << "\nInvalid input! Please enter a number." << endl;

            cin.clear();
            cin.ignore(10000, '\n');

            continue;
        }


        switch (choice)
        {
            case 1:
                addContent();
                break;


            case 2:
                displayContentList();
                break;


            case 3:
                updateStatus();
                break;


            case 4:
                deleteContent();
                break;


            case 5:
                cout << "\nThank you for using Content Idea Manager!" << endl;
                break;


            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }

    }
    while (choice != 5);


    return 0;
}

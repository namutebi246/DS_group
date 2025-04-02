#include <iostream>  // For input and output operations
#include <stack>     // For using stack data structure
#include <vector>    // For using vector to store friend names
#include <limits>    // For handling input validation
using namespace std;

// Friend class to represent each friend
class Friend {
public:
    string name; // Name of the friend
    Friend(string n) : name(n) {} // Constructor to initialize name
};

// Function to push a list of friends onto the stack
void pushFriends(stack<Friend>& friendsStack, const vector<string>& friendNames) {
    for (const auto& name : friendNames) { // Iterate through the list of names
        friendsStack.push(Friend(name)); // Push each friend onto the stack
        cout << "Pushed: " << name << endl;
    }
}

// Function to display the stack contents (without modifying the original stack)
void displayStack(const stack<Friend>& friendsStack) {
    stack<Friend> tempStack = friendsStack; // Create a copy of the stack to display without modifying it
    cout << "\nCurrent Stack (Top to Bottom):\n";
    if (tempStack.empty()) { // Check if stack is empty
        cout << "Stack is empty!\n";
         return;
    }
    while (!tempStack.empty()) { // Iterate through the stack and display elements
        cout << tempStack.top().name << endl; // Print the top element
        tempStack.pop(); // Remove the top element (from the temporary copy)
    }
}

// Function to pop (remove) the top friend from the stack
void popFriend(stack<Friend>& friendsStack) {
    if (!friendsStack.empty()) { // Ensure stack is not empty before popping
        cout << "Popped: " << friendsStack.top().name << endl; // Display popped friend's name
        friendsStack.pop(); // Remove top element
    } else {
        cout << "Stack is empty, nothing to pop!\n";
    }
}

// Function to peek (view) the top friend on the stack without removing it
void peekFriend(const stack<Friend>& friendsStack) {
    if (!friendsStack.empty()) { // Ensure stack is not empty before peeking
        cout << "Top Friend: " << friendsStack.top().name << endl;
    } else {
        cout << "Stack is empty, no top element!\n";
    }
}

// Function to get friend names from the user
vector<string> getFriendNames() {
    int numFriends;
    vector<string> friendNames; // Vector to store friend names temporarily

    // Loop until a valid number of friends is entered
    do {
        cout << "Enter number of friends: ";
        cin >> numFriends;
        
        // Check if input is invalid (non-numeric or negative/zero)
        if (cin.fail() || numFriends <= 0) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input! Enter a positive integer.\n";
        }
    } while (numFriends <= 0); // Repeat until a valid number is entered

    cin.ignore(); // Ignore leftover newline from previous input

    // Get friend names from the user
    for (int i = 0; i < numFriends; ++i) {
        string name;
        cout << "Enter name of friend " << i + 1 << ": ";
        getline(cin, name); // Read full name including spaces

        if (name.empty()) { // Check if input is empty
            cout << "Invalid input! Name cannot be empty.\n";
            --i; // Repeat input for this index
        } else {
            friendNames.push_back(name); // Store the valid name in the vector
        }
    }
    return friendNames; // Return the list of names
}

int main() {
    stack<Friend> friendsStack; // Stack to store Friend objects

    // Get initial list of friends from the user
    vector<string> friendNames = getFriendNames();
    pushFriends(friendsStack, friendNames); // Push friends onto the stack
    displayStack(friendsStack); // Show the current stack

    int choice; // Variable to store user's menu choice
    do {
        // Display menu options
        cout << "\nChoose an option:\n"
             << "1. Peek at top friend\n"
             << "2. Pop a friend\n"
             << "3. Display Stack\n"
             << "4. Push new friends\n"
             << "5. Exit\n"
             << "Enter choice: ";
        cin >> choice;

        // Validate input to ensure it is an integer
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input! Enter a number between 1 and 5.\n";
            continue;
        }

        // Perform action based on user choice
        switch (choice) {
            case 1:
                peekFriend(friendsStack); // Peek at the top friend
                break;
            case 2:
                popFriend(friendsStack); // Remove top friend
                break;
            case 3:
                displayStack(friendsStack); // Display stack contents
                break;
            case 4: {
                vector<string> newFriends = getFriendNames(); // Get new names
                pushFriends(friendsStack, newFriends); // Push new friends onto stack
                break;
            }
            case 5:
                cout << "Exiting...\n"; // Exit message
                break;
            default:
                cout << "Invalid choice! Enter 1, 2, 3, 4, or 5.\n"; // Handle invalid menu choice
        }

        // If the stack is empty, prompt user to add new friends
        if (friendsStack.empty()) {
            cout << "\nThe stack is empty. Do you want to add new friends? (y/n): ";
            char response;
            cin >> response;

            if (response == 'y' || response == 'Y') {
                vector<string> newFriends = getFriendNames(); // Get new friends
                pushFriends(friendsStack, newFriends); // Push them onto the stack
            }
        }

    } while (choice != 5); // Repeat menu until user exits

    return 0; // End program
}

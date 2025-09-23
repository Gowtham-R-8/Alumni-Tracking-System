🎓 Alumni Tracking System – C Program
📌 Objective

To develop a Linked List-based Alumni Tracking System that manages and organizes alumni data efficiently for a college or university.

📋 Features

✅ Insert new alumni details

🔍 Search alumni by ID or Name

❌ Delete outdated or incorrect alumni records

🔁 Display alumni in reverse order (for event planning)

📋 Clone the alumni list (for separate event management)

🏫 Generate department-wise alumni lists

🗃️ Data Structure

Each alumni record is represented as a node in a singly linked list.
Each node contains:

Alumni ID (int)

Name (string)

Department (string)

Year of Graduation (int)

Current Occupation (string)

🛠️ Functionality Overview
Function	Description
insertAlumni()	Adds a new alumni record
searchByID()	Searches for an alumni by their ID
searchByName()	Searches for alumni by name
deleteAlumni()	Deletes a record by ID
displayReverse()	Displays the list in reverse order
cloneList()	Clones the entire alumni list
displayByDepartment()	Displays alumni filtered by department
💡 Sample Menu (CLI)
--- Alumni Tracking System ---
1. Insert Alumni Record
2. Search by ID
3. Search by Name
4. Delete Record by ID
5. Display Records in Reverse
6. Clone Alumni List
7. Display Department-wise Alumni
8. Exit
Enter your choice:

🧪 Compilation & Execution
🔧 Compile:
gcc alumni_tracking.c -o alumni_tracking

▶️ Run:
./alumni_tracking


⚠️ Requires a C compiler (GCC recommended).

🧼 Memory Management

All dynamically allocated memory is freed before exit.

No memory leaks when deleting or cloning.

📝 Notes

Names and departments are stored using dynamically allocated strings.

Searching is case-insensitive for names.

👨‍💻 Author

Your Name
Your College/Institution
Year/Batch (optional)

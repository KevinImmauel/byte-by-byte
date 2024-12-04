# byte-by-byte

# Debug the Linked List Program

### Objective:
Fix the errors in the provided C program (`linked_list.c`) and submit a pull request (PR) with your solution.

---

## Prerequisites

1. **Install GCC** (via MinGW on Windows):
   - Download the [MinGW Installation Manager](https://sourceforge.net/projects/mingw/).
   - Install the required packages:
     - `mingw32-base`
     - `mingw32-gcc-g++`
   - Add `C:\MinGW\bin` to your system `PATH`:
     - Open **Environment Variables** in the Windows Start menu.
     - Edit the `PATH` variable and add `C:\MinGW\bin`.
   - Verify the installation:
     ```bash
     gcc --version
     g++ --version
     ```
     If these commands return the GCC/G++ version, the setup is complete.

2. **Install Git**:
   - Download Git from the [official website](https://git-scm.com/).
   - Install it using default options.
   - Verify the installation by running:
     ```bash
     git --version
     ```

---

## Steps to Debug and Submit PR

### 1. **Fork the Repository**
   - Go to the repository URL provided by your instructor.
   - Click the **"Fork"** button in the top-right corner to create your copy of the repository.

### 2. **Clone the Repository**
   - Open your terminal or command prompt.
   - Run the following command to clone your fork:
     ```bash
     git clone https://github.com/<your-username>/<repository-name>.git
     ```
     Replace `<your-username>` with your GitHub username and `<repository-name>` with the name of the repository.
   - Navigate into the cloned directory:
     ```bash
     cd <repository-name>
     ```

### 3. **Fix the Code**
   - Open the provided file `linked_list.c` in your code editor.
   - Identify and fix the errors in the code.

### 4. **Test Your Code**
   - Compile the code to check if it works:
     ```bash
     gcc linked_list.c -o linked_list
     ./linked_list
     ```
   - Ensure there are no errors and that the output is correct.

### 5. **Commit Your Changes**
   - Stage your changes:
     ```bash
     git add linked_list.c
     ```
   - Commit your changes with a meaningful message:
     ```bash
     git commit -m "Fixed errors in linked list program"
     ```

### 6. **Push Your Changes**
   - Push your changes to your forked repository:
     ```bash
     git push origin main
     ```
     *(Replace `main` with the actual branch name if different.)*

### 7. **Create a Pull Request**
   - Go to the **original repository** on GitHub.
   - Click the **"Pull Requests"** tab.
   - Click **"New Pull Request"**.
   - Select your fork and branch as the source.
   - Add a title and description for your pull request (e.g., "Fixed errors in linked list program").
   - Click **"Create Pull Request"**.

---

## Test Your Code Online (Optional)
If you're unable to install GCC locally, use an online C compiler like [OnlineGDB](https://www.onlinegdb.com/) to test your code.

---

### Additional Notes:
- Always check for memory allocation issues in the code.
- Free allocated memory after use to avoid memory leaks.
- Notify your instructor after submitting the pull request.

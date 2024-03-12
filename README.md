# SETUP TO RUN THE PROGRAM

- **Setup Development Environment:** Ensure you have a C++ compiler installed on your system. Common options include GCC for Linux and MinGW or Visual C++ for Windows.
- Install a text editor or an Integrated Development Environment (IDE) such as Visual Studio Code, CLion, or Code::Blocks for editing and compiling the code.

### Compile the Code:

- Open a terminal or command prompt.
- Navigate to the directory containing the validator.cpp file.
- Compile the code using a C++ compiler. For example, with GCC, you can use the following command: *g++ validator.cpp -o validator*
- This command compiles the code into an executable named validator (or validator.exe on Windows).

### Run the Executable:

Once the compilation is successful, run the executable:
- On Linux/macOS: *./validator*
- On Windows: *validator.exe*

 ### View Validation Results:

- The program will display any errors found during the validation process, categorized by HTML, CSS, and JavaScript.

### Adjust Inputs (Optional):

- If you want to test different HTML, CSS, or JavaScript code, you can modify the html_code, css_code, and js_code variables in the main function.

# APPROACH

- HTMLValidator.h: Header file for HTML validation functions.
- HTMLValidator.cpp: Source file containing the implementation of HTML validation functions.
- CSSValidator.h: Header file for CSS validation functions.
- CSSValidator.cpp: Source file containing the implementation of CSS validation functions.
- JSValidator.h: Header file for JavaScript validation functions.
- JSValidator.cpp: Source file containing the implementation of JavaScript validation functions.
- Main.cpp: Main file that contains the main function and uses the validation functions.

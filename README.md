# ANSI Terminal Cheat Sheet (C++ / Linux / Mac)

**ESC prefix:** `\033` or `\x1B`

---

### 🔹 Cursor Movement
"\033[A"             Move cursor up  
"\033[B"             Move cursor down  
"\033[C"             Move cursor right  
"\033[D"             Move cursor left  
"\033[H"             Move to top-left (home)  
"\033[row;colH"      Move to position (row, col)  

---

### 🔹 Screen / Line Control
"\033[2J"            Clear screen  
"\033[H\033[2J"      Clear screen + Home (refresh)  
"\033[K"             Clear to end of line  
"\033[1K"            Clear to start of line  
"\033[2K"            Clear entire line  

---

### 🔹 Reset Terminal
"\033c"              Full terminal reset (RIS)  

---

### 🎨 Colors

#### Foreground (Text)
"\033[30m" Black      "\033[90m" Bright Black  
"\033[31m" Red        "\033[91m" Bright Red  
"\033[32m" Green      "\033[92m" Bright Green  
"\033[33m" Yellow     "\033[93m" Bright Yellow  
"\033[34m" Blue       "\033[94m" Bright Blue  
"\033[35m" Magenta    "\033[95m" Bright Magenta  
"\033[36m" Cyan       "\033[96m" Bright Cyan  
"\033[37m" White      "\033[97m" Bright White  

#### Background
"\033[40m" Black   "\033[41m" Red   "\033[42m" Green  
"\033[43m" Yellow  "\033[44m" Blue  "\033[45m" Magenta  
"\033[46m" Cyan    "\033[47m" White  

---

### ✨ Text Formatting
"\033[0m"  Reset all  
"\033[1m"  Bold  
"\033[2m"  Dim  
"\033[4m"  Underline  
"\033[5m"  Blink  
"\033[7m"  Invert  
"\033[8m"  Hidden text  

---

### 🔄 Cursor Visibility
"\033[?25l"  Hide cursor  
"\033[?25h"  Show cursor  

---

### ⭐ Most Used (Quick)
"\033[H\033[2J"  Refresh screen  
"\033[31m"       Red text  
"\033[0m"        Reset format  
"\033[2K"        Clear line  


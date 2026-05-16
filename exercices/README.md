# Qt6 Exercises

A collection of Qt6 exercises progressing from basic widgets to advanced UI components.

---

## Fundamentals

### Exercise 1 — Push Button
Create a Qt application that displays a window containing a button labelled "Exercice".  
**Classes:** `QApplication`, `QPushButton`

### Exercise 2 — Empty Window
Create a Qt application that displays an empty window of dimensions 500 x 500 pixels.  
**Classes:** `QApplication`, `QWidget`

### Exercise 3 — Grid of Buttons
Create a Qt application that displays ten buttons in the same window, organised in a grid.  
**Classes:** `QApplication`, `QWidget`, `QGridLayout`, `QPushButton`

### Exercise 4 — Multiple Windows
Create three independent windows of dimensions 200 x 200 pixels. The first is empty, the second contains one button, the third contains two.  
**Classes:** `QApplication`, `QWidget`, `QGridLayout`, `QPushButton`

### Exercise 5 — Multi-line Text
Create a Qt application that displays a three-line text in a window of dimensions 300 x 150 pixels.  
**Classes:** `QApplication`, `QLabel`

---

## Terminal I/O

### Exercise 6 — Terminal Output
Create a Qt application that displays a word, sentence, or short text in the terminal.  
**Classes:** `QApplication`, `QTextStream` (stdout)

### Exercise 7 — Terminal Input
Create a Qt application that asks the user to type a word in the terminal, then displays it in a window of dimensions 200 x 300 pixels.  
**Classes:** `QApplication`, `QTextStream` (stdin), `QLabel`

---

## Drawing & Painting

### Exercise 8 — Coloured Pixmap
Create a Qt application that displays a QPixmap of dimensions 600 x 100 pixels in a window, cycling through the following background colours: white, blue, red, yellow, green, orange, grey, and black.  
**Classes:** `QApplication`, `QLabel`, `QPixmap`

### Exercise 9 — Multiple Coloured Windows
Create a Qt application that displays five independent windows, each containing a QPixmap of dimensions 300 x 300 pixels with a different background colour.  
**Classes:** `QApplication`, `QLabel`, `QPixmap`

### Exercise 10 — Rectangle
Create a Qt application that draws a rectangle of 200 x 100 pixels on a white background of dimensions 420 x 420 pixels.  
**Classes:** `QApplication`, `QLabel`, `QPixmap`, `QPainter`

### Exercise 11 — Basic Shapes
Create a Qt application that draws the following shapes on a white background of dimensions 320 x 420 pixels: a horizontal line, a vertical line, a diagonal line, a triangle, an ellipse, and a circle.  
**Classes:** `QApplication`, `QLabel`, `QPixmap`, `QPainter`

---

## Widgets & Dialogs

### Exercise 12 — Colour Picker
Create a Qt application that allows the user to display and select a colour using a colour picker dialog.  
**Classes:** `QApplication`, `QColorDialog`

### Exercise 13 — Slider
Create a Qt application that displays a slider and a label. The label updates in real time to show the current value of the slider.  
**Classes:** `QApplication`, `QSlider`, `QLabel`

### Exercise 14 — Contact Form
Create a Qt application that implements a contact form with fields for first name, last name, email address, and a message, along with a submit button.  
**Classes:** `QApplication`, `QWidget`, `QFormLayout`, `QLineEdit`, `QTextEdit`, `QPushButton`

### Exercise 15 — Layout Policies
Create a Qt application that illustrates the behaviour of stretch and resize policies for widgets within different layouts.  
**Classes:** `QApplication`, `QWidget`, `QSizePolicy`, `QLayout`

### Exercise 16 — File Picker Component
Create a reusable Qt component that allows the user to select a file from their system via a dialog, and displays the selected file path.  
**Classes:** `QApplication`, `QWidget`, `QFileDialog`, `QLineEdit`, `QPushButton`

### Exercise 17 — Custom Widget
Create a Qt application that implements a custom widget by subclassing `QWidget` and overriding its paint method.  
**Classes:** `QApplication`, `QWidget`, `QPainter`, `paintEvent`

### Exercise 18 — Pie Chart
Create a Qt application that displays a pie chart drawn with QPainter, with several sectors of different colours.  
**Classes:** `QApplication`, `QWidget`, `QPainter`, `drawPie`

### Exercise 19 — Text Editor
Create a Qt application that implements a text editor with the following features: load a file, save, quit, display an "About" box, and display an "About Qt" box.  
**Classes:** `QApplication`, `QMainWindow`, `QTextEdit`, `QMenuBar`, `QFileDialog`, `QMessageBox`

### Exercise 20 — Modal vs Modeless Dialogs
Create a Qt application that illustrates the difference between modal and modeless dialogs, with a button to open each type.  
**Classes:** `QApplication`, `QDialog`, `QPushButton`

### Exercise 21 — Order Form
Create a Qt application that implements a product order form, with fields for the product name, quantity, delivery options, and a validation button.  
**Classes:** `QApplication`, `QWidget`, `QFormLayout`, `QComboBox`, `QSpinBox`, `QPushButton`

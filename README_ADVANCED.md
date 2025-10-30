# 🎯 Fun with Quiz - Advanced Edition

[![Hacktoberfest](https://img.shields.io/badge/Hacktoberfest-2024-orange.svg)](https://hacktoberfest.com/)
[![C Language](https://img.shields.io/badge/Language-C-blue.svg)](<https://en.wikipedia.org/wiki/C_(programming_language)>)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](CONTRIBUTING.md)

A feature-rich, interactive **quiz game** built in **C language** with advanced features including difficulty levels, category selection, high score tracking, and question randomization!

---

## 🌟 New Features (Hacktoberfest 2024)

### ✨ Core Features

- 🎲 **Question Randomization** - Questions are shuffled for each game
- 🎚️ **Difficulty Levels** - Easy, Medium, Hard, and Mixed modes
- 📚 **Multiple Categories** - C Programming, Data Structures, General Knowledge
- 🏆 **High Score System** - Track and display top 10 scores
- 📊 **Statistics Dashboard** - View your overall performance
- ⚡ **Points System** - Different points for different difficulty levels
- 🎨 **Beautiful UI** - Enhanced console interface with Unicode characters
- 💾 **Persistent Storage** - Scores saved to file

### 🔧 Advanced Features

- **Modular Code Structure** - Separated into multiple files for better maintainability
- **Custom Question Support** - Add your own questions (in advanced version)
- **Category Filtering** - Play quizzes from specific categories
- **Performance Feedback** - Get personalized messages based on your score
- **Comprehensive Statistics** - Track accuracy, games played, and more

---

## 📂 Project Structure

```
Fun-with-Quiz/
├── code.c                    # Original simple quiz version
├── quiz_advanced.c           # All-in-one advanced version
├── quiz_structures.h         # Data structures definitions
├── question_manager.h        # Question management header
├── question_manager.c        # Question management implementation
├── score_manager.h           # Score management header
├── score_manager.c           # Score management implementation
├── main_modular.c           # Main file for modular version (coming soon)
├── highscores.txt           # High scores database (generated)
├── questions.txt            # Custom questions file (optional)
├── README.md                # This file
├── CONTRIBUTING.md          # Contribution guidelines
└── LICENSE                  # MIT License
```

---

## 🚀 Getting Started

### Prerequisites

- GCC Compiler (MinGW for Windows, GCC for Linux/Mac)
- Terminal/Command Prompt
- Basic knowledge of C programming (optional)

### Installation

#### 1️⃣ Clone the repository

```bash
git clone https://github.com/induwara-dissanayake/Fun-with-Quiz.git
cd Fun-with-Quiz
```

#### 2️⃣ Choose your version and compile

**Simple Version (Original):**

```bash
gcc code.c -o quiz
```

**Advanced Version (All features):**

```bash
gcc quiz_advanced.c -o quiz_advanced
```

**Modular Version (Best for development):**

```bash
gcc question_manager.c score_manager.c main_modular.c -o quiz_modular
```

#### 3️⃣ Run the program

```bash
# Windows
.\quiz_advanced.exe

# Linux/Mac
./quiz_advanced
```

---

## 🎮 How to Play

### Main Menu Options

1. **Play Quiz - Easy Mode** 🟢

   - 10 points per question
   - Basic questions for beginners

2. **Play Quiz - Medium Mode** 🟡

   - 20 points per question
   - Intermediate level questions

3. **Play Quiz - Hard Mode** 🔴

   - 30 points per question
   - Advanced questions for experts

4. **Play Quiz - Mixed Difficulty** 🎲

   - Random questions from all levels
   - Varied points based on difficulty

5. **View High Scores** 🏆

   - See top 10 players
   - Compare your performance

6. **View Statistics** 📊
   - Overall accuracy
   - Games played breakdown
   - Performance metrics

### Gameplay

1. Enter your name when prompted
2. Answer each multiple-choice question (A/B/C/D)
3. Get instant feedback after each answer
4. View your final score and ranking
5. Your score is automatically saved!

---

## 📊 Example Gameplay

```
╔══════════════════════════════════════════════════╗
║          🎯 FUN WITH QUIZ - ADVANCED 🎯          ║
╚══════════════════════════════════════════════════╝

1️⃣  Play Quiz - Easy Mode
2️⃣  Play Quiz - Medium Mode
3️⃣  Play Quiz - Hard Mode
4️⃣  Play Quiz - Mixed Difficulty
5️⃣  View High Scores
6️⃣  Exit

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Enter your choice: 1

📝 Enter your name: Alex

🎮 Starting quiz with 4 questions...

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Question 1: What is the keyword to print text in C?
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
A) echo
B) print
C) printf
D) cout
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Your answer: C
✅ Correct!

⭐ Current Score: 1/1
```

---

## 🎯 Scoring System

| Difficulty | Points per Question | Total Questions |
| ---------- | ------------------- | --------------- |
| Easy       | 10 points           | Varies          |
| Medium     | 20 points           | Varies          |
| Hard       | 30 points           | Varies          |
| Mixed      | Variable            | Varies          |

### Performance Ratings

- 🏆 **100%** - Perfect Score! You're a master!
- 🌟 **80-99%** - Excellent! Outstanding performance!
- 👏 **60-79%** - Great job! You know your stuff!
- 🙂 **40-59%** - Good effort! Keep practicing!
- 💪 **0-39%** - Don't give up! Study and try again!

---

## 🤝 Contributing

We welcome contributions! This project is perfect for **Hacktoberfest** participants. Here's how you can contribute:

### Ways to Contribute

1. **Add New Questions** 📝

   - Add questions to different categories
   - Create new categories
   - Improve existing questions

2. **Add New Features** ✨

   - Timer functionality
   - Hint system
   - Multiplayer mode
   - Question difficulty rating
   - Audio feedback

3. **Improve Code Quality** 🔧

   - Refactor existing code
   - Add comments and documentation
   - Fix bugs
   - Improve error handling

4. **Enhance UI/UX** 🎨

   - Improve console interface
   - Add color support (ANSI colors)
   - Better formatting
   - Loading animations

5. **Documentation** 📚
   - Improve README
   - Add code documentation
   - Create tutorials
   - Write blog posts

### Contribution Guidelines

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for detailed guidelines on:

- Code style
- Pull request process
- Issue reporting
- Testing requirements

---

## 🛠️ Development Roadmap

### Version 2.0 (In Progress)

- [ ] Timer for each question
- [ ] Hint system (costs points)
- [ ] Save/Resume game feature
- [ ] Export scores to CSV
- [ ] Web-based interface

### Version 3.0 (Planned)

- [ ] Multiplayer support
- [ ] Online leaderboard
- [ ] Question of the day
- [ ] Achievement system
- [ ] Mobile app version

---

## 📋 Requirements

### Minimum Requirements

- **Compiler:** GCC 4.8 or higher
- **OS:** Windows 7+, Linux (any), macOS 10.10+
- **RAM:** 128 MB
- **Storage:** 5 MB

### Recommended

- **Compiler:** GCC 9.0 or higher
- **Terminal:** Support for Unicode characters
- **Storage:** 10 MB (for saving questions and scores)

---

## 🐛 Known Issues

1. **Unicode Display:** Some older terminals may not display Unicode characters properly

   - **Solution:** Use a modern terminal or modify the code to use ASCII characters

2. **File Permissions:** On some systems, the program may not have write permissions
   - **Solution:** Run with appropriate permissions or change file locations

---

## 📝 File Formats

### High Scores File (`highscores.txt`)

```
PlayerName|Score|TotalQuestions|Difficulty|Category|Timestamp
```

### Questions File (`questions.txt`) - Optional

```
Question|OptionA|OptionB|OptionC|OptionD|Answer|Category|Difficulty
```

---

## 🎓 Learning Resources

- [C Programming Tutorial](https://www.learn-c.org/)
- [Data Structures in C](https://www.geeksforgeeks.org/data-structures/)
- [File Handling in C](https://www.programiz.com/c-programming/c-file-input-output)
- [Contributing to Open Source](https://opensource.guide/how-to-contribute/)

---

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 👨‍💻 Authors

**Original Creator:**

- **Oshan Vishwajith** - [GitHub Profile](https://github.com/oshan-vishwajith)

**Hacktoberfest 2024 Contributors:**

- **Induwara Dissanayake** - Advanced Features - [GitHub Profile](https://github.com/induwara-dissanayake)
- _(Your name here!)_ - Contributions welcome!

---

## 🌟 Acknowledgments

- Thanks to all Hacktoberfest participants
- Inspired by classic quiz games
- Built with ❤️ using C programming language

---

## 📞 Contact & Support

- **Issues:** [GitHub Issues](https://github.com/induwara-dissanayake/Fun-with-Quiz/issues)
- **Discussions:** [GitHub Discussions](https://github.com/induwara-dissanayake/Fun-with-Quiz/discussions)
- **Pull Requests:** [Submit PR](https://github.com/induwara-dissanayake/Fun-with-Quiz/pulls)

---

## ⭐ Show Your Support

If you like this project, please give it a ⭐ on GitHub!

Happy Coding! 🚀

---

**#Hacktoberfest** **#OpenSource** **#CProgramming** **#QuizGame** **#Learning**

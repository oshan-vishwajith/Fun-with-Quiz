# 🚀 Quick Start Guide - Fun with Quiz

This guide will help you get started with Fun with Quiz in under 5 minutes!

## ⚡ Super Quick Start (30 seconds)

### Windows

```powershell
# Clone and run
git clone https://github.com/induwara-dissanayake/Fun-with-Quiz.git
cd Fun-with-Quiz
gcc quiz_advanced.c -o quiz.exe
.\quiz.exe
```

### Linux/Mac

```bash
# Clone and run
git clone https://github.com/induwara-dissanayake/Fun-with-Quiz.git
cd Fun-with-Quiz
gcc quiz_advanced.c -o quiz
./quiz
```

---

## 📋 Step-by-Step Guide

### Step 1: Install Prerequisites

**Windows:**

- Install [MinGW](http://mingw.org/) or [TDM-GCC](https://jmeubank.github.io/tdm-gcc/)
- Add GCC to PATH

**Linux:**

```bash
sudo apt-get update
sudo apt-get install gcc
```

**Mac:**

```bash
xcode-select --install
```

### Step 2: Get the Code

**Option A: Using Git**

```bash
git clone https://github.com/induwara-dissanayake/Fun-with-Quiz.git
cd Fun-with-Quiz
```

**Option B: Download ZIP**

1. Go to [repository](https://github.com/induwara-dissanayake/Fun-with-Quiz)
2. Click "Code" → "Download ZIP"
3. Extract and navigate to folder

### Step 3: Compile

**Choose your version:**

**Simple Version (Original):**

```bash
gcc code.c -o quiz_simple
```

**Advanced Version (Recommended):**

```bash
gcc quiz_advanced.c -o quiz_advanced
```

**Using Makefile (if available):**

```bash
make advanced
```

### Step 4: Run!

**Windows:**

```powershell
.\quiz_advanced.exe
```

**Linux/Mac:**

```bash
./quiz_advanced
```

---

## 🎮 First Time Playing

### What to Expect

1. **Main Menu** - You'll see 6 options:

   ```
   1. Play Quiz - Easy Mode
   2. Play Quiz - Medium Mode
   3. Play Quiz - Hard Mode
   4. Play Quiz - Mixed Difficulty
   5. View High Scores
   6. Exit
   ```

2. **Enter Your Name** - Type your name and press Enter

3. **Answer Questions** - Type A, B, C, or D for each question

4. **Get Results** - See your score and performance rating

5. **Leaderboard** - Your score is automatically saved!

### Tips for First-Timers

✅ **DO:**

- Start with Easy mode
- Read questions carefully
- Type uppercase or lowercase (both work!)
- Check the leaderboard to compete

❌ **DON'T:**

- Don't worry about mistakes - it's for learning!
- Don't rush - take your time
- Don't give up - try different difficulty levels

---

## 🔧 Troubleshooting

### Common Issues

**Problem:** "gcc is not recognized as a command"
**Solution:**

- Install GCC compiler
- Add GCC to system PATH
- Restart terminal after installation

**Problem:** Unicode characters don't display correctly
**Solution:**

- Use Windows Terminal or PowerShell 7+
- On Linux: Check terminal supports UTF-8
- Modify code to use ASCII characters if needed

**Problem:** Permission denied when running
**Solution:**

```bash
# Linux/Mac
chmod +x quiz_advanced
./quiz_advanced
```

**Problem:** Can't save high scores
**Solution:**

- Check write permissions in folder
- Run from a location where you have write access

---

## 📝 Quick Commands Reference

### Compilation

```bash
# Simple version
gcc code.c -o quiz_simple

# Advanced version
gcc quiz_advanced.c -o quiz_advanced

# With warnings enabled (recommended for development)
gcc -Wall -Wextra quiz_advanced.c -o quiz_advanced

# With optimization
gcc -O2 quiz_advanced.c -o quiz_advanced
```

### Running

```bash
# Windows
quiz_advanced.exe

# Linux/Mac
./quiz_advanced
```

### Using Makefile

```bash
make              # Build all
make advanced     # Build advanced version
make run-advanced # Build and run advanced version
make clean        # Clean build files
make help         # Show help
```

---

## 🎯 Next Steps

### After Your First Game

1. **Try Different Modes**

   - Play all difficulty levels
   - Try mixed mode for variety

2. **Check Statistics**

   - View your performance
   - Track improvement over time

3. **Compete on Leaderboard**

   - Try to get top 10
   - Beat your previous scores

4. **Contribute**
   - Add your own questions
   - Suggest new features
   - Report bugs
   - Improve documentation

---

## 🤝 Get Help

### Resources

- [Full README](README_ADVANCED.md)
- [Contributing Guide](CONTRIBUTING.md)
- [GitHub Issues](https://github.com/induwara-dissanayake/Fun-with-Quiz/issues)

### Community

- Ask questions in Discussions
- Report bugs in Issues
- Submit improvements via Pull Requests

---

## 🎓 Learning Path

### Beginner

1. Play Easy mode - Learn basics
2. Review wrong answers - Understand concepts
3. Try Medium mode - Challenge yourself

### Intermediate

1. Play Mixed mode - Test all knowledge
2. View statistics - Track progress
3. Read source code - Learn C programming

### Advanced

1. Add custom questions - Contribute
2. Modify code - Add features
3. Help others - Answer questions

---

## ⭐ Enjoy!

Have fun learning and competing! Don't forget to star the repo if you like it! ⭐

**Happy Quizzing! 🎯**

---

**Quick Links:**

- [Main README](README_ADVANCED.md)
- [How to Contribute](CONTRIBUTING.md)
- [Report an Issue](https://github.com/induwara-dissanayake/Fun-with-Quiz/issues/new)

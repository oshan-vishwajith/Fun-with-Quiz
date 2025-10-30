# 🎯 Feature Documentation

Complete guide to all features in Fun with Quiz v2.0

---

## 📊 Feature Overview

### Core Features

#### 1. Question Randomization 🎲

**What it does:** Shuffles questions for each game session

**Benefits:**

- No memorization of question order
- Fresh experience each time
- Fair gameplay for all players

**Implementation:**

- Uses Fisher-Yates shuffle algorithm
- Random seed based on current time
- Maintains question integrity

**Code Example:**

```c
void shuffleQuestions(Question questions[], int count) {
    srand(time(NULL));
    for (int i = count - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Question temp = questions[i];
        questions[i] = questions[j];
        questions[j] = temp;
    }
}
```

---

#### 2. Difficulty Levels 🎚️

**Available Modes:**

| Mode   | Points/Question | Question Types  | Best For              |
| ------ | --------------- | --------------- | --------------------- |
| Easy   | 10              | Basic concepts  | Beginners             |
| Medium | 20              | Intermediate    | Intermediate learners |
| Hard   | 30              | Advanced topics | Experts               |
| Mixed  | Variable        | All levels      | Challenge             |

**How to Choose:**

- **Easy**: Learning fundamentals
- **Medium**: Testing knowledge
- **Hard**: Mastery challenge
- **Mixed**: Comprehensive assessment

---

#### 3. Multiple Categories 📚

**Current Categories:**

1. **C Programming**

   - Syntax and basics
   - Data types and operators
   - Memory management
   - Advanced concepts

2. **Data Structures**

   - Arrays and linked lists
   - Stacks and queues
   - Trees and graphs
   - Algorithm complexity

3. **General Knowledge**
   - Geography
   - History
   - Science
   - Arts and literature

**Adding New Categories:**

```c
strcpy(allQuestions[idx].category, "Your Category");
```

---

#### 4. High Score System 🏆

**Features:**

- Top 10 leaderboard
- Persistent storage
- Multiple game tracking
- Difficulty-based ranking

**Display Format:**

```
┌────┬─────────────────┬─────────┬────────────┐
│ #  │ Player          │ Score   │ Difficulty │
├────┼─────────────────┼─────────┼────────────┤
│ 1  │ Alice           │ 100/100 │ Hard       │
│ 2  │ Bob             │  90/100 │ Medium     │
└────┴─────────────────┴─────────┴────────────┘
```

**File Format:**

```
PlayerName|Score|Total|Difficulty|Category|Timestamp
```

---

#### 5. Statistics Dashboard 📊

**Metrics Tracked:**

- Total games played
- Total questions answered
- Correct vs wrong answers
- Overall accuracy percentage
- Difficulty distribution

**Example Output:**

```
📈 Total Games Played: 25
📝 Total Questions Answered: 250
✅ Correct Answers: 200
❌ Wrong Answers: 50
🎯 Overall Accuracy: 80.00%
```

---

#### 6. Points System ⚡

**Point Allocation:**

- Easy questions: 10 points
- Medium questions: 20 points
- Hard questions: 30 points

**Scoring Logic:**

```c
if (answer_is_correct) {
    score += question.points;
}
```

**Performance Ratings:**

- 100%: Perfect Score! 🏆
- 80-99%: Excellent! 🌟
- 60-79%: Great job! 👏
- 40-59%: Good effort! 🙂
- 0-39%: Keep practicing! 💪

---

## 🎨 User Interface Features

### 1. Enhanced Console Display

**Box Drawing:**

```
╔══════════════════════════════════════╗
║     Fun with Quiz - Advanced         ║
╚══════════════════════════════════════╝
```

**Emoji Support:**

- ✅ Correct answer
- ❌ Wrong answer
- 🎯 Final score
- 🏆 High scores
- 📊 Statistics

### 2. Color Coding (Future Feature)

Planned ANSI color support:

- Green for correct answers
- Red for wrong answers
- Yellow for warnings
- Blue for information

---

## 💾 Data Persistence

### 1. High Scores File

**Location:** `highscores.txt`

**Format:**

```
Alice|100|10|Hard|C Programming|1698765432
Bob|90|10|Medium|Mixed|1698765500
```

**Fields:**

1. Player name
2. Score achieved
3. Total questions
4. Difficulty level
5. Category
6. Unix timestamp

### 2. Questions File (Optional)

**Location:** `questions.txt`

**Format:**

```
Question text|OptionA|OptionB|OptionC|OptionD|Answer|Category|Difficulty
```

**Usage:**

- Load custom questions
- Share question banks
- Community contributions

---

## 🔧 Advanced Features

### 1. Modular Architecture

**File Structure:**

```
quiz_structures.h    - Data definitions
question_manager.h/c - Question handling
score_manager.h/c    - Score management
main.c              - Main program
```

**Benefits:**

- Easy to maintain
- Simple to extend
- Better code organization
- Easier testing

### 2. Input Validation

**Features:**

- Case-insensitive answers
- Buffer clearing
- Error handling
- Invalid input protection

**Example:**

```c
if (answer == 'A' || answer == 'a') {
    // Accept both uppercase and lowercase
}
```

### 3. Error Handling

**File Operations:**

```c
FILE *file = fopen(HIGHSCORE_FILE, "a");
if (file != NULL) {
    // Save score
    fclose(file);
} else {
    printf("Warning: Could not save score.\n");
}
```

---

## 🎯 Gameplay Features

### 1. Instant Feedback

**Per Question:**

- Immediate correct/wrong indication
- Display correct answer if wrong
- Running score display

**Example:**

```
Your answer: C
✅ Correct!
⭐ Current Score: 8/10
```

### 2. Final Report

**Information Shown:**

- Player name
- Final score
- Percentage
- Performance rating
- Rank indication

### 3. Answer Flexibility

**Accepted Input:**

- Uppercase (A, B, C, D)
- Lowercase (a, b, c, d)
- Leading/trailing spaces ignored

---

## 📈 Statistical Features

### 1. Performance Tracking

**Metrics:**

- Accuracy rate
- Games played
- Questions answered
- Success rate by difficulty

### 2. Leaderboard

**Sorting:**

- By total score
- By percentage
- By difficulty level

### 3. Historical Data

**Preserved:**

- All game sessions
- Timestamps
- Player names
- Performance details

---

## 🚀 Future Features (Roadmap)

### Version 2.1

- [ ] Timer per question (30 seconds)
- [ ] Hint system (costs 50% of points)
- [ ] Save/resume game
- [ ] Question of the day

### Version 2.2

- [ ] Multiplayer mode
- [ ] Team battles
- [ ] Custom quiz creation
- [ ] Achievement badges

### Version 3.0

- [ ] Web interface
- [ ] Mobile app
- [ ] Online leaderboard
- [ ] Social features

---

## 🛠️ Customization Options

### 1. Modify Questions

**Add Questions:**

```c
strcpy(allQuestions[idx].question, "Your question?");
strcpy(allQuestions[idx].options[0], "Option A");
// ... set other options
allQuestions[idx].correct_answer = 'A';
strcpy(allQuestions[idx].category, "Category");
allQuestions[idx].difficulty = 1;
allQuestions[idx].points = 10;
idx++;
```

### 2. Change Point Values

**Modify in code:**

```c
allQuestions[idx].points = 50; // Custom points
```

### 3. Adjust Difficulty

**Create new levels:**

```c
#define VERY_EASY 0
#define EASY 1
#define MEDIUM 2
#define HARD 3
#define EXPERT 4
```

---

## 📊 Performance Optimization

### 1. Memory Efficiency

- Fixed-size arrays for predictable performance
- Efficient string handling
- Minimal dynamic allocation

### 2. Speed Optimization

- Quick sort for leaderboard (O(n log n))
- Efficient file I/O
- Optimized question loading

### 3. Scalability

- Supports up to 100 questions
- Unlimited high score entries
- Category expansion ready

---

## 🔐 Security Features

### 1. Input Sanitization

- Buffer overflow protection
- Input validation
- Safe string operations

### 2. File Safety

- Check file exists before reading
- Error handling for file operations
- Safe file writing

---

## 📚 Technical Details

### Dependencies

- Standard C library (stdio.h, stdlib.h, string.h, time.h)
- No external dependencies

### Compatibility

- C99 standard
- Cross-platform (Windows, Linux, Mac)
- Console-based (no GUI required)

### Performance

- Fast startup time (<1 second)
- Minimal memory usage (<10 MB)
- Efficient question loading

---

## 💡 Best Practices

### For Players

1. Start with easy mode
2. Review wrong answers
3. Track your progress
4. Challenge yourself regularly

### For Contributors

1. Follow code style guidelines
2. Test thoroughly
3. Document new features
4. Update this file with new features

---

## 📞 Support

### Getting Help

- [GitHub Issues](https://github.com/induwara-dissanayake/Fun-with-Quiz/issues)
- [Discussions](https://github.com/induwara-dissanayake/Fun-with-Quiz/discussions)

### Contributing

- [Contributing Guide](CONTRIBUTING.md)
- [Code of Conduct](CODE_OF_CONDUCT.md)

---

**Last Updated:** October 2024  
**Version:** 2.0.0  
**Maintainers:** [@oshan-vishwajith](https://github.com/oshan-vishwajith), [@induwara-dissanayake](https://github.com/induwara-dissanayake)

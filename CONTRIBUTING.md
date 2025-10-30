# Contributing to Fun with Quiz 🎯

Thank you for your interest in contributing to Fun with Quiz! This document provides guidelines and instructions for contributing to this project.

## 🌟 Ways to Contribute

### 1. Code Contributions

- Add new features
- Fix bugs
- Improve existing code
- Add new questions
- Enhance UI/UX

### 2. Documentation

- Improve README
- Add code comments
- Write tutorials
- Create examples

### 3. Testing

- Test existing features
- Report bugs
- Suggest improvements
- Write test cases

### 4. Ideas & Discussions

- Suggest new features
- Participate in discussions
- Provide feedback
- Share the project

---

## 🚀 Getting Started

### 1. Fork the Repository

Click the "Fork" button at the top right of the repository page.

### 2. Clone Your Fork

```bash
git clone https://github.com/YOUR-USERNAME/Fun-with-Quiz.git
cd Fun-with-Quiz
```

### 3. Create a New Branch

```bash
git checkout -b feature/your-feature-name
```

**Branch Naming Convention:**

- `feature/` - for new features
- `fix/` - for bug fixes
- `docs/` - for documentation updates
- `refactor/` - for code refactoring

Examples:

- `feature/add-timer`
- `fix/score-calculation-bug`
- `docs/update-readme`

---

## 📝 Code Style Guidelines

### General Rules

- **Indentation:** Use 4 spaces (no tabs)
- **Line Length:** Maximum 80-100 characters
- **Naming Conventions:**
  - Functions: `camelCase` or `snake_case`
  - Variables: `snake_case`
  - Constants: `UPPER_CASE`
  - Structures: `PascalCase`

### Example:

```c
// Good
void displayQuestion(Question q, int questionNum) {
    printf("Question %d: %s\n", questionNum, q.question);
}

// Variable naming
int player_score = 0;
const int MAX_QUESTIONS = 100;

// Structure naming
typedef struct {
    char player_name[50];
    int score;
} HighScore;
```

### Comments

- Add comments for complex logic
- Use descriptive function names
- Document function parameters

```c
/**
 * Shuffles an array of questions randomly
 * @param questions - Array of Question structures
 * @param count - Number of questions in the array
 */
void shuffleQuestions(Question questions[], int count) {
    // Implementation
}
```

---

## 🎯 Adding New Questions

### Method 1: Edit question_manager.c

Add your questions to the `initializeQuestions()` function:

```c
// Easy Question Example
strcpy(allQuestions[idx].question, "What is 2 + 2?");
strcpy(allQuestions[idx].options[0], "3");
strcpy(allQuestions[idx].options[1], "4");
strcpy(allQuestions[idx].options[2], "5");
strcpy(allQuestions[idx].options[3], "6");
allQuestions[idx].correct_answer = 'B';
strcpy(allQuestions[idx].category, "Mathematics");
allQuestions[idx].difficulty = 1;
allQuestions[idx].points = 10;
idx++;
```

### Method 2: Add to questions.txt

Format: `Question|OptionA|OptionB|OptionC|OptionD|Answer|Category|Difficulty`

```
What is 2 + 2?|3|4|5|6|B|Mathematics|1
```

### Question Guidelines

- ✅ Clear and unambiguous
- ✅ One correct answer
- ✅ Appropriate difficulty level
- ✅ Relevant category
- ❌ No offensive content
- ❌ No copyright violations

---

## 🐛 Reporting Bugs

### Before Reporting

1. Check if the bug has already been reported
2. Test with the latest version
3. Try to reproduce the bug

### Bug Report Template

```markdown
## Bug Description

A clear description of the bug.

## Steps to Reproduce

1. Go to '...'
2. Click on '....'
3. See error

## Expected Behavior

What should happen?

## Actual Behavior

What actually happens?

## Environment

- OS: [e.g., Windows 11]
- Compiler: [e.g., GCC 11.2]
- Version: [e.g., 2.0]

## Screenshots

If applicable, add screenshots.
```

---

## ✨ Suggesting Features

### Feature Request Template

```markdown
## Feature Description

Clear description of the feature.

## Problem it Solves

What problem does this feature address?

## Proposed Solution

How should it work?

## Alternatives Considered

Other ways to solve the problem.

## Additional Context

Screenshots, examples, etc.
```

---

## 🔄 Pull Request Process

### 1. Make Your Changes

- Write clean, documented code
- Follow the code style guidelines
- Test your changes thoroughly

### 2. Commit Your Changes

```bash
git add .
git commit -m "Add feature: description of your changes"
```

**Commit Message Format:**

```
Type: Brief description

Detailed description (optional)

Fixes #issue_number (if applicable)
```

**Types:**

- `feat:` - New feature
- `fix:` - Bug fix
- `docs:` - Documentation changes
- `style:` - Code style changes (formatting)
- `refactor:` - Code refactoring
- `test:` - Adding tests
- `chore:` - Maintenance tasks

**Examples:**

```
feat: Add timer feature for questions

Added a countdown timer that gives users 30 seconds
per question. Timer can be disabled in settings.

Fixes #42
```

### 3. Push to Your Fork

```bash
git push origin feature/your-feature-name
```

### 4. Create Pull Request

1. Go to the original repository
2. Click "New Pull Request"
3. Select your branch
4. Fill in the PR template
5. Submit!

### Pull Request Template

```markdown
## Description

Brief description of changes.

## Type of Change

- [ ] Bug fix
- [ ] New feature
- [ ] Documentation update
- [ ] Code refactoring

## Testing

How did you test these changes?

## Checklist

- [ ] Code follows style guidelines
- [ ] Self-review completed
- [ ] Comments added for complex code
- [ ] Documentation updated
- [ ] No new warnings generated
- [ ] Tested on multiple platforms (if applicable)

## Screenshots

If applicable, add screenshots.

## Related Issues

Closes #issue_number
```

---

## 🧪 Testing Guidelines

### Manual Testing

1. Compile without warnings

   ```bash
   gcc -Wall -Wextra quiz_advanced.c -o quiz
   ```

2. Test all menu options
3. Test with invalid inputs
4. Test edge cases
5. Test on different platforms (if possible)

### Test Cases to Consider

- Empty input
- Invalid input
- Boundary values
- Special characters
- Large inputs
- File I/O errors

---

## 📚 Code Review Process

### What We Look For

- ✅ Code works as intended
- ✅ Follows style guidelines
- ✅ Well-documented
- ✅ No unnecessary complexity
- ✅ Handles errors gracefully
- ✅ Compatible with existing code

### Review Timeline

- Initial review: Within 3-5 days
- Feedback implementation: As needed
- Final approval: After all checks pass

---

## 🏆 Recognition

### Contributors List

All contributors will be:

- Listed in README.md
- Credited in release notes
- Acknowledged in the project

### Hacktoberfest

- Valid PRs count towards Hacktoberfest
- Must meet Hacktoberfest quality standards
- Follow the 4-PR rule

---

## ❓ Questions?

### Contact

- **Issues:** [GitHub Issues](https://github.com/induwara-dissanayake/Fun-with-Quiz/issues)
- **Discussions:** [GitHub Discussions](https://github.com/induwara-dissanayake/Fun-with-Quiz/discussions)

### Resources

- [First Contributions Guide](https://github.com/firstcontributions/first-contributions)
- [How to Contribute to Open Source](https://opensource.guide/how-to-contribute/)
- [Git Handbook](https://guides.github.com/introduction/git-handbook/)

---

## 📜 Code of Conduct

### Our Pledge

We are committed to providing a welcoming and inclusive environment.

### Expected Behavior

- ✅ Be respectful and inclusive
- ✅ Use welcoming language
- ✅ Accept constructive criticism
- ✅ Focus on what's best for the community

### Unacceptable Behavior

- ❌ Harassment or discrimination
- ❌ Trolling or insulting comments
- ❌ Publishing others' private information
- ❌ Unprofessional conduct

### Enforcement

Violations may result in:

1. Warning
2. Temporary ban
3. Permanent ban

---

## 🎉 Thank You!

Your contributions make this project better for everyone. Whether you're fixing a typo or adding a major feature, every contribution is valued!

**Happy Coding! 🚀**

---

**Last Updated:** October 2024  
**Maintainers:** [@oshan-vishwajith](https://github.com/oshan-vishwajith), [@induwara-dissanayake](https://github.com/induwara-dissanayake)

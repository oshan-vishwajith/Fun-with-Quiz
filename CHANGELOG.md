# Changelog

All notable changes to the Fun with Quiz project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Planned Features

- Timer functionality for each question
- Hint system (costs points)
- Save and resume game feature
- Export statistics to CSV
- Web-based interface
- Multiplayer support
- Achievement system

## [2.0.0] - 2024-10-31 (Hacktoberfest Edition)

### Added

- **Question Randomization**: Questions are now shuffled for each game session
- **Difficulty Levels**: Easy (10pts), Medium (20pts), Hard (30pts), and Mixed modes
- **Multiple Categories**: C Programming, Data Structures, General Knowledge
- **High Score System**: Persistent leaderboard tracking top 10 scores
- **Statistics Dashboard**: View overall performance metrics
- **Points System**: Different point values based on question difficulty
- **Enhanced UI**: Beautiful console interface with Unicode characters
- **Modular Code Structure**: Separated code into multiple files:
  - `quiz_structures.h` - Data structure definitions
  - `question_manager.h/c` - Question management
  - `score_manager.h/c` - Score and statistics management
- **Advanced Version** (`quiz_advanced.c`): All-in-one file with all features
- **Documentation**:
  - Comprehensive README with all features
  - CONTRIBUTING.md with contribution guidelines
  - LICENSE file (MIT)
  - .gitignore for C projects
  - Makefile for easy compilation
  - Issue templates
  - This changelog

### Changed

- Improved answer validation (case-insensitive)
- Better error handling for file operations
- Enhanced performance feedback messages
- More detailed statistics tracking

### Fixed

- Duplicate question numbers in original code (Q3, Q4 appeared twice)
- Input buffer clearing issues
- Incorrect final score calculation

## [1.0.0] - 2024-10-XX (Original Release)

### Added

- Basic quiz functionality with 12 questions
- Multiple-choice questions (A/B/C/D format)
- Score tracking
- Instant feedback after each answer
- Final score display with performance message
- Questions covering C programming basics

### Features

- 12 C programming questions
- Simple console interface
- Score from 0-10 (note: had 12 questions but counted to 10)
- Basic emoji support
- Beginner-friendly

---

## Version Comparison

| Feature           | v1.0.0   | v2.0.0         |
| ----------------- | -------- | -------------- |
| Questions         | 12 fixed | 16+ randomized |
| Difficulty Levels | Single   | 4 modes        |
| Categories        | C only   | 3+ categories  |
| High Scores       | ❌       | ✅             |
| Statistics        | ❌       | ✅             |
| Points System     | Basic    | Advanced       |
| Modular Code      | ❌       | ✅             |
| File Save         | ❌       | ✅             |

---

## Migration Guide

### From v1.0.0 to v2.0.0

**For Users:**

1. The original simple version is still available as `code.c`
2. New advanced version available as `quiz_advanced.c`
3. No breaking changes to basic gameplay

**For Developers:**

1. New modular structure for easier contribution
2. Check CONTRIBUTING.md for code style guidelines
3. Use provided headers for new features

---

## Contributors

### v2.0.0

- [@induwara-dissanayake](https://github.com/induwara-dissanayake) - Advanced features, modular structure, documentation

### v1.0.0

- [@oshan-vishwajith](https://github.com/oshan-vishwajith) - Original creator

---

## Links

- [Repository](https://github.com/induwara-dissanayake/Fun-with-Quiz)
- [Issues](https://github.com/induwara-dissanayake/Fun-with-Quiz/issues)
- [Pull Requests](https://github.com/induwara-dissanayake/Fun-with-Quiz/pulls)

---

**Note**: This project follows [Semantic Versioning](https://semver.org/):

- **MAJOR** version for incompatible API changes
- **MINOR** version for new functionality (backwards compatible)
- **PATCH** version for backwards compatible bug fixes

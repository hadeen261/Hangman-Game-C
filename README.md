<div align="center">

```
                        ██╗  ██╗ █████╗ ███╗   ██╗ ██████╗ ███╗   ███╗ █████╗ ███╗   ██╗
                        ██║  ██║██╔══██╗████╗  ██║██╔════╝ ████╗ ████║██╔══██╗████╗  ██║
                        ███████║███████║██╔██╗ ██║██║  ███╗██╔████╔██║███████║██╔██╗ ██║
                        ██╔══██║██╔══██║██║╚██╗██║██║   ██║██║╚██╔╝██║██╔══██║██║╚██╗██║
                        ██║  ██║██║  ██║██║ ╚████║╚██████╔╝██║ ╚═╝ ██║██║  ██║██║ ╚████║
                        ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝
```

### 🎮 A Classic Word Guessing Game — Built in C

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Platform](https://img.shields.io/badge/Platform-Windows-informational?style=for-the-badge&logo=windows)
![Status](https://img.shields.io/badge/Status-Playable-brightgreen?style=for-the-badge)
![Score](https://img.shields.io/badge/High%20Score-Track%20Yours!-gold?style=for-the-badge)

</div>

---

## 📜 About

**Hangman** is a terminal-based word guessing game written in pure **C**. Race against the gallows — guess the hidden word letter by letter before you run out of chances. Every correct guess earns you points; every wrong one costs you. Can you top your own high score?

---

## 🖥️ Gameplay Preview

```
      _______
     |/      |
     |      ( )
     |      /|\
     |       |
     |      / \
 ____|____

Word: a p p _ e

Guessed Letters: 'a' 'b' 'l' 'p' 'z'
Score: 30
High Score: 50
Chances left: 1

Enter a letter: _
```

---

## ✨ Features

| Feature | Description |
|---|---|
| 🎨 **ASCII Art Gallows** | Hangman visually builds step-by-step with each wrong guess |
| 🔤 **Duplicate Guard** | Already guessed a letter? The game reminds you |
| 📊 **Live Scoring** | +10 per correct letter, -5 per wrong guess |
| 🏆 **High Score Tracking** | Your best score is remembered across rounds in a session |
| 🔁 **Play Again** | Replay instantly without restarting the program |
| 🧹 **Clean Screen** | Screen clears each round for a smooth experience |

---

## 🎯 Rules

```
┌─────────────────────────────────────────────┐
│               H O W  T O  P L A Y           │
├─────────────────────────────────────────────┤
│  ✅  Correct guess   →   +10 points         │
│  ❌  Wrong guess     →   -5  points         │
│  💀  6 wrong guesses →   GAME OVER          │
│  🎉  Full word found →   YOU WIN!           │
└─────────────────────────────────────────────┘
```

---

## 🛠️ Getting Started

### Prerequisites

- A C compiler (GCC recommended)
- Windows OS *(uses `system("cls")` for screen clearing)*

---

## 🧠 Word List

The game randomly selects from these :

```
apple  •  grape  •  mango  •  lemon  •  melon
peach  •  olive  •  lotus  •  tulip  •  daisy
```

---

## 📈 Scoring System

```
Start Score  →  0
─────────────────────────────
Correct Letter  →  +10 pts
Wrong Guess     →   -5 pts  (minimum 0)
─────────────────────────────
Win Bonus       →  No deductions on final guess
High Score      →  Saved across rounds per session
```

---

## 🚀 Future Ideas

- [ ] Add difficulty levels (easy / medium / hard)
- [ ] Expand the word bank with categories
- [ ] Add a hint system
- [ ] Cross-platform screen clearing
- [ ] Save high score to a file between sessions
- [ ] Multiplayer mode (one player sets the word)

---

---

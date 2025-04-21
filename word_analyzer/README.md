# 🧠 Word_Analyzer (C++/GTKmm Edition)

An interactive, GUI-based **word frequency analyzer** built in **C++ with GTKmm**.  
`Word_Analyzer` brings a classic systems programming approach to the desktop — with a clean interface and real-time analysis, staying true to raw logic while leveraging modern C++.

> 💡 Evolved from the original `Word_Collector.c`, now with a live user interface. Still simple. Still smart. Still Red Team ready.

---

## 🚀 Features

- 🔤 Converts all input text to lowercase
- ✂️ Removes basic punctuation (`.`, `,`, `!`, etc.)
- 🧠 Analyzes word frequencies with `std::map` (counts) + `std::vector` (preserves order)
- 🔁 Preserves **original word order** (not sorted alphabetically)
- 💬 Real-time results shown in a GTKmm TextView widget
- 🪶 Lightweight, modern C++ (no Boost, no nonsense)

---

## 🧪 Sample Output

```
1. red         <-- 5 times
2. teaming     <-- 3 times
3. is          <-- 1 times
4. thrilling   <-- 1 times
...
```

---

## 🖼️ GUI Preview

- **Top**: Text input area (multi-line)
- **Middle**: "Analyze" button
- **Bottom**: Word frequency output (appears in original order)

---

## 🧰 Dependencies

- C++17 or later
- [GTKmm 3.x](https://www.gtkmm.org/en/)

---

## 📦 Build & Run

### On Linux (Debian/Ubuntu)

```bash
sudo apt install libgtkmm-3.0-dev
g++ -std=c++17 word_analyzer.cpp -o word_analyzer `pkg-config gtkmm-3.0 --cflags --libs`
./word_analyzer
```

---

## 🛑 License & Permissions

> ⚠️ This project is the **intellectual property** of **Jerome Goldwin M.**  
> Shared only for educational insight and personal demonstration purposes.

- **Not open-source.**
- **Do not** reuse, modify, redistribute, or rehost any part of the code or project.
- Refer to [LICENSE.md](./LICENSE.md) for full legal terms.

---

## ✍️ Author

**Jerome Goldwin M.**  
Cybersecurity & Systems Programmer  
📧 jerome.goldwin@gmail.com  
🔗 [GitHub](https://github.com/Jerome-Goldwin)

---

_“I have no idea how this works, but it freaking works.” — JGM_

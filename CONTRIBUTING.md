# Contributing to ATtiny85 Toothbrush Firmware 🪥⚡

Thanks for your interest in contributing! This is a solo-built embedded firmware project for a three-speed toothbrush controller running on ATtiny85.

While this is primarily a personal project, contributions are welcome under the following guidelines:

---

## 🛠 How to Contribute

### 1. Fork the Repo

Click the **Fork** button at the top-right of this page to create your own copy.

### 2. Clone Your Fork

```bash
git clone https://github.com/your-username/attiny85-toothbrush.git
cd attiny85-toothbrush
```

### 3. Create a New Branch

```bash
git checkout -b feature/your-feature-name
```

### 4. Make Your Changes

Follow the structure and coding style already used in src/ and include/.

### 5. Test Your Changes

Ensure the code still builds:

```bash
platformio run
```

### 6. Push and Create a Pull Request

```bash
git push origin feature/your-feature-name
```

Then, open a pull request (PR) to the main branch.

✨ Contribution Scope

Examples of acceptable contributions:
- Bug fixes or logic improvements
- CI enhancements or PlatformIO tweaks
- README or documentation updates
- Schematics/block diagrams
- Alternate hardware pinout suggestions

❗ Things to Avoid

- Unrelated features or scope creep
- Moving to other frameworks (e.g., Arduino) — this is a bare-metal C project
- Adding large libraries or dependencies

📜 License

By contributing, you agree that your code will be licensed under the MIT License.

Thanks again!
— Lakmal Weerasinghe
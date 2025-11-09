# Contributing to Qwasar Silicon Valley Portfolio

Thank you for your interest in contributing to this educational portfolio! While this repository primarily serves as a personal showcase of projects completed at Qwasar Silicon Valley, contributions are welcome in the form of:

- Bug fixes
- Documentation improvements
- Code quality enhancements
- Suggestions for better practices

## How to Contribute

### Reporting Issues

If you find a bug or have a suggestion:

1. **Check existing issues** to avoid duplicates
2. **Create a new issue** with a clear title and description
3. **Include relevant details**:
   - Steps to reproduce (for bugs)
   - Expected vs. actual behavior
   - Your environment (OS, compiler version, Python version, etc.)
   - Code snippets or error messages

### Submitting Changes

1. **Fork the repository**
   ```bash
   git clone https://github.com/Yacine-ai-tech/Qwasar-Silicon-Valley.git
   ```

2. **Create a feature branch**
   ```bash
   git checkout -b feature/your-feature-name
   ```

3. **Make your changes**
   - Follow the existing code style
   - Add or update tests if applicable
   - Update documentation as needed

4. **Commit your changes**
   ```bash
   git add .
   git commit -m "Brief description of changes"
   ```
   
   Use clear, descriptive commit messages:
   - ✅ "Fix memory leak in my_printf"
   - ✅ "Add error handling to web scraper"
   - ❌ "Fix stuff"
   - ❌ "Update"

5. **Push to your fork**
   ```bash
   git push origin feature/your-feature-name
   ```

6. **Open a Pull Request**
   - Provide a clear title and description
   - Reference any related issues
   - Explain what changes were made and why

## Code Style Guidelines

### Python Projects
- Follow [PEP 8](https://pep8.org/) style guide
- Use meaningful variable and function names
- Add docstrings for functions and classes
- Keep functions focused and concise

### C Projects
- Follow existing indentation style (typically 4 spaces)
- Use meaningful variable names
- Add comments for complex logic
- Ensure proper memory management (no leaks)
- Use `make` for building when applicable

### General Guidelines
- Write clear, self-documenting code
- Add comments only when necessary to explain "why", not "what"
- Keep commits atomic and focused
- Test your changes before submitting

## Project-Specific Notes

### For Python Projects
```bash
# Ensure code runs without errors
python your_script.py

# Check for common issues
python -m py_compile your_script.py
```

### For C Projects
```bash
# Compile with warnings enabled
gcc -Wall -Wextra -Werror your_code.c -o output

# Check for memory leaks (if valgrind is available)
valgrind --leak-check=full ./output
```

### For Data Science Projects
- Ensure all required dependencies are documented
- Test with sample data when possible
- Document any data preprocessing steps

## Documentation

When updating documentation:
- Use clear, concise language
- Include code examples where appropriate
- Keep formatting consistent with existing docs
- Check for spelling and grammar errors

## Code of Conduct

Please be respectful and constructive in all interactions. This is a learning-focused project, and we welcome contributors of all experience levels.

### Expected Behavior
- Be respectful and inclusive
- Provide constructive feedback
- Focus on the code, not the person
- Help others learn and grow

### Unacceptable Behavior
- Harassment or discriminatory language
- Personal attacks
- Trolling or inflammatory comments
- Publishing others' private information

## Questions?

If you have questions about contributing, feel free to:
- Open an issue with the "question" label
- Check existing documentation
- Review similar projects for examples

## Recognition

Contributors will be acknowledged in the project. Significant contributions may be highlighted in the README.

## License

By contributing, you agree that your contributions will be licensed under the same [MIT License](LICENSE) that covers this project.

---

Thank you for helping improve this educational portfolio! 🎓

# inpro
The inpro (initiate project) project is used to create the filesystem for a project by the specified language.

## Current Language Support
- Python
- HTML
- C
- C++
- Bash
- Rust

## TODO
- [x] Fix the help menu
- [ ] Add more language support
- [ ] Design a more modular system for directory and file creation
- [ ] Clean up the case statements

## Examples
```
inpro python BankSystem
```

```
Directory does not exist. Creating directory.
Directory successfully created. Continuing process.
Creating the directory for the language: python at BankSystem
Creating virtual environment...
Done.
Created all directories.

.
|-- bin
|   |-- Activate.ps1
|   |-- activate
|   |-- activate.csh
|   |-- activate.fish
|   |-- pip
|   |-- pip3
|   |-- pip3.9
|   |-- python -> /usr/bin/python
|   |-- python3 -> python
|   -- python3.9 -> python
...
|-- docs
|   -- notes.text
|-- include
|-- main.py
|-- pyvenv.cfg
|-- src
-- tools
    -- __init__.py

149 directories, 1103 files
```

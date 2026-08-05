# 📁 File Handling

This folder contains C++ programs that demonstrate basic file handling using input/output file streams (`fstream`) and working with text files.

## Included Files

| File | Description |
|---|---|
| `Example1.cpp` | Demonstrates reading from and writing to a text file using `ifstream` and `ofstream`. |
| `example2.cpp` | Shows file handling with formatted input/output and data processing for student marks or similar text-based data. |
| `Example3.cpp` | Additional file handling example that extends file I/O usage and program flow. |
| `Example4.cpp` | A further file handling example covering more text stream operations. |
| `StudentData.cpp` | Demonstrates file handling with structured student data and text file interactions. |

> Sample `.txt` files such as `data.txt`, `marks.txt`, and `Student.txt` are created or used by the examples.

## Concepts Covered

- `ifstream` and `ofstream`
- `fstream`
- Opening, reading, writing, and closing text files
- Simple file-based data processing
- Error checking for file operations

## How to Compile

Use a C++ compiler such as `g++`:

```bash
g++ "Example1.cpp" -o Example1
./Example1

g++ "example2.cpp" -o example2
./example2
```

On Windows with MSVC:

```powershell
cl /EHsc "Example1.cpp"
Example1.exe

cl /EHsc "example2.cpp"
example2.exe
```

## Notes

- If any example expects a data file, make sure `data.txt` or `marks.txt` is available in the same folder as the executable.
- Remove any local executable files before sharing the repository, if desired.

## Suggested Improvements

- Add comments to explain how file streams work.
- Include a `README` note about updating file paths for different platforms.
- Add more examples for binary file handling and file appending.

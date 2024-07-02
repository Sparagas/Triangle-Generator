# Triangle-Generator

This repository contains a simple script that generates vertex indices for 3D model faces in the Wavefront .obj file format. The script can generate the indices either as a triangle list or a triangle strip.

## Features

- Generates vertex indices for 3D model faces.
- Supports two generation methods: Triangle list and Triangle strip.
- Written in Python with equivalent functionality in C.
- Precompiled binaries for Windows (32-bit and 64-bit).
- Precompiled binaries for Linux (32-bit and 64-bit).

## Usage

### Python Script

#### Windows

To use the Python script, follow these steps:

1. Download Python from [python.org](https://www.python.org/)

2. Double-click `tri_gen.py` or write this in the terminal:

    ```sh
    py tri_gen.py
    ```

#### Linux

To use the Python script, follow these steps:

1. Write this in the terminal:

    ```sh
    python3 tri_gen.py
    ```

### Precompiled Binaries

#### Windows

1. Download the appropriate binary for your system:
    - `tri_gen_32.exe`
    - `tri_gen_64.exe`

2. Double-click `tri_gen_32.exe` / `tri_gen_64.exe` or write this in the terminal:

    ```sh
    tri_gen_32.exe
    ```
    ```sh
    tri_gen_64.exe
    ```
#### Linux

1. Download the appropriate binary for your system:
    - `tri_gen_32`
    - `tri_gen_64`

2. Write this in the terminal:

    ```sh
    ./tri_gen_32
    ```
    ```sh
    ./tri_gen_64
    ```

## Example Output

After entering the number of vertices, the script will generate output similar to the following:

```plaintext
Some 3D model formats in video games don't use vertex indices for faces.
If you want to convert these models to a more common format,
like the Wavefront .obj file, you first need to generate vertex indices.

This program generates a Wavefront .obj-compatible list of face triangles
from the entered index size, either as a triangle list or a triangle strip.

Enter number of vertices: 6

Generated as Triangle list:
f 1 2 3
f 4 5 6

Generated as Triangle strip:
f 1 2 3
f 2 3 4
f 3 4 5
f 4 5 6
```

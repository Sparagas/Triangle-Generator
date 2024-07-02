def gen_tri_list(num):
    print("\nGenerated as Triangle list:")
    for i in range(3, num + 1, 3):
        print(f"f {i - 2} {i - 1} {i}")


def gen_tri_strip(num):
    print("\nGenerated as Triangle strip:")
    front_face = True
    for i in range(3, num + 1):
        if front_face:
            print(f"f {i - 2} {i - 1} {i}")
        else:
            print(f"f {i - 2} {i} {i - 1}")
        front_face = not front_face


if __name__ == "__main__":
    print("Some 3D model formats in video games don't use vertex indices for faces.")
    print("If you want to convert these models to a more common format,")
    print("like the Wavefront .obj file, you first need to generate vertex indices.")
    print()
    print("This program generates a Wavefront .obj-compatible list of face triangles")
    print("from the entered index size, either as a triangle list or a triangle strip.")
    print()

    while True:
        try:
            num_vertex = int(input("\nEnter number of vertices: "))
            if num_vertex < 3:
                print("Number of vertices must be at least 3.")
                continue

            gen_tri_list(num_vertex)
            gen_tri_strip(num_vertex)
        except ValueError:
            print("Invalid input. Please enter a valid number.")

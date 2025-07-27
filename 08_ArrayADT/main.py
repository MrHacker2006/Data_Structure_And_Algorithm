class MyArray:
    def __init__(self, total_size, used_size):
        self.total_size = total_size
        self.used_size = used_size
        self.ptr = [None] * total_size  # Pre-allocated list with fixed total size

    def set_value(self):
        for i in range(self.used_size):
            n = int(input(f"Enter Element {i + 1}: "))
            self.ptr[i] = n

    def show(self):
        for i in range(self.used_size):
            print(self.ptr[i])

# Equivalent of main()
if __name__ == "__main__":
    marks = MyArray(10, 2)
    print("We are currently inside setValue")
    marks.set_value()
    print("We are currently inside at show")
    marks.show()

def remove_trailing_newlines(file_path):
    with open(file_path, 'rb') as file:
        content = file.read()
        while content.endswith(b'\n') or content.endswith(b'\r'):
            content = content[:-1]
    with open(file_path, 'wb') as file:
        file.write(content)

def compare_files(file1_path, file2_path):
    remove_trailing_newlines(file1_path)
    remove_trailing_newlines(file2_path)

    with open(file1_path, 'rb') as file1, open(file2_path, 'rb') as file2:
        content1 = file1.read()
        content2 = file2.read()

        return content1 == content2

file1_path = 'output'
file2_path = 'outputProgram.txt'

if compare_files(file1_path, file2_path):
    print("Correct answer")
else:
    print("Incorrect answer")

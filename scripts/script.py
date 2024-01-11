import os
import subprocess
import time


cpp_file = "template.cpp"
executable = "a.out"
result_file = "result"

def compile_and_run():
    compile_command = f"g++ {cpp_file} -o {executable}"
    with open(result_file, "w") as result:
        result.write("Compiling ...")
    compilation_result = subprocess.run(compile_command, shell=True, stderr=subprocess.PIPE, text=True)

    if compilation_result.returncode == 0:
        try:
            subprocess.run(f"./{executable}", shell=True, check=True)
            judge()
        except subprocess.CalledProcessError as runtime_error:
            with open(result_file, "a") as result:
                result.write(f"\nRuntime Error:\n{runtime_error.stderr}\n")
    else:
        with open(result_file, "a") as result:
            result.write(f"\nCompilation Error:\n{compilation_result.stderr}\n")

def judge():
    with open(result_file, "w") as result:
        result.write("Judging ...")
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
        with open(result_file, "a") as result:
            result.write("\nCorrect Answer")
    else:
        with open(result_file, "a") as result:
            result.write("\nIncorrect Answer")
if __name__ == "__main__":
    last_modified_time = os.path.getmtime("template.cpp")
    last_content = None

    while True:
        try:
            current_modified_time = os.path.getmtime("template.cpp")

            if current_modified_time > last_modified_time:
                open("result.txt", 'w').close()
                last_modified_time = current_modified_time

                compile_and_run()

            time.sleep(1)

        except KeyboardInterrupt:
            print("\nExiting script.")
            break
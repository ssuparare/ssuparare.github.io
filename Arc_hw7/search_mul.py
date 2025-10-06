from pathlib import Path
import multiprocessing

#เก็บไฟล์ text ที่ได้มาไว้ที่ไหนเอามาใส่
path = Path('dir')

#เลข นร.
target = 'id'

def searching(search_string):
    for file in path.rglob('*.bin'):
        if file.is_file():
            text = file.read_text()
            if search_string in text:
                print("found student id")

if __name__ == "__main__":
    proccess1 = multiprocessing.Process(target=searching, args=(target, ))

    proccess1.start()
    proccess1.join()
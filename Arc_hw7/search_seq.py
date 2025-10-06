from pathlib import Path

#####   เก็บไฟล์ text ที่ได้มาไว้ที่ไหนเอามาใส่  #####
#####   c:/user/file    #####
#####   ใช้ / ไม่ใช่ \     #####
path = Path('dir')

#####   เลข นศ.
search_string = 'id'

for file in path.rglob('*.bin'):
    if file.is_file():
        text = file.read_text()
        if search_string in text:
            print("found student id")
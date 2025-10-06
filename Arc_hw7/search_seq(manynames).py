from pathlib import Path

#####   เก็บไฟล์ text ที่ได้มาไว้ที่ไหนเอามาใส่  #####
#####   c:/user/file    #####
#####   ใช้ / ไม่ใช่ \     #####
path = Path('dir')

#####   เลข นศ. มีกี่คนเพิ่มไปอีก
search_string = 'id'
search_string2 = 'id'

for file in path.rglob('*.bin'):
    if file.is_file():
        text = file.read_text()

        #####   เติม and หลังตัวแปรของเลขแต่ละคน
        if search_string and search_string2 in text:
            print("found in student id in: ")
            print(file)

print("done(seq)")
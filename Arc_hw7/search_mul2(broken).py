#ไม่เวิรค
#ใครเห็นลองแก้ขำ ๆ ก็ได้

from pathlib import Path
import concurrent.futures

target = '1671010541194'

texts = [
    'txt(1).bin',
    'txt(2).bin',
    'txt(3).bin',
    'txt(4).bin',
    'txt(5).bin',
    'txt(6).bin',
    'txt(7).bin',
    'txt(8).bin',
    'txt(9).bin',
    'txt(10).bin',
    'txt(11).bin',
    'txt(12).bin',
    'txt(13).bin',
    'txt(14).bin',
    'txt(15).bin',
    'txt(16).bin',
    'txt(17).bin',
    'txt(18).bin',
    'txt(19).bin',
    'txt(20).bin',
]

def search(file_names):
    for file_name in file_names:
        #print(file_name)
        if file_name.is_file():
            text = file_name.read_text()
        if target in text:
            print("found in student id(" + target + ") in: ")
            print(file_name)

search(texts)
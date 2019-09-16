#! /usr/bin/python3

#Used to zip up all code samples in individual archives
#Usage:
#zipper.py          : zip up each subfolder in each week
#zipper.py  WeekXX  : zip up each subfolder in week XX

import os
from zipfile import ZipFile
import sys



folderList = sys.argv[1:]
if len(folderList) == 0:
    for topFileName in os.listdir(".") : # loop through all the files and folders
        if os.path.isdir(os.path.join(os.path.abspath("."), topFileName)) and not topFileName.startswith('.'):
            folderList.append(topFileName)


for folder in folderList:
    for subfolder in os.listdir(folder):
        if os.path.isdir(os.path.join(folder, subfolder)):
            with ZipFile(os.path.join(folder,subfolder + '.zip'),'w') as zip:
                #print("==="  + os.path.join(folder,subfolder))
                for root, dirs, files in os.walk(os.path.join(folder, subfolder)):
                    subPath = root.replace(os.path.join(folder,subfolder), "")
                    #print("+++"  + root + " " + str(dirs) + "  " + str(files))
                    for file in files:
                        #print(os.path.join(subPath,file))
                        zip.write(os.path.join(root, file), os.path.join(subPath,file))
    

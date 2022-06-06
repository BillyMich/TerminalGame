import glob

# absolute path to search all text files inside a specific folder
path = r'*.txt'
files = glob.glob(path)
print(files)


print("The files have been updated!")
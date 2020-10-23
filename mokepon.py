n = int(input())
masuk = []
for i in range(0,n):
    masuk.append(input())
mokepon = []
for pokemon in range(0,len(masuk)):
    if masuk[pokemon] in mokepon:
        continue
    else:
        mokepon.append(masuk[pokemon])
print(len(mokepon))
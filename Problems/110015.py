n = int(input())

lsl = []
lsr = []

for i in range(1, n, 2):
    lsl.append(f"#ghorfe{i}...")
    
for x in range(2, n, 2):
    lsr.append(f"....ghorfe{i}#")

print(lsl)
print(lsr)
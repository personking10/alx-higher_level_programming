import dis

def magic_calculation(a, b):
    c = (a ** b) + 98
    return c

print(dis.dis(magic_calculation))

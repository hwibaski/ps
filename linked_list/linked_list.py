class Node():
    def __init__(self, value):
        self.value = value
        self.next = None


class LinkedList(object):
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def push(self, value):
        new_node = Node(value)
        if self.head is None:
            self.head = new_node
            self.tail = new_node
            self.size += 1
        else:
            self.tail.next = new_node
            self.tail = self.tail.next
            self.size += 1

    def get(self, idx):
        if idx < 0 or idx >= self.size:
            raise("out of range")
        current = self.head
        for i in range(idx):
            current = current.next
        return current.value

    def insert_at(self, value, idx):
        if idx > self.size:
            raise("out of range")
        new_node = Node(value)
        current = self.head
        if idx == 0:
            new_node.next = current
            self.head = new_node
            self.size += 1
            return

        for _ in range(idx-1):
            current = current.next
        origin_next = current.next
        current.next = new_node
        new_node.next = origin_next
        self.size += 1

    def remove_at(self, idx):
        if idx > self.size:
            raise ("out of range")
        current = self.head
        if idx == 0:
            self.head = current.next
            self.size -= 1
            return

        for _ in range(idx-1):
            current = current.next
        current.next = current.next.next
        self.size -= 1

    def print(self):
        current = self.head
        while(current):
            print(current.value, end="")
            current = current.next
            if current:
                print("->", end="")
        print()


ll = LinkedList()
ll.push(1)
ll.push(2)
ll.push(3)
print(ll.get(1))
ll.print()
ll.insert_at(10, 3)
ll.print()
ll.remove_at(1)
ll.print()
ll.remove_at(1)
ll.print()
ll.remove_at(0)
ll.print()
ll.remove_at(0)
ll.print()

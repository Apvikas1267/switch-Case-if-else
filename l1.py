class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


# Function to add two numbers
def addTwoNumbers(l1, l2):
    dummy = ListNode(0)
    current = dummy
    carry = 0

    while l1 or l2 or carry:
        total = carry

        if l1:
            total += l1.val
            l1 = l1.next

        if l2:
            total += l2.val
            l2 = l2.next

        carry = total // 10
        current.next = ListNode(total % 10)
        current = current.next

    return dummy.next


# Function to create linked list from user input
def create_list():
    print("Enter elements (space separated):")
    arr = list(map(int, input().split()))

    dummy = ListNode(0)
    current = dummy

    for num in arr:
        current.next = ListNode(num)
        current = current.next

    return dummy.next


# Function to print linked list
def print_list(node):
    result = []
    while node:
        result.append(node.val)
        node = node.next
    print("Output:", result)


# 🔹 Main Program
print("Enter list 1:")
l1 = create_list()

print("Enter list 2:")
l2 = create_list()

result = addTwoNumbers(l1, l2)

print_list(result)
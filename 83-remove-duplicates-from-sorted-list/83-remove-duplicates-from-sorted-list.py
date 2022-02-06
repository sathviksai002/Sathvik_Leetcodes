# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head
        item=head
        while item:
            if item.next:
                if item.val == item.next.val:
                    item.next = item.next.next
                    continue
            item= item.next
        
        return head
            
            
            
        
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {
    if (!head || !head.next) return head;
    
    let dummyHead = new ListNode(0);
    dummyHead.next = head;
    let curr = dummyHead;
    while (curr.next != null && curr.next.next != null) {
        let n1 = curr.next;
        let n2 = curr.next.next;

        curr.next = curr.next.next;
        n1.next = n2.next;
        n2.next = n1;

        curr = curr.next.next;
    }

    return dummyHead.next;
};
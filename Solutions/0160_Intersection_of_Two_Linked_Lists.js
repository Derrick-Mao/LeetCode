/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
  if (!headA || !headB) return null;

  let dummyHeadA = headA;
  let dummyHeadB = headB;

  while (dummyHeadA !== dummyHeadB) {
      dummyHeadA = dummyHeadA ? dummyHeadA.next : headB;
      dummyHeadB = dummyHeadB ? dummyHeadB.next : headA;
  }

  return dummyHeadA;
};
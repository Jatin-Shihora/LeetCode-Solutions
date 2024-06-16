class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        # Min heap of (capital, profit)
        capital_min_heap: list[tuple[int, int]] = [] 
        # Max heap of profit
        profit_max_heap: list[int] = [] 

        for i in range(len(capital)):
            if capital[i] <= w:
                self._max_heap_push(profit_max_heap, profits[i])
            else:
                self._min_heap_push(capital_min_heap, (capital[i], profits[i]))
        
        while k > 0 and len(profit_max_heap) > 0:
            w += self._max_heap_pop(profit_max_heap)
            k -= 1
            if k == 0:
                return w

            while len(capital_min_heap) > 0 and capital_min_heap[0][0] <= w:
                _, project_profit = self._min_heap_pop(capital_min_heap)
                self._max_heap_push(profit_max_heap, project_profit)

        return w
    
    def _min_heap_push(self, queue: list[tuple[int, int]], item: tuple[int, int]) -> None:
        i = len(queue)
        queue.append(item)

        parent_i = self._heap_parent(i)
        while i > 0 and queue[parent_i] > queue[i]:
            queue[i], queue[parent_i] = queue[parent_i], queue[i]

            i = parent_i
            parent_i = self._heap_parent(i)
    
    def _min_heap_pop(self, queue: list[tuple[int, int]]) -> tuple[int, int]:
        assert len(queue) > 0
        if len(queue) == 1:
            return queue.pop()

        popped = queue[0]
        queue[0] = queue.pop()
        self._min_heapify(queue, 0)
        return popped
    
    def _min_heapify(self, queue: list[tuple[int, int]], i: int) -> None:
        largest_i = i

        left_i = self._heap_left(i)
        if left_i < len(queue) and queue[left_i] < queue[largest_i]:
            largest_i = left_i
        right_i = self._heap_right(i)
        if right_i < len(queue) and queue[right_i] < queue[largest_i]:
            largest_i = right_i
        
        if largest_i != i:
            queue[i], queue[largest_i] = queue[largest_i], queue[i]
            self._min_heapify(queue, largest_i)


    def _max_heap_push(self, queue: list[int], item: tuple[int, int]) -> None:
        i = len(queue)
        queue.append(item)

        parent_i = self._heap_parent(i)
        while i > 0 and queue[parent_i] < queue[i]:
            queue[i], queue[parent_i] = queue[parent_i], queue[i]

            i = parent_i
            parent_i = self._heap_parent(i)
    
    def _max_heap_pop(self, queue: list[int]) -> int:
        assert len(queue) > 0
        if len(queue) == 1:
            return queue.pop()

        popped = queue[0]
        queue[0] = queue.pop()
        self._max_heapify(queue, 0)
        return popped
    
    def _max_heapify(self, queue: list[int], i: int) -> None:
        largest_i = i

        left_i = self._heap_left(i)
        if left_i < len(queue) and queue[left_i] > queue[largest_i]:
            largest_i = left_i
        right_i = self._heap_right(i)
        if right_i < len(queue) and queue[right_i] > queue[largest_i]:
            largest_i = right_i
        
        if largest_i != i:
            queue[i], queue[largest_i] = queue[largest_i], queue[i]
            self._max_heapify(queue, largest_i)

    def _heap_parent(self, child_i: int) -> int:
        return (child_i - 1) // 2
    
    def _heap_left(self, parent_i: int) -> int:
        return (parent_i * 2) + 1

    def _heap_right(self, parent_i: int) -> int:
        return (parent_i * 2) + 2
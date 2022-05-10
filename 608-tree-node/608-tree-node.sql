# Write your MySQL query statement below

select t1.id,
CASE
WHEN t1.p_id is null
THEN 'Root'
WHEN t1.id  in (select t2.p_id from Tree t2  )
THEN 'Inner'
ELSE 'Leaf'
END AS type
from Tree t1

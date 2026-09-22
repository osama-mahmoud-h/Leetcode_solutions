-- Write your PostgreSQL query statement below
select id 
from Weather w1
where w1.temperature > (select max(w2.temperature) from Weather w2 where w2.recordDate = w1.recordDate - interval '1 day');
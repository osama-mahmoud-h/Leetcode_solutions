-- Write your PostgreSQL query statement below
SELECT w.id
FROM Weather w
WHERE 
w.temperature > (select w2.temperature from  Weather w2 where w2.recordDate = (w.recordDate - INTERVAL '1 day'));
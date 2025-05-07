-- Write your PostgreSQL query statement below
SELECT w1.id 
FROM Weather w1 
JOIN Weather w2 on w1.temperature > w2.temperature 
     AND (w2.recordDate = (w1.recordDate - INTERVAL '1 day'));

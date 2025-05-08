-- Write your PostgreSQL query statement below
SELECT 
*
FROM Cinema

WHERE description <> 'boring' and (id%2)=1

ORDER BY rating desc;
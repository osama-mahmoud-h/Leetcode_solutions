-- Write your PostgreSQL query statement below
select 
s.user_id,
ROUND(
count(CASE WHEN c.action='confirmed' THEN 1 END) / GREATEST(1,count(c.action))::numeric
, 2)as confirmation_rate
FROM
 Signups s LEFT JOIN Confirmations c
    ON s.user_id = c.user_id

GROUP BY s.user_id
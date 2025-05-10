-- Write your PostgreSQL query statement below
SELECT 
TO_CHAR(trans_date, 'YYYY-MM') as month,
country,
(COUNT(*)) as trans_count ,
(COUNT(CASE WHEN t.state = 'approved' THEN 1 END)) as approved_count ,
(SUM(amount)) as trans_total_amount ,
(SUM(CASE WHEN t.state='approved' THEN amount ELSE 0 END))  as approved_total_amount
FROM Transactions t

GROUP BY month, country
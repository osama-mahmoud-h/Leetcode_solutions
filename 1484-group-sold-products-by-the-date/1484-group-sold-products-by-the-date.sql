# Write your MySQL query statement below


SELECT sell_date,COUNT(DISTINCT(product))AS num_sold,GROUP_CONCAT(DISTINCT(product))as products
FROM Activities
GROUP BY sell_date
order by sell_date
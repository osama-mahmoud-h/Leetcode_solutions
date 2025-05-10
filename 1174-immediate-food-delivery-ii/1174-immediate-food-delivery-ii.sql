-- Write your PostgreSQL query statement below
SELECT
ROUND(
    SUM(CASE 
        WHEN  (select order_date
                from Delivery d2
                where d2.customer_id = d1.customer_id
                order by order_date
                limit 1) 
             = d1.order_date
             AND d1.order_date = d1.customer_pref_delivery_date
        THEN 1
        ELSE 0
      END)
    /(SELECT COUNT(DISTINCT(d3.customer_id)) FROM Delivery d3)::numeric * 100

    ,2) as immediate_percentage
FROM Delivery d1;

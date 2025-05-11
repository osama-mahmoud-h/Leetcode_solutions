WITH count_products_cte AS(
    SELECT
        COUNT(*)
    FROM Product
)

SELECT
customer_id
FROM Customer c
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (select * from count_products_cte)

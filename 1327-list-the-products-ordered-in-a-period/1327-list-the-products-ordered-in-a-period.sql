SELECT
    p.product_name,
    sum(o.unit) as unit
FROM Products p JOIN Orders o on p.product_id = o.product_id

WHERE TO_CHAR(o.order_date , 'YYYY-MM') = '2020-02'
--WHERE o.order_date >= '2020-02-01' AND o.order_date < '2020-03-01'

GROUP BY p.product_name
HAVING sum(o.unit) >=100;




-- The Trick: You need to fetch products ordered in February 2020 with at least 100 units.

-- The Interview Trap: Candidates often write WHERE EXTRACT(MONTH FROM order_date) = 2 AND EXTRACT(YEAR FROM order_date) = 2020. Never do this in an interview. Applying a function to a column in the WHERE clause destroys the database's ability to use indexes (it breaks "SARGability") and forces a full table scan. Always compare the raw date column to a range.
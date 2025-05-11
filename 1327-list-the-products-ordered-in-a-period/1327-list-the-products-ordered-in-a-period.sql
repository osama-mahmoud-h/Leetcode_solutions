SELECT
    p.product_name,
    sum(o.unit) as unit
FROM Products p JOIN Orders o on p.product_id = o.product_id

WHERE TO_CHAR(o.order_date , 'YYYY-MM') = '2020-02'

GROUP BY p.product_name
HAVING sum(o.unit) >=100;
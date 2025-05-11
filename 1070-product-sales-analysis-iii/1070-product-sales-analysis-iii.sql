SELECT
    s.product_id, 
    MIN(s.year) AS first_year, 
    s.quantity, 
    s.price
FROM Sales s --JOIN Product p ON s.product_id = p.product_id
WHERE  (s.product_id, year) in (select product_id, MIN(year) from Sales group by product_id)
GROUP BY s.product_id, s.quantity ,s.price
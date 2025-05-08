-- Write your PostgreSQL query statement below
select 
--*
p.product_id ,
ROUND(
    sum(CASE WHEN u.units IS NULL THEN 0 ELSE u.units * p.price END) / 
    GREATEST(1,sum(CASE WHEN u.units IS NULL THEN 0 ELSE u.units END ))::numeric  -- max(1,sum)--to avoid /0
, 2)as average_price
from Prices p left join UnitsSold u on p.product_id = u.product_id
    and u.purchase_date BETWEEN p.start_date AND p.end_date 
group by p.product_id;
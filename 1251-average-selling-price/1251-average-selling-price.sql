-- Write your PostgreSQL query statement below
select 
--*
p.product_id ,
round( sum(u.units * p.price) / sum(u.units )::numeric ,2 )as average_price
from Prices p left join UnitsSold u on p.product_id = u.product_id
    and u.purchase_date BETWEEN p.start_date AND p.end_date 
group by p.product_id;
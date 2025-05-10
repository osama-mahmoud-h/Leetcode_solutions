SELECT
query_name,
ROUND(SUM(rating/position::numeric)/ (count(query_name))  , 2) as quality,
ROUND(AVG(CASE WHEN rating<3 THEN 1 ELSE 0 END )*100, 2) as poor_query_percentage

FROM Queries q
GROUP BY query_name ;
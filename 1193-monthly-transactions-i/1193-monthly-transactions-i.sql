-- Write your PostgreSQL query statement below


select 
    TO_CHAR(date_trunc('month', trans_date) , 'YYYY-MM') as month,
    country ,
    count(*) as trans_count ,
    count(
        case t.state 
        when 'approved'
        then 1 
        end
    )as approved_count,
    sum(amount) as trans_total_amount,
    sum(
        case t.state 
        when 'approved'
        then t.amount
        else 0 
        end
    ) as approved_total_amount
from Transactions t
group by  date_trunc('month', trans_date), country 


;


-- SELECT
--     DATE_TRUNC('month', t.trans_date) AS month,
--     t.country,
--     COUNT(*) AS trans_count,

--     COUNT(
--         CASE
--             WHEN t.state = 'approved' THEN 1
--         END
--     ) AS approved_count,

--     SUM(t.amount) AS trans_total_amount,

--     SUM(
--         CASE
--             WHEN t.state = 'approved' THEN t.amount
--             ELSE 0
--         END
--     ) AS approved_total_amount

-- FROM Transactions t

-- GROUP BY
--     DATE_TRUNC('month', t.trans_date),
--     t.country;
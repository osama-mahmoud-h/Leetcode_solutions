# Write your MySQL query statement below
/*


*/
/*
select DATEDIFF(recordDate , "2015-01-03") as dif 
from Weather*/

select w.id 
from Weather w
where w.temperature > (select w2.temperature from Weather w2 where 
                     
                    DATEDIFF(w.recordDate,w2.recordDate) =1)

(
    SELECT 
        u.name AS results
    FROM Movies m 
    JOIN MovieRating mr ON m.movie_id = mr.movie_id
    JOIN Users u ON u.user_id = mr.user_id
    GROUP BY u.name
    ORDER BY COUNT(u.name) DESC, u.name
    LIMIT 1
)
UNION ALL
(
    SELECT 
        m.title AS results
    FROM Movies m 
    JOIN MovieRating mr ON m.movie_id = mr.movie_id
    WHERE TO_CHAR(mr.created_at,'YYYY-MM') = '2020-02'
    GROUP BY m.title
    ORDER BY AVG(mr.rating) DESC, m.title
    LIMIT 1
);

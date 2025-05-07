-- Write your PostgreSQL query statement below
SELECT 
st.student_id,
st.student_name,
sb.subject_name,
count(ex.subject_name) as attended_exams

FROM 
    Students st
    CROSS JOIN Subjects sb 
    LEFT JOIN Examinations ex ON ex.student_id = st.student_id 
            AND ex.subject_name = sb.subject_name

group by st.student_id,
st.student_name,
sb.subject_name, ex.subject_name

order by st.student_id, sb.subject_name;

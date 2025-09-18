class TaskManager {
private:
    struct Task{
        int user_id = -1;
        int task_id = -1;
        int priority = -1;
        Task(int userId, int taskId, int priority) : user_id(userId), task_id(taskId), priority(priority) {}
    };
    struct Comp {
        bool operator()(const Task &a, const Task &b) const {
            if (a.priority != b.priority)
                return a.priority > b.priority;
            return a.task_id > b.task_id;
        }
    };

    unordered_map<int,int>task_user_id;
    unordered_map<int,int>task_priority;
    set<Task,Comp> tasks_set;
public:
    TaskManager(vector<vector<int>>& tasks) {
        for (const auto &task: tasks){
            int user_id = task[0], task_id = task[1], priority = task[2];
            task_user_id[task_id] = user_id;
            task_priority[task_id] = priority;
            tasks_set.insert({user_id, task_id, priority});
        }
    }

    void add(int user_id, int task_id, int priority) {
        tasks_set.insert({user_id, task_id, priority});
        task_user_id[task_id] = user_id;
        task_priority[task_id] = priority;
    }

    void edit(int task_id, int new_priority) {
        int old_priority = task_priority[task_id];
        int user_id = task_user_id[task_id];
        tasks_set.erase({user_id, task_id, old_priority});
        this->add(user_id,task_id,new_priority);
    }

    void rmv(int task_id) {
        int priority = task_priority[task_id];
        int user_id = task_user_id[task_id];
        tasks_set.erase({user_id, task_id, priority});
    }

    int execTop() {
        return tasks_set.begin()->user_id;
    }
};
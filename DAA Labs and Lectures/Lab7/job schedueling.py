def job_scheduling(deadline, profit):
    n = len(deadline)
    jobs = list(zip(profit, deadline))
    jobs.sort(reverse=True)
    max_deadline = max(deadline)
    slots = [-1] * (max_deadline + 1)
    total_profit = 0
    scheduled_jobs = []

    for p, d in jobs:
        for slot in range(d, 0, -1):
            if slots[slot] == -1:
                slots[slot] = p
                total_profit += p
                scheduled_jobs.append((p, d))
                break

    return scheduled_jobs, total_profit



deadline = [2, 3, 1, 1, 2, 1]
profit   = [100, 20, 35, 27, 30, 28]
scheduled, profit_sum = job_scheduling(deadline, profit)
print("Scheduled Jobs (profit, deadline):", scheduled)
print("Total Maximum Profit:", profit_sum)

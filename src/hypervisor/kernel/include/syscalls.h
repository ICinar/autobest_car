/* syscalls.h -- syscall IDs */
/* GENERATED BY scripts/generate_syscall_header.sh -- DO NOT EDIT */

#define SYSCALL_ABORT	0
#define SYSCALL_PUTCHAR	1
#define SYSCALL_TASK_SELF	2
#define SYSCALL_TASK_CURRENT	3
#define SYSCALL_TASK_ISRID	4
#define SYSCALL_TASK_CREATE	5
#define SYSCALL_TASK_TERMINATE	6
#define SYSCALL_TASK_TERMINATE_OTHER	7
#define SYSCALL_TASK_CHAIN	8
#define SYSCALL_TASK_ACTIVATE	9
#define SYSCALL_TASK_DELAYED_ACTIVATE	10
#define SYSCALL_TASK_SET_PRIO	11
#define SYSCALL_TASK_GET_PRIO	12
#define SYSCALL_TASK_GET_STATE	13
#define SYSCALL_SCHEDULE	14
#define SYSCALL_YIELD	15
#define SYSCALL_NULL	16
#define SYSCALL_FAST_PRIO_SYNC	17
#define SYSCALL_PART_SELF	18
#define SYSCALL_PART_GET_OPERATING_MODE	19
#define SYSCALL_PART_SET_OPERATING_MODE	20
#define SYSCALL_PART_GET_OPERATING_MODE_EX	21
#define SYSCALL_PART_SET_OPERATING_MODE_EX	22
#define SYSCALL_PART_GET_START_CONDITION	23
#define SYSCALL_EV_SET	24
#define SYSCALL_EV_GET	25
#define SYSCALL_EV_CLEAR	26
#define SYSCALL_EV_WAIT_GET_CLEAR	27
#define SYSCALL_IPEV_SET	28
#define SYSCALL_KLDD_CALL	29
#define SYSCALL_CTR_INCREMENT	30
#define SYSCALL_CTR_GET	31
#define SYSCALL_CTR_ELAPSED	32
#define SYSCALL_ALARM_BASE	33
#define SYSCALL_ALARM_GET	34
#define SYSCALL_ALARM_SET_REL	35
#define SYSCALL_ALARM_SET_ABS	36
#define SYSCALL_ALARM_CANCEL	37
#define SYSCALL_SCHEDTAB_START_REL	38
#define SYSCALL_SCHEDTAB_START_ABS	39
#define SYSCALL_SCHEDTAB_STOP	40
#define SYSCALL_SCHEDTAB_NEXT	41
#define SYSCALL_SCHEDTAB_START_SYNC	42
#define SYSCALL_SCHEDTAB_SYNC	43
#define SYSCALL_SCHEDTAB_SET_ASYNC	44
#define SYSCALL_SCHEDTAB_GET_STATE	45
#define SYSCALL_WQ_SET_DISCIPLINE	46
#define SYSCALL_WQ_WAIT	47
#define SYSCALL_WQ_WAKE	48
#define SYSCALL_SLEEP	49
#define SYSCALL_REPLENISH	50
#define SYSCALL_UNBLOCK	51
#define SYSCALL_GETTIME	52
#define SYSCALL_WAIT_PERIODIC	53
#define SYSCALL_SHM_ITERATE	54
#define SYSCALL_SCHEDULE_CHANGE	55
#define SYSCALL_HM_CHANGE	56
#define SYSCALL_HM_INJECT	57
#define SYSCALL_HM_LOG	58
#define SYSCALL_CPU_ID	59
#define SYSCALL_ISR_MASK	60
#define SYSCALL_ISR_UNMASK	61
#define SYSCALL_SHUTDOWN	62
#define SYSCALL_RPC_CALL	63
#define SYSCALL_RPC_REPLY	64

#define NUM_SYSCALLS 65

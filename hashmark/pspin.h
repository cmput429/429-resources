
int pthread_spin_init(pthread_spinlock_t *lock, void * pshared) {
        __asm__ __volatile__ ("" ::: "memory");
            *lock = 0;
                return 0;
}

int pthread_spin_destroy(pthread_spinlock_t *lock) {
        return 0;
}

int pthread_spin_lock(pthread_spinlock_t *lock) {
        while (1) {
                    int i;
                            for (i=0; i < 10000; i++) {
                                            if (__sync_bool_compare_and_swap(lock, 0, 1)) {
                                                                return 0;
                                                                            }
                                                    }
                                    sched_yield();
                                        }
}

int pthread_spin_trylock(pthread_spinlock_t *lock) {
        if (__sync_bool_compare_and_swap(lock, 0, 1)) {
                    return 0;
                        }
            return 1;
}

int pthread_spin_unlock(pthread_spinlock_t *lock) {
        __asm__ __volatile__ ("" ::: "memory");
            *lock = 0;
                return 0;
}

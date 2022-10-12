/**
 * \file
 * \brief Test module header
 * 
 * Include it to run indepent test function
*/


typedef int (*TestFunc)(void *data);


/// Contains test function, argument for it and its expected return code
typedef struct {
    TestFunc test_func; ///< This function will be run for testing
    int return_code = 0; ///< Expected exit code for test function
    void *data = nullptr; ///< Additional data for testing
} Test;


/**
 * \brief Runs tests from array
 * \param [in] tests Array of tests to run
 * \param [in] size Size of test array
 * \param [in] data Some additional data for test
 * \return Number of successfull tests
*/
int run_tests(Test tests[], unsigned long long size, void *data);

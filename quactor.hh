/** @file
 *  @brief Async messaging framework for distributed programming
*/

/** @defgroup quactor
 *  @brief Async messaging framework for distributed programming
 */

/** @brief Actor base class @ingroup quactor */
class QActor {
    long aid;       // actor id
};

/** @brief Message queue @ingroup quactor */
class Queue {
    long qid;
};

/** @brief Message @ingroup quactor */
class Qmsg {
    long mid;
};

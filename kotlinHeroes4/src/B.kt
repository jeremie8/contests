import kotlin.math.min
import kotlin.math.pow
import kotlin.math.roundToInt

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints


fun main() {
    val tests = readInt()
    for (t in 1..tests) {
        val (n, k1, k2) = readInts()
        val s = readLn()
        if (n == 0) {
            println("0")
            continue
        }

        var m = 0
        if (s[0] == '1') m = min(k1, k2)
        var prev=m
        for (i in 1 until s.length) {
            if(s[i] == '0') {
                prev = 0
                continue
            }
            prev = min(k1, k2 - prev)
            m += prev
        }

        println("$m")
    }

}
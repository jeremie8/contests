import kotlin.math.pow
import kotlin.math.roundToInt

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints


fun main(){
    val t = readInt()
    for(i in 1..t){
        val (n, k) = readInts()

        val kd = k.toDouble()
        val x = 1 + k + kd.pow(2)  + kd.pow(3)
        val n1 : Int = (n / x).roundToInt()
        val n2 : Int = n1 * k
        val n3 : Int = n2 * k
        val n4 : Int = n3 * k
        println("$n1 $n2 $n3 $n4")
    }

}
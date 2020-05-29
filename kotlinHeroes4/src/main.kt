import kotlin.math.roundToInt

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints

fun roundToUpperInt(x : Double) : Int = if( x.roundToInt() < x) x.roundToInt() + 1 else x.roundToInt()

fun solve() : Int{
    val (n, k, x, y) = readInts()
    val a = readInts().toMutableList()
    a.sort()

    var m = 0
    while(a.any { it>k }){
        if(roundToUpperInt(a.average()) > k || a.count{it>k} < (y / x)){
            a[a.size - 1] = 0
            a.sort()
            m+=x
        }else{
            if(y > x && a.count{it>k}==1){
                a[a.size - 1] = 0
                a.sort()
                m+=x
            }else{
                return m + y
            }
        }
    }
    return m
}

fun main() {
    val tests = readInt()
    for (t in 1..tests) {
        println(solve())
    }

}
(defn dis [p d] (- p (* p (/ d 100.0))))

(println (dis 1500 50))
(println (dis 89 20))
(println (dis 100 75))

(defn dp [n]
  (loop [res 0
         left n]
    (if (zero? left)
      res
      (recur (+ res (* (mod left 10) (mod left 10))) (quot left 10)))))

(defn is-happy-number [n]
  (cond 
    (= n 1) true
    (= n 4) false
    :else (recur (dp n))))

(println (is-happy-number 19))
(println (is-happy-number 7))
(println (is-happy-number 32))
(println (is-happy-number 145))
(println (is-happy-number 4))
(println (is-happy-number 89))
(println (is-happy-number 20))

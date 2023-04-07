# 2D_Matriste_Veri_Arama
Bu proje iki boyutlu bir matriste istenilen değerin koordinatlarını veren bir C kodudur.

Matristeki kullanıcını belirlediği değer elemanlarını sıralayabilmek için "bubblesort(kabarcık sıralama)"
fonksiyonu oluşturulur. Bu fonksiyon, dizide bulunan elemanları ikili çiftler halinde karşılaştırma sonucunda
yer değişikliği yaparak küçükten büyüğe olmak koşuluyla sıralar. main fonksiyonunda ise biri tek diğeri iki
boyutlu olmak üzere iki dizi oluşturulur. Tek boyutlu diziinin amacı, kullanıcının girdiği değer elemanlarını
iki boyutlu diziye aktarmadan önce daha basit şekilde sıralamaktır. Kullanıcıdan matriste kullanmak istediği
eleman sayısı istenir ve "n" değişkenine atanır. Dizinin eleman sayısı kontrol edilerek devam edilir.
Kullanıcıdan matrise eklemek istediği eleman sayısı kadar eleman değerleri istenir ve teker teker tek boyutlu
diziye ilk indisten başlanarak yazdırılır. "bubblesort" fonksiyonu çağırılarak tek boyutlu dizinin içindeki
elemanlar küçükten büyüğe doğru sıralanır. Sıralanmış tek boyutu dizinin elemanları iki boyutlu dizinin içine
sırasıyla yerleştirilir. Kullanıcıdan oluşturduğu matriste koordinatlarını öğrenmek istediği değer istenir 
ve "hedef" değişkenine bu değer atanır. İlk önce matris ekrana yazdırılır. Sonrasında for döngüsü kullanılarak
bu matrisin içinde "hedef" değişkeninin içindeki değer tek tek aranır. Arama sonucunda sonuç ekrana yazdırılır.

Bu matris maksimum 5x5 büyüklüğündedir. Bu yüzden eleman sayısını (0,26) değer aralığı arasında bir tamsayı değeri
girmelisiniz. Kodu herhangi bir C derleyicisinde çalıştırabilir, ekrana çıkan yönergeler doğrultusunda deneyebilirsiniz.

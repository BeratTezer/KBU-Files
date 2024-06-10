<?php
use App\Models\Message;
use App\Http\Controllers\ControlManager;
use Illuminate\Support\Facades\Auth;
use Illuminate\Support\Facades\Route;
Route::get('/', function () {
    return view('home');
});
Route::middleware('auth')->group(function () {
    Route::get('/admin/panel', function () {
        return view('admin_panel');
    })->name('admin_panel');

    Route::get('/User/panel', function () {
        $userId = 1;
        $messages = Message::where(function ($query) use ($userId) {
            $query->where('sender_id', Auth::id())->where('receiver_id', $userId);
        })->orWhere(function ($query) use ($userId) {
            $query->where('sender_id', $userId)->where('receiver_id', Auth::id());
        })->orderBy('created_at', 'asc')->get();

        return view('kullanici_panel', compact('messages'));
    })->name('user_panel');
});
Route::get('/home', [ControlManager::class, 'home'])->name('home');
Route::get('/login', [ControlManager::class, 'login'])->name('login');
Route::post('/login', [ControlManager::class, 'loginPost'])->name('login.post');
Route::get('/registration', [ControlManager::class, 'registration'])->name('registration');
Route::post('/registration', [ControlManager::class, 'registrationPost'])->name('registration.post');
Route::get('/forgot_my_password', [ControlManager::class, 'forgot_my_password'])->name('forgot_my_password');
Route::post('/forgot_my_password', [ControlManager::class, 'forgot_my_passwordPost'])->name('forgot_my_password.post');
Route::get('/logout', [ControlManager::class, 'logout'])->name('logout');
Route::get('/addUser', [ControlManager::class, 'addUser'])->name('addUser');
Route::post('/addUser', [ControlManager::class, 'addUserPost'])->name('addUser.post');
Route::get('/Userupdate', [ControlManager::class, 'updateUser'])->name('updateUser');
Route::post('/Userupdate', [ControlManager::class, 'updateUserPost'])->name('updateUser.post');
Route::get('/deleteUser', [ControlManager::class, 'deleteUser'])->name('deleteUser');
Route::post('/deleteUser', [ControlManager::class, 'deleteUserPost'])->name('deleteUser.post');
Route::get('/showallUsers', [ControlManager::class, 'showAllUsers'])->name('showAllUsers');
Route::get('/addRotation', [ControlManager::class, 'addRotation'])->name('addRotation');
Route::post('/addRotation', [ControlManager::class, 'addRotationPost'])->name('addRotation.post');
Route::get('/Rotationupdate', [ControlManager::class, 'updateRotation'])->name('updateRotation');
Route::post('/Rotationupdate', [ControlManager::class, 'updateRotationPost'])->name('updateRotation.post');
Route::get('/deleteRotation', [ControlManager::class, 'deleteRotation'])->name('deleteRotation');
Route::post('/deleteRotation', [ControlManager::class, 'deleteRotationPost'])->name('deleteRotation.post');
Route::get('/showallRotations', [ControlManager::class, 'showAllRotations'])->name('showAllRotations');
Route::get('/addannouncement', [ControlManager::class, 'addAnnouncement'])->name('addAnnouncement');
Route::post('/addannouncement', [ControlManager::class, 'addAnnouncementPost'])->name('addAnnouncement.post');
Route::get('/editlastannouncement', [ControlManager::class, 'editLastAnnouncement'])->name('editLastAnnouncement');
Route::post('/editlastannouncement', [ControlManager::class, 'editLastAnnouncementPost'])->name('editLastAnnouncement.post');
Route::get('/showallannouncements', [ControlManager::class, 'showAllAnnouncements'])->name('showAllAnnouncements');
Route::get('/messages', [ControlManager::class, 'messages'])->name('messages');
Route::post('/messages', [ControlManager::class, 'messagesPost'])->name('messages.post');
Route::get('/chat', [ControlManager::class, 'messageChat'])->name('messageChat');
Route::post('/chat', [ControlManager::class, 'messageChatPost'])->name('messageChat.post');
Route::post('/homechat', [ControlManager::class, 'messageChatHomePost'])->name('messageChatHome.post');
Route::get('/usermessages', [ControlManager::class, 'usermessages'])->name('usermessages');
Route::post('/usermessages', [ControlManager::class, 'usermessagesPost'])->name('usermessages.post');
Route::get('/userchat', [ControlManager::class, 'usermessageChat'])->name('usermessageChat');
Route::post('/userchat', [ControlManager::class, 'usermessageChatPost'])->name('usermessageChat.post');
Route::get('/usershowallannouncements', [ControlManager::class, 'usershowAllAnnouncements'])->name('usershowAllAnnouncements');

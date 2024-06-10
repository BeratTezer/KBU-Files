@extends('schemas.admin_panel_layout')

@section('title', 'Mesajlar')

@section('form')
    <div class="row d-flex justify-content-center">
        <div class="col-md-10">
              <div class="card card-primary">
                  <div>
                    <div class="card card-primary card-outline"style="background-color: #4d88df92 !important">
                      <div class="card-header" style="background-color: #4d88df92 !important">
                        <h3 class="card-title">Gelen Kutusu</h3>
                      </div>
                      <!-- /.card-header -->
                      <div class="card-body p-0">
                        <div class="table-responsive mailbox-messages" style="background-color: #4d88df92 !important">
                          <table class="table table-hover table-striped">
                            <tbody style="background-color: #4d88df92 !important">
                              @foreach ($conversations as $conversation)
                                <tr style="background-color: #4d88df92 !important">
                                  <td class="mailbox-name">Kimden: <a href="read-mail.html">{{$conversation->sender_email}}</a></td>
                                  <td class="mailbox-name"><a href="{{route('messageChat', ['sender_id' => $conversation->sender_id])}}">Sohbeti Aç</a></td>
                                  <td class="mailbox-subject">İçerik: {{ substr($conversation->last_message_content, 0, 50) }}...</td>
                                  <td class="mailbox-date">Son mesaj alım: {{$conversation->last_message_time}}</td>
                                </tr>
                              @endforeach
                            </tbody>
                          </table>
                          <!-- /.table -->
                        </div>
                        <!-- /.mail-box-messages -->
                      </div>
                      <!-- /.card-body -->
                      </div>
                    </div>
                    <!-- /.card -->
                  </div>
            </div>
        </div>
    </div>
@endsection

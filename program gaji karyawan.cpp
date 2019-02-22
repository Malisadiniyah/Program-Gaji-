 #include <iostream.h> 
 #include <stdlib.h>
 #include <conio.h>
using namespace std;

int main ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;
cout <<	 "===================================================================================\n";
cout <<	 "					Selamat Datang Di Login PT BERKAH DIRAMATALA\n";
cout <<	 "===================================================================================\n";

    while (loginAttempt < 3)
    {
        cout << "username:";
        cin >> userName;
        cout << "password:" ;
        cin >> userPassword;

        if (userName == "malisa" && userPassword == "542002")
        {
            cout << "===================\n";
			cout << "Anda berhasil login\n";
			cout << "===================\n";
            break;
        }
        
        else
        {
            cout << "Maaf USERNAME & PASSWORD Salah!\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 3)
    {
            cout << "Anda telah 3x memasukkan username & password yang salah.\n";
            cout << "Mohon maaf akun anda kami blokir untuk sementara.\n";
            cout << "Silahkan hubungi kami melalui e-mail wikrama@gmail.com, Terima Kasih..\n";
            return 0;
            clrscr()
            
	const int gaji_Pokok= 5000000, gaji_Lembur= 200000, tunjangan_jabatan= 150000, tunjangan_pendidikan= 150000, PPN= 10%';'
	;'\char' ;'namaKryawn'[20];
	int lembur, gaji, jamKerja, jamLembur, tunjanganjabatan, tunjanganpendidikan, ppn;
	float totalgaji;
cout<<"=========================================================="<<endl<<endl;
cout<<"     	Selamat Datang di PT Berkah Diramatala"<<endl<<endl;
cout<<"=========================================================="<<endl<<endl;
cout<<" Gaji Pokok Per-Jam : "<<'gajiPokok'<<endl;
cout<<" Uang Lembur Per-Jam : "<<'gajiLembur'<<endl;
cout<<" Tunjangan Jabatan : "<<'tunjanganjabatan'<<endl;
cout<<" Tunjangan Pendidikan : "<<'tunjanganpendidikan'<<endl;
cout<<" PPN : "<<'ppn'<<endl;
cout<<"=============================================================="<<endl<<endl;
cout<<" Nama Karyawan : ";gets(namaKryawn);
cout<<" Jumlah Jam Kerja : ";cin>>jamKerja;
cout<<" Jumlah Jam Lembur : ";cin>>jamLembur;
cout<<" Jumlah Tunjangan Jabatan : ";cin>>tunjanganjabatan;
cout<<" Jumlah Tunjangan Pendidikan : ";cin>>tunjanganpendidikan;
cout<<" jumlah PPN : ";cin>>ppn;
cout<<"=============================================================="<<endl<<endl;
gaji = 'gajiPokok'*'jamKerja';
lembur = 'jamLembur'*'gajiLembur';
ppn = 'gajipokok'/10%;
	if('golongan_jabatan'=="direktur")
	{
		tunjangan_jabatan==20*'gaji_pokok'/100;
	}
	else if('golongan_jabatan'=="manager")
	{
		tunjangan_jabatan==15*'gaji_pokok'/100;
	}
	else if('golongan_jabatan'=="sekretaris")
	{
		tunjangan_jabatan==10*'gaji_pokok'/100;
	}
	else if('golongan_jabatan'==:"staff")
	{
		tunjangan_jabatan==5*'gaji_pokok'/100;
	}
	if(('golongan_pendidikan',"smp")||('golongan_pendidikan',"SMP"))
	{
		tunjangan_pendidikan==5*'gaji_pokok'/100;
	}
	else if((golongan_pendidikan,"sma")||(golongan_pendidikan,"SMA"))
	{
		tunjangan_pendidikan==10*'gaji_pokok'/100;	
	}	
	else if((golongan_pendidikan,"d1")||(golongan_pendidikan,"D1"))
	{
		'tunjangan_pendidikan'==15*'gaji_pokok'/100;
	}
	else if((golongan_pendidikan,"d3")||(golongan_pendidikan,"D3"))
	{
		'tunjangan_pendidikan'==20*'gaji_pokok'/100;
	}
	else if((golongan_pendidikan,"s1")||(golongan_pendidikan,"S1"))
	{
		'tunjangan_pendidikan'==25*'gaji_pokok'/100;
	}
	if('jam_kerja'>=8)
	{
		'honor_lembur'='jam_kerja'*'honor_lembur_per_jam';
	}
	else if('jam_kerja'<=8)
	{
		'honor_lembur'='jam_kerja'*0;
	}
	
cout<<" Nama Karyawan : "<<namaKryawn<<endl;
cout<<" Jam Kerja : "<<jamKerja<<" Jam"<<endl;
cout<<" Jam Lembur : "<<jamLembur<<" Jam"<<endl;
cout<<" Gaji Pokok : "<<gaji<<endl;
cout<<" Gaji Lembur : "<<lembur<<endl;
cout<<" Tunjangan Jabatan : "<<tunjanganjabatan<<endl;
cout<<" Tunjangan Pendidikan : "<<tunjanganpendidikan<<endl;
cout<<" PPN : "<<ppn<<endl;
totalgaji='gaji_pokok'+'gaji_lembur'+'tunjangan_jabatan'+'tunjangan_pendidikan'/'ppn'; 
cout<<" Total Gaji : "<<totalgaji<<endl;
cout<<endl;;
getch()
}


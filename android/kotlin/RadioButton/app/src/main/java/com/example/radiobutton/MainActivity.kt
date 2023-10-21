package com.example.radiobutton

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.RadioButton
import android.widget.RadioGroup
import android.widget.Toast

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        var btn1: Button = findViewById(R.id.btn1)
        var rg1: RadioGroup = findViewById(R.id.rg1)

        btn1.setOnClickListener {
            var id:Int = rg1.checkedRadioButtonId
            if(id!=-1) {
                var selectedRadio: RadioButton = findViewById(id)
                Toast.makeText(this, "${selectedRadio.text} was selected", Toast.LENGTH_SHORT).show()
            }
            else{
                Toast.makeText(this, "Nothing was selected", Toast.LENGTH_SHORT).show()
            }
        }
    }
}
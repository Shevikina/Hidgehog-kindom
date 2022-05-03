package com.android.hedgehogkindom

import android.content.Intent
import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageButton

class MainActivity : AppCompatActivity() {
    private lateinit var hardLvlButton: ImageButton
    private lateinit var mediumLvlButton: ImageButton
    private lateinit var easyLvlButton: ImageButton
    private lateinit var information: ImageButton
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        hardLvlButton=findViewById(R.id.hard_lvl)
        mediumLvlButton=findViewById(R.id.medium_lvl)
        easyLvlButton=findViewById(R.id.easy_lvl)
        information=findViewById(R.id.information)
        hardLvlButton.setOnClickListener() {
            val hardIntent=Intent(this@MainActivity,HardActivity::class.java)
            startActivity(hardIntent)
        }
        mediumLvlButton.setOnClickListener(){
            val mediumIntent=Intent(this@MainActivity,MediumActivity::class.java)
            startActivity(mediumIntent)
        }
        easyLvlButton.setOnClickListener(){
            val easyIntent=Intent(this@MainActivity,EasyActivity::class.java)
            startActivity(easyIntent)
        }
       information.setOnClickListener(){
            val informIntent=Intent(this@MainActivity,InformationDialog::class.java)
            startActivity(informIntent)
        }
    }
}
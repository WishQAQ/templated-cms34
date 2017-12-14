<li class="{dede:field.currentstyle/}"><a href="{dede:field name='typeurl'/}" ><img src="/templets/default/picture/{dede:field name='id'/}.png" width="46" height="46">{dede:field name='typename'/}</a>
          <ul>
          {dede:sql sql='Select * from `dede_arctype` where reid=~id~ ORDER BY id'}
            <li><a href="[field:typelink/]" >[field:typename/]</a></li>
          {/dede:sql}
          </ul>
        </li>
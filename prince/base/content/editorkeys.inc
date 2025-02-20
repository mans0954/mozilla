<keyset id="msiEditorKeys">
  <key id="msiAltRedoKey" key="y" command="cmd_MSIredo" modifiers="accel" />
  <key id="msiArrowDownKey" keycode="VK_DOWN" command="cmd_lineNext"/>
  <key id="msiArrowNextKey" keycode="VK_RIGHT" command="cmd_charNext"/>
  <key id="msiArrowPrevKey" keycode="VK_LEFT" command="cmd_charPrevious"/>
  <key id="msiArrowUpKey" keycode="VK_UP" command="cmd_linePrevious"/>
  <key id="msiBoldKey" modifiers="accel" key="b" oncommand="msiDoStatefulCommand('cmd_texttag','bold');"/>
  <key id="msiCloseFileKey" modifiers="accel" key="w" observes="cmd_close"/>
  <key id="msiCloseFileKeyWin" modifiers="accel" keycode="VK_F4" observes="cmd_close"/>
  <key id="msiCopyKey" key="c" command="cmd_MSIcopy" modifiers="accel"/>
  <key id="msiCutKey" key="x" command="cmd_MSIcut" modifiers="accel"/>
  <key id="msiDeleteKey" keycode="VK_DELETE" command="cmd_MSIdelete" modifiers="accel"/>
  <key id="msiDirectPrintKey" key="p" oncommand="msiGoDoCommand('cmd_printDirect');" modifiers="accel"/>
  <key id="msiFindKey" key="f" command="cmd_find" modifiers="accel"/>
  <key id="msiFindNextKey" keycode="VK_F3" keytext="F3" command="cmd_findNext" />
  <key id="msiFindPrevKey" keycode="VK_F3" command="cmd_findPrev" modifiers="shift"/>
<!--   <key id="msiGreekKeyboardKey" key="g" modifiers="accel"   command="cmd_oneshotGreek"/> -->
<!--   <key id="msiMacHelp" key="?" modifiers="accel,shift" command="cmd_showhelp"/>
 -->
  <key id="msiNewFileKey" key="n" modifiers="accel" oncommand="openNewDocument();"/>
  <key id="msiOpenFileKey" key="o" modifiers="accel" oncommand = "openDocument();" />
  <key id="msiPasteKey" key="v" command="cmd_MSIpaste" modifiers="accel"/>
  <key id="msiPasteKeyNoFormatting" key="v" command="cmd_pasteNoFormatting" modifiers="accel,shift"/>
  <key id="msiRedoKey" key="z" command="cmd_MSIredo" modifiers="accel,shift" />
  <key id="msiSaveAsKey" key="s" command="cmd_saveAs" modifiers="accel,shift" />
  <key id="msiSaveKey" key="s" command="cmd_save" modifiers="accel" />
  <key id="msiSelectAllKey" modifiers="accel" key="a" command="cmd_selectAll"/>
  <key id="msiSelectDownKey" keycode="VK_DOWN" command="cmd_selectLineNext" modifiers="shift"/>
  <key id="msiSelectMacroKey" key=" " modifiers="control,accel" command="cmd_macrofragment"/>
  <key id="msiSelectNextKey" keycode="VK_RIGHT" command="cmd_selectCharNext" modifiers="shift"/>
  <key id="msiSelectPrevKey" keycode="VK_LEFT" command="cmd_selectCharPrevious" modifiers="shift"/>
  <key id="msiSelectUpKey" keycode="VK_UP" command="cmd_selectLinePrevious" modifiers="shift"/>
<!--   <key id="msiSymbolKeyboardKey" key="k" modifiers="accel"   command="cmd_oneshotSymbol"/> -->
  <key id="msiTypesetPrintKey" key="p" oncommand="msiGoDoCommand('cmd_printPdf');" modifiers="accel,shift"/>
  <key id="msiUnderlineKey" modifiers="accel" key="u" oncommand="msiDoStatefulCommand('cmd_texttag','underline');"/>
  <key id="msiUndoKey" key="z" command="cmd_MSIundo" modifiers="accel"/>
  <key id="msiZoomInKey" key="+" command="cmd_zoomin" modifiers="accel,shift"/>
  <key id="msiZoomOutKey" key="-" command="cmd_zoomout" modifiers="accel"/>
  <key id="msiZoomReset" key="0" command="cmd_zoomreset" modifiers="accel"/>
   <!-- Space key section -->
  <key id="msiRequiredSpaceKey" modifiers="shift" key=" " oncommand="msiInsertHorizontalSpace('requiredSpace',{}, null);"/>
  <key id="msiNonBreakingSpaceKey" modifiers="accel,shift" key=" " oncommand="msiInsertHorizontalSpace('nonBreakingSpace',{}, null);"/>
  <key id="msiThinSpaceKey" modifiers="accel" key="," oncommand="msiInsertHorizontalSpace('thinSpace',{}, null);"/>
  <key id="msiMediumSpaceKey" modifiers="accel,shift" key=";" oncommand="msiInsertHorizontalSpace('medSpace',{}, null);"/>
  <key id="msiThickSpaceKey" modifiers="accel" key=";" oncommand="msiInsertHorizontalSpace('thickSpace',{}, null);"/>
<!--   <key id="msiEmSpaceKey" modifiers="accel" key="," oncommand="msiInsertHorizontalSpace('emSpace',{}, null);"/>
  <key id="msiTwoEmSpaceKey" modifiers="accel" key="," oncommand="msiInsertHorizontalSpace('twoEmSpace',{}, null);"/>

  <key id="msiItalicCorrectionSpaceKey" modifiers="accel" key="," oncommand="msiInsertHorizontalSpace('italicCorrectionSpace',{}, null);"/>
  <key id="msiNegativeThinSpaceKey" modifiers="accel" key="," oncommand="msiInsertHorizontalSpace('negativeThinSpace',{}, null);"/>
  <key id="msiZeroSpaceKey" modifiers="accel" key="," oncommand="msiInsertHorizontalSpace('zeroSpace',{}, null);"/>
  <key id="msiNoIndentKey" modifiers="accel" key="," oncommand="msiInsertHorizontalSpace('noIndent',{}, null);"/> -->

</keyset>


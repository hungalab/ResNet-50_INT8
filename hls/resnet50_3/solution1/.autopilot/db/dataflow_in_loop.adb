<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
  <syndb class_id="0" tracking_level="0" version="0">
    <userIPLatency>-1</userIPLatency>
    <userIPName/>
    <cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
      <name>dataflow_in_loop</name>
      <ret_bitwidth>0</ret_bitwidth>
      <ports class_id="2" tracking_level="0" version="0">
        <count>6</count>
        <item_version>0</item_version>
        <item class_id="3" tracking_level="1" version="0" object_id="_1">
          <Value class_id="4" tracking_level="0" version="0">
            <Obj class_id="5" tracking_level="0" version="0">
              <type>1</type>
              <id>1</id>
              <name>ddr_V</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo class_id="6" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>128</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>4</if_type>
          <array_size>0</array_size>
          <bit_vecs class_id="7" tracking_level="0" version="0">
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
        <item class_id_reference="3" object_id="_2">
          <Value>
            <Obj>
              <type>1</type>
              <id>2</id>
              <name>och_0</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>10</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>0</if_type>
          <array_size>0</array_size>
          <bit_vecs>
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
        <item class_id_reference="3" object_id="_3">
          <Value>
            <Obj>
              <type>1</type>
              <id>3</id>
              <name>input_V</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName>RAM_2P_BRAM</coreName>
            </Obj>
            <bitwidth>1024</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>1</if_type>
          <array_size>16</array_size>
          <bit_vecs>
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
        <item class_id_reference="3" object_id="_4">
          <Value>
            <Obj>
              <type>1</type>
              <id>4</id>
              <name>bias</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName>RAM_2P_URAM</coreName>
            </Obj>
            <bitwidth>32</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>1</if_type>
          <array_size>1000</array_size>
          <bit_vecs>
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
        <item class_id_reference="3" object_id="_5">
          <Value>
            <Obj>
              <type>1</type>
              <id>5</id>
              <name>scale</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName>RAM_2P_URAM</coreName>
            </Obj>
            <bitwidth>32</bitwidth>
          </Value>
          <direction>0</direction>
          <if_type>1</if_type>
          <array_size>1000</array_size>
          <bit_vecs>
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
        <item class_id_reference="3" object_id="_6">
          <Value>
            <Obj>
              <type>1</type>
              <id>6</id>
              <name>output_r</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName>RAM_1P</coreName>
            </Obj>
            <bitwidth>32</bitwidth>
          </Value>
          <direction>1</direction>
          <if_type>1</if_type>
          <array_size>1000</array_size>
          <bit_vecs>
            <count>0</count>
            <item_version>0</item_version>
          </bit_vecs>
        </item>
      </ports>
      <nodes class_id="8" tracking_level="0" version="0">
        <count>6</count>
        <item_version>0</item_version>
        <item class_id="9" tracking_level="1" version="0" object_id="_7">
          <Value>
            <Obj>
              <type>0</type>
              <id>17</id>
              <name>och_0_read</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>10</bitwidth>
          </Value>
          <oprand_edges>
            <count>2</count>
            <item_version>0</item_version>
            <item>28</item>
            <item>29</item>
          </oprand_edges>
          <opcode>read</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>1</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_8">
          <Value>
            <Obj>
              <type>0</type>
              <id>18</id>
              <name>och_0_c</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName>och_0_c_U</rtlName>
              <coreName>FIFO</coreName>
            </Obj>
            <bitwidth>10</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>31</item>
          </oprand_edges>
          <opcode>alloca</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>2</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_9">
          <Value>
            <Obj>
              <type>0</type>
              <id>20</id>
              <name>weight_V</name>
              <fileName>resnet50_3.cpp</fileName>
              <fileDirectory>..</fileDirectory>
              <lineNumber>337</lineNumber>
              <contextFuncName>fc</contextFuncName>
              <inlineStackInfo>
                <count>1</count>
                <item_version>0</item_version>
                <item class_id="11" tracking_level="0" version="0">
                  <first>/home/asap_jupiter/yasu/workspace1/resnet50/hls</first>
                  <second class_id="12" tracking_level="0" version="0">
                    <count>1</count>
                    <item_version>0</item_version>
                    <item class_id="13" tracking_level="0" version="0">
                      <first class_id="14" tracking_level="0" version="0">
                        <first>resnet50_3.cpp</first>
                        <second>fc</second>
                      </first>
                      <second>337</second>
                    </item>
                  </second>
                </item>
              </inlineStackInfo>
              <originalName>weight.V</originalName>
              <rtlName>weight_V_U</rtlName>
              <coreName>RAM</coreName>
            </Obj>
            <bitwidth>1024</bitwidth>
          </Value>
          <oprand_edges>
            <count>1</count>
            <item_version>0</item_version>
            <item>32</item>
          </oprand_edges>
          <opcode>alloca</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>3</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_10">
          <Value>
            <Obj>
              <type>0</type>
              <id>23</id>
              <name>_ln0</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName>fc_load_weight_U0</rtlName>
              <coreName/>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>5</count>
            <item_version>0</item_version>
            <item>34</item>
            <item>35</item>
            <item>36</item>
            <item>37</item>
            <item>38</item>
          </oprand_edges>
          <opcode>call</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>1.83</m_delay>
          <m_topoIndex>4</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_11">
          <Value>
            <Obj>
              <type>0</type>
              <id>24</id>
              <name>_ln0</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName>fc_compute_1_U0</rtlName>
              <coreName/>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>10</count>
            <item_version>0</item_version>
            <item>40</item>
            <item>41</item>
            <item>42</item>
            <item>43</item>
            <item>44</item>
            <item>45</item>
            <item>46</item>
            <item>167</item>
            <item>168</item>
            <item>169</item>
          </oprand_edges>
          <opcode>call</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>5</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
        <item class_id_reference="9" object_id="_12">
          <Value>
            <Obj>
              <type>0</type>
              <id>25</id>
              <name>_ln0</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <oprand_edges>
            <count>0</count>
            <item_version>0</item_version>
          </oprand_edges>
          <opcode>ret</opcode>
          <m_Display>0</m_Display>
          <m_isOnCriticalPath>0</m_isOnCriticalPath>
          <m_isLCDNode>0</m_isLCDNode>
          <m_isStartOfPath>0</m_isStartOfPath>
          <m_delay>0.00</m_delay>
          <m_topoIndex>6</m_topoIndex>
          <m_clusterGroupNumber>-1</m_clusterGroupNumber>
        </item>
      </nodes>
      <consts class_id="15" tracking_level="0" version="0">
        <count>3</count>
        <item_version>0</item_version>
        <item class_id="16" tracking_level="1" version="0" object_id="_13">
          <Value>
            <Obj>
              <type>2</type>
              <id>30</id>
              <name>empty</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>64</bitwidth>
          </Value>
          <const_type>0</const_type>
          <content>1</content>
        </item>
        <item class_id_reference="16" object_id="_14">
          <Value>
            <Obj>
              <type>2</type>
              <id>33</id>
              <name>fc_load_weight</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <const_type>6</const_type>
          <content>&lt;constant:fc_load_weight&gt;</content>
        </item>
        <item class_id_reference="16" object_id="_15">
          <Value>
            <Obj>
              <type>2</type>
              <id>39</id>
              <name>fc_compute_1</name>
              <fileName/>
              <fileDirectory/>
              <lineNumber>0</lineNumber>
              <contextFuncName/>
              <inlineStackInfo>
                <count>0</count>
                <item_version>0</item_version>
              </inlineStackInfo>
              <originalName/>
              <rtlName/>
              <coreName/>
            </Obj>
            <bitwidth>0</bitwidth>
          </Value>
          <const_type>6</const_type>
          <content>&lt;constant:fc_compute.1&gt;</content>
        </item>
      </consts>
      <blocks class_id="17" tracking_level="0" version="0">
        <count>1</count>
        <item_version>0</item_version>
        <item class_id="18" tracking_level="1" version="0" object_id="_16">
          <Obj>
            <type>3</type>
            <id>26</id>
            <name>dataflow_in_loop</name>
            <fileName/>
            <fileDirectory/>
            <lineNumber>0</lineNumber>
            <contextFuncName/>
            <inlineStackInfo>
              <count>0</count>
              <item_version>0</item_version>
            </inlineStackInfo>
            <originalName/>
            <rtlName/>
            <coreName/>
          </Obj>
          <node_objs>
            <count>6</count>
            <item_version>0</item_version>
            <item>17</item>
            <item>18</item>
            <item>20</item>
            <item>23</item>
            <item>24</item>
            <item>25</item>
          </node_objs>
        </item>
      </blocks>
      <edges class_id="19" tracking_level="0" version="0">
        <count>18</count>
        <item_version>0</item_version>
        <item class_id="20" tracking_level="1" version="0" object_id="_17">
          <id>29</id>
          <edge_type>1</edge_type>
          <source_obj>2</source_obj>
          <sink_obj>17</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_18">
          <id>31</id>
          <edge_type>1</edge_type>
          <source_obj>30</source_obj>
          <sink_obj>18</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_19">
          <id>32</id>
          <edge_type>1</edge_type>
          <source_obj>30</source_obj>
          <sink_obj>20</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_20">
          <id>34</id>
          <edge_type>1</edge_type>
          <source_obj>33</source_obj>
          <sink_obj>23</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_21">
          <id>35</id>
          <edge_type>1</edge_type>
          <source_obj>20</source_obj>
          <sink_obj>23</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_22">
          <id>36</id>
          <edge_type>1</edge_type>
          <source_obj>1</source_obj>
          <sink_obj>23</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_23">
          <id>37</id>
          <edge_type>1</edge_type>
          <source_obj>17</source_obj>
          <sink_obj>23</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_24">
          <id>38</id>
          <edge_type>1</edge_type>
          <source_obj>18</source_obj>
          <sink_obj>23</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_25">
          <id>40</id>
          <edge_type>1</edge_type>
          <source_obj>39</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_26">
          <id>41</id>
          <edge_type>1</edge_type>
          <source_obj>20</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_27">
          <id>42</id>
          <edge_type>1</edge_type>
          <source_obj>3</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_28">
          <id>43</id>
          <edge_type>1</edge_type>
          <source_obj>4</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_29">
          <id>44</id>
          <edge_type>1</edge_type>
          <source_obj>5</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_30">
          <id>45</id>
          <edge_type>1</edge_type>
          <source_obj>6</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_31">
          <id>46</id>
          <edge_type>1</edge_type>
          <source_obj>18</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_32">
          <id>167</id>
          <edge_type>4</edge_type>
          <source_obj>23</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_33">
          <id>168</id>
          <edge_type>4</edge_type>
          <source_obj>23</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
        <item class_id_reference="20" object_id="_34">
          <id>169</id>
          <edge_type>4</edge_type>
          <source_obj>23</source_obj>
          <sink_obj>24</sink_obj>
          <is_back_edge>0</is_back_edge>
        </item>
      </edges>
    </cdfg>
    <cdfg_regions class_id="21" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="22" tracking_level="1" version="0" object_id="_35">
        <mId>1</mId>
        <mTag>dataflow_in_loop</mTag>
        <mType>0</mType>
        <sub_regions>
          <count>0</count>
          <item_version>0</item_version>
        </sub_regions>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>26</item>
        </basic_blocks>
        <mII>-1</mII>
        <mDepth>-1</mDepth>
        <mMinTripCount>-1</mMinTripCount>
        <mMaxTripCount>-1</mMaxTripCount>
        <mMinLatency>164</mMinLatency>
        <mMaxLatency>164</mMaxLatency>
        <mIsDfPipe>1</mIsDfPipe>
        <mDfPipe class_id="23" tracking_level="1" version="0" object_id="_36">
          <port_list class_id="24" tracking_level="0" version="0">
            <count>0</count>
            <item_version>0</item_version>
          </port_list>
          <process_list class_id="25" tracking_level="0" version="0">
            <count>2</count>
            <item_version>0</item_version>
            <item class_id="26" tracking_level="1" version="0" object_id="_37">
              <type>0</type>
              <name>fc_load_weight_U0</name>
              <ssdmobj_id>23</ssdmobj_id>
              <pins class_id="27" tracking_level="0" version="0">
                <count>4</count>
                <item_version>0</item_version>
                <item class_id="28" tracking_level="1" version="0" object_id="_38">
                  <port class_id="29" tracking_level="1" version="0" object_id="_39">
                    <name>weight_V</name>
                    <dir>2</dir>
                    <type>1</type>
                  </port>
                  <inst class_id="30" tracking_level="1" version="0" object_id="_40">
                    <type>0</type>
                    <name>fc_load_weight_U0</name>
                    <ssdmobj_id>23</ssdmobj_id>
                  </inst>
                </item>
                <item class_id_reference="28" object_id="_41">
                  <port class_id_reference="29" object_id="_42">
                    <name>ddr_V</name>
                    <dir>1</dir>
                    <type>0</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_40"/>
                </item>
                <item class_id_reference="28" object_id="_43">
                  <port class_id_reference="29" object_id="_44">
                    <name>och_0</name>
                    <dir>3</dir>
                    <type>0</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_40"/>
                </item>
                <item class_id_reference="28" object_id="_45">
                  <port class_id_reference="29" object_id="_46">
                    <name>och_0_out</name>
                    <dir>0</dir>
                    <type>1</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_40"/>
                </item>
              </pins>
            </item>
            <item class_id_reference="26" object_id="_47">
              <type>0</type>
              <name>fc_compute_1_U0</name>
              <ssdmobj_id>24</ssdmobj_id>
              <pins>
                <count>6</count>
                <item_version>0</item_version>
                <item class_id_reference="28" object_id="_48">
                  <port class_id_reference="29" object_id="_49">
                    <name>weight_V</name>
                    <dir>2</dir>
                    <type>0</type>
                  </port>
                  <inst class_id_reference="30" object_id="_50">
                    <type>0</type>
                    <name>fc_compute_1_U0</name>
                    <ssdmobj_id>24</ssdmobj_id>
                  </inst>
                </item>
                <item class_id_reference="28" object_id="_51">
                  <port class_id_reference="29" object_id="_52">
                    <name>input_V</name>
                    <dir>2</dir>
                    <type>0</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_50"/>
                </item>
                <item class_id_reference="28" object_id="_53">
                  <port class_id_reference="29" object_id="_54">
                    <name>bias</name>
                    <dir>2</dir>
                    <type>0</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_50"/>
                </item>
                <item class_id_reference="28" object_id="_55">
                  <port class_id_reference="29" object_id="_56">
                    <name>scale</name>
                    <dir>2</dir>
                    <type>0</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_50"/>
                </item>
                <item class_id_reference="28" object_id="_57">
                  <port class_id_reference="29" object_id="_58">
                    <name>output</name>
                    <dir>2</dir>
                    <type>1</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_50"/>
                </item>
                <item class_id_reference="28" object_id="_59">
                  <port class_id_reference="29" object_id="_60">
                    <name>och</name>
                    <dir>0</dir>
                    <type>0</type>
                  </port>
                  <inst class_id_reference="30" object_id_reference="_50"/>
                </item>
              </pins>
            </item>
          </process_list>
          <channel_list class_id="31" tracking_level="0" version="0">
            <count>2</count>
            <item_version>0</item_version>
            <item class_id="32" tracking_level="1" version="0" object_id="_61">
              <type>1</type>
              <name>weight_V</name>
              <ssdmobj_id>20</ssdmobj_id>
              <ctype>1</ctype>
              <depth>0</depth>
              <bitwidth>0</bitwidth>
              <source class_id_reference="28" object_id="_62">
                <port class_id_reference="29" object_id="_63">
                  <name>in</name>
                  <dir>3</dir>
                  <type>0</type>
                </port>
                <inst class_id_reference="30" object_id_reference="_40"/>
              </source>
              <sink class_id_reference="28" object_id="_64">
                <port class_id_reference="29" object_id="_65">
                  <name>out</name>
                  <dir>3</dir>
                  <type>1</type>
                </port>
                <inst class_id_reference="30" object_id_reference="_50"/>
              </sink>
            </item>
            <item class_id_reference="32" object_id="_66">
              <type>1</type>
              <name>och_0_c</name>
              <ssdmobj_id>18</ssdmobj_id>
              <ctype>0</ctype>
              <depth>2</depth>
              <bitwidth>10</bitwidth>
              <source class_id_reference="28" object_id="_67">
                <port class_id_reference="29" object_id="_68">
                  <name>in</name>
                  <dir>3</dir>
                  <type>0</type>
                </port>
                <inst class_id_reference="30" object_id_reference="_40"/>
              </source>
              <sink class_id_reference="28" object_id="_69">
                <port class_id_reference="29" object_id="_70">
                  <name>out</name>
                  <dir>3</dir>
                  <type>1</type>
                </port>
                <inst class_id_reference="30" object_id_reference="_50"/>
              </sink>
            </item>
          </channel_list>
          <net_list class_id="33" tracking_level="0" version="0">
            <count>0</count>
            <item_version>0</item_version>
          </net_list>
        </mDfPipe>
      </item>
    </cdfg_regions>
    <fsm class_id="34" tracking_level="1" version="0" object_id="_71">
      <states class_id="35" tracking_level="0" version="0">
        <count>4</count>
        <item_version>0</item_version>
        <item class_id="36" tracking_level="1" version="0" object_id="_72">
          <id>1</id>
          <operations class_id="37" tracking_level="0" version="0">
            <count>4</count>
            <item_version>0</item_version>
            <item class_id="38" tracking_level="1" version="0" object_id="_73">
              <id>17</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_74">
              <id>18</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_75">
              <id>20</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_76">
              <id>23</id>
              <stage>2</stage>
              <latency>2</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="36" object_id="_77">
          <id>2</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="38" object_id="_78">
              <id>23</id>
              <stage>1</stage>
              <latency>2</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="36" object_id="_79">
          <id>3</id>
          <operations>
            <count>1</count>
            <item_version>0</item_version>
            <item class_id_reference="38" object_id="_80">
              <id>24</id>
              <stage>2</stage>
              <latency>2</latency>
            </item>
          </operations>
        </item>
        <item class_id_reference="36" object_id="_81">
          <id>4</id>
          <operations>
            <count>15</count>
            <item_version>0</item_version>
            <item class_id_reference="38" object_id="_82">
              <id>7</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_83">
              <id>8</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_84">
              <id>9</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_85">
              <id>10</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_86">
              <id>11</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_87">
              <id>12</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_88">
              <id>13</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_89">
              <id>14</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_90">
              <id>15</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_91">
              <id>16</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_92">
              <id>19</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_93">
              <id>21</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_94">
              <id>22</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
            <item class_id_reference="38" object_id="_95">
              <id>24</id>
              <stage>1</stage>
              <latency>2</latency>
            </item>
            <item class_id_reference="38" object_id="_96">
              <id>25</id>
              <stage>1</stage>
              <latency>1</latency>
            </item>
          </operations>
        </item>
      </states>
      <transitions class_id="39" tracking_level="0" version="0">
        <count>3</count>
        <item_version>0</item_version>
        <item class_id="40" tracking_level="1" version="0" object_id="_97">
          <inState>1</inState>
          <outState>2</outState>
          <condition class_id="41" tracking_level="0" version="0">
            <id>-1</id>
            <sop class_id="42" tracking_level="0" version="0">
              <count>1</count>
              <item_version>0</item_version>
              <item class_id="43" tracking_level="0" version="0">
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="40" object_id="_98">
          <inState>2</inState>
          <outState>3</outState>
          <condition>
            <id>-1</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
        <item class_id_reference="40" object_id="_99">
          <inState>3</inState>
          <outState>4</outState>
          <condition>
            <id>-1</id>
            <sop>
              <count>1</count>
              <item_version>0</item_version>
              <item>
                <count>0</count>
                <item_version>0</item_version>
              </item>
            </sop>
          </condition>
        </item>
      </transitions>
    </fsm>
    <res class_id="44" tracking_level="1" version="0" object_id="_100">
      <dp_component_resource class_id="45" tracking_level="0" version="0">
        <count>2</count>
        <item_version>0</item_version>
        <item class_id="46" tracking_level="0" version="0">
          <first>fc_compute_1_U0 (fc_compute_1)</first>
          <second class_id="47" tracking_level="0" version="0">
            <count>3</count>
            <item_version>0</item_version>
            <item class_id="48" tracking_level="0" version="0">
              <first>DSP48E</first>
              <second>69</second>
            </item>
            <item>
              <first>FF</first>
              <second>729</second>
            </item>
            <item>
              <first>LUT</first>
              <second>5052</second>
            </item>
          </second>
        </item>
        <item>
          <first>fc_load_weight_U0 (fc_load_weight)</first>
          <second>
            <count>2</count>
            <item_version>0</item_version>
            <item>
              <first>FF</first>
              <second>1175</second>
            </item>
            <item>
              <first>LUT</first>
              <second>856</second>
            </item>
          </second>
        </item>
      </dp_component_resource>
      <dp_expression_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>ap_idle ( and ) </first>
          <second>
            <count>4</count>
            <item_version>0</item_version>
            <item>
              <first>(0P0)</first>
              <second>1</second>
            </item>
            <item>
              <first>(1P1)</first>
              <second>1</second>
            </item>
            <item>
              <first>FF</first>
              <second>0</second>
            </item>
            <item>
              <first>LUT</first>
              <second>2</second>
            </item>
          </second>
        </item>
      </dp_expression_resource>
      <dp_fifo_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>och_0_c_U</first>
          <second>
            <count>6</count>
            <item_version>0</item_version>
            <item>
              <first>(0Depth)</first>
              <second>2</second>
            </item>
            <item>
              <first>(1Bits)</first>
              <second>10</second>
            </item>
            <item>
              <first>(2Size:D*B)</first>
              <second>20</second>
            </item>
            <item>
              <first>BRAM</first>
              <second>0</second>
            </item>
            <item>
              <first>FF</first>
              <second>5</second>
            </item>
            <item>
              <first>LUT</first>
              <second>22</second>
            </item>
          </second>
        </item>
      </dp_fifo_resource>
      <dp_memory_resource>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>weight_V_U</first>
          <second>
            <count>8</count>
            <item_version>0</item_version>
            <item>
              <first>(0Words)</first>
              <second>16</second>
            </item>
            <item>
              <first>(1Bits)</first>
              <second>1024</second>
            </item>
            <item>
              <first>(2Banks)</first>
              <second>2</second>
            </item>
            <item>
              <first>(3W*Bits*Banks)</first>
              <second>32768</second>
            </item>
            <item>
              <first>BRAM</first>
              <second>29</second>
            </item>
            <item>
              <first>FF</first>
              <second>0</second>
            </item>
            <item>
              <first>LUT</first>
              <second>0</second>
            </item>
            <item>
              <first>URAM</first>
              <second>0</second>
            </item>
          </second>
        </item>
      </dp_memory_resource>
      <dp_multiplexer_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_multiplexer_resource>
      <dp_register_resource>
        <count>0</count>
        <item_version>0</item_version>
      </dp_register_resource>
      <dp_dsp_resource>
        <count>2</count>
        <item_version>0</item_version>
        <item>
          <first>fc_compute_1_U0</first>
          <second>
            <count>0</count>
            <item_version>0</item_version>
          </second>
        </item>
        <item>
          <first>fc_load_weight_U0</first>
          <second>
            <count>0</count>
            <item_version>0</item_version>
          </second>
        </item>
      </dp_dsp_resource>
      <dp_component_map class_id="49" tracking_level="0" version="0">
        <count>2</count>
        <item_version>0</item_version>
        <item class_id="50" tracking_level="0" version="0">
          <first>fc_compute_1_U0 (fc_compute_1)</first>
          <second>
            <count>1</count>
            <item_version>0</item_version>
            <item>24</item>
          </second>
        </item>
        <item>
          <first>fc_load_weight_U0 (fc_load_weight)</first>
          <second>
            <count>1</count>
            <item_version>0</item_version>
            <item>23</item>
          </second>
        </item>
      </dp_component_map>
      <dp_expression_map>
        <count>0</count>
        <item_version>0</item_version>
      </dp_expression_map>
      <dp_fifo_map>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>och_0_c_U</first>
          <second>
            <count>1</count>
            <item_version>0</item_version>
            <item>224</item>
          </second>
        </item>
      </dp_fifo_map>
      <dp_memory_map>
        <count>1</count>
        <item_version>0</item_version>
        <item>
          <first>weight_V_U</first>
          <second>
            <count>1</count>
            <item_version>0</item_version>
            <item>1</item>
          </second>
        </item>
      </dp_memory_map>
    </res>
    <node_label_latency class_id="51" tracking_level="0" version="0">
      <count>6</count>
      <item_version>0</item_version>
      <item class_id="52" tracking_level="0" version="0">
        <first>17</first>
        <second class_id="53" tracking_level="0" version="0">
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>18</first>
        <second>
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>20</first>
        <second>
          <first>0</first>
          <second>0</second>
        </second>
      </item>
      <item>
        <first>23</first>
        <second>
          <first>0</first>
          <second>1</second>
        </second>
      </item>
      <item>
        <first>24</first>
        <second>
          <first>2</first>
          <second>1</second>
        </second>
      </item>
      <item>
        <first>25</first>
        <second>
          <first>3</first>
          <second>0</second>
        </second>
      </item>
    </node_label_latency>
    <bblk_ent_exit class_id="54" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="55" tracking_level="0" version="0">
        <first>26</first>
        <second class_id="56" tracking_level="0" version="0">
          <first>0</first>
          <second>3</second>
        </second>
      </item>
    </bblk_ent_exit>
    <regions class_id="57" tracking_level="0" version="0">
      <count>1</count>
      <item_version>0</item_version>
      <item class_id="58" tracking_level="1" version="0" object_id="_101">
        <region_name>dataflow_in_loop</region_name>
        <basic_blocks>
          <count>1</count>
          <item_version>0</item_version>
          <item>26</item>
        </basic_blocks>
        <nodes>
          <count>19</count>
          <item_version>0</item_version>
          <item>7</item>
          <item>8</item>
          <item>9</item>
          <item>10</item>
          <item>11</item>
          <item>12</item>
          <item>13</item>
          <item>14</item>
          <item>15</item>
          <item>16</item>
          <item>17</item>
          <item>18</item>
          <item>19</item>
          <item>20</item>
          <item>21</item>
          <item>22</item>
          <item>23</item>
          <item>24</item>
          <item>25</item>
        </nodes>
        <anchor_node>-1</anchor_node>
        <region_type>16</region_type>
        <interval>0</interval>
        <pipe_depth>0</pipe_depth>
      </item>
    </regions>
    <dp_fu_nodes class_id="59" tracking_level="0" version="0">
      <count>5</count>
      <item_version>0</item_version>
      <item class_id="60" tracking_level="0" version="0">
        <first>58</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>18</item>
        </second>
      </item>
      <item>
        <first>62</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>20</item>
        </second>
      </item>
      <item>
        <first>66</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>17</item>
        </second>
      </item>
      <item>
        <first>72</first>
        <second>
          <count>2</count>
          <item_version>0</item_version>
          <item>24</item>
          <item>24</item>
        </second>
      </item>
      <item>
        <first>86</first>
        <second>
          <count>2</count>
          <item_version>0</item_version>
          <item>23</item>
          <item>23</item>
        </second>
      </item>
    </dp_fu_nodes>
    <dp_fu_nodes_expression class_id="62" tracking_level="0" version="0">
      <count>2</count>
      <item_version>0</item_version>
      <item class_id="63" tracking_level="0" version="0">
        <first>och_0_c_fu_58</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>18</item>
        </second>
      </item>
      <item>
        <first>weight_V_alloca_fu_62</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>20</item>
        </second>
      </item>
    </dp_fu_nodes_expression>
    <dp_fu_nodes_module>
      <count>2</count>
      <item_version>0</item_version>
      <item>
        <first>grp_fc_compute_1_fu_72</first>
        <second>
          <count>2</count>
          <item_version>0</item_version>
          <item>24</item>
          <item>24</item>
        </second>
      </item>
      <item>
        <first>grp_fc_load_weight_fu_86</first>
        <second>
          <count>2</count>
          <item_version>0</item_version>
          <item>23</item>
          <item>23</item>
        </second>
      </item>
    </dp_fu_nodes_module>
    <dp_fu_nodes_io>
      <count>1</count>
      <item_version>0</item_version>
      <item>
        <first>och_0_read_read_fu_66</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>17</item>
        </second>
      </item>
    </dp_fu_nodes_io>
    <return_ports>
      <count>0</count>
      <item_version>0</item_version>
    </return_ports>
    <dp_mem_port_nodes class_id="64" tracking_level="0" version="0">
      <count>0</count>
      <item_version>0</item_version>
    </dp_mem_port_nodes>
    <dp_reg_nodes>
      <count>2</count>
      <item_version>0</item_version>
      <item>
        <first>97</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>17</item>
        </second>
      </item>
      <item>
        <first>102</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>18</item>
        </second>
      </item>
    </dp_reg_nodes>
    <dp_regname_nodes>
      <count>2</count>
      <item_version>0</item_version>
      <item>
        <first>och_0_c_reg_102</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>18</item>
        </second>
      </item>
      <item>
        <first>och_0_read_reg_97</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>17</item>
        </second>
      </item>
    </dp_regname_nodes>
    <dp_reg_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_reg_phi>
    <dp_regname_phi>
      <count>0</count>
      <item_version>0</item_version>
    </dp_regname_phi>
    <dp_port_io_nodes class_id="65" tracking_level="0" version="0">
      <count>2</count>
      <item_version>0</item_version>
      <item class_id="66" tracking_level="0" version="0">
        <first>ddr_V</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>
            <first>call</first>
            <second>
              <count>1</count>
              <item_version>0</item_version>
              <item>23</item>
            </second>
          </item>
        </second>
      </item>
      <item>
        <first>och_0</first>
        <second>
          <count>1</count>
          <item_version>0</item_version>
          <item>
            <first>read</first>
            <second>
              <count>1</count>
              <item_version>0</item_version>
              <item>17</item>
            </second>
          </item>
        </second>
      </item>
    </dp_port_io_nodes>
    <port2core class_id="67" tracking_level="0" version="0">
      <count>4</count>
      <item_version>0</item_version>
      <item class_id="68" tracking_level="0" version="0">
        <first>3</first>
        <second>RAM_2P_BRAM</second>
      </item>
      <item>
        <first>4</first>
        <second>RAM_2P_URAM</second>
      </item>
      <item>
        <first>5</first>
        <second>RAM_2P_URAM</second>
      </item>
      <item>
        <first>6</first>
        <second>RAM_1P</second>
      </item>
    </port2core>
    <node2core>
      <count>2</count>
      <item_version>0</item_version>
      <item>
        <first>18</first>
        <second>FIFO</second>
      </item>
      <item>
        <first>20</first>
        <second>RAM</second>
      </item>
    </node2core>
  </syndb>
</boost_serialization>

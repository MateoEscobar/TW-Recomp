#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A0200
// Address: 0x4a0200 - 0x4a0428
void sub_004A0200_0x4a0200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0200_0x4a0200");
#endif

    switch (ctx->pc) {
        case 0x4a0200u: goto label_4a0200;
        case 0x4a0204u: goto label_4a0204;
        case 0x4a0208u: goto label_4a0208;
        case 0x4a020cu: goto label_4a020c;
        case 0x4a0210u: goto label_4a0210;
        case 0x4a0214u: goto label_4a0214;
        case 0x4a0218u: goto label_4a0218;
        case 0x4a021cu: goto label_4a021c;
        case 0x4a0220u: goto label_4a0220;
        case 0x4a0224u: goto label_4a0224;
        case 0x4a0228u: goto label_4a0228;
        case 0x4a022cu: goto label_4a022c;
        case 0x4a0230u: goto label_4a0230;
        case 0x4a0234u: goto label_4a0234;
        case 0x4a0238u: goto label_4a0238;
        case 0x4a023cu: goto label_4a023c;
        case 0x4a0240u: goto label_4a0240;
        case 0x4a0244u: goto label_4a0244;
        case 0x4a0248u: goto label_4a0248;
        case 0x4a024cu: goto label_4a024c;
        case 0x4a0250u: goto label_4a0250;
        case 0x4a0254u: goto label_4a0254;
        case 0x4a0258u: goto label_4a0258;
        case 0x4a025cu: goto label_4a025c;
        case 0x4a0260u: goto label_4a0260;
        case 0x4a0264u: goto label_4a0264;
        case 0x4a0268u: goto label_4a0268;
        case 0x4a026cu: goto label_4a026c;
        case 0x4a0270u: goto label_4a0270;
        case 0x4a0274u: goto label_4a0274;
        case 0x4a0278u: goto label_4a0278;
        case 0x4a027cu: goto label_4a027c;
        case 0x4a0280u: goto label_4a0280;
        case 0x4a0284u: goto label_4a0284;
        case 0x4a0288u: goto label_4a0288;
        case 0x4a028cu: goto label_4a028c;
        case 0x4a0290u: goto label_4a0290;
        case 0x4a0294u: goto label_4a0294;
        case 0x4a0298u: goto label_4a0298;
        case 0x4a029cu: goto label_4a029c;
        case 0x4a02a0u: goto label_4a02a0;
        case 0x4a02a4u: goto label_4a02a4;
        case 0x4a02a8u: goto label_4a02a8;
        case 0x4a02acu: goto label_4a02ac;
        case 0x4a02b0u: goto label_4a02b0;
        case 0x4a02b4u: goto label_4a02b4;
        case 0x4a02b8u: goto label_4a02b8;
        case 0x4a02bcu: goto label_4a02bc;
        case 0x4a02c0u: goto label_4a02c0;
        case 0x4a02c4u: goto label_4a02c4;
        case 0x4a02c8u: goto label_4a02c8;
        case 0x4a02ccu: goto label_4a02cc;
        case 0x4a02d0u: goto label_4a02d0;
        case 0x4a02d4u: goto label_4a02d4;
        case 0x4a02d8u: goto label_4a02d8;
        case 0x4a02dcu: goto label_4a02dc;
        case 0x4a02e0u: goto label_4a02e0;
        case 0x4a02e4u: goto label_4a02e4;
        case 0x4a02e8u: goto label_4a02e8;
        case 0x4a02ecu: goto label_4a02ec;
        case 0x4a02f0u: goto label_4a02f0;
        case 0x4a02f4u: goto label_4a02f4;
        case 0x4a02f8u: goto label_4a02f8;
        case 0x4a02fcu: goto label_4a02fc;
        case 0x4a0300u: goto label_4a0300;
        case 0x4a0304u: goto label_4a0304;
        case 0x4a0308u: goto label_4a0308;
        case 0x4a030cu: goto label_4a030c;
        case 0x4a0310u: goto label_4a0310;
        case 0x4a0314u: goto label_4a0314;
        case 0x4a0318u: goto label_4a0318;
        case 0x4a031cu: goto label_4a031c;
        case 0x4a0320u: goto label_4a0320;
        case 0x4a0324u: goto label_4a0324;
        case 0x4a0328u: goto label_4a0328;
        case 0x4a032cu: goto label_4a032c;
        case 0x4a0330u: goto label_4a0330;
        case 0x4a0334u: goto label_4a0334;
        case 0x4a0338u: goto label_4a0338;
        case 0x4a033cu: goto label_4a033c;
        case 0x4a0340u: goto label_4a0340;
        case 0x4a0344u: goto label_4a0344;
        case 0x4a0348u: goto label_4a0348;
        case 0x4a034cu: goto label_4a034c;
        case 0x4a0350u: goto label_4a0350;
        case 0x4a0354u: goto label_4a0354;
        case 0x4a0358u: goto label_4a0358;
        case 0x4a035cu: goto label_4a035c;
        case 0x4a0360u: goto label_4a0360;
        case 0x4a0364u: goto label_4a0364;
        case 0x4a0368u: goto label_4a0368;
        case 0x4a036cu: goto label_4a036c;
        case 0x4a0370u: goto label_4a0370;
        case 0x4a0374u: goto label_4a0374;
        case 0x4a0378u: goto label_4a0378;
        case 0x4a037cu: goto label_4a037c;
        case 0x4a0380u: goto label_4a0380;
        case 0x4a0384u: goto label_4a0384;
        case 0x4a0388u: goto label_4a0388;
        case 0x4a038cu: goto label_4a038c;
        case 0x4a0390u: goto label_4a0390;
        case 0x4a0394u: goto label_4a0394;
        case 0x4a0398u: goto label_4a0398;
        case 0x4a039cu: goto label_4a039c;
        case 0x4a03a0u: goto label_4a03a0;
        case 0x4a03a4u: goto label_4a03a4;
        case 0x4a03a8u: goto label_4a03a8;
        case 0x4a03acu: goto label_4a03ac;
        case 0x4a03b0u: goto label_4a03b0;
        case 0x4a03b4u: goto label_4a03b4;
        case 0x4a03b8u: goto label_4a03b8;
        case 0x4a03bcu: goto label_4a03bc;
        case 0x4a03c0u: goto label_4a03c0;
        case 0x4a03c4u: goto label_4a03c4;
        case 0x4a03c8u: goto label_4a03c8;
        case 0x4a03ccu: goto label_4a03cc;
        case 0x4a03d0u: goto label_4a03d0;
        case 0x4a03d4u: goto label_4a03d4;
        case 0x4a03d8u: goto label_4a03d8;
        case 0x4a03dcu: goto label_4a03dc;
        case 0x4a03e0u: goto label_4a03e0;
        case 0x4a03e4u: goto label_4a03e4;
        case 0x4a03e8u: goto label_4a03e8;
        case 0x4a03ecu: goto label_4a03ec;
        case 0x4a03f0u: goto label_4a03f0;
        case 0x4a03f4u: goto label_4a03f4;
        case 0x4a03f8u: goto label_4a03f8;
        case 0x4a03fcu: goto label_4a03fc;
        case 0x4a0400u: goto label_4a0400;
        case 0x4a0404u: goto label_4a0404;
        case 0x4a0408u: goto label_4a0408;
        case 0x4a040cu: goto label_4a040c;
        case 0x4a0410u: goto label_4a0410;
        case 0x4a0414u: goto label_4a0414;
        case 0x4a0418u: goto label_4a0418;
        case 0x4a041cu: goto label_4a041c;
        case 0x4a0420u: goto label_4a0420;
        case 0x4a0424u: goto label_4a0424;
        default: break;
    }

    ctx->pc = 0x4a0200u;

label_4a0200:
    // 0x4a0200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a0200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4a0204:
    // 0x4a0204: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a0208:
    // 0x4a0208: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a0208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_4a020c:
    // 0x4a020c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_4a0210:
    // 0x4a0210: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a0210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a0214:
    // 0x4a0214: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a0214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a0218:
    // 0x4a0218: 0x79042  srl         $s2, $a3, 1
    ctx->pc = 0x4a0218u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_4a021c:
    // 0x4a021c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_4a0220:
    // 0x4a0220: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a0220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0224:
    // 0x4a0224: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a0224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_4a0228:
    // 0x4a0228: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4a0228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a022c:
    // 0x4a022c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_4a0230:
    // 0x4a0230: 0x2455f7a0  addiu       $s5, $v0, -0x860
    ctx->pc = 0x4a0230u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965152));
label_4a0234:
    // 0x4a0234: 0x10000062  b           . + 4 + (0x62 << 2)
label_4a0238:
    if (ctx->pc == 0x4A0238u) {
        ctx->pc = 0x4A0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0234u;
        // 0x4a0238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A023Cu;
        goto label_4a023c;
    }
    ctx->pc = 0x4A0234u;
    {
        const bool branch_taken_0x4a0234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0234u;
        // 0x4a0238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0234) {
            ctx->pc = 0x4A03C0u;
            goto label_4a03c0;
        }
    }
    ctx->pc = 0x4A023Cu;
label_4a023c:
    // 0x4a023c: 0x0  nop
    ctx->pc = 0x4a023cu;
    // NOP
label_4a0240:
    // 0x4a0240: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4a0240u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4a0244:
    // 0x4a0244: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a0244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a0248:
    // 0x4a0248: 0x7aa80000  lq          $t0, 0x0($s5)
    ctx->pc = 0x4a0248u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_4a024c:
    // 0x4a024c: 0x244ff700  addiu       $t7, $v0, -0x900
    ctx->pc = 0x4a024cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964992));
label_4a0250:
    // 0x4a0250: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x4a0250u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4a0254:
    // 0x4a0254: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x4a0254u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a0258:
    // 0x4a0258: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x4a0258u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
label_4a025c:
    // 0x4a025c: 0x3c0c0400  lui         $t4, 0x400
    ctx->pc = 0x4a025cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1024 << 16));
label_4a0260:
    // 0x4a0260: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x4a0260u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
label_4a0264:
    // 0x4a0264: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x4a0264u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
label_4a0268:
    // 0x4a0268: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x4a0268u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
label_4a026c:
    // 0x4a026c: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x4a026cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
label_4a0270:
    // 0x4a0270: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a0270u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_4a0274:
    // 0x4a0274: 0x0  nop
    ctx->pc = 0x4a0274u;
    // NOP
label_4a0278:
    // 0x4a0278: 0x2e030011  sltiu       $v1, $s0, 0x11
    ctx->pc = 0x4a0278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4a027c:
    // 0x4a027c: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4a027cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_4a0280:
    // 0x4a0280: 0x203300b  movn        $a2, $s0, $v1
    ctx->pc = 0x4a0280u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_4a0284:
    // 0x4a0284: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x4a0284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4a0288:
    // 0x4a0288: 0xcc1825  or          $v1, $a2, $t4
    ctx->pc = 0x4a0288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_4a028c:
    // 0x4a028c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a0290:
    // 0x4a0290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a0290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a0294:
    // 0x4a0294: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4a0294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_4a0298:
    // 0x4a0298: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4a0298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_4a029c:
    // 0x4a029c: 0x64420002  daddiu      $v0, $v0, 0x2
    ctx->pc = 0x4a029cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2);
label_4a02a0:
    // 0x4a02a0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x4a02a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_4a02a4:
    // 0x4a02a4: 0x4d2025  or          $a0, $v0, $t5
    ctx->pc = 0x4a02a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
label_4a02a8:
    // 0x4a02a8: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x4a02a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4a02ac:
    // 0x4a02ac: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a02acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a02b0:
    // 0x4a02b0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a02b4:
    // 0x4a02b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a02b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a02b8:
    // 0x4a02b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a02bc:
    // 0x4a02bc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a02bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a02c0:
    // 0x4a02c0: 0x61cc0  sll         $v1, $a2, 19
    ctx->pc = 0x4a02c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
label_4a02c4:
    // 0x4a02c4: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4a02c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_4a02c8:
    // 0x4a02c8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x4a02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_4a02cc:
    // 0x4a02cc: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x4a02ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_4a02d0:
    // 0x4a02d0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a02d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a02d4:
    // 0x4a02d4: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x4a02d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_4a02d8:
    // 0x4a02d8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x4a02d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_4a02dc:
    // 0x4a02dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a02dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a02e0:
    // 0x4a02e0: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x4a02e0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_4a02e4:
    // 0x4a02e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a02e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a02e8:
    // 0x4a02e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a02e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a02ec:
    // 0x4a02ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a02ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a02f0:
    // 0x4a02f0: 0x10c9002b  beq         $a2, $t1, . + 4 + (0x2B << 2)
label_4a02f4:
    if (ctx->pc == 0x4A02F4u) {
        ctx->pc = 0x4A02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A02F0u;
        // 0x4a02f4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A02F8u;
        goto label_4a02f8;
    }
    ctx->pc = 0x4A02F0u;
    {
        const bool branch_taken_0x4a02f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        ctx->pc = 0x4A02F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A02F0u;
        // 0x4a02f4: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a02f0) {
            ctx->pc = 0x4A03A0u;
            goto label_4a03a0;
        }
    }
    ctx->pc = 0x4A02F8u;
label_4a02f8:
    // 0x4a02f8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a02f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4a02fc:
    // 0x4a02fc: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x4a02fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4a0300:
    // 0x4a0300: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a0300u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a0304:
    // 0x4a0304: 0x0  nop
    ctx->pc = 0x4a0304u;
    // NOP
label_4a0308:
    // 0x4a0308: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a030c:
    // 0x4a030c: 0x78a2ffc0  lq          $v0, -0x40($a1)
    ctx->pc = 0x4a030cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967232)));
label_4a0310:
    // 0x4a0310: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0310u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0314:
    // 0x4a0314: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a0314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0318:
    // 0x4a0318: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a031c:
    // 0x4a031c: 0x78a2ffd0  lq          $v0, -0x30($a1)
    ctx->pc = 0x4a031cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967248)));
label_4a0320:
    // 0x4a0320: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a0320u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0324:
    // 0x4a0324: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a0324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0328:
    // 0x4a0328: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a032c:
    // 0x4a032c: 0x78a2ffe0  lq          $v0, -0x20($a1)
    ctx->pc = 0x4a032cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967264)));
label_4a0330:
    // 0x4a0330: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a0330u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a0334:
    // 0x4a0334: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a0334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a0338:
    // 0x4a0338: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a033c:
    // 0x4a033c: 0x78a2fff0  lq          $v0, -0x10($a1)
    ctx->pc = 0x4a033cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_4a0340:
    // 0x4a0340: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a0340u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a0344:
    // 0x4a0344: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a0344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a0348:
    // 0x4a0348: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0348u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a034c:
    // 0x4a034c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a034cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a0350:
    // 0x4a0350: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a0350u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a0354:
    // 0x4a0354: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a0354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a0358:
    // 0x4a0358: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0358u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a035c:
    // 0x4a035c: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x4a035cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_4a0360:
    // 0x4a0360: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a0360u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a0364:
    // 0x4a0364: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a0364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a0368:
    // 0x4a0368: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a036c:
    // 0x4a036c: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x4a036cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_4a0370:
    // 0x4a0370: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a0370u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a0374:
    // 0x4a0374: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a0374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a0378:
    // 0x4a0378: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0378u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a037c:
    // 0x4a037c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x4a037cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_4a0380:
    // 0x4a0380: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a0380u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a0384:
    // 0x4a0384: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x4a0384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a0388:
    // 0x4a0388: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a0388u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a038c:
    // 0x4a038c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x4a038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
label_4a0390:
    // 0x4a0390: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a0390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a0394:
    // 0x4a0394: 0x14c7ffdc  bne         $a2, $a3, . + 4 + (-0x24 << 2)
label_4a0398:
    if (ctx->pc == 0x4A0398u) {
        ctx->pc = 0x4A0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0394u;
        // 0x4a0398: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A039Cu;
        goto label_4a039c;
    }
    ctx->pc = 0x4A0394u;
    {
        const bool branch_taken_0x4a0394 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x4A0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0394u;
        // 0x4a0398: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0394) {
            ctx->pc = 0x4A0308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0308;
        }
    }
    ctx->pc = 0x4A039Cu;
label_4a039c:
    // 0x4a039c: 0x0  nop
    ctx->pc = 0x4a039cu;
    // NOP
label_4a03a0:
    // 0x4a03a0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a03a4:
    // 0x4a03a4: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x4a03a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_4a03a8:
    // 0x4a03a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a03a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a03ac:
    // 0x4a03ac: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a03acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a03b0:
    // 0x4a03b0: 0x1600ffb1  bnez        $s0, . + 4 + (-0x4F << 2)
label_4a03b4:
    if (ctx->pc == 0x4A03B4u) {
        ctx->pc = 0x4A03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03B0u;
        // 0x4a03b4: 0x79e80000  lq          $t0, 0x0($t7) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A03B8u;
        goto label_4a03b8;
    }
    ctx->pc = 0x4A03B0u;
    {
        const bool branch_taken_0x4a03b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03B0u;
        // 0x4a03b4: 0x79e80000  lq          $t0, 0x0($t7) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a03b0) {
            ctx->pc = 0x4A0278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0278;
        }
    }
    ctx->pc = 0x4A03B8u;
label_4a03b8:
    // 0x4a03b8: 0xc127ec8  jal         func_49FB20
label_4a03bc:
    if (ctx->pc == 0x4A03BCu) {
        ctx->pc = 0x4A03C0u;
        goto label_4a03c0;
    }
    ctx->pc = 0x4A03B8u;
    SET_GPR_U32(ctx, 31, 0x4A03C0u);
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A03B8u, 0x4A03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A03C0u;
label_4a03c0:
    // 0x4a03c0: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_4a03c4:
    if (ctx->pc == 0x4A03C4u) {
        ctx->pc = 0x4A03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03C0u;
        // 0x4a03c4: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A03C8u;
        goto label_4a03c8;
    }
    ctx->pc = 0x4A03C0u;
    {
        const bool branch_taken_0x4a03c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03C0u;
        // 0x4a03c4: 0x8f908798  lw          $s0, -0x7868($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a03c0) {
            ctx->pc = 0x4A03F8u;
            goto label_4a03f8;
        }
    }
    ctx->pc = 0x4A03C8u;
label_4a03c8:
    // 0x4a03c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4a03c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a03cc:
    // 0x4a03cc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4a03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a03d0:
    // 0x4a03d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a03d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a03d4:
    // 0x4a03d4: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x4a03d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_4a03d8:
    // 0x4a03d8: 0x8e680004  lw          $t0, 0x4($s3)
    ctx->pc = 0x4a03d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a03dc:
    // 0x4a03dc: 0x243800a  movz        $s0, $s2, $v1
    ctx->pc = 0x4a03dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_4a03e0:
    // 0x4a03e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a03e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a03e4:
    // 0x4a03e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a03e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a03e8:
    // 0x4a03e8: 0x40f809  jalr        $v0
label_4a03ec:
    if (ctx->pc == 0x4A03ECu) {
        ctx->pc = 0x4A03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03E8u;
        // 0x4a03ec: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A03F0u;
        goto label_4a03f0;
    }
    ctx->pc = 0x4A03E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A03F0u);
        ctx->pc = 0x4A03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03E8u;
        // 0x4a03ec: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A03E8u, 0x4A03F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A03F0u;
label_4a03f0:
    // 0x4a03f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a03f4:
    if (ctx->pc == 0x4A03F4u) {
        ctx->pc = 0x4A03F8u;
        goto label_4a03f8;
    }
    ctx->pc = 0x4A03F0u;
    {
        const bool branch_taken_0x4a03f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a03f0) {
            ctx->pc = 0x4A03FCu;
            goto label_4a03fc;
        }
    }
    ctx->pc = 0x4A03F8u;
label_4a03f8:
    // 0x4a03f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a03f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a03fc:
    // 0x4a03fc: 0x1600ff90  bnez        $s0, . + 4 + (-0x70 << 2)
label_4a0400:
    if (ctx->pc == 0x4A0400u) {
        ctx->pc = 0x4A0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03FCu;
        // 0x4a0400: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0404u;
        goto label_4a0404;
    }
    ctx->pc = 0x4A03FCu;
    {
        const bool branch_taken_0x4a03fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A03FCu;
        // 0x4a0400: 0x3c0a7c00  lui         $t2, 0x7C00 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)31744 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a03fc) {
            ctx->pc = 0x4A0240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0240;
        }
    }
    ctx->pc = 0x4A0404u;
label_4a0404:
    // 0x4a0404: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a0404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a0408:
    // 0x4a0408: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a0408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a040c:
    // 0x4a040c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a040cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0410:
    // 0x4a0410: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a0410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0414:
    // 0x4a0414: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a0414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0418:
    // 0x4a0418: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a0418u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a041c:
    // 0x4a041c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a041cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0420:
    // 0x4a0420: 0x3e00008  jr          $ra
label_4a0424:
    if (ctx->pc == 0x4A0424u) {
        ctx->pc = 0x4A0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0420u;
        // 0x4a0424: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0428u;
        goto label_fallthrough_0x4a0420;
    }
    ctx->pc = 0x4A0420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0420u;
        // 0x4a0424: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a0420:
    ctx->pc = 0x4A0428u;
}

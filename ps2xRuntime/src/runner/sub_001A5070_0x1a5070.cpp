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

// Function: sub_001A5070
// Address: 0x1a5070 - 0x1a5358
void sub_001A5070_0x1a5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5070_0x1a5070");
#endif

    switch (ctx->pc) {
        case 0x1a5070u: goto label_1a5070;
        case 0x1a5074u: goto label_1a5074;
        case 0x1a5078u: goto label_1a5078;
        case 0x1a507cu: goto label_1a507c;
        case 0x1a5080u: goto label_1a5080;
        case 0x1a5084u: goto label_1a5084;
        case 0x1a5088u: goto label_1a5088;
        case 0x1a508cu: goto label_1a508c;
        case 0x1a5090u: goto label_1a5090;
        case 0x1a5094u: goto label_1a5094;
        case 0x1a5098u: goto label_1a5098;
        case 0x1a509cu: goto label_1a509c;
        case 0x1a50a0u: goto label_1a50a0;
        case 0x1a50a4u: goto label_1a50a4;
        case 0x1a50a8u: goto label_1a50a8;
        case 0x1a50acu: goto label_1a50ac;
        case 0x1a50b0u: goto label_1a50b0;
        case 0x1a50b4u: goto label_1a50b4;
        case 0x1a50b8u: goto label_1a50b8;
        case 0x1a50bcu: goto label_1a50bc;
        case 0x1a50c0u: goto label_1a50c0;
        case 0x1a50c4u: goto label_1a50c4;
        case 0x1a50c8u: goto label_1a50c8;
        case 0x1a50ccu: goto label_1a50cc;
        case 0x1a50d0u: goto label_1a50d0;
        case 0x1a50d4u: goto label_1a50d4;
        case 0x1a50d8u: goto label_1a50d8;
        case 0x1a50dcu: goto label_1a50dc;
        case 0x1a50e0u: goto label_1a50e0;
        case 0x1a50e4u: goto label_1a50e4;
        case 0x1a50e8u: goto label_1a50e8;
        case 0x1a50ecu: goto label_1a50ec;
        case 0x1a50f0u: goto label_1a50f0;
        case 0x1a50f4u: goto label_1a50f4;
        case 0x1a50f8u: goto label_1a50f8;
        case 0x1a50fcu: goto label_1a50fc;
        case 0x1a5100u: goto label_1a5100;
        case 0x1a5104u: goto label_1a5104;
        case 0x1a5108u: goto label_1a5108;
        case 0x1a510cu: goto label_1a510c;
        case 0x1a5110u: goto label_1a5110;
        case 0x1a5114u: goto label_1a5114;
        case 0x1a5118u: goto label_1a5118;
        case 0x1a511cu: goto label_1a511c;
        case 0x1a5120u: goto label_1a5120;
        case 0x1a5124u: goto label_1a5124;
        case 0x1a5128u: goto label_1a5128;
        case 0x1a512cu: goto label_1a512c;
        case 0x1a5130u: goto label_1a5130;
        case 0x1a5134u: goto label_1a5134;
        case 0x1a5138u: goto label_1a5138;
        case 0x1a513cu: goto label_1a513c;
        case 0x1a5140u: goto label_1a5140;
        case 0x1a5144u: goto label_1a5144;
        case 0x1a5148u: goto label_1a5148;
        case 0x1a514cu: goto label_1a514c;
        case 0x1a5150u: goto label_1a5150;
        case 0x1a5154u: goto label_1a5154;
        case 0x1a5158u: goto label_1a5158;
        case 0x1a515cu: goto label_1a515c;
        case 0x1a5160u: goto label_1a5160;
        case 0x1a5164u: goto label_1a5164;
        case 0x1a5168u: goto label_1a5168;
        case 0x1a516cu: goto label_1a516c;
        case 0x1a5170u: goto label_1a5170;
        case 0x1a5174u: goto label_1a5174;
        case 0x1a5178u: goto label_1a5178;
        case 0x1a517cu: goto label_1a517c;
        case 0x1a5180u: goto label_1a5180;
        case 0x1a5184u: goto label_1a5184;
        case 0x1a5188u: goto label_1a5188;
        case 0x1a518cu: goto label_1a518c;
        case 0x1a5190u: goto label_1a5190;
        case 0x1a5194u: goto label_1a5194;
        case 0x1a5198u: goto label_1a5198;
        case 0x1a519cu: goto label_1a519c;
        case 0x1a51a0u: goto label_1a51a0;
        case 0x1a51a4u: goto label_1a51a4;
        case 0x1a51a8u: goto label_1a51a8;
        case 0x1a51acu: goto label_1a51ac;
        case 0x1a51b0u: goto label_1a51b0;
        case 0x1a51b4u: goto label_1a51b4;
        case 0x1a51b8u: goto label_1a51b8;
        case 0x1a51bcu: goto label_1a51bc;
        case 0x1a51c0u: goto label_1a51c0;
        case 0x1a51c4u: goto label_1a51c4;
        case 0x1a51c8u: goto label_1a51c8;
        case 0x1a51ccu: goto label_1a51cc;
        case 0x1a51d0u: goto label_1a51d0;
        case 0x1a51d4u: goto label_1a51d4;
        case 0x1a51d8u: goto label_1a51d8;
        case 0x1a51dcu: goto label_1a51dc;
        case 0x1a51e0u: goto label_1a51e0;
        case 0x1a51e4u: goto label_1a51e4;
        case 0x1a51e8u: goto label_1a51e8;
        case 0x1a51ecu: goto label_1a51ec;
        case 0x1a51f0u: goto label_1a51f0;
        case 0x1a51f4u: goto label_1a51f4;
        case 0x1a51f8u: goto label_1a51f8;
        case 0x1a51fcu: goto label_1a51fc;
        case 0x1a5200u: goto label_1a5200;
        case 0x1a5204u: goto label_1a5204;
        case 0x1a5208u: goto label_1a5208;
        case 0x1a520cu: goto label_1a520c;
        case 0x1a5210u: goto label_1a5210;
        case 0x1a5214u: goto label_1a5214;
        case 0x1a5218u: goto label_1a5218;
        case 0x1a521cu: goto label_1a521c;
        case 0x1a5220u: goto label_1a5220;
        case 0x1a5224u: goto label_1a5224;
        case 0x1a5228u: goto label_1a5228;
        case 0x1a522cu: goto label_1a522c;
        case 0x1a5230u: goto label_1a5230;
        case 0x1a5234u: goto label_1a5234;
        case 0x1a5238u: goto label_1a5238;
        case 0x1a523cu: goto label_1a523c;
        case 0x1a5240u: goto label_1a5240;
        case 0x1a5244u: goto label_1a5244;
        case 0x1a5248u: goto label_1a5248;
        case 0x1a524cu: goto label_1a524c;
        case 0x1a5250u: goto label_1a5250;
        case 0x1a5254u: goto label_1a5254;
        case 0x1a5258u: goto label_1a5258;
        case 0x1a525cu: goto label_1a525c;
        case 0x1a5260u: goto label_1a5260;
        case 0x1a5264u: goto label_1a5264;
        case 0x1a5268u: goto label_1a5268;
        case 0x1a526cu: goto label_1a526c;
        case 0x1a5270u: goto label_1a5270;
        case 0x1a5274u: goto label_1a5274;
        case 0x1a5278u: goto label_1a5278;
        case 0x1a527cu: goto label_1a527c;
        case 0x1a5280u: goto label_1a5280;
        case 0x1a5284u: goto label_1a5284;
        case 0x1a5288u: goto label_1a5288;
        case 0x1a528cu: goto label_1a528c;
        case 0x1a5290u: goto label_1a5290;
        case 0x1a5294u: goto label_1a5294;
        case 0x1a5298u: goto label_1a5298;
        case 0x1a529cu: goto label_1a529c;
        case 0x1a52a0u: goto label_1a52a0;
        case 0x1a52a4u: goto label_1a52a4;
        case 0x1a52a8u: goto label_1a52a8;
        case 0x1a52acu: goto label_1a52ac;
        case 0x1a52b0u: goto label_1a52b0;
        case 0x1a52b4u: goto label_1a52b4;
        case 0x1a52b8u: goto label_1a52b8;
        case 0x1a52bcu: goto label_1a52bc;
        case 0x1a52c0u: goto label_1a52c0;
        case 0x1a52c4u: goto label_1a52c4;
        case 0x1a52c8u: goto label_1a52c8;
        case 0x1a52ccu: goto label_1a52cc;
        case 0x1a52d0u: goto label_1a52d0;
        case 0x1a52d4u: goto label_1a52d4;
        case 0x1a52d8u: goto label_1a52d8;
        case 0x1a52dcu: goto label_1a52dc;
        case 0x1a52e0u: goto label_1a52e0;
        case 0x1a52e4u: goto label_1a52e4;
        case 0x1a52e8u: goto label_1a52e8;
        case 0x1a52ecu: goto label_1a52ec;
        case 0x1a52f0u: goto label_1a52f0;
        case 0x1a52f4u: goto label_1a52f4;
        case 0x1a52f8u: goto label_1a52f8;
        case 0x1a52fcu: goto label_1a52fc;
        case 0x1a5300u: goto label_1a5300;
        case 0x1a5304u: goto label_1a5304;
        case 0x1a5308u: goto label_1a5308;
        case 0x1a530cu: goto label_1a530c;
        case 0x1a5310u: goto label_1a5310;
        case 0x1a5314u: goto label_1a5314;
        case 0x1a5318u: goto label_1a5318;
        case 0x1a531cu: goto label_1a531c;
        case 0x1a5320u: goto label_1a5320;
        case 0x1a5324u: goto label_1a5324;
        case 0x1a5328u: goto label_1a5328;
        case 0x1a532cu: goto label_1a532c;
        case 0x1a5330u: goto label_1a5330;
        case 0x1a5334u: goto label_1a5334;
        case 0x1a5338u: goto label_1a5338;
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5340u: goto label_1a5340;
        case 0x1a5344u: goto label_1a5344;
        case 0x1a5348u: goto label_1a5348;
        case 0x1a534cu: goto label_1a534c;
        case 0x1a5350u: goto label_1a5350;
        case 0x1a5354u: goto label_1a5354;
        default: break;
    }

    ctx->pc = 0x1a5070u;

label_1a5070:
    // 0x1a5070: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a5070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1a5074:
    // 0x1a5074: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1a5074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1a5078:
    // 0x1a5078: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1a5078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1a507c:
    // 0x1a507c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a507cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5080:
    // 0x1a5080: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1a5080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1a5084:
    // 0x1a5084: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a5084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a5088:
    // 0x1a5088: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a5088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a508c:
    // 0x1a508c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a508cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5090:
    // 0x1a5090: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1a5090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1a5094:
    // 0x1a5094: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a5094u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5098:
    // 0x1a5098: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1a5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1a509c:
    // 0x1a509c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1a509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1a50a0:
    // 0x1a50a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a50a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a50a4:
    // 0x1a50a4: 0x8e050350  lw          $a1, 0x350($s0)
    ctx->pc = 0x1a50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a50a8:
    // 0x1a50a8: 0x8e040354  lw          $a0, 0x354($s0)
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
label_1a50ac:
    // 0x1a50ac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a50acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a50b0:
    // 0x1a50b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a50b4:
    // 0x1a50b4: 0xc13901a  jal         func_4E4068
label_1a50b8:
    if (ctx->pc == 0x1A50B8u) {
        ctx->pc = 0x1A50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50B4u;
        // 0x1a50b8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50BCu;
        goto label_1a50bc;
    }
    ctx->pc = 0x1A50B4u;
    SET_GPR_U32(ctx, 31, 0x1A50BCu);
    ctx->pc = 0x1A50B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A50B4u;
    // 0x1a50b8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4068u, 0x1A50B4u, 0x1A50BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A50BCu;
label_1a50bc:
    // 0x1a50bc: 0x8e030350  lw          $v1, 0x350($s0)
    ctx->pc = 0x1a50bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a50c0:
    // 0x1a50c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1a50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a50c4:
    // 0x1a50c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a50c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a50c8:
    // 0x1a50c8: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
label_1a50cc:
    if (ctx->pc == 0x1A50CCu) {
        ctx->pc = 0x1A50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50C8u;
        // 0x1a50cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50D0u;
        goto label_1a50d0;
    }
    ctx->pc = 0x1A50C8u;
    {
        const bool branch_taken_0x1a50c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50C8u;
        // 0x1a50cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50c8) {
            ctx->pc = 0x1A5130u;
            goto label_1a5130;
        }
    }
    ctx->pc = 0x1A50D0u;
label_1a50d0:
    // 0x1a50d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a50d4:
    // 0x1a50d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1a50d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a50d8:
    // 0x1a50d8: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_1a50dc:
    // 0x1a50dc: 0x5472000d  bnel        $v1, $s2, . + 4 + (0xD << 2)
label_1a50e0:
    if (ctx->pc == 0x1A50E0u) {
        ctx->pc = 0x1A50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50DCu;
        // 0x1a50e0: 0x8e040350  lw          $a0, 0x350($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50E4u;
        goto label_1a50e4;
    }
    ctx->pc = 0x1A50DCu;
    {
        const bool branch_taken_0x1a50dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1a50dc) {
            ctx->pc = 0x1A50E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A50DCu;
            // 0x1a50e0: 0x8e040350  lw          $a0, 0x350($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5114u;
            goto label_1a5114;
        }
    }
    ctx->pc = 0x1A50E4u;
label_1a50e4:
    // 0x1a50e4: 0x8c8201f0  lw          $v0, 0x1F0($a0)
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
label_1a50e8:
    // 0x1a50e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a50ec:
    if (ctx->pc == 0x1A50ECu) {
        ctx->pc = 0x1A50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50E8u;
        // 0x1a50ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A50F0u;
        goto label_1a50f0;
    }
    ctx->pc = 0x1A50E8u;
    {
        const bool branch_taken_0x1a50e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A50E8u;
        // 0x1a50ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50e8) {
            ctx->pc = 0x1A5104u;
            goto label_1a5104;
        }
    }
    ctx->pc = 0x1A50F0u;
label_1a50f0:
    // 0x1a50f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a50f4:
    if (ctx->pc == 0x1A50F4u) {
        ctx->pc = 0x1A50F8u;
        goto label_1a50f8;
    }
    ctx->pc = 0x1A50F0u;
    {
        const bool branch_taken_0x1a50f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a50f0) {
            ctx->pc = 0x1A5104u;
            goto label_1a5104;
        }
    }
    ctx->pc = 0x1A50F8u;
label_1a50f8:
    // 0x1a50f8: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1a50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_1a50fc:
    // 0x1a50fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5100:
    // 0x1a5100: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x1a5100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_1a5104:
    // 0x1a5104: 0xc0691dc  jal         func_1A4770
label_1a5108:
    if (ctx->pc == 0x1A5108u) {
        ctx->pc = 0x1A5108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5104u;
        // 0x1a5108: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A510Cu;
        goto label_1a510c;
    }
    ctx->pc = 0x1A5104u;
    SET_GPR_U32(ctx, 31, 0x1A510Cu);
    ctx->pc = 0x1A5108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5104u;
    // 0x1a5108: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4770u, 0x1A5104u, 0x1A510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A510Cu;
label_1a510c:
    // 0x1a510c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5110:
    // 0x1a5110: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x1a5110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a5114:
    // 0x1a5114: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a5114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1a5118:
    // 0x1a5118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a511c:
    // 0x1a511c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a511cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1a5120:
    // 0x1a5120: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a5120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a5124:
    // 0x1a5124: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5128:
    // 0x1a5128: 0x1462ffe9  bne         $v1, $v0, . + 4 + (-0x17 << 2)
label_1a512c:
    if (ctx->pc == 0x1A512Cu) {
        ctx->pc = 0x1A512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5128u;
        // 0x1a512c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5130u;
        goto label_1a5130;
    }
    ctx->pc = 0x1A5128u;
    {
        const bool branch_taken_0x1a5128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5128u;
        // 0x1a512c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5128) {
            ctx->pc = 0x1A50D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a50d0;
        }
    }
    ctx->pc = 0x1A5130u;
label_1a5130:
    // 0x1a5130: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x1a5130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a5134:
    // 0x1a5134: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5138:
    // 0x1a5138: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a513c:
    // 0x1a513c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a5140:
    // 0x1a5140: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a5140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a5144:
    // 0x1a5144: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a5148:
    // 0x1a5148: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
label_1a514c:
    if (ctx->pc == 0x1A514Cu) {
        ctx->pc = 0x1A514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5148u;
        // 0x1a514c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5150u;
        goto label_1a5150;
    }
    ctx->pc = 0x1A5148u;
    {
        const bool branch_taken_0x1a5148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5148u;
        // 0x1a514c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5148) {
            ctx->pc = 0x1A5214u;
            goto label_1a5214;
        }
    }
    ctx->pc = 0x1A5150u;
label_1a5150:
    // 0x1a5150: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x1a5150u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_1a5154:
    // 0x1a5154: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x1a5154u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_1a5158:
    // 0x1a5158: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1a5158u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1a515c:
    // 0x1a515c: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x1a515cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_1a5160:
    // 0x1a5160: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a5160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5164:
    // 0x1a5164: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1a5164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a5168:
    // 0x1a5168: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x1a5168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_1a516c:
    // 0x1a516c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_1a5170:
    if (ctx->pc == 0x1A5170u) {
        ctx->pc = 0x1A5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A516Cu;
        // 0x1a5170: 0x26853ed8  addiu       $a1, $s4, 0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5174u;
        goto label_1a5174;
    }
    ctx->pc = 0x1A516Cu;
    {
        const bool branch_taken_0x1a516c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A516Cu;
        // 0x1a5170: 0x26853ed8  addiu       $a1, $s4, 0x3ED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a516c) {
            ctx->pc = 0x1A51F4u;
            goto label_1a51f4;
        }
    }
    ctx->pc = 0x1A5174u;
label_1a5174:
    // 0x1a5174: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x1a5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
label_1a5178:
    // 0x1a5178: 0x8eacb9c0  lw          $t4, -0x4640($s5)
    ctx->pc = 0x1a5178u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
label_1a517c:
    // 0x1a517c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1a517cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a5180:
    // 0x1a5180: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a5180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5184:
    // 0x1a5184: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a5184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a5188:
    // 0x1a5188: 0x26683ee0  addiu       $t0, $s3, 0x3EE0
    ctx->pc = 0x1a5188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16096));
label_1a518c:
    // 0x1a518c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1a518cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a5190:
    // 0x1a5190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5194:
    // 0x1a5194: 0x264a3f08  addiu       $t2, $s2, 0x3F08
    ctx->pc = 0x1a5194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 16136));
label_1a5198:
    // 0x1a5198: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a5198u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a519c:
    // 0x1a519c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1a519cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1a51a0:
    // 0x1a51a0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a51a4:
    // 0x1a51a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a51a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a51a8:
    // 0x1a51a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a51ac:
    // 0x1a51ac: 0x40f809  jalr        $v0
label_1a51b0:
    if (ctx->pc == 0x1A51B0u) {
        ctx->pc = 0x1A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51ACu;
        // 0x1a51b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51B4u;
        goto label_1a51b4;
    }
    ctx->pc = 0x1A51ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A51B4u);
        ctx->pc = 0x1A51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51ACu;
        // 0x1a51b0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A51ACu, 0x1A51B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A51B4u;
label_1a51b4:
    // 0x1a51b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a51b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a51b8:
    // 0x1a51b8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1a51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1a51bc:
    // 0x1a51bc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a51c0:
    if (ctx->pc == 0x1A51C0u) {
        ctx->pc = 0x1A51C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A51BCu;
        // 0x1a51c0: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A51C4u;
        goto label_1a51c4;
    }
    ctx->pc = 0x1A51BCu;
    {
        const bool branch_taken_0x1a51bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a51bc) {
            ctx->pc = 0x1A51C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A51BCu;
            // 0x1a51c0: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A51C4u;
            goto label_1a51c4;
        }
    }
    ctx->pc = 0x1A51C4u;
label_1a51c4:
    // 0x1a51c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a51c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a51c8:
    // 0x1a51c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a51c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a51cc:
    // 0x1a51cc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a51d0:
    // 0x1a51d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a51d4:
    // 0x1a51d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1a51d8:
    // 0x1a51d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a51dc:
    // 0x1a51dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a51e0:
    // 0x1a51e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a51e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a51e4:
    // 0x1a51e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a51e8:
    // 0x1a51e8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a51e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1a51ec:
    // 0x1a51ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1a51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1a51f0:
    // 0x1a51f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a51f4:
    // 0x1a51f4: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x1a51f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a51f8:
    // 0x1a51f8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1a51fc:
    // 0x1a51fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a51fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5200:
    // 0x1a5200: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a5200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1a5204:
    // 0x1a5204: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a5204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a5208:
    // 0x1a5208: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a520c:
    // 0x1a520c: 0x1462ffd4  bne         $v1, $v0, . + 4 + (-0x2C << 2)
label_1a5210:
    if (ctx->pc == 0x1A5210u) {
        ctx->pc = 0x1A5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A520Cu;
        // 0x1a5210: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5214u;
        goto label_1a5214;
    }
    ctx->pc = 0x1A520Cu;
    {
        const bool branch_taken_0x1a520c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A520Cu;
        // 0x1a5210: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a520c) {
            ctx->pc = 0x1A5160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5160;
        }
    }
    ctx->pc = 0x1A5214u;
label_1a5214:
    // 0x1a5214: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x1a5214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a5218:
    // 0x1a5218: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a521c:
    // 0x1a521c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a521cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5220:
    // 0x1a5220: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a5220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a5224:
    // 0x1a5224: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a5224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a5228:
    // 0x1a5228: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a522c:
    // 0x1a522c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
label_1a5230:
    if (ctx->pc == 0x1A5230u) {
        ctx->pc = 0x1A5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A522Cu;
        // 0x1a5230: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5234u;
        goto label_1a5234;
    }
    ctx->pc = 0x1A522Cu;
    {
        const bool branch_taken_0x1a522c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A522Cu;
        // 0x1a5230: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a522c) {
            ctx->pc = 0x1A5300u;
            goto label_1a5300;
        }
    }
    ctx->pc = 0x1A5234u;
label_1a5234:
    // 0x1a5234: 0x3c15006f  lui         $s5, 0x6F
    ctx->pc = 0x1a5234u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)111 << 16));
label_1a5238:
    // 0x1a5238: 0x3c140055  lui         $s4, 0x55
    ctx->pc = 0x1a5238u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
label_1a523c:
    // 0x1a523c: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x1a523cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_1a5240:
    // 0x1a5240: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x1a5240u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_1a5244:
    // 0x1a5244: 0x0  nop
    ctx->pc = 0x1a5244u;
    // NOP
label_1a5248:
    // 0x1a5248: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a5248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a524c:
    // 0x1a524c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x1a524cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a5250:
    // 0x1a5250: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x1a5250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_1a5254:
    // 0x1a5254: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
label_1a5258:
    if (ctx->pc == 0x1A5258u) {
        ctx->pc = 0x1A5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5254u;
        // 0x1a5258: 0x8e040350  lw          $a0, 0x350($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A525Cu;
        goto label_1a525c;
    }
    ctx->pc = 0x1A5254u;
    {
        const bool branch_taken_0x1a5254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5254) {
            ctx->pc = 0x1A5258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5254u;
            // 0x1a5258: 0x8e040350  lw          $a0, 0x350($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A52E4u;
            goto label_1a52e4;
        }
    }
    ctx->pc = 0x1A525Cu;
label_1a525c:
    // 0x1a525c: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x1a525cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
label_1a5260:
    // 0x1a5260: 0x26853ed8  addiu       $a1, $s4, 0x3ED8
    ctx->pc = 0x1a5260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16088));
label_1a5264:
    // 0x1a5264: 0x8eacb9c0  lw          $t4, -0x4640($s5)
    ctx->pc = 0x1a5264u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294949312)));
label_1a5268:
    // 0x1a5268: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1a5268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a526c:
    // 0x1a526c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a5270:
    // 0x1a5270: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1a5270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1a5274:
    // 0x1a5274: 0x26683ee0  addiu       $t0, $s3, 0x3EE0
    ctx->pc = 0x1a5274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16096));
label_1a5278:
    // 0x1a5278: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1a5278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1a527c:
    // 0x1a527c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5280:
    // 0x1a5280: 0x264a3f08  addiu       $t2, $s2, 0x3F08
    ctx->pc = 0x1a5280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 16136));
label_1a5284:
    // 0x1a5284: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a5284u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5288:
    // 0x1a5288: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a5288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1a528c:
    // 0x1a528c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1a528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1a5290:
    // 0x1a5290: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1a5290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1a5294:
    // 0x1a5294: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1a5294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1a5298:
    // 0x1a5298: 0x40f809  jalr        $v0
label_1a529c:
    if (ctx->pc == 0x1A529Cu) {
        ctx->pc = 0x1A529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5298u;
        // 0x1a529c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52A0u;
        goto label_1a52a0;
    }
    ctx->pc = 0x1A5298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A52A0u);
        ctx->pc = 0x1A529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5298u;
        // 0x1a529c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5298u, 0x1A52A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A52A0u;
label_1a52a0:
    // 0x1a52a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a52a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a52a4:
    // 0x1a52a4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x1a52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1a52a8:
    // 0x1a52a8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a52ac:
    if (ctx->pc == 0x1A52ACu) {
        ctx->pc = 0x1A52ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52A8u;
        // 0x1a52ac: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A52B0u;
        goto label_1a52b0;
    }
    ctx->pc = 0x1A52A8u;
    {
        const bool branch_taken_0x1a52a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a52a8) {
            ctx->pc = 0x1A52ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A52A8u;
            // 0x1a52ac: 0xac910008  sw          $s1, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A52B0u;
            goto label_1a52b0;
        }
    }
    ctx->pc = 0x1A52B0u;
label_1a52b0:
    // 0x1a52b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52b4:
    // 0x1a52b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a52b8:
    // 0x1a52b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a52b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52bc:
    // 0x1a52bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a52c0:
    // 0x1a52c0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1a52c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1a52c4:
    // 0x1a52c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52c8:
    // 0x1a52c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a52cc:
    // 0x1a52cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a52d0:
    // 0x1a52d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a52d4:
    // 0x1a52d4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1a52d8:
    // 0x1a52d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a52d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1a52dc:
    // 0x1a52dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a52dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a52e0:
    // 0x1a52e0: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x1a52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a52e4:
    // 0x1a52e4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1a52e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1a52e8:
    // 0x1a52e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a52ec:
    // 0x1a52ec: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1a52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1a52f0:
    // 0x1a52f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1a52f4:
    // 0x1a52f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a52f8:
    // 0x1a52f8: 0x1462ffd3  bne         $v1, $v0, . + 4 + (-0x2D << 2)
label_1a52fc:
    if (ctx->pc == 0x1A52FCu) {
        ctx->pc = 0x1A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F8u;
        // 0x1a52fc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5300u;
        goto label_1a5300;
    }
    ctx->pc = 0x1A52F8u;
    {
        const bool branch_taken_0x1a52f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A52F8u;
        // 0x1a52fc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52f8) {
            ctx->pc = 0x1A5248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5248;
        }
    }
    ctx->pc = 0x1A5300u;
label_1a5300:
    // 0x1a5300: 0xc13901a  jal         func_4E4068
label_1a5304:
    if (ctx->pc == 0x1A5304u) {
        ctx->pc = 0x1A5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5300u;
        // 0x1a5304: 0x8e040350  lw          $a0, 0x350($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5308u;
        goto label_1a5308;
    }
    ctx->pc = 0x1A5300u;
    SET_GPR_U32(ctx, 31, 0x1A5308u);
    ctx->pc = 0x1A5304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5300u;
    // 0x1a5304: 0x8e040350  lw          $a0, 0x350($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4068u, 0x1A5300u, 0x1A5308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5308u;
label_1a5308:
    // 0x1a5308: 0x8e060354  lw          $a2, 0x354($s0)
    ctx->pc = 0x1a5308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
label_1a530c:
    // 0x1a530c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1a530cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a5310:
    // 0x1a5310: 0x8e030350  lw          $v1, 0x350($s0)
    ctx->pc = 0x1a5310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_1a5314:
    // 0x1a5314: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1a5314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1a5318:
    // 0x1a5318: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a531c:
    // 0x1a531c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a531cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_1a5320:
    // 0x1a5320: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1a5320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a5324:
    // 0x1a5324: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1a5324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a5328:
    // 0x1a5328: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1a5328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a532c:
    // 0x1a532c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1a532cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1a5330:
    // 0x1a5330: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1a5330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a5334:
    // 0x1a5334: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1a5334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a5338:
    // 0x1a5338: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a5338u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a533c:
    // 0x1a533c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a533cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5340:
    // 0x1a5340: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1a5340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_1a5344:
    // 0x1a5344: 0x3e00008  jr          $ra
label_1a5348:
    if (ctx->pc == 0x1A5348u) {
        ctx->pc = 0x1A5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5344u;
        // 0x1a5348: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A534Cu;
        goto label_1a534c;
    }
    ctx->pc = 0x1A5344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5344u;
        // 0x1a5348: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A534Cu;
label_1a534c:
    // 0x1a534c: 0x0  nop
    ctx->pc = 0x1a534cu;
    // NOP
label_1a5350:
    // 0x1a5350: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1a5350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a5354:
    // 0x1a5354: 0x0  nop
    ctx->pc = 0x1a5354u;
    // NOP
    ctx->pc = 0x1a5358u;
}

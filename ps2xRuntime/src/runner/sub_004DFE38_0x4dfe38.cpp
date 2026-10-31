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

// Function: sub_004DFE38
// Address: 0x4dfe38 - 0x4e0208
void sub_004DFE38_0x4dfe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DFE38_0x4dfe38");
#endif

    switch (ctx->pc) {
        case 0x4dfe38u: goto label_4dfe38;
        case 0x4dfe3cu: goto label_4dfe3c;
        case 0x4dfe40u: goto label_4dfe40;
        case 0x4dfe44u: goto label_4dfe44;
        case 0x4dfe48u: goto label_4dfe48;
        case 0x4dfe4cu: goto label_4dfe4c;
        case 0x4dfe50u: goto label_4dfe50;
        case 0x4dfe54u: goto label_4dfe54;
        case 0x4dfe58u: goto label_4dfe58;
        case 0x4dfe5cu: goto label_4dfe5c;
        case 0x4dfe60u: goto label_4dfe60;
        case 0x4dfe64u: goto label_4dfe64;
        case 0x4dfe68u: goto label_4dfe68;
        case 0x4dfe6cu: goto label_4dfe6c;
        case 0x4dfe70u: goto label_4dfe70;
        case 0x4dfe74u: goto label_4dfe74;
        case 0x4dfe78u: goto label_4dfe78;
        case 0x4dfe7cu: goto label_4dfe7c;
        case 0x4dfe80u: goto label_4dfe80;
        case 0x4dfe84u: goto label_4dfe84;
        case 0x4dfe88u: goto label_4dfe88;
        case 0x4dfe8cu: goto label_4dfe8c;
        case 0x4dfe90u: goto label_4dfe90;
        case 0x4dfe94u: goto label_4dfe94;
        case 0x4dfe98u: goto label_4dfe98;
        case 0x4dfe9cu: goto label_4dfe9c;
        case 0x4dfea0u: goto label_4dfea0;
        case 0x4dfea4u: goto label_4dfea4;
        case 0x4dfea8u: goto label_4dfea8;
        case 0x4dfeacu: goto label_4dfeac;
        case 0x4dfeb0u: goto label_4dfeb0;
        case 0x4dfeb4u: goto label_4dfeb4;
        case 0x4dfeb8u: goto label_4dfeb8;
        case 0x4dfebcu: goto label_4dfebc;
        case 0x4dfec0u: goto label_4dfec0;
        case 0x4dfec4u: goto label_4dfec4;
        case 0x4dfec8u: goto label_4dfec8;
        case 0x4dfeccu: goto label_4dfecc;
        case 0x4dfed0u: goto label_4dfed0;
        case 0x4dfed4u: goto label_4dfed4;
        case 0x4dfed8u: goto label_4dfed8;
        case 0x4dfedcu: goto label_4dfedc;
        case 0x4dfee0u: goto label_4dfee0;
        case 0x4dfee4u: goto label_4dfee4;
        case 0x4dfee8u: goto label_4dfee8;
        case 0x4dfeecu: goto label_4dfeec;
        case 0x4dfef0u: goto label_4dfef0;
        case 0x4dfef4u: goto label_4dfef4;
        case 0x4dfef8u: goto label_4dfef8;
        case 0x4dfefcu: goto label_4dfefc;
        case 0x4dff00u: goto label_4dff00;
        case 0x4dff04u: goto label_4dff04;
        case 0x4dff08u: goto label_4dff08;
        case 0x4dff0cu: goto label_4dff0c;
        case 0x4dff10u: goto label_4dff10;
        case 0x4dff14u: goto label_4dff14;
        case 0x4dff18u: goto label_4dff18;
        case 0x4dff1cu: goto label_4dff1c;
        case 0x4dff20u: goto label_4dff20;
        case 0x4dff24u: goto label_4dff24;
        case 0x4dff28u: goto label_4dff28;
        case 0x4dff2cu: goto label_4dff2c;
        case 0x4dff30u: goto label_4dff30;
        case 0x4dff34u: goto label_4dff34;
        case 0x4dff38u: goto label_4dff38;
        case 0x4dff3cu: goto label_4dff3c;
        case 0x4dff40u: goto label_4dff40;
        case 0x4dff44u: goto label_4dff44;
        case 0x4dff48u: goto label_4dff48;
        case 0x4dff4cu: goto label_4dff4c;
        case 0x4dff50u: goto label_4dff50;
        case 0x4dff54u: goto label_4dff54;
        case 0x4dff58u: goto label_4dff58;
        case 0x4dff5cu: goto label_4dff5c;
        case 0x4dff60u: goto label_4dff60;
        case 0x4dff64u: goto label_4dff64;
        case 0x4dff68u: goto label_4dff68;
        case 0x4dff6cu: goto label_4dff6c;
        case 0x4dff70u: goto label_4dff70;
        case 0x4dff74u: goto label_4dff74;
        case 0x4dff78u: goto label_4dff78;
        case 0x4dff7cu: goto label_4dff7c;
        case 0x4dff80u: goto label_4dff80;
        case 0x4dff84u: goto label_4dff84;
        case 0x4dff88u: goto label_4dff88;
        case 0x4dff8cu: goto label_4dff8c;
        case 0x4dff90u: goto label_4dff90;
        case 0x4dff94u: goto label_4dff94;
        case 0x4dff98u: goto label_4dff98;
        case 0x4dff9cu: goto label_4dff9c;
        case 0x4dffa0u: goto label_4dffa0;
        case 0x4dffa4u: goto label_4dffa4;
        case 0x4dffa8u: goto label_4dffa8;
        case 0x4dffacu: goto label_4dffac;
        case 0x4dffb0u: goto label_4dffb0;
        case 0x4dffb4u: goto label_4dffb4;
        case 0x4dffb8u: goto label_4dffb8;
        case 0x4dffbcu: goto label_4dffbc;
        case 0x4dffc0u: goto label_4dffc0;
        case 0x4dffc4u: goto label_4dffc4;
        case 0x4dffc8u: goto label_4dffc8;
        case 0x4dffccu: goto label_4dffcc;
        case 0x4dffd0u: goto label_4dffd0;
        case 0x4dffd4u: goto label_4dffd4;
        case 0x4dffd8u: goto label_4dffd8;
        case 0x4dffdcu: goto label_4dffdc;
        case 0x4dffe0u: goto label_4dffe0;
        case 0x4dffe4u: goto label_4dffe4;
        case 0x4dffe8u: goto label_4dffe8;
        case 0x4dffecu: goto label_4dffec;
        case 0x4dfff0u: goto label_4dfff0;
        case 0x4dfff4u: goto label_4dfff4;
        case 0x4dfff8u: goto label_4dfff8;
        case 0x4dfffcu: goto label_4dfffc;
        case 0x4e0000u: goto label_4e0000;
        case 0x4e0004u: goto label_4e0004;
        case 0x4e0008u: goto label_4e0008;
        case 0x4e000cu: goto label_4e000c;
        case 0x4e0010u: goto label_4e0010;
        case 0x4e0014u: goto label_4e0014;
        case 0x4e0018u: goto label_4e0018;
        case 0x4e001cu: goto label_4e001c;
        case 0x4e0020u: goto label_4e0020;
        case 0x4e0024u: goto label_4e0024;
        case 0x4e0028u: goto label_4e0028;
        case 0x4e002cu: goto label_4e002c;
        case 0x4e0030u: goto label_4e0030;
        case 0x4e0034u: goto label_4e0034;
        case 0x4e0038u: goto label_4e0038;
        case 0x4e003cu: goto label_4e003c;
        case 0x4e0040u: goto label_4e0040;
        case 0x4e0044u: goto label_4e0044;
        case 0x4e0048u: goto label_4e0048;
        case 0x4e004cu: goto label_4e004c;
        case 0x4e0050u: goto label_4e0050;
        case 0x4e0054u: goto label_4e0054;
        case 0x4e0058u: goto label_4e0058;
        case 0x4e005cu: goto label_4e005c;
        case 0x4e0060u: goto label_4e0060;
        case 0x4e0064u: goto label_4e0064;
        case 0x4e0068u: goto label_4e0068;
        case 0x4e006cu: goto label_4e006c;
        case 0x4e0070u: goto label_4e0070;
        case 0x4e0074u: goto label_4e0074;
        case 0x4e0078u: goto label_4e0078;
        case 0x4e007cu: goto label_4e007c;
        case 0x4e0080u: goto label_4e0080;
        case 0x4e0084u: goto label_4e0084;
        case 0x4e0088u: goto label_4e0088;
        case 0x4e008cu: goto label_4e008c;
        case 0x4e0090u: goto label_4e0090;
        case 0x4e0094u: goto label_4e0094;
        case 0x4e0098u: goto label_4e0098;
        case 0x4e009cu: goto label_4e009c;
        case 0x4e00a0u: goto label_4e00a0;
        case 0x4e00a4u: goto label_4e00a4;
        case 0x4e00a8u: goto label_4e00a8;
        case 0x4e00acu: goto label_4e00ac;
        case 0x4e00b0u: goto label_4e00b0;
        case 0x4e00b4u: goto label_4e00b4;
        case 0x4e00b8u: goto label_4e00b8;
        case 0x4e00bcu: goto label_4e00bc;
        case 0x4e00c0u: goto label_4e00c0;
        case 0x4e00c4u: goto label_4e00c4;
        case 0x4e00c8u: goto label_4e00c8;
        case 0x4e00ccu: goto label_4e00cc;
        case 0x4e00d0u: goto label_4e00d0;
        case 0x4e00d4u: goto label_4e00d4;
        case 0x4e00d8u: goto label_4e00d8;
        case 0x4e00dcu: goto label_4e00dc;
        case 0x4e00e0u: goto label_4e00e0;
        case 0x4e00e4u: goto label_4e00e4;
        case 0x4e00e8u: goto label_4e00e8;
        case 0x4e00ecu: goto label_4e00ec;
        case 0x4e00f0u: goto label_4e00f0;
        case 0x4e00f4u: goto label_4e00f4;
        case 0x4e00f8u: goto label_4e00f8;
        case 0x4e00fcu: goto label_4e00fc;
        case 0x4e0100u: goto label_4e0100;
        case 0x4e0104u: goto label_4e0104;
        case 0x4e0108u: goto label_4e0108;
        case 0x4e010cu: goto label_4e010c;
        case 0x4e0110u: goto label_4e0110;
        case 0x4e0114u: goto label_4e0114;
        case 0x4e0118u: goto label_4e0118;
        case 0x4e011cu: goto label_4e011c;
        case 0x4e0120u: goto label_4e0120;
        case 0x4e0124u: goto label_4e0124;
        case 0x4e0128u: goto label_4e0128;
        case 0x4e012cu: goto label_4e012c;
        case 0x4e0130u: goto label_4e0130;
        case 0x4e0134u: goto label_4e0134;
        case 0x4e0138u: goto label_4e0138;
        case 0x4e013cu: goto label_4e013c;
        case 0x4e0140u: goto label_4e0140;
        case 0x4e0144u: goto label_4e0144;
        case 0x4e0148u: goto label_4e0148;
        case 0x4e014cu: goto label_4e014c;
        case 0x4e0150u: goto label_4e0150;
        case 0x4e0154u: goto label_4e0154;
        case 0x4e0158u: goto label_4e0158;
        case 0x4e015cu: goto label_4e015c;
        case 0x4e0160u: goto label_4e0160;
        case 0x4e0164u: goto label_4e0164;
        case 0x4e0168u: goto label_4e0168;
        case 0x4e016cu: goto label_4e016c;
        case 0x4e0170u: goto label_4e0170;
        case 0x4e0174u: goto label_4e0174;
        case 0x4e0178u: goto label_4e0178;
        case 0x4e017cu: goto label_4e017c;
        case 0x4e0180u: goto label_4e0180;
        case 0x4e0184u: goto label_4e0184;
        case 0x4e0188u: goto label_4e0188;
        case 0x4e018cu: goto label_4e018c;
        case 0x4e0190u: goto label_4e0190;
        case 0x4e0194u: goto label_4e0194;
        case 0x4e0198u: goto label_4e0198;
        case 0x4e019cu: goto label_4e019c;
        case 0x4e01a0u: goto label_4e01a0;
        case 0x4e01a4u: goto label_4e01a4;
        case 0x4e01a8u: goto label_4e01a8;
        case 0x4e01acu: goto label_4e01ac;
        case 0x4e01b0u: goto label_4e01b0;
        case 0x4e01b4u: goto label_4e01b4;
        case 0x4e01b8u: goto label_4e01b8;
        case 0x4e01bcu: goto label_4e01bc;
        case 0x4e01c0u: goto label_4e01c0;
        case 0x4e01c4u: goto label_4e01c4;
        case 0x4e01c8u: goto label_4e01c8;
        case 0x4e01ccu: goto label_4e01cc;
        case 0x4e01d0u: goto label_4e01d0;
        case 0x4e01d4u: goto label_4e01d4;
        case 0x4e01d8u: goto label_4e01d8;
        case 0x4e01dcu: goto label_4e01dc;
        case 0x4e01e0u: goto label_4e01e0;
        case 0x4e01e4u: goto label_4e01e4;
        case 0x4e01e8u: goto label_4e01e8;
        case 0x4e01ecu: goto label_4e01ec;
        case 0x4e01f0u: goto label_4e01f0;
        case 0x4e01f4u: goto label_4e01f4;
        case 0x4e01f8u: goto label_4e01f8;
        case 0x4e01fcu: goto label_4e01fc;
        case 0x4e0200u: goto label_4e0200;
        case 0x4e0204u: goto label_4e0204;
        default: break;
    }

    ctx->pc = 0x4dfe38u;

label_4dfe38:
    // 0x4dfe38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4dfe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4dfe3c:
    // 0x4dfe3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4dfe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4dfe40:
    // 0x4dfe40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4dfe40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4dfe44:
    // 0x4dfe44: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4dfe44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe48:
    // 0x4dfe48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4dfe48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4dfe4c:
    // 0x4dfe4c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4dfe4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe50:
    // 0x4dfe50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4dfe50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4dfe54:
    // 0x4dfe54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4dfe54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4dfe58:
    // 0x4dfe58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dfe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dfe5c:
    // 0x4dfe5c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4dfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dfe60:
    // 0x4dfe60: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_4dfe64:
    if (ctx->pc == 0x4DFE64u) {
        ctx->pc = 0x4DFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFE60u;
        // 0x4dfe64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFE68u;
        goto label_4dfe68;
    }
    ctx->pc = 0x4DFE60u;
    {
        const bool branch_taken_0x4dfe60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFE60u;
        // 0x4dfe64: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfe60) {
            ctx->pc = 0x4DFE84u;
            goto label_4dfe84;
        }
    }
    ctx->pc = 0x4DFE68u;
label_4dfe68:
    // 0x4dfe68: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_4dfe6c:
    if (ctx->pc == 0x4DFE6Cu) {
        ctx->pc = 0x4DFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFE68u;
        // 0x4dfe6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFE70u;
        goto label_4dfe70;
    }
    ctx->pc = 0x4DFE68u;
    {
        const bool branch_taken_0x4dfe68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DFE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFE68u;
        // 0x4dfe6c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfe68) {
            ctx->pc = 0x4DFE88u;
            goto label_4dfe88;
        }
    }
    ctx->pc = 0x4DFE70u;
label_4dfe70:
    // 0x4dfe70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4dfe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4dfe74:
    // 0x4dfe74: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4dfe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4dfe78:
    // 0x4dfe78: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4dfe78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4dfe7c:
    // 0x4dfe7c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_4dfe80:
    if (ctx->pc == 0x4DFE80u) {
        ctx->pc = 0x4DFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFE7Cu;
        // 0x4dfe80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFE84u;
        goto label_4dfe84;
    }
    ctx->pc = 0x4DFE7Cu;
    {
        const bool branch_taken_0x4dfe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFE7Cu;
        // 0x4dfe80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfe7c) {
            ctx->pc = 0x4DFF18u;
            goto label_4dff18;
        }
    }
    ctx->pc = 0x4DFE84u;
label_4dfe84:
    // 0x4dfe84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dfe88:
    // 0x4dfe88: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4dfe88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4dfe8c:
    // 0x4dfe8c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4dfe8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4dfe90:
    // 0x4dfe90: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4dfe90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4dfe94:
    // 0x4dfe94: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4dfe94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4dfe98:
    // 0x4dfe98: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4dfe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4dfe9c:
    // 0x4dfe9c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4dfe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4dfea0:
    // 0x4dfea0: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4dfea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4dfea4:
    // 0x4dfea4: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4dfea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4dfea8:
    // 0x4dfea8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4dfea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4dfeac:
    // 0x4dfeac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4dfeacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4dfeb0:
    // 0x4dfeb0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dfeb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dfeb4:
    // 0x4dfeb4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4dfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4dfeb8:
    // 0x4dfeb8: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dfeb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dfebc:
    // 0x4dfebc: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4dfebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4dfec0:
    // 0x4dfec0: 0x40f809  jalr        $v0
label_4dfec4:
    if (ctx->pc == 0x4DFEC4u) {
        ctx->pc = 0x4DFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFEC0u;
        // 0x4dfec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFEC8u;
        goto label_4dfec8;
    }
    ctx->pc = 0x4DFEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DFEC8u);
        ctx->pc = 0x4DFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFEC0u;
        // 0x4dfec4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFEC0u, 0x4DFEC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DFEC8u;
label_4dfec8:
    // 0x4dfec8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4dfec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dfecc:
    // 0x4dfecc: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4dfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4dfed0:
    // 0x4dfed0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4dfed4:
    if (ctx->pc == 0x4DFED4u) {
        ctx->pc = 0x4DFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFED0u;
        // 0x4dfed4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFED8u;
        goto label_4dfed8;
    }
    ctx->pc = 0x4DFED0u;
    {
        const bool branch_taken_0x4dfed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFED0u;
        // 0x4dfed4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfed0) {
            ctx->pc = 0x4DFEE8u;
            goto label_4dfee8;
        }
    }
    ctx->pc = 0x4DFED8u;
label_4dfed8:
    // 0x4dfed8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4dfed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4dfedc:
    // 0x4dfedc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4dfedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4dfee0:
    // 0x4dfee0: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4dfee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dfee4:
    // 0x4dfee4: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4dfee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dfee8:
    // 0x4dfee8: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x4dfee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_4dfeec:
    // 0x4dfeec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4dfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dfef0:
    // 0x4dfef0: 0x56030005  bnel        $s0, $v1, . + 4 + (0x5 << 2)
label_4dfef4:
    if (ctx->pc == 0x4DFEF4u) {
        ctx->pc = 0x4DFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFEF0u;
        // 0x4dfef4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFEF8u;
        goto label_4dfef8;
    }
    ctx->pc = 0x4DFEF0u;
    {
        const bool branch_taken_0x4dfef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x4dfef0) {
            ctx->pc = 0x4DFEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFEF0u;
            // 0x4dfef4: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFF08u;
            goto label_4dff08;
        }
    }
    ctx->pc = 0x4DFEF8u;
label_4dfef8:
    // 0x4dfef8: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x4dfef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_4dfefc:
    // 0x4dfefc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4dfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dff00:
    // 0x4dff00: 0x10000022  b           . + 4 + (0x22 << 2)
label_4dff04:
    if (ctx->pc == 0x4DFF04u) {
        ctx->pc = 0x4DFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF00u;
        // 0x4dff04: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFF08u;
        goto label_4dff08;
    }
    ctx->pc = 0x4DFF00u;
    {
        const bool branch_taken_0x4dff00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF00u;
        // 0x4dff04: 0xac47000c  sw          $a3, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dff00) {
            ctx->pc = 0x4DFF8Cu;
            goto label_4dff8c;
        }
    }
    ctx->pc = 0x4DFF08u;
label_4dff08:
    // 0x4dff08: 0x52020020  beql        $s0, $v0, . + 4 + (0x20 << 2)
label_4dff0c:
    if (ctx->pc == 0x4DFF0Cu) {
        ctx->pc = 0x4DFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF08u;
        // 0x4dff0c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFF10u;
        goto label_4dff10;
    }
    ctx->pc = 0x4DFF08u;
    {
        const bool branch_taken_0x4dff08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4dff08) {
            ctx->pc = 0x4DFF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFF08u;
            // 0x4dff0c: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFF8Cu;
            goto label_4dff8c;
        }
    }
    ctx->pc = 0x4DFF10u;
label_4dff10:
    // 0x4dff10: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4dff14:
    if (ctx->pc == 0x4DFF14u) {
        ctx->pc = 0x4DFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF10u;
        // 0x4dff14: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFF18u;
        goto label_4dff18;
    }
    ctx->pc = 0x4DFF10u;
    {
        const bool branch_taken_0x4dff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF10u;
        // 0x4dff14: 0xacf00004  sw          $s0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dff10) {
            ctx->pc = 0x4DFF90u;
            goto label_4dff90;
        }
    }
    ctx->pc = 0x4DFF18u;
label_4dff18:
    // 0x4dff18: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4dff18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4dff1c:
    // 0x4dff1c: 0x8c4bb9c0  lw          $t3, -0x4640($v0)
    ctx->pc = 0x4dff1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4dff20:
    // 0x4dff20: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4dff20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4dff24:
    // 0x4dff24: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4dff24u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4dff28:
    // 0x4dff28: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4dff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4dff2c:
    // 0x4dff2c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4dff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4dff30:
    // 0x4dff30: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4dff30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4dff34:
    // 0x4dff34: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4dff34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4dff38:
    // 0x4dff38: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4dff38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4dff3c:
    // 0x4dff3c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4dff3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4dff40:
    // 0x4dff40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dff40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dff44:
    // 0x4dff44: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4dff48:
    // 0x4dff48: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dff48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dff4c:
    // 0x4dff4c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4dff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4dff50:
    // 0x4dff50: 0x40f809  jalr        $v0
label_4dff54:
    if (ctx->pc == 0x4DFF54u) {
        ctx->pc = 0x4DFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF50u;
        // 0x4dff54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFF58u;
        goto label_4dff58;
    }
    ctx->pc = 0x4DFF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DFF58u);
        ctx->pc = 0x4DFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF50u;
        // 0x4dff54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFF50u, 0x4DFF58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DFF58u;
label_4dff58:
    // 0x4dff58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4dff58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dff5c:
    // 0x4dff5c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4dff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4dff60:
    // 0x4dff60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4dff64:
    if (ctx->pc == 0x4DFF64u) {
        ctx->pc = 0x4DFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF60u;
        // 0x4dff64: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFF68u;
        goto label_4dff68;
    }
    ctx->pc = 0x4DFF60u;
    {
        const bool branch_taken_0x4dff60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF60u;
        // 0x4dff64: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dff60) {
            ctx->pc = 0x4DFF78u;
            goto label_4dff78;
        }
    }
    ctx->pc = 0x4DFF68u;
label_4dff68:
    // 0x4dff68: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4dff68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4dff6c:
    // 0x4dff6c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4dff6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4dff70:
    // 0x4dff70: 0xb0620017  sdl         $v0, 0x17($v1)
    ctx->pc = 0x4dff70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dff74:
    // 0x4dff74: 0xb4620010  sdr         $v0, 0x10($v1)
    ctx->pc = 0x4dff74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4dff78:
    // 0x4dff78: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x4dff78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
label_4dff7c:
    // 0x4dff7c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4dff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dff80:
    // 0x4dff80: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4dff84:
    // 0x4dff84: 0x52020001  beql        $s0, $v0, . + 4 + (0x1 << 2)
label_4dff88:
    if (ctx->pc == 0x4DFF88u) {
        ctx->pc = 0x4DFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFF84u;
        // 0x4dff88: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFF8Cu;
        goto label_4dff8c;
    }
    ctx->pc = 0x4DFF84u;
    {
        const bool branch_taken_0x4dff84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x4dff84) {
            ctx->pc = 0x4DFF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFF84u;
            // 0x4dff88: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFF8Cu;
            goto label_4dff8c;
        }
    }
    ctx->pc = 0x4DFF8Cu;
label_4dff8c:
    // 0x4dff8c: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x4dff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
label_4dff90:
    // 0x4dff90: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x4dff90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4dff94:
    // 0x4dff94: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4dff94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_4dff98:
    // 0x4dff98: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4dff98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
label_4dff9c:
    // 0x4dff9c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4dff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4dffa0:
    // 0x4dffa0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4dffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4dffa4:
    // 0x4dffa4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4dffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4dffa8:
    // 0x4dffa8: 0x10e20088  beq         $a3, $v0, . + 4 + (0x88 << 2)
label_4dffac:
    if (ctx->pc == 0x4DFFACu) {
        ctx->pc = 0x4DFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFA8u;
        // 0x4dffac: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFFB0u;
        goto label_4dffb0;
    }
    ctx->pc = 0x4DFFA8u;
    {
        const bool branch_taken_0x4dffa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x4DFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFA8u;
        // 0x4dffac: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dffa8) {
            ctx->pc = 0x4E01CCu;
            goto label_4e01cc;
        }
    }
    ctx->pc = 0x4DFFB0u;
label_4dffb0:
    // 0x4dffb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dffb4:
    // 0x4dffb4: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_4dffb8:
    if (ctx->pc == 0x4DFFB8u) {
        ctx->pc = 0x4DFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFB4u;
        // 0x4dffb8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFFBCu;
        goto label_4dffbc;
    }
    ctx->pc = 0x4DFFB4u;
    {
        const bool branch_taken_0x4dffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dffb4) {
            ctx->pc = 0x4DFFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFFB4u;
            // 0x4dffb8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E01D0u;
            goto label_4e01d0;
        }
    }
    ctx->pc = 0x4DFFBCu;
label_4dffbc:
    // 0x4dffbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4dffbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4dffc0:
    // 0x4dffc0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4dffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4dffc4:
    // 0x4dffc4: 0x0  nop
    ctx->pc = 0x4dffc4u;
    // NOP
label_4dffc8:
    // 0x4dffc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4dffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4dffcc:
    // 0x4dffcc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x4dffccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4dffd0:
    // 0x4dffd0: 0x1464003a  bne         $v1, $a0, . + 4 + (0x3A << 2)
label_4dffd4:
    if (ctx->pc == 0x4DFFD4u) {
        ctx->pc = 0x4DFFD8u;
        goto label_4dffd8;
    }
    ctx->pc = 0x4DFFD0u;
    {
        const bool branch_taken_0x4dffd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4dffd0) {
            ctx->pc = 0x4E00BCu;
            goto label_4e00bc;
        }
    }
    ctx->pc = 0x4DFFD8u;
label_4dffd8:
    // 0x4dffd8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4dffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4dffdc:
    // 0x4dffdc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_4dffe0:
    if (ctx->pc == 0x4DFFE0u) {
        ctx->pc = 0x4DFFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFDCu;
        // 0x4dffe0: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFFE4u;
        goto label_4dffe4;
    }
    ctx->pc = 0x4DFFDCu;
    {
        const bool branch_taken_0x4dffdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dffdc) {
            ctx->pc = 0x4DFFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFFDCu;
            // 0x4dffe0: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFFFCu;
            goto label_4dfffc;
        }
    }
    ctx->pc = 0x4DFFE4u;
label_4dffe4:
    // 0x4dffe4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4dffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4dffe8:
    // 0x4dffe8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4dffec:
    if (ctx->pc == 0x4DFFECu) {
        ctx->pc = 0x4DFFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFE8u;
        // 0x4dffec: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFFF0u;
        goto label_4dfff0;
    }
    ctx->pc = 0x4DFFE8u;
    {
        const bool branch_taken_0x4dffe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4dffe8) {
            ctx->pc = 0x4DFFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFFE8u;
            // 0x4dffec: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFFFCu;
            goto label_4dfffc;
        }
    }
    ctx->pc = 0x4DFFF0u;
label_4dfff0:
    // 0x4dfff0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4dfff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4dfff4:
    // 0x4dfff4: 0x10000038  b           . + 4 + (0x38 << 2)
label_4dfff8:
    if (ctx->pc == 0x4DFFF8u) {
        ctx->pc = 0x4DFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFF4u;
        // 0x4dfff8: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFFFCu;
        goto label_4dfffc;
    }
    ctx->pc = 0x4DFFF4u;
    {
        const bool branch_taken_0x4dfff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFFF4u;
        // 0x4dfff8: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dfff4) {
            ctx->pc = 0x4E00D8u;
            goto label_4e00d8;
        }
    }
    ctx->pc = 0x4DFFFCu;
label_4dfffc:
    // 0x4dfffc: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4dfffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0000:
    // 0x4e0000: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e0004:
    if (ctx->pc == 0x4E0004u) {
        ctx->pc = 0x4E0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0000u;
        // 0x4e0004: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0008u;
        goto label_4e0008;
    }
    ctx->pc = 0x4E0000u;
    {
        const bool branch_taken_0x4e0000 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e0000) {
            ctx->pc = 0x4E0004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0000u;
            // 0x4e0004: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0058u;
            goto label_4e0058;
        }
    }
    ctx->pc = 0x4E0008u;
label_4e0008:
    // 0x4e0008: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e000c:
    // 0x4e000c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e000cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e0010:
    // 0x4e0010: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x4e0010u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_4e0014:
    // 0x4e0014: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4e0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e0018:
    // 0x4e0018: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e001c:
    if (ctx->pc == 0x4E001Cu) {
        ctx->pc = 0x4E001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0018u;
        // 0x4e001c: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0020u;
        goto label_4e0020;
    }
    ctx->pc = 0x4E0018u;
    {
        const bool branch_taken_0x4e0018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0018) {
            ctx->pc = 0x4E001Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0018u;
            // 0x4e001c: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0020u;
            goto label_4e0020;
        }
    }
    ctx->pc = 0x4E0020u;
label_4e0020:
    // 0x4e0020: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0024:
    // 0x4e0024: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e0024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e0028:
    // 0x4e0028: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e002c:
    // 0x4e002c: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e0030:
    if (ctx->pc == 0x4E0030u) {
        ctx->pc = 0x4E0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E002Cu;
        // 0x4e0030: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0034u;
        goto label_4e0034;
    }
    ctx->pc = 0x4E002Cu;
    {
        const bool branch_taken_0x4e002c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e002c) {
            ctx->pc = 0x4E0030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E002Cu;
            // 0x4e0030: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E003Cu;
            goto label_4e003c;
        }
    }
    ctx->pc = 0x4E0034u;
label_4e0034:
    // 0x4e0034: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0038:
    if (ctx->pc == 0x4E0038u) {
        ctx->pc = 0x4E0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0034u;
        // 0x4e0038: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E003Cu;
        goto label_4e003c;
    }
    ctx->pc = 0x4E0034u;
    {
        const bool branch_taken_0x4e0034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0034u;
        // 0x4e0038: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0034) {
            ctx->pc = 0x4E004Cu;
            goto label_4e004c;
        }
    }
    ctx->pc = 0x4E003Cu;
label_4e003c:
    // 0x4e003c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e0040:
    // 0x4e0040: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e0044:
    if (ctx->pc == 0x4E0044u) {
        ctx->pc = 0x4E0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0040u;
        // 0x4e0044: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0048u;
        goto label_4e0048;
    }
    ctx->pc = 0x4E0040u;
    {
        const bool branch_taken_0x4e0040 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0040) {
            ctx->pc = 0x4E0044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0040u;
            // 0x4e0044: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E004Cu;
            goto label_4e004c;
        }
    }
    ctx->pc = 0x4E0048u;
label_4e0048:
    // 0x4e0048: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4e0048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_4e004c:
    // 0x4e004c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x4e004cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_4e0050:
    // 0x4e0050: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e0050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e0054:
    // 0x4e0054: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0058:
    // 0x4e0058: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e0058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e005c:
    // 0x4e005c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0060:
    // 0x4e0060: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e0060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0064:
    // 0x4e0064: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e0064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e0068:
    // 0x4e0068: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e006c:
    // 0x4e006c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0070:
    // 0x4e0070: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x4e0070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e0074:
    // 0x4e0074: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e0074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0078:
    // 0x4e0078: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e0078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e007c:
    // 0x4e007c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x4e007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4e0080:
    // 0x4e0080: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0084:
    if (ctx->pc == 0x4E0084u) {
        ctx->pc = 0x4E0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0080u;
        // 0x4e0084: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0088u;
        goto label_4e0088;
    }
    ctx->pc = 0x4E0080u;
    {
        const bool branch_taken_0x4e0080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0080) {
            ctx->pc = 0x4E0084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0080u;
            // 0x4e0084: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0088u;
            goto label_4e0088;
        }
    }
    ctx->pc = 0x4E0088u;
label_4e0088:
    // 0x4e0088: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e008c:
    // 0x4e008c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e008cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e0090:
    // 0x4e0090: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0094:
    // 0x4e0094: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e0098:
    if (ctx->pc == 0x4E0098u) {
        ctx->pc = 0x4E0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0094u;
        // 0x4e0098: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E009Cu;
        goto label_4e009c;
    }
    ctx->pc = 0x4E0094u;
    {
        const bool branch_taken_0x4e0094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0094) {
            ctx->pc = 0x4E0098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0094u;
            // 0x4e0098: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E00A4u;
            goto label_4e00a4;
        }
    }
    ctx->pc = 0x4E009Cu;
label_4e009c:
    // 0x4e009c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e00a0:
    if (ctx->pc == 0x4E00A0u) {
        ctx->pc = 0x4E00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E009Cu;
        // 0x4e00a0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E00A4u;
        goto label_4e00a4;
    }
    ctx->pc = 0x4E009Cu;
    {
        const bool branch_taken_0x4e009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E009Cu;
        // 0x4e00a0: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e009c) {
            ctx->pc = 0x4E00B4u;
            goto label_4e00b4;
        }
    }
    ctx->pc = 0x4E00A4u;
label_4e00a4:
    // 0x4e00a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e00a8:
    // 0x4e00a8: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e00ac:
    if (ctx->pc == 0x4E00ACu) {
        ctx->pc = 0x4E00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00A8u;
        // 0x4e00ac: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E00B0u;
        goto label_4e00b0;
    }
    ctx->pc = 0x4E00A8u;
    {
        const bool branch_taken_0x4e00a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e00a8) {
            ctx->pc = 0x4E00ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E00A8u;
            // 0x4e00ac: 0xac660008  sw          $a2, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E00B4u;
            goto label_4e00b4;
        }
    }
    ctx->pc = 0x4E00B0u;
label_4e00b0:
    // 0x4e00b0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x4e00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_4e00b4:
    // 0x4e00b4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e00b8:
    if (ctx->pc == 0x4E00B8u) {
        ctx->pc = 0x4E00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00B4u;
        // 0x4e00b8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E00BCu;
        goto label_4e00bc;
    }
    ctx->pc = 0x4E00B4u;
    {
        const bool branch_taken_0x4e00b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00B4u;
        // 0x4e00b8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e00b4) {
            ctx->pc = 0x4E01ACu;
            goto label_4e01ac;
        }
    }
    ctx->pc = 0x4E00BCu;
label_4e00bc:
    // 0x4e00bc: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_4e00c0:
    if (ctx->pc == 0x4E00C0u) {
        ctx->pc = 0x4E00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00BCu;
        // 0x4e00c0: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E00C4u;
        goto label_4e00c4;
    }
    ctx->pc = 0x4E00BCu;
    {
        const bool branch_taken_0x4e00bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e00bc) {
            ctx->pc = 0x4E00C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E00BCu;
            // 0x4e00c0: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E00F0u;
            goto label_4e00f0;
        }
    }
    ctx->pc = 0x4E00C4u;
label_4e00c4:
    // 0x4e00c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4e00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e00c8:
    // 0x4e00c8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4e00cc:
    if (ctx->pc == 0x4E00CCu) {
        ctx->pc = 0x4E00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00C8u;
        // 0x4e00cc: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E00D0u;
        goto label_4e00d0;
    }
    ctx->pc = 0x4E00C8u;
    {
        const bool branch_taken_0x4e00c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e00c8) {
            ctx->pc = 0x4E00CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E00C8u;
            // 0x4e00cc: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E00F0u;
            goto label_4e00f0;
        }
    }
    ctx->pc = 0x4E00D0u;
label_4e00d0:
    // 0x4e00d0: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x4e00d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_4e00d4:
    // 0x4e00d4: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x4e00d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_4e00d8:
    // 0x4e00d8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e00dc:
    // 0x4e00dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4e00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e00e0:
    // 0x4e00e0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4e00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4e00e4:
    // 0x4e00e4: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e00e8:
    // 0x4e00e8: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e00ec:
    if (ctx->pc == 0x4E00ECu) {
        ctx->pc = 0x4E00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00E8u;
        // 0x4e00ec: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E00F0u;
        goto label_4e00f0;
    }
    ctx->pc = 0x4E00E8u;
    {
        const bool branch_taken_0x4e00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00E8u;
        // 0x4e00ec: 0x8c480004  lw          $t0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e00e8) {
            ctx->pc = 0x4E01B0u;
            goto label_4e01b0;
        }
    }
    ctx->pc = 0x4E00F0u;
label_4e00f0:
    // 0x4e00f0: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x4e00f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e00f4:
    // 0x4e00f4: 0x55040015  bnel        $t0, $a0, . + 4 + (0x15 << 2)
label_4e00f8:
    if (ctx->pc == 0x4E00F8u) {
        ctx->pc = 0x4E00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E00F4u;
        // 0x4e00f8: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E00FCu;
        goto label_4e00fc;
    }
    ctx->pc = 0x4E00F4u;
    {
        const bool branch_taken_0x4e00f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e00f4) {
            ctx->pc = 0x4E00F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E00F4u;
            // 0x4e00f8: 0x8d020004  lw          $v0, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E014Cu;
            goto label_4e014c;
        }
    }
    ctx->pc = 0x4E00FCu;
label_4e00fc:
    // 0x4e00fc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0100:
    // 0x4e0100: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x4e0100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e0104:
    // 0x4e0104: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x4e0104u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_4e0108:
    // 0x4e0108: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4e0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e010c:
    // 0x4e010c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0110:
    if (ctx->pc == 0x4E0110u) {
        ctx->pc = 0x4E0110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E010Cu;
        // 0x4e0110: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0114u;
        goto label_4e0114;
    }
    ctx->pc = 0x4E010Cu;
    {
        const bool branch_taken_0x4e010c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e010c) {
            ctx->pc = 0x4E0110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E010Cu;
            // 0x4e0110: 0xac480004  sw          $t0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0114u;
            goto label_4e0114;
        }
    }
    ctx->pc = 0x4E0114u;
label_4e0114:
    // 0x4e0114: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0118:
    // 0x4e0118: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e0118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e011c:
    // 0x4e011c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e011cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0120:
    // 0x4e0120: 0x55030003  bnel        $t0, $v1, . + 4 + (0x3 << 2)
label_4e0124:
    if (ctx->pc == 0x4E0124u) {
        ctx->pc = 0x4E0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0120u;
        // 0x4e0124: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0128u;
        goto label_4e0128;
    }
    ctx->pc = 0x4E0120u;
    {
        const bool branch_taken_0x4e0120 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0120) {
            ctx->pc = 0x4E0124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0120u;
            // 0x4e0124: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0130u;
            goto label_4e0130;
        }
    }
    ctx->pc = 0x4E0128u;
label_4e0128:
    // 0x4e0128: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e012c:
    if (ctx->pc == 0x4E012Cu) {
        ctx->pc = 0x4E012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0128u;
        // 0x4e012c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0130u;
        goto label_4e0130;
    }
    ctx->pc = 0x4E0128u;
    {
        const bool branch_taken_0x4e0128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0128u;
        // 0x4e012c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0128) {
            ctx->pc = 0x4E0140u;
            goto label_4e0140;
        }
    }
    ctx->pc = 0x4E0130u;
label_4e0130:
    // 0x4e0130: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x4e0130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4e0134:
    // 0x4e0134: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_4e0138:
    if (ctx->pc == 0x4E0138u) {
        ctx->pc = 0x4E0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0134u;
        // 0x4e0138: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E013Cu;
        goto label_4e013c;
    }
    ctx->pc = 0x4E0134u;
    {
        const bool branch_taken_0x4e0134 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e0134) {
            ctx->pc = 0x4E0138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0134u;
            // 0x4e0138: 0xac640008  sw          $a0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0140u;
            goto label_4e0140;
        }
    }
    ctx->pc = 0x4E013Cu;
label_4e013c:
    // 0x4e013c: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x4e013cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_4e0140:
    // 0x4e0140: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x4e0140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_4e0144:
    // 0x4e0144: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x4e0144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_4e0148:
    // 0x4e0148: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e0148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e014c:
    // 0x4e014c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x4e014cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
label_4e0150:
    // 0x4e0150: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0154:
    // 0x4e0154: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4e0154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0158:
    // 0x4e0158: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4e0158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_4e015c:
    // 0x4e015c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x4e015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e0160:
    // 0x4e0160: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4e0160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4e0164:
    // 0x4e0164: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x4e0164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4e0168:
    // 0x4e0168: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e0168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e016c:
    // 0x4e016c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x4e016cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_4e0170:
    // 0x4e0170: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4e0174:
    // 0x4e0174: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4e0178:
    if (ctx->pc == 0x4E0178u) {
        ctx->pc = 0x4E0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0174u;
        // 0x4e0178: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E017Cu;
        goto label_4e017c;
    }
    ctx->pc = 0x4E0174u;
    {
        const bool branch_taken_0x4e0174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e0174) {
            ctx->pc = 0x4E0178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0174u;
            // 0x4e0178: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E017Cu;
            goto label_4e017c;
        }
    }
    ctx->pc = 0x4E017Cu;
label_4e017c:
    // 0x4e017c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4e017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4e0180:
    // 0x4e0180: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x4e0180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_4e0184:
    // 0x4e0184: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e0184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e0188:
    // 0x4e0188: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4e018c:
    if (ctx->pc == 0x4E018Cu) {
        ctx->pc = 0x4E018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0188u;
        // 0x4e018c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0190u;
        goto label_4e0190;
    }
    ctx->pc = 0x4E0188u;
    {
        const bool branch_taken_0x4e0188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e0188) {
            ctx->pc = 0x4E018Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E0188u;
            // 0x4e018c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E0198u;
            goto label_4e0198;
        }
    }
    ctx->pc = 0x4E0190u;
label_4e0190:
    // 0x4e0190: 0x10000005  b           . + 4 + (0x5 << 2)
label_4e0194:
    if (ctx->pc == 0x4E0194u) {
        ctx->pc = 0x4E0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0190u;
        // 0x4e0194: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0198u;
        goto label_4e0198;
    }
    ctx->pc = 0x4E0190u;
    {
        const bool branch_taken_0x4e0190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0190u;
        // 0x4e0194: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e0190) {
            ctx->pc = 0x4E01A8u;
            goto label_4e01a8;
        }
    }
    ctx->pc = 0x4E0198u;
label_4e0198:
    // 0x4e0198: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4e0198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4e019c:
    // 0x4e019c: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
label_4e01a0:
    if (ctx->pc == 0x4E01A0u) {
        ctx->pc = 0x4E01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E019Cu;
        // 0x4e01a0: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E01A4u;
        goto label_4e01a4;
    }
    ctx->pc = 0x4E019Cu;
    {
        const bool branch_taken_0x4e019c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4e019c) {
            ctx->pc = 0x4E01A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E019Cu;
            // 0x4e01a0: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E01A8u;
            goto label_4e01a8;
        }
    }
    ctx->pc = 0x4E01A4u;
label_4e01a4:
    // 0x4e01a4: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x4e01a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_4e01a8:
    // 0x4e01a8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x4e01a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_4e01ac:
    // 0x4e01ac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x4e01acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_4e01b0:
    // 0x4e01b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e01b4:
    // 0x4e01b4: 0x51020006  beql        $t0, $v0, . + 4 + (0x6 << 2)
label_4e01b8:
    if (ctx->pc == 0x4E01B8u) {
        ctx->pc = 0x4E01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E01B4u;
        // 0x4e01b8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E01BCu;
        goto label_4e01bc;
    }
    ctx->pc = 0x4E01B4u;
    {
        const bool branch_taken_0x4e01b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e01b4) {
            ctx->pc = 0x4E01B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E01B4u;
            // 0x4e01b8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E01D0u;
            goto label_4e01d0;
        }
    }
    ctx->pc = 0x4E01BCu;
label_4e01bc:
    // 0x4e01bc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x4e01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_4e01c0:
    // 0x4e01c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e01c4:
    // 0x4e01c4: 0x5060ff80  beql        $v1, $zero, . + 4 + (-0x80 << 2)
label_4e01c8:
    if (ctx->pc == 0x4E01C8u) {
        ctx->pc = 0x4E01C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E01C4u;
        // 0x4e01c8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E01CCu;
        goto label_4e01cc;
    }
    ctx->pc = 0x4E01C4u;
    {
        const bool branch_taken_0x4e01c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e01c4) {
            ctx->pc = 0x4E01C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E01C4u;
            // 0x4e01c8: 0x8d030004  lw          $v1, 0x4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4dffc8;
        }
    }
    ctx->pc = 0x4E01CCu;
label_4e01cc:
    // 0x4e01cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e01d0:
    // 0x4e01d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e01d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e01d4:
    // 0x4e01d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e01d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e01d8:
    // 0x4e01d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e01d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e01dc:
    // 0x4e01dc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4e01dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_4e01e0:
    // 0x4e01e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e01e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e01e4:
    // 0x4e01e4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4e01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4e01e8:
    // 0x4e01e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e01e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e01ec:
    // 0x4e01ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e01f0:
    // 0x4e01f0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x4e01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_4e01f4:
    // 0x4e01f4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_4e01f8:
    // 0x4e01f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e01f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e01fc:
    // 0x4e01fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e01fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e0200:
    // 0x4e0200: 0x3e00008  jr          $ra
label_4e0204:
    if (ctx->pc == 0x4E0204u) {
        ctx->pc = 0x4E0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0200u;
        // 0x4e0204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E0208u;
        goto label_fallthrough_0x4e0200;
    }
    ctx->pc = 0x4E0200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0200u;
        // 0x4e0204: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e0200:
    ctx->pc = 0x4E0208u;
}

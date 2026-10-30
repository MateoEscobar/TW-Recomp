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

// Function: sub_004A0050
// Address: 0x4a0050 - 0x4a0200
void sub_004A0050_0x4a0050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0050_0x4a0050");
#endif

    switch (ctx->pc) {
        case 0x4a0050u: goto label_4a0050;
        case 0x4a0054u: goto label_4a0054;
        case 0x4a0058u: goto label_4a0058;
        case 0x4a005cu: goto label_4a005c;
        case 0x4a0060u: goto label_4a0060;
        case 0x4a0064u: goto label_4a0064;
        case 0x4a0068u: goto label_4a0068;
        case 0x4a006cu: goto label_4a006c;
        case 0x4a0070u: goto label_4a0070;
        case 0x4a0074u: goto label_4a0074;
        case 0x4a0078u: goto label_4a0078;
        case 0x4a007cu: goto label_4a007c;
        case 0x4a0080u: goto label_4a0080;
        case 0x4a0084u: goto label_4a0084;
        case 0x4a0088u: goto label_4a0088;
        case 0x4a008cu: goto label_4a008c;
        case 0x4a0090u: goto label_4a0090;
        case 0x4a0094u: goto label_4a0094;
        case 0x4a0098u: goto label_4a0098;
        case 0x4a009cu: goto label_4a009c;
        case 0x4a00a0u: goto label_4a00a0;
        case 0x4a00a4u: goto label_4a00a4;
        case 0x4a00a8u: goto label_4a00a8;
        case 0x4a00acu: goto label_4a00ac;
        case 0x4a00b0u: goto label_4a00b0;
        case 0x4a00b4u: goto label_4a00b4;
        case 0x4a00b8u: goto label_4a00b8;
        case 0x4a00bcu: goto label_4a00bc;
        case 0x4a00c0u: goto label_4a00c0;
        case 0x4a00c4u: goto label_4a00c4;
        case 0x4a00c8u: goto label_4a00c8;
        case 0x4a00ccu: goto label_4a00cc;
        case 0x4a00d0u: goto label_4a00d0;
        case 0x4a00d4u: goto label_4a00d4;
        case 0x4a00d8u: goto label_4a00d8;
        case 0x4a00dcu: goto label_4a00dc;
        case 0x4a00e0u: goto label_4a00e0;
        case 0x4a00e4u: goto label_4a00e4;
        case 0x4a00e8u: goto label_4a00e8;
        case 0x4a00ecu: goto label_4a00ec;
        case 0x4a00f0u: goto label_4a00f0;
        case 0x4a00f4u: goto label_4a00f4;
        case 0x4a00f8u: goto label_4a00f8;
        case 0x4a00fcu: goto label_4a00fc;
        case 0x4a0100u: goto label_4a0100;
        case 0x4a0104u: goto label_4a0104;
        case 0x4a0108u: goto label_4a0108;
        case 0x4a010cu: goto label_4a010c;
        case 0x4a0110u: goto label_4a0110;
        case 0x4a0114u: goto label_4a0114;
        case 0x4a0118u: goto label_4a0118;
        case 0x4a011cu: goto label_4a011c;
        case 0x4a0120u: goto label_4a0120;
        case 0x4a0124u: goto label_4a0124;
        case 0x4a0128u: goto label_4a0128;
        case 0x4a012cu: goto label_4a012c;
        case 0x4a0130u: goto label_4a0130;
        case 0x4a0134u: goto label_4a0134;
        case 0x4a0138u: goto label_4a0138;
        case 0x4a013cu: goto label_4a013c;
        case 0x4a0140u: goto label_4a0140;
        case 0x4a0144u: goto label_4a0144;
        case 0x4a0148u: goto label_4a0148;
        case 0x4a014cu: goto label_4a014c;
        case 0x4a0150u: goto label_4a0150;
        case 0x4a0154u: goto label_4a0154;
        case 0x4a0158u: goto label_4a0158;
        case 0x4a015cu: goto label_4a015c;
        case 0x4a0160u: goto label_4a0160;
        case 0x4a0164u: goto label_4a0164;
        case 0x4a0168u: goto label_4a0168;
        case 0x4a016cu: goto label_4a016c;
        case 0x4a0170u: goto label_4a0170;
        case 0x4a0174u: goto label_4a0174;
        case 0x4a0178u: goto label_4a0178;
        case 0x4a017cu: goto label_4a017c;
        case 0x4a0180u: goto label_4a0180;
        case 0x4a0184u: goto label_4a0184;
        case 0x4a0188u: goto label_4a0188;
        case 0x4a018cu: goto label_4a018c;
        case 0x4a0190u: goto label_4a0190;
        case 0x4a0194u: goto label_4a0194;
        case 0x4a0198u: goto label_4a0198;
        case 0x4a019cu: goto label_4a019c;
        case 0x4a01a0u: goto label_4a01a0;
        case 0x4a01a4u: goto label_4a01a4;
        case 0x4a01a8u: goto label_4a01a8;
        case 0x4a01acu: goto label_4a01ac;
        case 0x4a01b0u: goto label_4a01b0;
        case 0x4a01b4u: goto label_4a01b4;
        case 0x4a01b8u: goto label_4a01b8;
        case 0x4a01bcu: goto label_4a01bc;
        case 0x4a01c0u: goto label_4a01c0;
        case 0x4a01c4u: goto label_4a01c4;
        case 0x4a01c8u: goto label_4a01c8;
        case 0x4a01ccu: goto label_4a01cc;
        case 0x4a01d0u: goto label_4a01d0;
        case 0x4a01d4u: goto label_4a01d4;
        case 0x4a01d8u: goto label_4a01d8;
        case 0x4a01dcu: goto label_4a01dc;
        case 0x4a01e0u: goto label_4a01e0;
        case 0x4a01e4u: goto label_4a01e4;
        case 0x4a01e8u: goto label_4a01e8;
        case 0x4a01ecu: goto label_4a01ec;
        case 0x4a01f0u: goto label_4a01f0;
        case 0x4a01f4u: goto label_4a01f4;
        case 0x4a01f8u: goto label_4a01f8;
        case 0x4a01fcu: goto label_4a01fc;
        default: break;
    }

    ctx->pc = 0x4a0050u;

label_4a0050:
    // 0x4a0050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a0054:
    // 0x4a0054: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4a0054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a0058:
    // 0x4a0058: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a005c:
    // 0x4a005c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4a005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a0060:
    // 0x4a0060: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a0060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a0064:
    // 0x4a0064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a0064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a0068:
    // 0x4a0068: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a0068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a006c:
    // 0x4a006c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4a0070:
    // 0x4a0070: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4a0070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a0074:
    // 0x4a0074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a0078:
    // 0x4a0078: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4a0078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a007c:
    // 0x4a007c: 0x8f90879c  lw          $s0, -0x7864($gp)
    ctx->pc = 0x4a007cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
label_4a0080:
    // 0x4a0080: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4a0080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a0084:
    // 0x4a0084: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x4a0084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a0088:
    // 0x4a0088: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x4a0088u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4a008c:
    // 0x4a008c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a0090:
    // 0x4a0090: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a0090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0094:
    // 0x4a0094: 0x40f809  jalr        $v0
label_4a0098:
    if (ctx->pc == 0x4A0098u) {
        ctx->pc = 0x4A0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0094u;
        // 0x4a0098: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A009Cu;
        goto label_4a009c;
    }
    ctx->pc = 0x4A0094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A009Cu);
        ctx->pc = 0x4A0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0094u;
        // 0x4a0098: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0094u, 0x4A009Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A009Cu;
label_4a009c:
    // 0x4a009c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a009cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4a00a0:
    // 0x4a00a0: 0x12000051  beqz        $s0, . + 4 + (0x51 << 2)
label_4a00a4:
    if (ctx->pc == 0x4A00A4u) {
        ctx->pc = 0x4A00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00A0u;
        // 0x4a00a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A00A8u;
        goto label_4a00a8;
    }
    ctx->pc = 0x4A00A0u;
    {
        const bool branch_taken_0x4a00a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A00A0u;
        // 0x4a00a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a00a0) {
            ctx->pc = 0x4A01E8u;
            goto label_4a01e8;
        }
    }
    ctx->pc = 0x4A00A8u;
label_4a00a8:
    // 0x4a00a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4a00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_4a00ac:
    // 0x4a00ac: 0x3442000e  ori         $v0, $v0, 0xE
    ctx->pc = 0x4a00acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14);
label_4a00b0:
    // 0x4a00b0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x4a00b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_4a00b4:
    // 0x4a00b4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x4a00b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_4a00b8:
    // 0x4a00b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a00b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a00bc:
    // 0x4a00bc: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x4a00bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_4a00c0:
    // 0x4a00c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4a00c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_4a00c4:
    // 0x4a00c4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4a00c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4a00c8:
    // 0x4a00c8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4a00c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_4a00cc:
    // 0x4a00cc: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x4a00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a00d0:
    // 0x4a00d0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a00d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a00d4:
    // 0x4a00d4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a00d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a00d8:
    // 0x4a00d8: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x4a00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_4a00dc:
    // 0x4a00dc: 0x3403f819  ori         $v1, $zero, 0xF819
    ctx->pc = 0x4a00dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63513);
label_4a00e0:
    // 0x4a00e0: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x4a00e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
label_4a00e4:
    // 0x4a00e4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x4a00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_4a00e8:
    // 0x4a00e8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x4a00e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_4a00ec:
    // 0x4a00ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4a00ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4a00f0:
    // 0x4a00f0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x4a00f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_4a00f4:
    // 0x4a00f4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4a00f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4a00f8:
    // 0x4a00f8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4a00f8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_4a00fc:
    // 0x4a00fc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4a00fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_4a0100:
    // 0x4a0100: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4a0100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4a0104:
    // 0x4a0104: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0104u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0108:
    // 0x4a0108: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x4a0108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_4a010c:
    // 0x4a010c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4a010cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_4a0110:
    // 0x4a0110: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4a0110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4a0114:
    // 0x4a0114: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0118:
    // 0x4a0118: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x4a0118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_4a011c:
    // 0x4a011c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x4a011cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_4a0120:
    // 0x4a0120: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x4a0120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_4a0124:
    // 0x4a0124: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0128:
    // 0x4a0128: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x4a0128u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_4a012c:
    // 0x4a012c: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x4a012cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_4a0130:
    // 0x4a0130: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x4a0130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_4a0134:
    // 0x4a0134: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0138:
    // 0x4a0138: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x4a0138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_4a013c:
    // 0x4a013c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x4a013cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_4a0140:
    // 0x4a0140: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x4a0140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_4a0144:
    // 0x4a0144: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0144u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0148:
    // 0x4a0148: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x4a0148u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_4a014c:
    // 0x4a014c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x4a014cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_4a0150:
    // 0x4a0150: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x4a0150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_4a0154:
    // 0x4a0154: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0154u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0158:
    // 0x4a0158: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x4a0158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_4a015c:
    // 0x4a015c: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x4a015cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_4a0160:
    // 0x4a0160: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x4a0160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_4a0164:
    // 0x4a0164: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0168:
    // 0x4a0168: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x4a0168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_4a016c:
    // 0x4a016c: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x4a016cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a0170:
    // 0x4a0170: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a0170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a0174:
    // 0x4a0174: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0174u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0178:
    // 0x4a0178: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x4a0178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_4a017c:
    // 0x4a017c: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a017cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a0180:
    // 0x4a0180: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a0180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a0184:
    // 0x4a0184: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0188:
    // 0x4a0188: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x4a0188u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_4a018c:
    // 0x4a018c: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a018cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a0190:
    // 0x4a0190: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a0190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a0194:
    // 0x4a0194: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0198:
    // 0x4a0198: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x4a0198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_4a019c:
    // 0x4a019c: 0x7c8200a0  sq          $v0, 0xA0($a0)
    ctx->pc = 0x4a019cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 2));
label_4a01a0:
    // 0x4a01a0: 0x248300b0  addiu       $v1, $a0, 0xB0
    ctx->pc = 0x4a01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_4a01a4:
    // 0x4a01a4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a01a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a01a8:
    // 0x4a01a8: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x4a01a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_4a01ac:
    // 0x4a01ac: 0x7c8200b0  sq          $v0, 0xB0($a0)
    ctx->pc = 0x4a01acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), GPR_VEC(ctx, 2));
label_4a01b0:
    // 0x4a01b0: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x4a01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_4a01b4:
    // 0x4a01b4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a01b8:
    // 0x4a01b8: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x4a01b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_4a01bc:
    // 0x4a01bc: 0x7c8200c0  sq          $v0, 0xC0($a0)
    ctx->pc = 0x4a01bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), GPR_VEC(ctx, 2));
label_4a01c0:
    // 0x4a01c0: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x4a01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
label_4a01c4:
    // 0x4a01c4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a01c8:
    // 0x4a01c8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4a01c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_4a01cc:
    // 0x4a01cc: 0x24a5f7a0  addiu       $a1, $a1, -0x860
    ctx->pc = 0x4a01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965152));
label_4a01d0:
    // 0x4a01d0: 0x248300e0  addiu       $v1, $a0, 0xE0
    ctx->pc = 0x4a01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_4a01d4:
    // 0x4a01d4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a01d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a01d8:
    // 0x4a01d8: 0x7c8200d0  sq          $v0, 0xD0($a0)
    ctx->pc = 0x4a01d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), GPR_VEC(ctx, 2));
label_4a01dc:
    // 0x4a01dc: 0xc127ec8  jal         func_49FB20
label_4a01e0:
    if (ctx->pc == 0x4A01E0u) {
        ctx->pc = 0x4A01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A01DCu;
        // 0x4a01e0: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A01E4u;
        goto label_4a01e4;
    }
    ctx->pc = 0x4A01DCu;
    SET_GPR_U32(ctx, 31, 0x4A01E4u);
    ctx->pc = 0x4A01E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A01DCu;
    // 0x4a01e0: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A01DCu, 0x4A01E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A01E4u;
label_4a01e4:
    // 0x4a01e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a01e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a01e8:
    // 0x4a01e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a01e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a01ec:
    // 0x4a01ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a01ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a01f0:
    // 0x4a01f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a01f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a01f4:
    // 0x4a01f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a01f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a01f8:
    // 0x4a01f8: 0x3e00008  jr          $ra
label_4a01fc:
    if (ctx->pc == 0x4A01FCu) {
        ctx->pc = 0x4A01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A01F8u;
        // 0x4a01fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0200u;
        goto label_fallthrough_0x4a01f8;
    }
    ctx->pc = 0x4A01F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A01F8u;
        // 0x4a01fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A01F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a01f8:
    ctx->pc = 0x4A0200u;
}

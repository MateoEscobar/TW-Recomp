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

// Function: sub_0049FEE8
// Address: 0x49fee8 - 0x4a0050
void sub_0049FEE8_0x49fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FEE8_0x49fee8");
#endif

    switch (ctx->pc) {
        case 0x49fee8u: goto label_49fee8;
        case 0x49feecu: goto label_49feec;
        case 0x49fef0u: goto label_49fef0;
        case 0x49fef4u: goto label_49fef4;
        case 0x49fef8u: goto label_49fef8;
        case 0x49fefcu: goto label_49fefc;
        case 0x49ff00u: goto label_49ff00;
        case 0x49ff04u: goto label_49ff04;
        case 0x49ff08u: goto label_49ff08;
        case 0x49ff0cu: goto label_49ff0c;
        case 0x49ff10u: goto label_49ff10;
        case 0x49ff14u: goto label_49ff14;
        case 0x49ff18u: goto label_49ff18;
        case 0x49ff1cu: goto label_49ff1c;
        case 0x49ff20u: goto label_49ff20;
        case 0x49ff24u: goto label_49ff24;
        case 0x49ff28u: goto label_49ff28;
        case 0x49ff2cu: goto label_49ff2c;
        case 0x49ff30u: goto label_49ff30;
        case 0x49ff34u: goto label_49ff34;
        case 0x49ff38u: goto label_49ff38;
        case 0x49ff3cu: goto label_49ff3c;
        case 0x49ff40u: goto label_49ff40;
        case 0x49ff44u: goto label_49ff44;
        case 0x49ff48u: goto label_49ff48;
        case 0x49ff4cu: goto label_49ff4c;
        case 0x49ff50u: goto label_49ff50;
        case 0x49ff54u: goto label_49ff54;
        case 0x49ff58u: goto label_49ff58;
        case 0x49ff5cu: goto label_49ff5c;
        case 0x49ff60u: goto label_49ff60;
        case 0x49ff64u: goto label_49ff64;
        case 0x49ff68u: goto label_49ff68;
        case 0x49ff6cu: goto label_49ff6c;
        case 0x49ff70u: goto label_49ff70;
        case 0x49ff74u: goto label_49ff74;
        case 0x49ff78u: goto label_49ff78;
        case 0x49ff7cu: goto label_49ff7c;
        case 0x49ff80u: goto label_49ff80;
        case 0x49ff84u: goto label_49ff84;
        case 0x49ff88u: goto label_49ff88;
        case 0x49ff8cu: goto label_49ff8c;
        case 0x49ff90u: goto label_49ff90;
        case 0x49ff94u: goto label_49ff94;
        case 0x49ff98u: goto label_49ff98;
        case 0x49ff9cu: goto label_49ff9c;
        case 0x49ffa0u: goto label_49ffa0;
        case 0x49ffa4u: goto label_49ffa4;
        case 0x49ffa8u: goto label_49ffa8;
        case 0x49ffacu: goto label_49ffac;
        case 0x49ffb0u: goto label_49ffb0;
        case 0x49ffb4u: goto label_49ffb4;
        case 0x49ffb8u: goto label_49ffb8;
        case 0x49ffbcu: goto label_49ffbc;
        case 0x49ffc0u: goto label_49ffc0;
        case 0x49ffc4u: goto label_49ffc4;
        case 0x49ffc8u: goto label_49ffc8;
        case 0x49ffccu: goto label_49ffcc;
        case 0x49ffd0u: goto label_49ffd0;
        case 0x49ffd4u: goto label_49ffd4;
        case 0x49ffd8u: goto label_49ffd8;
        case 0x49ffdcu: goto label_49ffdc;
        case 0x49ffe0u: goto label_49ffe0;
        case 0x49ffe4u: goto label_49ffe4;
        case 0x49ffe8u: goto label_49ffe8;
        case 0x49ffecu: goto label_49ffec;
        case 0x49fff0u: goto label_49fff0;
        case 0x49fff4u: goto label_49fff4;
        case 0x49fff8u: goto label_49fff8;
        case 0x49fffcu: goto label_49fffc;
        case 0x4a0000u: goto label_4a0000;
        case 0x4a0004u: goto label_4a0004;
        case 0x4a0008u: goto label_4a0008;
        case 0x4a000cu: goto label_4a000c;
        case 0x4a0010u: goto label_4a0010;
        case 0x4a0014u: goto label_4a0014;
        case 0x4a0018u: goto label_4a0018;
        case 0x4a001cu: goto label_4a001c;
        case 0x4a0020u: goto label_4a0020;
        case 0x4a0024u: goto label_4a0024;
        case 0x4a0028u: goto label_4a0028;
        case 0x4a002cu: goto label_4a002c;
        case 0x4a0030u: goto label_4a0030;
        case 0x4a0034u: goto label_4a0034;
        case 0x4a0038u: goto label_4a0038;
        case 0x4a003cu: goto label_4a003c;
        case 0x4a0040u: goto label_4a0040;
        case 0x4a0044u: goto label_4a0044;
        case 0x4a0048u: goto label_4a0048;
        case 0x4a004cu: goto label_4a004c;
        default: break;
    }

    ctx->pc = 0x49fee8u;

label_49fee8:
    // 0x49fee8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49fee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49feec:
    // 0x49feec: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x49feecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49fef0:
    // 0x49fef0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49fef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_49fef4:
    // 0x49fef4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x49fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_49fef8:
    // 0x49fef8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x49fef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49fefc:
    // 0x49fefc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x49fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_49ff00:
    // 0x49ff00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x49ff00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49ff04:
    // 0x49ff04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_49ff08:
    // 0x49ff08: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x49ff08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49ff0c:
    // 0x49ff0c: 0x8f908798  lw          $s0, -0x7868($gp)
    ctx->pc = 0x49ff0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
label_49ff10:
    // 0x49ff10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49ff10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49ff14:
    // 0x49ff14: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x49ff14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_49ff18:
    // 0x49ff18: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x49ff18u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49ff1c:
    // 0x49ff1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ff20:
    // 0x49ff20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x49ff20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49ff24:
    // 0x49ff24: 0x40f809  jalr        $v0
label_49ff28:
    if (ctx->pc == 0x49FF28u) {
        ctx->pc = 0x49FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF24u;
        // 0x49ff28: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49FF2Cu;
        goto label_49ff2c;
    }
    ctx->pc = 0x49FF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49FF2Cu);
        ctx->pc = 0x49FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF24u;
        // 0x49ff28: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FF24u, 0x49FF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49FF2Cu;
label_49ff2c:
    // 0x49ff2c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x49ff2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_49ff30:
    // 0x49ff30: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
label_49ff34:
    if (ctx->pc == 0x49FF34u) {
        ctx->pc = 0x49FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF30u;
        // 0x49ff34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49FF38u;
        goto label_49ff38;
    }
    ctx->pc = 0x49FF30u;
    {
        const bool branch_taken_0x49ff30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FF30u;
        // 0x49ff34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ff30) {
            ctx->pc = 0x4A0038u;
            goto label_4a0038;
        }
    }
    ctx->pc = 0x49FF38u;
label_49ff38:
    // 0x49ff38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x49ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_49ff3c:
    // 0x49ff3c: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x49ff3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_49ff40:
    // 0x49ff40: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x49ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_49ff44:
    // 0x49ff44: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x49ff44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
label_49ff48:
    // 0x49ff48: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x49ff48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_49ff4c:
    // 0x49ff4c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x49ff4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_49ff50:
    // 0x49ff50: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x49ff50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_49ff54:
    // 0x49ff54: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x49ff54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_49ff58:
    // 0x49ff58: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x49ff58u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_49ff5c:
    // 0x49ff5c: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x49ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_49ff60:
    // 0x49ff60: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x49ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_49ff64:
    // 0x49ff64: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x49ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_49ff68:
    // 0x49ff68: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x49ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
label_49ff6c:
    // 0x49ff6c: 0x3403f811  ori         $v1, $zero, 0xF811
    ctx->pc = 0x49ff6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63505);
label_49ff70:
    // 0x49ff70: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x49ff70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
label_49ff74:
    // 0x49ff74: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x49ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_49ff78:
    // 0x49ff78: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x49ff78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_49ff7c:
    // 0x49ff7c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x49ff7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_49ff80:
    // 0x49ff80: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x49ff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_49ff84:
    // 0x49ff84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x49ff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_49ff88:
    // 0x49ff88: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x49ff88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_49ff8c:
    // 0x49ff8c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x49ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_49ff90:
    // 0x49ff90: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x49ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_49ff94:
    // 0x49ff94: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49ff98:
    // 0x49ff98: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x49ff98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_49ff9c:
    // 0x49ff9c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x49ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_49ffa0:
    // 0x49ffa0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x49ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_49ffa4:
    // 0x49ffa4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49ffa8:
    // 0x49ffa8: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x49ffa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_49ffac:
    // 0x49ffac: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x49ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
label_49ffb0:
    // 0x49ffb0: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x49ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_49ffb4:
    // 0x49ffb4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49ffb8:
    // 0x49ffb8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x49ffb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_49ffbc:
    // 0x49ffbc: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x49ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_49ffc0:
    // 0x49ffc0: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x49ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_49ffc4:
    // 0x49ffc4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49ffc8:
    // 0x49ffc8: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x49ffc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_49ffcc:
    // 0x49ffcc: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x49ffccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_49ffd0:
    // 0x49ffd0: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x49ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_49ffd4:
    // 0x49ffd4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49ffd8:
    // 0x49ffd8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x49ffd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_49ffdc:
    // 0x49ffdc: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x49ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
label_49ffe0:
    // 0x49ffe0: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x49ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_49ffe4:
    // 0x49ffe4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49ffe8:
    // 0x49ffe8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x49ffe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_49ffec:
    // 0x49ffec: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x49ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
label_49fff0:
    // 0x49fff0: 0x24830070  addiu       $v1, $a0, 0x70
    ctx->pc = 0x49fff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_49fff4:
    // 0x49fff4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_49fff8:
    // 0x49fff8: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x49fff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_49fffc:
    // 0x49fffc: 0x7c820070  sq          $v0, 0x70($a0)
    ctx->pc = 0x49fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 2));
label_4a0000:
    // 0x4a0000: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x4a0000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a0004:
    // 0x4a0004: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0004u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0008:
    // 0x4a0008: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x4a0008u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_4a000c:
    // 0x4a000c: 0x7c820080  sq          $v0, 0x80($a0)
    ctx->pc = 0x4a000cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 2));
label_4a0010:
    // 0x4a0010: 0x24830090  addiu       $v1, $a0, 0x90
    ctx->pc = 0x4a0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
label_4a0014:
    // 0x4a0014: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x4a0014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
label_4a0018:
    // 0x4a0018: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x4a0018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_4a001c:
    // 0x4a001c: 0x24a5f7a0  addiu       $a1, $a1, -0x860
    ctx->pc = 0x4a001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965152));
label_4a0020:
    // 0x4a0020: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x4a0020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
label_4a0024:
    // 0x4a0024: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x4a0024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_4a0028:
    // 0x4a0028: 0x7c820090  sq          $v0, 0x90($a0)
    ctx->pc = 0x4a0028u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 2));
label_4a002c:
    // 0x4a002c: 0xc127ec8  jal         func_49FB20
label_4a0030:
    if (ctx->pc == 0x4A0030u) {
        ctx->pc = 0x4A0030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A002Cu;
        // 0x4a0030: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0034u;
        goto label_4a0034;
    }
    ctx->pc = 0x4A002Cu;
    SET_GPR_U32(ctx, 31, 0x4A0034u);
    ctx->pc = 0x4A0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A002Cu;
    // 0x4a0030: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FB20u, 0x4A002Cu, 0x4A0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0034u;
label_4a0034:
    // 0x4a0034: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a0034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0038:
    // 0x4a0038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a0038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a003c:
    // 0x4a003c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a003cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0040:
    // 0x4a0040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0044:
    // 0x4a0044: 0x3e00008  jr          $ra
label_4a0048:
    if (ctx->pc == 0x4A0048u) {
        ctx->pc = 0x4A0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0044u;
        // 0x4a0048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A004Cu;
        goto label_4a004c;
    }
    ctx->pc = 0x4A0044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0044u;
        // 0x4a0048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A004Cu;
label_4a004c:
    // 0x4a004c: 0x0  nop
    ctx->pc = 0x4a004cu;
    // NOP
    ctx->pc = 0x4a0050u;
}

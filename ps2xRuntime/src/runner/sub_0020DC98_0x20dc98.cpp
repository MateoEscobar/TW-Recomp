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

// Function: sub_0020DC98
// Address: 0x20dc98 - 0x20dfd0
void sub_0020DC98_0x20dc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DC98_0x20dc98");
#endif

    switch (ctx->pc) {
        case 0x20dd04u: goto label_20dd04;
        case 0x20dd30u: goto label_20dd30;
        case 0x20dd5cu: goto label_20dd5c;
        case 0x20def8u: goto label_20def8;
        case 0x20df48u: goto label_20df48;
        case 0x20dfa0u: goto label_20dfa0;
        default: break;
    }

    ctx->pc = 0x20dc98u;

    // 0x20dc98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20dc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20dc9c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20dc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x20dca0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20dca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x20dca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20dca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dca8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x20dcac: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x20dcb0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x20dcb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20dcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x20dcb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20dcbc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x20dcbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x20dcc0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x20dcc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x20dcc4: 0x8e224100  lw          $v0, 0x4100($s1)
    ctx->pc = 0x20dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16640)));
    // 0x20dcc8: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x20DCC8u;
    {
        const bool branch_taken_0x20dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCC8u;
        // 0x20dccc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcc8) {
            ctx->pc = 0x20DFA0u;
            goto label_20dfa0;
        }
    }
    ctx->pc = 0x20DCD0u;
    // 0x20dcd0: 0x26223ce0  addiu       $v0, $s1, 0x3CE0
    ctx->pc = 0x20dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 15584));
    // 0x20dcd4: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x20dcd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x20dcd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20dcd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dcdc: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x20dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x20dce0: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x20dce0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x20dce4: 0x10700003  beq         $v1, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DCE4u;
    {
        const bool branch_taken_0x20dce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x20DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCE4u;
        // 0x20dce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dce4) {
            ctx->pc = 0x20DCF4u;
            goto label_20dcf4;
        }
    }
    ctx->pc = 0x20DCECu;
    // 0x20dcec: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x20dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x20dcf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20dcf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20dcf4:
    // 0x20dcf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DCF4u;
    {
        const bool branch_taken_0x20dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DCF4u;
        // 0x20dcf8: 0x26233de0  addiu       $v1, $s1, 0x3DE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 15840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcf4) {
            ctx->pc = 0x20DD08u;
            goto label_20dd08;
        }
    }
    ctx->pc = 0x20DCFCu;
    // 0x20dcfc: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20DCFCu;
    SET_GPR_U32(ctx, 31, 0x20DD04u);
    ctx->pc = 0x20DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DCFCu;
    // 0x20dd00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20DCFCu, 0x20DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD04u;
label_20dd04:
    // 0x20dd04: 0x26233de0  addiu       $v1, $s1, 0x3DE0
    ctx->pc = 0x20dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 15840));
label_20dd08:
    // 0x20dd08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20dd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd0c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x20dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x20dd10: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DD10u;
    {
        const bool branch_taken_0x20dd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x20DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD10u;
        // 0x20dd14: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd10) {
            ctx->pc = 0x20DD20u;
            goto label_20dd20;
        }
    }
    ctx->pc = 0x20DD18u;
    // 0x20dd18: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x20dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x20dd1c: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x20dd1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20dd20:
    // 0x20dd20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD20u;
    {
        const bool branch_taken_0x20dd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD20u;
        // 0x20dd24: 0x26233ee0  addiu       $v1, $s1, 0x3EE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd20) {
            ctx->pc = 0x20DD34u;
            goto label_20dd34;
        }
    }
    ctx->pc = 0x20DD28u;
    // 0x20dd28: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20DD28u;
    SET_GPR_U32(ctx, 31, 0x20DD30u);
    ctx->pc = 0x20DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD28u;
    // 0x20dd2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20DD28u, 0x20DD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD30u;
label_20dd30:
    // 0x20dd30: 0x26233ee0  addiu       $v1, $s1, 0x3EE0
    ctx->pc = 0x20dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16096));
label_20dd34:
    // 0x20dd34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20dd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd38: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x20dd3c: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DD3Cu;
    {
        const bool branch_taken_0x20dd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x20DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD3Cu;
        // 0x20dd40: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd3c) {
            ctx->pc = 0x20DD4Cu;
            goto label_20dd4c;
        }
    }
    ctx->pc = 0x20DD44u;
    // 0x20dd44: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x20dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x20dd48: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x20dd48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20dd4c:
    // 0x20dd4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD4Cu;
    {
        const bool branch_taken_0x20dd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD4Cu;
        // 0x20dd50: 0x2e420016  sltiu       $v0, $s2, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd4c) {
            ctx->pc = 0x20DD60u;
            goto label_20dd60;
        }
    }
    ctx->pc = 0x20DD54u;
    // 0x20dd54: 0xc0687c4  jal         func_1A1F10
    ctx->pc = 0x20DD54u;
    SET_GPR_U32(ctx, 31, 0x20DD5Cu);
    ctx->pc = 0x20DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DD54u;
    // 0x20dd58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x20DD54u, 0x20DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DD5Cu;
label_20dd5c:
    // 0x20dd5c: 0x2e420016  sltiu       $v0, $s2, 0x16
    ctx->pc = 0x20dd5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_20dd60:
    // 0x20dd60: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x20DD60u;
    {
        const bool branch_taken_0x20dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD60u;
        // 0x20dd64: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd60) {
            ctx->pc = 0x20DE88u;
            goto label_20de88;
        }
    }
    ctx->pc = 0x20DD68u;
    // 0x20dd68: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x20dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x20dd6c: 0x244295d0  addiu       $v0, $v0, -0x6A30
    ctx->pc = 0x20dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940112));
    // 0x20dd70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20dd74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20dd78: 0x800008  jr          $a0
    ctx->pc = 0x20DD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DD80u: goto label_20dd80;
            case 0x20DD88u: goto label_20dd88;
            case 0x20DD90u: goto label_20dd90;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DDA0u: goto label_20dda0;
            case 0x20DDA8u: goto label_20dda8;
            case 0x20DDB0u: goto label_20ddb0;
            case 0x20DDB8u: goto label_20ddb8;
            case 0x20DDC0u: goto label_20ddc0;
            case 0x20DDC8u: goto label_20ddc8;
            case 0x20DE28u: goto label_20de28;
            case 0x20DE88u: goto label_20de88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DD78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20DD80u;
label_20dd80:
    // 0x20dd80: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x20DD80u;
    {
        const bool branch_taken_0x20dd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD80u;
        // 0x20dd84: 0x3c120022  lui         $s2, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd80) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DD88u;
label_20dd88:
    // 0x20dd88: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x20DD88u;
    {
        const bool branch_taken_0x20dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD88u;
        // 0x20dd8c: 0x3c120023  lui         $s2, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd88) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DD90u;
label_20dd90:
    // 0x20dd90: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x20DD90u;
    {
        const bool branch_taken_0x20dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD90u;
        // 0x20dd94: 0x3c12001f  lui         $s2, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd90) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DD98u;
label_20dd98:
    // 0x20dd98: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x20DD98u;
    {
        const bool branch_taken_0x20dd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DD98u;
        // 0x20dd9c: 0x3c12002f  lui         $s2, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd98) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DDA0u;
label_20dda0:
    // 0x20dda0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x20DDA0u;
    {
        const bool branch_taken_0x20dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA0u;
        // 0x20dda4: 0x3c120024  lui         $s2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dda0) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DDA8u;
label_20dda8:
    // 0x20dda8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x20DDA8u;
    {
        const bool branch_taken_0x20dda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDA8u;
        // 0x20ddac: 0x3c120032  lui         $s2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dda8) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DDB0u;
label_20ddb0:
    // 0x20ddb0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x20DDB0u;
    {
        const bool branch_taken_0x20ddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDB0u;
        // 0x20ddb4: 0x3c120030  lui         $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddb0) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DDB8u;
label_20ddb8:
    // 0x20ddb8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x20DDB8u;
    {
        const bool branch_taken_0x20ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDB8u;
        // 0x20ddbc: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddb8) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DDC0u;
label_20ddc0:
    // 0x20ddc0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x20DDC0u;
    {
        const bool branch_taken_0x20ddc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDC0u;
        // 0x20ddc4: 0x3c120020  lui         $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddc0) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DDC8u;
label_20ddc8:
    // 0x20ddc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20ddcc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x20ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x20ddd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ddd4: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x20ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x20ddd8: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20DDD8u;
    {
        const bool branch_taken_0x20ddd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDD8u;
        // 0x20dddc: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddd8) {
            ctx->pc = 0x20DE20u;
            goto label_20de20;
        }
    }
    ctx->pc = 0x20DDE0u;
    // 0x20dde0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x20dde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20dde4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DDE4u;
    {
        const bool branch_taken_0x20dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDE4u;
        // 0x20dde8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dde4) {
            ctx->pc = 0x20DDFCu;
            goto label_20ddfc;
        }
    }
    ctx->pc = 0x20DDECu;
    // 0x20ddec: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x20DDECu;
    {
        const bool branch_taken_0x20ddec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20ddec) {
            ctx->pc = 0x20DDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DDECu;
            // 0x20ddf0: 0x3c12002e  lui         $s2, 0x2E (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)46 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DDF4u;
    // 0x20ddf4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x20DDF4u;
    {
        const bool branch_taken_0x20ddf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DDF4u;
        // 0x20ddf8: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddf4) {
            ctx->pc = 0x20DE90u;
            goto label_20de90;
        }
    }
    ctx->pc = 0x20DDFCu;
label_20ddfc:
    // 0x20ddfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20de00: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DE00u;
    {
        const bool branch_taken_0x20de00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE00u;
        // 0x20de04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de00) {
            ctx->pc = 0x20DE18u;
            goto label_20de18;
        }
    }
    ctx->pc = 0x20DE08u;
    // 0x20de08: 0x50620020  beql        $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20DE08u;
    {
        const bool branch_taken_0x20de08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20de08) {
            ctx->pc = 0x20DE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DE08u;
            // 0x20de0c: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DE10u;
    // 0x20de10: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x20DE10u;
    {
        const bool branch_taken_0x20de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE10u;
        // 0x20de14: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de10) {
            ctx->pc = 0x20DE90u;
            goto label_20de90;
        }
    }
    ctx->pc = 0x20DE18u;
label_20de18:
    // 0x20de18: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20DE18u;
    {
        const bool branch_taken_0x20de18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE18u;
        // 0x20de1c: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de18) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DE20u;
label_20de20:
    // 0x20de20: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20DE20u;
    {
        const bool branch_taken_0x20de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE20u;
        // 0x20de24: 0x3c12002b  lui         $s2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de20) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DE28u;
label_20de28:
    // 0x20de28: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20de28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20de2c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x20de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x20de30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20de30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20de34: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x20de34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x20de38: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20DE38u;
    {
        const bool branch_taken_0x20de38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE38u;
        // 0x20de3c: 0x3c120025  lui         $s2, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de38) {
            ctx->pc = 0x20DE80u;
            goto label_20de80;
        }
    }
    ctx->pc = 0x20DE40u;
    // 0x20de40: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x20de40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20de44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DE44u;
    {
        const bool branch_taken_0x20de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE44u;
        // 0x20de48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de44) {
            ctx->pc = 0x20DE5Cu;
            goto label_20de5c;
        }
    }
    ctx->pc = 0x20DE4Cu;
    // 0x20de4c: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20DE4Cu;
    {
        const bool branch_taken_0x20de4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20de4c) {
            ctx->pc = 0x20DE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DE4Cu;
            // 0x20de50: 0x3c120029  lui         $s2, 0x29 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DE54u;
    // 0x20de54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20DE54u;
    {
        const bool branch_taken_0x20de54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE54u;
        // 0x20de58: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de54) {
            ctx->pc = 0x20DE90u;
            goto label_20de90;
        }
    }
    ctx->pc = 0x20DE5Cu;
label_20de5c:
    // 0x20de5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20de60: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20DE60u;
    {
        const bool branch_taken_0x20de60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE60u;
        // 0x20de64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de60) {
            ctx->pc = 0x20DE78u;
            goto label_20de78;
        }
    }
    ctx->pc = 0x20DE68u;
    // 0x20de68: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DE68u;
    {
        const bool branch_taken_0x20de68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20de68) {
            ctx->pc = 0x20DE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DE68u;
            // 0x20de6c: 0x3c120027  lui         $s2, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)39 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DE70u;
    // 0x20de70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20DE70u;
    {
        const bool branch_taken_0x20de70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE70u;
        // 0x20de74: 0xa3a00030  sb          $zero, 0x30($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de70) {
            ctx->pc = 0x20DE90u;
            goto label_20de90;
        }
    }
    ctx->pc = 0x20DE78u;
label_20de78:
    // 0x20de78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20DE78u;
    {
        const bool branch_taken_0x20de78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE78u;
        // 0x20de7c: 0x3c120028  lui         $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de78) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DE80u;
label_20de80:
    // 0x20de80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20DE80u;
    {
        const bool branch_taken_0x20de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE80u;
        // 0x20de84: 0x3c120026  lui         $s2, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de80) {
            ctx->pc = 0x20DE8Cu;
            goto label_20de8c;
        }
    }
    ctx->pc = 0x20DE88u;
label_20de88:
    // 0x20de88: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x20de88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
label_20de8c:
    // 0x20de8c: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x20de8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
label_20de90:
    // 0x20de90: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x20de90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20de94: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x20de94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20de98: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x20de98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20de9c: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x20de9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x20dea0: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x20dea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20dea4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20dea4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dea8: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x20dea8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x20deac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20deacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20deb0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20deb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20deb4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20deb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20deb8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x20deb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x20debc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x20debcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x20dec0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x20dec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x20dec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20dec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dec8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x20dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20decc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20deccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20ded0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20ded4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20ded4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ded8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20dedc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20dedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dee0: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x20dee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x20dee4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x20dee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dee8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x20dee8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x20deec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20deecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20def0: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x20DEF0u;
    SET_GPR_U32(ctx, 31, 0x20DEF8u);
    ctx->pc = 0x20DEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DEF0u;
    // 0x20def4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x20DEF0u, 0x20DEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEF8u;
label_20def8:
    // 0x20def8: 0xa3a00034  sb          $zero, 0x34($sp)
    ctx->pc = 0x20def8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x20defc: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x20defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x20df00: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x20df00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x20df04: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x20df04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x20df08: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x20df08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x20df0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20df0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df10: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x20df10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20df14: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x20df14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x20df18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20df18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20df1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20df1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20df20: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x20df20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x20df24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20df24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20df28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20df28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20df2c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x20df2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df30: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x20df30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x20df34: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x20df34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20df38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20df38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20df3c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20df3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20df40: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x20DF40u;
    SET_GPR_U32(ctx, 31, 0x20DF48u);
    ctx->pc = 0x20DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF40u;
    // 0x20df44: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x20DF40u, 0x20DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF48u;
label_20df48:
    // 0x20df48: 0xa3b00038  sb          $s0, 0x38($sp)
    ctx->pc = 0x20df48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 16));
    // 0x20df4c: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x20df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x20df50: 0xa0500002  sb          $s0, 0x2($v0)
    ctx->pc = 0x20df50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x20df54: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x20df54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x20df58: 0xa0510003  sb          $s1, 0x3($v0)
    ctx->pc = 0x20df58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 17));
    // 0x20df5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20df5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df60: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x20df60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x20df64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20df64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20df68: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x20df68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x20df6c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x20df6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x20df70: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20df70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20df74: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x20df74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df78: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20df78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20df7c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x20df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20df80: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x20df80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x20df84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20df84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20df88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20df88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20df8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20df8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20df90: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20df90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x20df94: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x20df94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x20df98: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x20DF98u;
    SET_GPR_U32(ctx, 31, 0x20DFA0u);
    ctx->pc = 0x20DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF98u;
    // 0x20df9c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x20DF98u, 0x20DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFA0u;
label_20dfa0:
    // 0x20dfa0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20dfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20dfa4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20dfa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20dfa8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20dfa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20dfac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20dfacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20dfb0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20dfb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20dfb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20dfb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20dfb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20dfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20dfbc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x20dfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20dfc0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x20dfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20dfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x20DFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFC4u;
        // 0x20dfc8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DFCCu;
    // 0x20dfcc: 0x0  nop
    ctx->pc = 0x20dfccu;
    // NOP
    ctx->pc = 0x20dfd0u;
}

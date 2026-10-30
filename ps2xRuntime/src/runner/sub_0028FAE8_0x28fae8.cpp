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

// Function: sub_0028FAE8
// Address: 0x28fae8 - 0x28fbb0
void sub_0028FAE8_0x28fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FAE8_0x28fae8");
#endif

    switch (ctx->pc) {
        case 0x28fb20u: goto label_28fb20;
        case 0x28fb30u: goto label_28fb30;
        case 0x28fb3cu: goto label_28fb3c;
        case 0x28fb90u: goto label_28fb90;
        default: break;
    }

    ctx->pc = 0x28fae8u;

    // 0x28fae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28fae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28faec: 0x3405fc04  ori         $a1, $zero, 0xFC04
    ctx->pc = 0x28faecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64516);
    // 0x28faf0: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x28faf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x28faf4: 0x34a5e800  ori         $a1, $a1, 0xE800
    ctx->pc = 0x28faf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59392);
    // 0x28faf8: 0x528f8  dsll        $a1, $a1, 3
    ctx->pc = 0x28faf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
    // 0x28fafc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28fb00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28fb04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28fb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fb0c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28fb0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fb10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28fb14: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x28fb14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fb18: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x28FB18u;
    SET_GPR_U32(ctx, 31, 0x28FB20u);
    ctx->pc = 0x28FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB18u;
    // 0x28fb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x28FB18u, 0x28FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB20u;
label_28fb20:
    // 0x28fb20: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FB20u;
    {
        const bool branch_taken_0x28fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x28FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB20u;
        // 0x28fb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb20) {
            ctx->pc = 0x28FB34u;
            goto label_28fb34;
        }
    }
    ctx->pc = 0x28FB28u;
    // 0x28fb28: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x28FB28u;
    SET_GPR_U32(ctx, 31, 0x28FB30u);
    ctx->pc = 0x28FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB28u;
    // 0x28fb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x28FB28u, 0x28FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB30u;
label_28fb30:
    // 0x28fb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28fb34:
    // 0x28fb34: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x28FB34u;
    SET_GPR_U32(ctx, 31, 0x28FB3Cu);
    ctx->pc = 0x28FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB34u;
    // 0x28fb38: 0x92100333  lbu         $s0, 0x333($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 819)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x28FB34u, 0x28FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB3Cu;
label_28fb3c:
    // 0x28fb3c: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FB3Cu;
    {
        const bool branch_taken_0x28fb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x28FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB3Cu;
        // 0x28fb40: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb3c) {
            ctx->pc = 0x28FB54u;
            goto label_28fb54;
        }
    }
    ctx->pc = 0x28FB44u;
    // 0x28fb44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FB44u;
    {
        const bool branch_taken_0x28fb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB44u;
        // 0x28fb48: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb44) {
            ctx->pc = 0x28FB60u;
            goto label_28fb60;
        }
    }
    ctx->pc = 0x28FB4Cu;
    // 0x28fb4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28FB4Cu;
    {
        const bool branch_taken_0x28fb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB4Cu;
        // 0x28fb50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb4c) {
            ctx->pc = 0x28FB60u;
            goto label_28fb60;
        }
    }
    ctx->pc = 0x28FB54u;
label_28fb54:
    // 0x28fb54: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28FB54u;
    {
        const bool branch_taken_0x28fb54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FB54u;
        // 0x28fb58: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb54) {
            ctx->pc = 0x28FB60u;
            goto label_28fb60;
        }
    }
    ctx->pc = 0x28FB5Cu;
    // 0x28fb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28fb60:
    // 0x28fb60: 0x240305dc  addiu       $v1, $zero, 0x5DC
    ctx->pc = 0x28fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x28fb64: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x28fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x28fb68: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x28fb68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28fb6c: 0x8c85b734  lw          $a1, -0x48CC($a0)
    ctx->pc = 0x28fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x28fb70: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x28fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x28fb74: 0x8cb00048  lw          $s0, 0x48($a1)
    ctx->pc = 0x28fb74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x28fb78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28fb7c: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x28fb7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x28fb80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FB80u;
    {
        const bool branch_taken_0x28fb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fb80) {
            ctx->pc = 0x28FB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FB80u;
            // 0x28fb84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FB98u;
            goto label_28fb98;
        }
    }
    ctx->pc = 0x28FB88u;
    // 0x28fb88: 0xc0a2b20  jal         func_28AC80
    ctx->pc = 0x28FB88u;
    SET_GPR_U32(ctx, 31, 0x28FB90u);
    ctx->pc = 0x28FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FB88u;
    // 0x28fb8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC80u, 0x28FB88u, 0x28FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB90u;
label_28fb90:
    // 0x28fb90: 0xae300158  sw          $s0, 0x158($s1)
    ctx->pc = 0x28fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 16));
    // 0x28fb94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28fb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28fb98:
    // 0x28fb98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28fb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fb9c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28fb9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fba4: 0x3e00008  jr          $ra
    ctx->pc = 0x28FBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBA4u;
        // 0x28fba8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FBACu;
    // 0x28fbac: 0x0  nop
    ctx->pc = 0x28fbacu;
    // NOP
    ctx->pc = 0x28fbb0u;
}

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

// Function: sub_001B6ED8
// Address: 0x1b6ed8 - 0x1b6f60
void sub_001B6ED8_0x1b6ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6ED8_0x1b6ed8");
#endif

    switch (ctx->pc) {
        case 0x1b6ed8u: goto label_1b6ed8;
        case 0x1b6edcu: goto label_1b6edc;
        case 0x1b6ee0u: goto label_1b6ee0;
        case 0x1b6ee4u: goto label_1b6ee4;
        case 0x1b6ee8u: goto label_1b6ee8;
        case 0x1b6eecu: goto label_1b6eec;
        case 0x1b6ef0u: goto label_1b6ef0;
        case 0x1b6ef4u: goto label_1b6ef4;
        case 0x1b6ef8u: goto label_1b6ef8;
        case 0x1b6efcu: goto label_1b6efc;
        case 0x1b6f00u: goto label_1b6f00;
        case 0x1b6f04u: goto label_1b6f04;
        case 0x1b6f08u: goto label_1b6f08;
        case 0x1b6f0cu: goto label_1b6f0c;
        case 0x1b6f10u: goto label_1b6f10;
        case 0x1b6f14u: goto label_1b6f14;
        case 0x1b6f18u: goto label_1b6f18;
        case 0x1b6f1cu: goto label_1b6f1c;
        case 0x1b6f20u: goto label_1b6f20;
        case 0x1b6f24u: goto label_1b6f24;
        case 0x1b6f28u: goto label_1b6f28;
        case 0x1b6f2cu: goto label_1b6f2c;
        case 0x1b6f30u: goto label_1b6f30;
        case 0x1b6f34u: goto label_1b6f34;
        case 0x1b6f38u: goto label_1b6f38;
        case 0x1b6f3cu: goto label_1b6f3c;
        case 0x1b6f40u: goto label_1b6f40;
        case 0x1b6f44u: goto label_1b6f44;
        case 0x1b6f48u: goto label_1b6f48;
        case 0x1b6f4cu: goto label_1b6f4c;
        case 0x1b6f50u: goto label_1b6f50;
        case 0x1b6f54u: goto label_1b6f54;
        case 0x1b6f58u: goto label_1b6f58;
        case 0x1b6f5cu: goto label_1b6f5c;
        default: break;
    }

    ctx->pc = 0x1b6ed8u;

label_1b6ed8:
    // 0x1b6ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b6edc:
    // 0x1b6edc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b6ee0:
    // 0x1b6ee0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b6ee4:
    // 0x1b6ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6ee8:
    // 0x1b6ee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6eec:
    // 0x1b6eec: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1b6eecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1b6ef0:
    // 0x1b6ef0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1b6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1b6ef4:
    // 0x1b6ef4: 0x40f809  jalr        $v0
label_1b6ef8:
    if (ctx->pc == 0x1B6EF8u) {
        ctx->pc = 0x1B6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EF4u;
        // 0x1b6ef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6EFCu;
        goto label_1b6efc;
    }
    ctx->pc = 0x1B6EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6EFCu);
        ctx->pc = 0x1B6EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EF4u;
        // 0x1b6ef8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6EF4u, 0x1B6EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6EFCu;
label_1b6efc:
    // 0x1b6efc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1b6f00:
    if (ctx->pc == 0x1B6F00u) {
        ctx->pc = 0x1B6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EFCu;
        // 0x1b6f00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F04u;
        goto label_1b6f04;
    }
    ctx->pc = 0x1B6EFCu;
    {
        const bool branch_taken_0x1b6efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6efc) {
            ctx->pc = 0x1B6F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6EFCu;
            // 0x1b6f00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6F50u;
            goto label_1b6f50;
        }
    }
    ctx->pc = 0x1B6F04u;
label_1b6f04:
    // 0x1b6f04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6f08:
    // 0x1b6f08: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1b6f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1b6f0c:
    // 0x1b6f0c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1b6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1b6f10:
    // 0x1b6f10: 0x40f809  jalr        $v0
label_1b6f14:
    if (ctx->pc == 0x1B6F14u) {
        ctx->pc = 0x1B6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F10u;
        // 0x1b6f14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F18u;
        goto label_1b6f18;
    }
    ctx->pc = 0x1B6F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6F18u);
        ctx->pc = 0x1B6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F10u;
        // 0x1b6f14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6F10u, 0x1B6F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6F18u;
label_1b6f18:
    // 0x1b6f18: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1b6f1c:
    if (ctx->pc == 0x1B6F1Cu) {
        ctx->pc = 0x1B6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F18u;
        // 0x1b6f1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F20u;
        goto label_1b6f20;
    }
    ctx->pc = 0x1B6F18u;
    {
        const bool branch_taken_0x1b6f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f18) {
            ctx->pc = 0x1B6F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6F18u;
            // 0x1b6f1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6F50u;
            goto label_1b6f50;
        }
    }
    ctx->pc = 0x1B6F20u;
label_1b6f20:
    // 0x1b6f20: 0xc068998  jal         func_1A2660
label_1b6f24:
    if (ctx->pc == 0x1B6F24u) {
        ctx->pc = 0x1B6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F20u;
        // 0x1b6f24: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F28u;
        goto label_1b6f28;
    }
    ctx->pc = 0x1B6F20u;
    SET_GPR_U32(ctx, 31, 0x1B6F28u);
    ctx->pc = 0x1B6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F20u;
    // 0x1b6f24: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1B6F20u, 0x1B6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F28u;
label_1b6f28:
    // 0x1b6f28: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x1b6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_1b6f2c:
    // 0x1b6f2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b6f30:
    if (ctx->pc == 0x1B6F30u) {
        ctx->pc = 0x1B6F34u;
        goto label_1b6f34;
    }
    ctx->pc = 0x1B6F2Cu;
    {
        const bool branch_taken_0x1b6f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f2c) {
            ctx->pc = 0x1B6F44u;
            goto label_1b6f44;
        }
    }
    ctx->pc = 0x1B6F34u;
label_1b6f34:
    // 0x1b6f34: 0xc06ec70  jal         func_1BB1C0
label_1b6f38:
    if (ctx->pc == 0x1B6F38u) {
        ctx->pc = 0x1B6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F34u;
        // 0x1b6f38: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F3Cu;
        goto label_1b6f3c;
    }
    ctx->pc = 0x1B6F34u;
    SET_GPR_U32(ctx, 31, 0x1B6F3Cu);
    ctx->pc = 0x1B6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F34u;
    // 0x1b6f38: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1B6F34u, 0x1B6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F3Cu;
label_1b6f3c:
    // 0x1b6f3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b6f40:
    if (ctx->pc == 0x1B6F40u) {
        ctx->pc = 0x1B6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F3Cu;
        // 0x1b6f40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F44u;
        goto label_1b6f44;
    }
    ctx->pc = 0x1B6F3Cu;
    {
        const bool branch_taken_0x1b6f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F3Cu;
        // 0x1b6f40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f3c) {
            ctx->pc = 0x1B6F50u;
            goto label_1b6f50;
        }
    }
    ctx->pc = 0x1B6F44u;
label_1b6f44:
    // 0x1b6f44: 0xc0734a2  jal         func_1CD288
label_1b6f48:
    if (ctx->pc == 0x1B6F48u) {
        ctx->pc = 0x1B6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F44u;
        // 0x1b6f48: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F4Cu;
        goto label_1b6f4c;
    }
    ctx->pc = 0x1B6F44u;
    SET_GPR_U32(ctx, 31, 0x1B6F4Cu);
    ctx->pc = 0x1B6F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F44u;
    // 0x1b6f48: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1B6F44u, 0x1B6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F4Cu;
label_1b6f4c:
    // 0x1b6f4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6f50:
    // 0x1b6f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6f54:
    // 0x1b6f54: 0x3e00008  jr          $ra
label_1b6f58:
    if (ctx->pc == 0x1B6F58u) {
        ctx->pc = 0x1B6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F54u;
        // 0x1b6f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6F5Cu;
        goto label_1b6f5c;
    }
    ctx->pc = 0x1B6F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F54u;
        // 0x1b6f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6F5Cu;
label_1b6f5c:
    // 0x1b6f5c: 0x0  nop
    ctx->pc = 0x1b6f5cu;
    // NOP
    ctx->pc = 0x1b6f60u;
}

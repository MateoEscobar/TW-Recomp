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

// Function: sub_00319EC8
// Address: 0x319ec8 - 0x319f50
void sub_00319EC8_0x319ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319EC8_0x319ec8");
#endif

    switch (ctx->pc) {
        case 0x319edcu: goto label_319edc;
        case 0x319ee4u: goto label_319ee4;
        case 0x319eecu: goto label_319eec;
        case 0x319f30u: goto label_319f30;
        default: break;
    }

    ctx->pc = 0x319ec8u;

    // 0x319ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319ecc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x319eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x319ed0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319ed4: 0xc0c65a2  jal         func_319688
    ctx->pc = 0x319ED4u;
    SET_GPR_U32(ctx, 31, 0x319EDCu);
    ctx->pc = 0x319ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319ED4u;
    // 0x319ed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319688u, 0x319ED4u, 0x319EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EDCu;
label_319edc:
    // 0x319edc: 0xc0c6634  jal         func_3198D0
    ctx->pc = 0x319EDCu;
    SET_GPR_U32(ctx, 31, 0x319EE4u);
    ctx->pc = 0x319EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319EDCu;
    // 0x319ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3198D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3198D0u, 0x319EDCu, 0x319EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EE4u;
label_319ee4:
    // 0x319ee4: 0xc05959e  jal         func_165678
    ctx->pc = 0x319EE4u;
    SET_GPR_U32(ctx, 31, 0x319EECu);
    ctx->pc = 0x319EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319EE4u;
    // 0x319ee8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x319EE4u, 0x319EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EECu;
label_319eec:
    // 0x319eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ef0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x319EF0u;
    {
        const bool branch_taken_0x319ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x319ef0) {
            ctx->pc = 0x319EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319EF0u;
            // 0x319ef4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F40u;
            goto label_319f40;
        }
    }
    ctx->pc = 0x319EF8u;
    // 0x319ef8: 0x808501b0  lb          $a1, 0x1B0($a0)
    ctx->pc = 0x319ef8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x319efc: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x319efcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x319f00: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x319F00u;
    {
        const bool branch_taken_0x319f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F00u;
        // 0x319f04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f00) {
            ctx->pc = 0x319F38u;
            goto label_319f38;
        }
    }
    ctx->pc = 0x319F08u;
    // 0x319f08: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x319f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x319f0c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x319f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x319f10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x319f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x319f14: 0x90620416  lbu         $v0, 0x416($v1)
    ctx->pc = 0x319f14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1046)));
    // 0x319f18: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x319F18u;
    {
        const bool branch_taken_0x319f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319f18) {
            ctx->pc = 0x319F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319F18u;
            // 0x319f1c: 0xa206003e  sb          $a2, 0x3E($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F3Cu;
            goto label_319f3c;
        }
    }
    ctx->pc = 0x319F20u;
    // 0x319f20: 0x8c820178  lw          $v0, 0x178($a0)
    ctx->pc = 0x319f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x319f24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x319f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319f28: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x319F28u;
    SET_GPR_U32(ctx, 31, 0x319F30u);
    ctx->pc = 0x319F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319F28u;
    // 0x319f2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x319F28u, 0x319F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F30u;
label_319f30:
    // 0x319f30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x319f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x319f34: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x319f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_319f38:
    // 0x319f38: 0xa206003e  sb          $a2, 0x3E($s0)
    ctx->pc = 0x319f38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 6));
label_319f3c:
    // 0x319f3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x319f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_319f40:
    // 0x319f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319f44: 0x3e00008  jr          $ra
    ctx->pc = 0x319F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F44u;
        // 0x319f48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319F4Cu;
    // 0x319f4c: 0x0  nop
    ctx->pc = 0x319f4cu;
    // NOP
    ctx->pc = 0x319f50u;
}

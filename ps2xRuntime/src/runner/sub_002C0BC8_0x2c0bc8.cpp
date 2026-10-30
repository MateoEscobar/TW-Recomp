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

// Function: sub_002C0BC8
// Address: 0x2c0bc8 - 0x2c0c20
void sub_002C0BC8_0x2c0bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0BC8_0x2c0bc8");
#endif

    switch (ctx->pc) {
        case 0x2c0be0u: goto label_2c0be0;
        case 0x2c0bf8u: goto label_2c0bf8;
        case 0x2c0c04u: goto label_2c0c04;
        default: break;
    }

    ctx->pc = 0x2c0bc8u;

    // 0x2c0bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c0bd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c0bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c0bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0bd8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C0BD8u;
    SET_GPR_U32(ctx, 31, 0x2C0BE0u);
    ctx->pc = 0x2C0BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0BD8u;
    // 0x2c0bdc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C0BD8u, 0x2C0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0BE0u;
label_2c0be0:
    // 0x2c0be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0be4: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C0BE4u;
    {
        const bool branch_taken_0x2c0be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0be4) {
            ctx->pc = 0x2C0BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0BE4u;
            // 0x2c0be8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0BFCu;
            goto label_2c0bfc;
        }
    }
    ctx->pc = 0x2C0BECu;
    // 0x2c0bec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c0becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c0bf0: 0xc0be324  jal         func_2F8C90
    ctx->pc = 0x2C0BF0u;
    SET_GPR_U32(ctx, 31, 0x2C0BF8u);
    ctx->pc = 0x2C0BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0BF0u;
    // 0x2c0bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8C90u, 0x2C0BF0u, 0x2C0BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0BF8u;
label_2c0bf8:
    // 0x2c0bf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c0bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c0bfc:
    // 0x2c0bfc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C0BFCu;
    SET_GPR_U32(ctx, 31, 0x2C0C04u);
    ctx->pc = 0x2C0C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0BFCu;
    // 0x2c0c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C0BFCu, 0x2C0C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0C04u;
label_2c0c04:
    // 0x2c0c04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c0c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0c0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c0c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C14u;
        // 0x2c0c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0C1Cu;
    // 0x2c0c1c: 0x0  nop
    ctx->pc = 0x2c0c1cu;
    // NOP
    ctx->pc = 0x2c0c20u;
}

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

// Function: sub_00395020
// Address: 0x395020 - 0x395078
void sub_00395020_0x395020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395020_0x395020");
#endif

    switch (ctx->pc) {
        case 0x395038u: goto label_395038;
        default: break;
    }

    ctx->pc = 0x395020u;

    // 0x395020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395024: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x395024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x395028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39502c: 0x94850112  lhu         $a1, 0x112($a0)
    ctx->pc = 0x39502cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
    // 0x395030: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x395030u;
    SET_GPR_U32(ctx, 31, 0x395038u);
    ctx->pc = 0x395034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395030u;
    // 0x395034: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x395030u, 0x395038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395038u;
label_395038:
    // 0x395038: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x395038u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x39503c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x39503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x395040: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x395040u;
    {
        const bool branch_taken_0x395040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x395044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395040u;
        // 0x395044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395040) {
            ctx->pc = 0x395064u;
            goto label_395064;
        }
    }
    ctx->pc = 0x395048u;
    // 0x395048: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x395048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x39504c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39504Cu;
    {
        const bool branch_taken_0x39504c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x395050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39504Cu;
        // 0x395050: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39504c) {
            ctx->pc = 0x395064u;
            goto label_395064;
        }
    }
    ctx->pc = 0x395054u;
    // 0x395054: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x395054u;
    {
        const bool branch_taken_0x395054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x395058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395054u;
        // 0x395058: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395054) {
            ctx->pc = 0x395064u;
            goto label_395064;
        }
    }
    ctx->pc = 0x39505Cu;
    // 0x39505c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39505Cu;
    {
        const bool branch_taken_0x39505c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x395060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39505Cu;
        // 0x395060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39505c) {
            ctx->pc = 0x39506Cu;
            goto label_39506c;
        }
    }
    ctx->pc = 0x395064u;
label_395064:
    // 0x395064: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x395064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39506c:
    // 0x39506c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x39506cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395070: 0x3e00008  jr          $ra
    ctx->pc = 0x395070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395070u;
        // 0x395074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395078u;
}

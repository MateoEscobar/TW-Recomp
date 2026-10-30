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

// Function: sub_004A9A80
// Address: 0x4a9a80 - 0x4a9af0
void sub_004A9A80_0x4a9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9A80_0x4a9a80");
#endif

    switch (ctx->pc) {
        case 0x4a9a90u: goto label_4a9a90;
        default: break;
    }

    ctx->pc = 0x4a9a80u;

    // 0x4a9a80: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A9A80u;
    {
        const bool branch_taken_0x4a9a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A80u;
        // 0x4a9a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a80) {
            ctx->pc = 0x4A9AE8u;
            goto label_4a9ae8;
        }
    }
    ctx->pc = 0x4A9A88u;
    // 0x4a9a88: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A9A88u;
    {
        const bool branch_taken_0x4a9a88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a9a88) {
            ctx->pc = 0x4A9AE8u;
            goto label_4a9ae8;
        }
    }
    ctx->pc = 0x4A9A90u;
label_4a9a90:
    // 0x4a9a90: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x4a9a90u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9a94: 0x24c2ffbf  addiu       $v0, $a2, -0x41
    ctx->pc = 0x4a9a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
    // 0x4a9a98: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x4a9a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x4a9a9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9A9Cu;
    {
        const bool branch_taken_0x4a9a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9A9Cu;
        // 0x4a9aa0: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9a9c) {
            ctx->pc = 0x4A9AB0u;
            goto label_4a9ab0;
        }
    }
    ctx->pc = 0x4A9AA4u;
    // 0x4a9aa4: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x4a9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x4a9aa8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4a9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4a9aac: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x4a9aacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_4a9ab0:
    // 0x4a9ab0: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x4a9ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x4a9ab4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x4a9ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x4a9ab8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9AB8u;
    {
        const bool branch_taken_0x4a9ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AB8u;
        // 0x4a9abc: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ab8) {
            ctx->pc = 0x4A9AC8u;
            goto label_4a9ac8;
        }
    }
    ctx->pc = 0x4A9AC0u;
    // 0x4a9ac0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x4a9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x4a9ac4: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x4a9ac4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_4a9ac8:
    // 0x4a9ac8: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A9AC8u;
    {
        const bool branch_taken_0x4a9ac8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AC8u;
        // 0x4a9acc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ac8) {
            ctx->pc = 0x4A9AE0u;
            goto label_4a9ae0;
        }
    }
    ctx->pc = 0x4A9AD0u;
    // 0x4a9ad0: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4A9AD0u;
    {
        const bool branch_taken_0x4a9ad0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AD0u;
        // 0x4a9ad4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ad0) {
            ctx->pc = 0x4A9A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9a90;
        }
    }
    ctx->pc = 0x4A9AD8u;
    // 0x4a9ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AD8u;
        // 0x4a9adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9AE0u;
label_4a9ae0:
    // 0x4a9ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9AE0u;
        // 0x4a9ae4: 0xc31023  subu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9AE8u;
label_4a9ae8:
    // 0x4a9ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9AF0u;
}

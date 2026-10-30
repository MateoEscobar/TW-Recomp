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

// Function: sub_004B7E50
// Address: 0x4b7e50 - 0x4b7eb0
void sub_004B7E50_0x4b7e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7E50_0x4b7e50");
#endif

    switch (ctx->pc) {
        case 0x4b7e70u: goto label_4b7e70;
        case 0x4b7e90u: goto label_4b7e90;
        default: break;
    }

    ctx->pc = 0x4b7e50u;

    // 0x4b7e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b7e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b7e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b7e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b7e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b7e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b7e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b7e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7e60: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4b7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4b7e64: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x4b7e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4b7e68: 0xc12dc58  jal         func_4B7160
    ctx->pc = 0x4B7E68u;
    SET_GPR_U32(ctx, 31, 0x4B7E70u);
    ctx->pc = 0x4B7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7E68u;
    // 0x4b7e6c: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B7E68u, 0x4B7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7E70u;
label_4b7e70:
    // 0x4b7e70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B7E70u;
    {
        const bool branch_taken_0x4b7e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7E70u;
        // 0x4b7e74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7e70) {
            ctx->pc = 0x4B7EA0u;
            goto label_4b7ea0;
        }
    }
    ctx->pc = 0x4B7E78u;
    // 0x4b7e78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b7e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b7e7c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4b7e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x4b7e80: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B7E80u;
    {
        const bool branch_taken_0x4b7e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b7e80) {
            ctx->pc = 0x4B7E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7E80u;
            // 0x4b7e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7EA0u;
            goto label_4b7ea0;
        }
    }
    ctx->pc = 0x4B7E88u;
    // 0x4b7e88: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x4B7E88u;
    SET_GPR_U32(ctx, 31, 0x4B7E90u);
    ctx->pc = 0x4B7E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7E88u;
    // 0x4b7e8c: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x4B7E88u, 0x4B7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7E90u;
label_4b7e90:
    // 0x4b7e90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4b7e90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7e94: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B7E94u;
    {
        const bool branch_taken_0x4b7e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7E94u;
        // 0x4b7e98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7e94) {
            ctx->pc = 0x4B7EA0u;
            goto label_4b7ea0;
        }
    }
    ctx->pc = 0x4B7E9Cu;
    // 0x4b7e9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b7e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b7ea0:
    // 0x4b7ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b7ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b7ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b7ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b7ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7EA8u;
        // 0x4b7eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7EB0u;
}

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

// Function: sub_004B7F00
// Address: 0x4b7f00 - 0x4b7f58
void sub_004B7F00_0x4b7f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B7F00_0x4b7f00");
#endif

    switch (ctx->pc) {
        case 0x4b7f28u: goto label_4b7f28;
        case 0x4b7f44u: goto label_4b7f44;
        default: break;
    }

    ctx->pc = 0x4b7f00u;

    // 0x4b7f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b7f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b7f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b7f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b7f08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b7f0c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4b7f0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4b7f10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b7f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4b7f14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b7f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b7f18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B7F18u;
    {
        const bool branch_taken_0x4b7f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b7f18) {
            ctx->pc = 0x4B7F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B7F18u;
            // 0x4b7f1c: 0x8c870058  lw          $a3, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B7F30u;
            goto label_4b7f30;
        }
    }
    ctx->pc = 0x4B7F20u;
    // 0x4b7f20: 0xc12bdfa  jal         func_4AF7E8
    ctx->pc = 0x4B7F20u;
    SET_GPR_U32(ctx, 31, 0x4B7F28u);
    ctx->pc = 0x4AF7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF7E8u, 0x4B7F20u, 0x4B7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7F28u;
label_4b7f28:
    // 0x4b7f28: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4B7F28u;
    {
        const bool branch_taken_0x4b7f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F28u;
        // 0x4b7f2c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b7f28) {
            ctx->pc = 0x4B7F50u;
            goto label_4b7f50;
        }
    }
    ctx->pc = 0x4B7F30u;
label_4b7f30:
    // 0x4b7f30: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4b7f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b7f34: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x4b7f34u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x4b7f38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4b7f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b7f3c: 0xc13628a  jal         func_4D8A28
    ctx->pc = 0x4B7F3Cu;
    SET_GPR_U32(ctx, 31, 0x4B7F44u);
    ctx->pc = 0x4B7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B7F3Cu;
    // 0x4b7f40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D8A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D8A28u, 0x4B7F3Cu, 0x4B7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B7F44u;
label_4b7f44:
    // 0x4b7f44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b7f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b7f48: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4b7f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4b7f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b7f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b7f50:
    // 0x4b7f50: 0x3e00008  jr          $ra
    ctx->pc = 0x4B7F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B7F50u;
        // 0x4b7f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B7F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B7F58u;
}

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

// Function: sub_0032C1E0
// Address: 0x32c1e0 - 0x32c230
void sub_0032C1E0_0x32c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C1E0_0x32c1e0");
#endif

    switch (ctx->pc) {
        case 0x32c1f8u: goto label_32c1f8;
        case 0x32c210u: goto label_32c210;
        case 0x32c21cu: goto label_32c21c;
        default: break;
    }

    ctx->pc = 0x32c1e0u;

    // 0x32c1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c1e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c1ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c1f0: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C1F0u;
    SET_GPR_U32(ctx, 31, 0x32C1F8u);
    ctx->pc = 0x32C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C1F0u;
    // 0x32c1f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C1F0u, 0x32C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C1F8u;
label_32c1f8:
    // 0x32c1f8: 0x3405fe47  ori         $a1, $zero, 0xFE47
    ctx->pc = 0x32c1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65095);
    // 0x32c1fc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x32c1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x32c200: 0x34a5fa36  ori         $a1, $a1, 0xFA36
    ctx->pc = 0x32c200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64054);
    // 0x32c204: 0x52f78  dsll        $a1, $a1, 29
    ctx->pc = 0x32c204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 29);
    // 0x32c208: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32C208u;
    SET_GPR_U32(ctx, 31, 0x32C210u);
    ctx->pc = 0x32C20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C208u;
    // 0x32c20c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32C208u, 0x32C210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C210u;
label_32c210:
    // 0x32c210: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c214: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C214u;
    SET_GPR_U32(ctx, 31, 0x32C21Cu);
    ctx->pc = 0x32C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C214u;
    // 0x32c218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C214u, 0x32C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C21Cu;
label_32c21c:
    // 0x32c21c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c228: 0x3e00008  jr          $ra
    ctx->pc = 0x32C228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C228u;
        // 0x32c22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C230u;
}

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

// Function: sub_0032C000
// Address: 0x32c000 - 0x32c048
void sub_0032C000_0x32c000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C000_0x32c000");
#endif

    switch (ctx->pc) {
        case 0x32c010u: goto label_32c010;
        case 0x32c018u: goto label_32c018;
        case 0x32c024u: goto label_32c024;
        case 0x32c030u: goto label_32c030;
        default: break;
    }

    ctx->pc = 0x32c000u;

    // 0x32c000: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32c000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32c004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c008: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C008u;
    SET_GPR_U32(ctx, 31, 0x32C010u);
    ctx->pc = 0x32C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C008u;
    // 0x32c00c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C008u, 0x32C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C010u;
label_32c010:
    // 0x32c010: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x32C010u;
    SET_GPR_U32(ctx, 31, 0x32C018u);
    ctx->pc = 0x32C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C010u;
    // 0x32c014: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x32C010u, 0x32C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C018u;
label_32c018:
    // 0x32c018: 0x46000304  c1          0x304
    ctx->pc = 0x32c018u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x32c01c: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x32C01Cu;
    SET_GPR_U32(ctx, 31, 0x32C024u);
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x32C01Cu, 0x32C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C024u;
label_32c024:
    // 0x32c024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c028: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C028u;
    SET_GPR_U32(ctx, 31, 0x32C030u);
    ctx->pc = 0x32C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C028u;
    // 0x32c02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C028u, 0x32C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C030u;
label_32c030:
    // 0x32c030: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32c030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c03c: 0x3e00008  jr          $ra
    ctx->pc = 0x32C03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C03Cu;
        // 0x32c040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C044u;
    // 0x32c044: 0x0  nop
    ctx->pc = 0x32c044u;
    // NOP
    ctx->pc = 0x32c048u;
}

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

// Function: sub_00223BC0
// Address: 0x223bc0 - 0x223c10
void sub_00223BC0_0x223bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223BC0_0x223bc0");
#endif

    switch (ctx->pc) {
        case 0x223be0u: goto label_223be0;
        case 0x223bf0u: goto label_223bf0;
        default: break;
    }

    ctx->pc = 0x223bc0u;

    // 0x223bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223bc4: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x223bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x223bc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223bcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223bd8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223BD8u;
    SET_GPR_U32(ctx, 31, 0x223BE0u);
    ctx->pc = 0x223BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BD8u;
    // 0x223bdc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223BD8u, 0x223BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BE0u;
label_223be0:
    // 0x223be0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223BE0u;
    {
        const bool branch_taken_0x223be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BE0u;
        // 0x223be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223be0) {
            ctx->pc = 0x223BF4u;
            goto label_223bf4;
        }
    }
    ctx->pc = 0x223BE8u;
    // 0x223be8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223BE8u;
    SET_GPR_U32(ctx, 31, 0x223BF0u);
    ctx->pc = 0x223BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223BE8u;
    // 0x223bec: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223BE8u, 0x223BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223BF0u;
label_223bf0:
    // 0x223bf0: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x223bf0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_223bf4:
    // 0x223bf4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x223bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223bf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x223bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223c04: 0x3e00008  jr          $ra
    ctx->pc = 0x223C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C04u;
        // 0x223c08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223C0Cu;
    // 0x223c0c: 0x0  nop
    ctx->pc = 0x223c0cu;
    // NOP
    ctx->pc = 0x223c10u;
}

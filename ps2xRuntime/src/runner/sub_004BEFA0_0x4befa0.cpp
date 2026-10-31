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

// Function: sub_004BEFA0
// Address: 0x4befa0 - 0x4beff8
void sub_004BEFA0_0x4befa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BEFA0_0x4befa0");
#endif

    switch (ctx->pc) {
        case 0x4befd8u: goto label_4befd8;
        default: break;
    }

    ctx->pc = 0x4befa0u;

    // 0x4befa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4befa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4befa4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4befa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4befa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4befa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4befac: 0x8c4341f4  lw          $v1, 0x41F4($v0)
    ctx->pc = 0x4befacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7141F4u));
    // 0x4befb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4befb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4befb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4befb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4befb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4befb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4befbc: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x4befbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x4befc0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4befc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4befc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BEFC4u;
    {
        const bool branch_taken_0x4befc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BEFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEFC4u;
        // 0x4befc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4befc4) {
            ctx->pc = 0x4BEFE0u;
            goto label_4befe0;
        }
    }
    ctx->pc = 0x4BEFCCu;
    // 0x4befcc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4befccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x4befd0: 0xc11c766  jal         func_471D98
    ctx->pc = 0x4BEFD0u;
    SET_GPR_U32(ctx, 31, 0x4BEFD8u);
    ctx->pc = 0x4BEFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BEFD0u;
    // 0x4befd4: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D98u, 0x4BEFD0u, 0x4BEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BEFD8u;
label_4befd8:
    // 0x4befd8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x4befd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x4befdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4befdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4befe0:
    // 0x4befe0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4befe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4befe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4befe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4befe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4befe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4befec: 0x3e00008  jr          $ra
    ctx->pc = 0x4BEFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BEFECu;
        // 0x4beff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BEFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BEFF4u;
    // 0x4beff4: 0x0  nop
    ctx->pc = 0x4beff4u;
    // NOP
    ctx->pc = 0x4beff8u;
}

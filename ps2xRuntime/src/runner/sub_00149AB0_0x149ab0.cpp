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

// Function: sub_00149AB0
// Address: 0x149ab0 - 0x149b08
void sub_00149AB0_0x149ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149AB0_0x149ab0");
#endif

    switch (ctx->pc) {
        case 0x149ad4u: goto label_149ad4;
        case 0x149af8u: goto label_149af8;
        default: break;
    }

    ctx->pc = 0x149ab0u;

    // 0x149ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149ab4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x149ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149ab8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149abc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x149abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149ac4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149ac8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149acc: 0xc113578  jal         func_44D5E0
    ctx->pc = 0x149ACCu;
    SET_GPR_U32(ctx, 31, 0x149AD4u);
    ctx->pc = 0x149AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149ACCu;
    // 0x149ad0: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D5E0u, 0x149ACCu, 0x149AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AD4u;
label_149ad4:
    // 0x149ad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149AD4u;
    {
        const bool branch_taken_0x149ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AD4u;
        // 0x149ad8: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ad4) {
            ctx->pc = 0x149AE4u;
            goto label_149ae4;
        }
    }
    ctx->pc = 0x149ADCu;
    // 0x149adc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149ADCu;
    {
        const bool branch_taken_0x149adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149ADCu;
        // 0x149ae0: 0x24429b08  addiu       $v0, $v0, -0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149adc) {
            ctx->pc = 0x149AECu;
            goto label_149aec;
        }
    }
    ctx->pc = 0x149AE4u;
label_149ae4:
    // 0x149ae4: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x149ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x149ae8: 0x24429a88  addiu       $v0, $v0, -0x6578
    ctx->pc = 0x149ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941320));
label_149aec:
    // 0x149aec: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x149af0: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149AF0u;
    SET_GPR_U32(ctx, 31, 0x149AF8u);
    ctx->pc = 0x149AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149AF0u;
    // 0x149af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149AF0u, 0x149AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149AF8u;
label_149af8:
    // 0x149af8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149af8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b00: 0x3e00008  jr          $ra
    ctx->pc = 0x149B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149B00u;
        // 0x149b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B08u;
}

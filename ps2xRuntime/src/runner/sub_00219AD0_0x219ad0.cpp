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

// Function: sub_00219AD0
// Address: 0x219ad0 - 0x219b08
void sub_00219AD0_0x219ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219AD0_0x219ad0");
#endif

    switch (ctx->pc) {
        case 0x219ae4u: goto label_219ae4;
        case 0x219af4u: goto label_219af4;
        default: break;
    }

    ctx->pc = 0x219ad0u;

    // 0x219ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219ad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x219ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x219ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219adc: 0xc08668a  jal         func_219A28
    ctx->pc = 0x219ADCu;
    SET_GPR_U32(ctx, 31, 0x219AE4u);
    ctx->pc = 0x219AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219ADCu;
    // 0x219ae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219A28u, 0x219ADCu, 0x219AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AE4u;
label_219ae4:
    // 0x219ae4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x219AE4u;
    {
        const bool branch_taken_0x219ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x219ae4) {
            ctx->pc = 0x219AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219AE4u;
            // 0x219ae8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219AF8u;
            goto label_219af8;
        }
    }
    ctx->pc = 0x219AECu;
    // 0x219aec: 0xc08bf3a  jal         func_22FCE8
    ctx->pc = 0x219AECu;
    SET_GPR_U32(ctx, 31, 0x219AF4u);
    ctx->pc = 0x219AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AECu;
    // 0x219af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FCE8u, 0x219AECu, 0x219AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AF4u;
label_219af4:
    // 0x219af4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x219af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219af8:
    // 0x219af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x219af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219afc: 0x3e00008  jr          $ra
    ctx->pc = 0x219AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AFCu;
        // 0x219b00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219B04u;
    // 0x219b04: 0x0  nop
    ctx->pc = 0x219b04u;
    // NOP
    ctx->pc = 0x219b08u;
}

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

// Function: sub_004B0578
// Address: 0x4b0578 - 0x4b05c8
void sub_004B0578_0x4b0578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B0578_0x4b0578");
#endif

    switch (ctx->pc) {
        case 0x4b059cu: goto label_4b059c;
        case 0x4b05b4u: goto label_4b05b4;
        default: break;
    }

    ctx->pc = 0x4b0578u;

    // 0x4b0578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b0578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b057c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4b057cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4b0580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b0580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b0584: 0x8c625b10  lw          $v0, 0x5B10($v1)
    ctx->pc = 0x4b0584u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715B10u));
    // 0x4b0588: 0x24705b10  addiu       $s0, $v1, 0x5B10
    ctx->pc = 0x4b0588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x4b058c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B058Cu;
    {
        const bool branch_taken_0x4b058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B058Cu;
        // 0x4b0590: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b058c) {
            ctx->pc = 0x4B05B4u;
            goto label_4b05b4;
        }
    }
    ctx->pc = 0x4B0594u;
    // 0x4b0594: 0xc12c212  jal         func_4B0848
    ctx->pc = 0x4B0594u;
    SET_GPR_U32(ctx, 31, 0x4B059Cu);
    ctx->pc = 0x4B0848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0848u, 0x4B0594u, 0x4B059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B059Cu;
label_4b059c:
    // 0x4b059c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4b059cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4b05a0: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4b05a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4b05a4: 0x24a50688  addiu       $a1, $a1, 0x688
    ctx->pc = 0x4b05a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1672));
    // 0x4b05a8: 0x24c671e0  addiu       $a2, $a2, 0x71E0
    ctx->pc = 0x4b05a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29152));
    // 0x4b05ac: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x4B05ACu;
    SET_GPR_U32(ctx, 31, 0x4B05B4u);
    ctx->pc = 0x4B05B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B05ACu;
    // 0x4b05b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x4B05ACu, 0x4B05B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B05B4u;
label_4b05b4:
    // 0x4b05b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b05b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b05b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b05b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b05bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b05bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b05c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B05C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B05C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B05C0u;
        // 0x4b05c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B05C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B05C8u;
}

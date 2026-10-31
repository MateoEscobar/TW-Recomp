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

// Function: sub_00423338
// Address: 0x423338 - 0x423358
void sub_00423338_0x423338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00423338_0x423338");
#endif

    switch (ctx->pc) {
        case 0x42334cu: goto label_42334c;
        default: break;
    }

    ctx->pc = 0x423338u;

    // 0x423338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x423338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42333c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x423340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x423340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x423344: 0xc108cc2  jal         func_423308
    ctx->pc = 0x423344u;
    SET_GPR_U32(ctx, 31, 0x42334Cu);
    ctx->pc = 0x423348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423344u;
    // 0x423348: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x423308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423308u, 0x423344u, 0x42334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42334Cu;
label_42334c:
    // 0x42334c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42334cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423350: 0x3e00008  jr          $ra
    ctx->pc = 0x423350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x423354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423350u;
        // 0x423354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423358u;
}

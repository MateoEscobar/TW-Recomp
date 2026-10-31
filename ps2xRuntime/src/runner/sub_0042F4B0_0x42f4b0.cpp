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

// Function: sub_0042F4B0
// Address: 0x42f4b0 - 0x42f500
void sub_0042F4B0_0x42f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F4B0_0x42f4b0");
#endif

    switch (ctx->pc) {
        case 0x42f4d4u: goto label_42f4d4;
        case 0x42f4ecu: goto label_42f4ec;
        default: break;
    }

    ctx->pc = 0x42f4b0u;

    // 0x42f4b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f4b4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x42f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x42f4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42f4bc: 0x8c625a10  lw          $v0, 0x5A10($v1)
    ctx->pc = 0x42f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A10u));
    // 0x42f4c0: 0x24705a10  addiu       $s0, $v1, 0x5A10
    ctx->pc = 0x42f4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23056));
    // 0x42f4c4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42F4C4u;
    {
        const bool branch_taken_0x42f4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F4C4u;
        // 0x42f4c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f4c4) {
            ctx->pc = 0x42F4ECu;
            goto label_42f4ec;
        }
    }
    ctx->pc = 0x42F4CCu;
    // 0x42f4cc: 0xc10b7e0  jal         func_42DF80
    ctx->pc = 0x42F4CCu;
    SET_GPR_U32(ctx, 31, 0x42F4D4u);
    ctx->pc = 0x42DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DF80u, 0x42F4CCu, 0x42F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F4D4u;
label_42f4d4:
    // 0x42f4d4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42f4d8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x42f4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x42f4dc: 0x24a5c350  addiu       $a1, $a1, -0x3CB0
    ctx->pc = 0x42f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951760));
    // 0x42f4e0: 0x24c671c8  addiu       $a2, $a2, 0x71C8
    ctx->pc = 0x42f4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29128));
    // 0x42f4e4: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x42F4E4u;
    SET_GPR_U32(ctx, 31, 0x42F4ECu);
    ctx->pc = 0x42F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F4E4u;
    // 0x42f4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x42F4E4u, 0x42F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F4ECu;
label_42f4ec:
    // 0x42f4ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x42F4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F4F8u;
        // 0x42f4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F500u;
}

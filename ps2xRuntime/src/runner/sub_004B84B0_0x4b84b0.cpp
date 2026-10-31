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

// Function: sub_004B84B0
// Address: 0x4b84b0 - 0x4b8508
void sub_004B84B0_0x4b84b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B84B0_0x4b84b0");
#endif

    switch (ctx->pc) {
        case 0x4b84d4u: goto label_4b84d4;
        case 0x4b84f0u: goto label_4b84f0;
        default: break;
    }

    ctx->pc = 0x4b84b0u;

    // 0x4b84b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b84b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b84b4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4b84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4b84b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b84b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b84bc: 0x8c625b30  lw          $v0, 0x5B30($v1)
    ctx->pc = 0x4b84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715B30u));
    // 0x4b84c0: 0x24705b30  addiu       $s0, $v1, 0x5B30
    ctx->pc = 0x4b84c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23344));
    // 0x4b84c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B84C4u;
    {
        const bool branch_taken_0x4b84c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B84C4u;
        // 0x4b84c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b84c4) {
            ctx->pc = 0x4B84F0u;
            goto label_4b84f0;
        }
    }
    ctx->pc = 0x4B84CCu;
    // 0x4b84cc: 0xc12ba88  jal         func_4AEA20
    ctx->pc = 0x4B84CCu;
    SET_GPR_U32(ctx, 31, 0x4B84D4u);
    ctx->pc = 0x4AEA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEA20u, 0x4B84CCu, 0x4B84D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B84D4u;
label_4b84d4:
    // 0x4b84d4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4b84d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4b84d8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4b84d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4b84dc: 0x24a50eb0  addiu       $a1, $a1, 0xEB0
    ctx->pc = 0x4b84dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3760));
    // 0x4b84e0: 0x24c60ec0  addiu       $a2, $a2, 0xEC0
    ctx->pc = 0x4b84e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3776));
    // 0x4b84e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b84e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b84e8: 0xc10bbee  jal         func_42EFB8
    ctx->pc = 0x4B84E8u;
    SET_GPR_U32(ctx, 31, 0x4B84F0u);
    ctx->pc = 0x4B84ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B84E8u;
    // 0x4b84ec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFB8u, 0x4B84E8u, 0x4B84F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B84F0u;
label_4b84f0:
    // 0x4b84f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b84f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b84f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b84f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b84f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b84f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b84fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B84FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B84FCu;
        // 0x4b8500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B84FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8504u;
    // 0x4b8504: 0x0  nop
    ctx->pc = 0x4b8504u;
    // NOP
    ctx->pc = 0x4b8508u;
}

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

// Function: sub_004AE2B8
// Address: 0x4ae2b8 - 0x4ae318
void sub_004AE2B8_0x4ae2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE2B8_0x4ae2b8");
#endif

    switch (ctx->pc) {
        case 0x4ae2dcu: goto label_4ae2dc;
        case 0x4ae2e4u: goto label_4ae2e4;
        case 0x4ae300u: goto label_4ae300;
        default: break;
    }

    ctx->pc = 0x4ae2b8u;

    // 0x4ae2b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ae2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ae2bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4ae2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4ae2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae2c4: 0x8c625ae0  lw          $v0, 0x5AE0($v1)
    ctx->pc = 0x4ae2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715AE0u));
    // 0x4ae2c8: 0x24705ae0  addiu       $s0, $v1, 0x5AE0
    ctx->pc = 0x4ae2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23264));
    // 0x4ae2cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE2CCu;
    {
        const bool branch_taken_0x4ae2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE2CCu;
        // 0x4ae2d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae2cc) {
            ctx->pc = 0x4AE300u;
            goto label_4ae300;
        }
    }
    ctx->pc = 0x4AE2D4u;
    // 0x4ae2d4: 0xc12bbb0  jal         func_4AEEC0
    ctx->pc = 0x4AE2D4u;
    SET_GPR_U32(ctx, 31, 0x4AE2DCu);
    ctx->pc = 0x4AEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEEC0u, 0x4AE2D4u, 0x4AE2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE2DCu;
label_4ae2dc:
    // 0x4ae2dc: 0xc12ba88  jal         func_4AEA20
    ctx->pc = 0x4AE2DCu;
    SET_GPR_U32(ctx, 31, 0x4AE2E4u);
    ctx->pc = 0x4AEA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEA20u, 0x4AE2DCu, 0x4AE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE2E4u;
label_4ae2e4:
    // 0x4ae2e4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4ae2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4ae2e8: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4ae2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4ae2ec: 0x24a50500  addiu       $a1, $a1, 0x500
    ctx->pc = 0x4ae2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1280));
    // 0x4ae2f0: 0x24c60510  addiu       $a2, $a2, 0x510
    ctx->pc = 0x4ae2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1296));
    // 0x4ae2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ae2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2f8: 0xc10bbee  jal         func_42EFB8
    ctx->pc = 0x4AE2F8u;
    SET_GPR_U32(ctx, 31, 0x4AE300u);
    ctx->pc = 0x4AE2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE2F8u;
    // 0x4ae2fc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFB8u, 0x4AE2F8u, 0x4AE300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE300u;
label_4ae300:
    // 0x4ae300: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ae304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae30c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE30Cu;
        // 0x4ae310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE314u;
    // 0x4ae314: 0x0  nop
    ctx->pc = 0x4ae314u;
    // NOP
    ctx->pc = 0x4ae318u;
}

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

// Function: sub_00148BA8
// Address: 0x148ba8 - 0x148bf0
void sub_00148BA8_0x148ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148BA8_0x148ba8");
#endif

    switch (ctx->pc) {
        case 0x148bd0u: goto label_148bd0;
        case 0x148be0u: goto label_148be0;
        default: break;
    }

    ctx->pc = 0x148ba8u;

    // 0x148ba8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x148ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x148bac: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x148bb0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x148bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x148bb4: 0x2443a210  addiu       $v1, $v0, -0x5DF0
    ctx->pc = 0x148bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943248));
    // 0x148bb8: 0xdc46a210  ld          $a2, -0x5DF0($v0)
    ctx->pc = 0x148bb8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x54A210u));
    // 0x148bbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bc0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x148bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x54A218u));
    // 0x148bc4: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x148bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x148bc8: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x148BC8u;
    SET_GPR_U32(ctx, 31, 0x148BD0u);
    ctx->pc = 0x148BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BC8u;
    // 0x148bcc: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x148BC8u, 0x148BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BD0u;
label_148bd0:
    // 0x148bd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x148bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x148bd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x148bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148bd8: 0xc103192  jal         func_40C648
    ctx->pc = 0x148BD8u;
    SET_GPR_U32(ctx, 31, 0x148BE0u);
    ctx->pc = 0x148BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148BD8u;
    // 0x148bdc: 0x8c6447a4  lw          $a0, 0x47A4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C648u, 0x148BD8u, 0x148BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148BE0u;
label_148be0:
    // 0x148be0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x148be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x148be4: 0x3e00008  jr          $ra
    ctx->pc = 0x148BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148BE4u;
        // 0x148be8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148BECu;
    // 0x148bec: 0x0  nop
    ctx->pc = 0x148becu;
    // NOP
    ctx->pc = 0x148bf0u;
}

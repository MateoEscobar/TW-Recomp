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

// Function: sub_00202AC8
// Address: 0x202ac8 - 0x202b08
void sub_00202AC8_0x202ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202AC8_0x202ac8");
#endif

    switch (ctx->pc) {
        case 0x202afcu: goto label_202afc;
        default: break;
    }

    ctx->pc = 0x202ac8u;

    // 0x202ac8: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x202acc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202ad0: 0xa33818  mult        $a3, $a1, $v1
    ctx->pc = 0x202ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x202ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202adc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x202adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ae0: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x202ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
    // 0x202ae4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x202ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x202ae8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x202ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x202aec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x202aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x202af0: 0xa080004e  sb          $zero, 0x4E($a0)
    ctx->pc = 0x202af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x202af4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x202AF4u;
    SET_GPR_U32(ctx, 31, 0x202AFCu);
    ctx->pc = 0x202AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202AF4u;
    // 0x202af8: 0x24440044  addiu       $a0, $v0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x202AF4u, 0x202AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AFCu;
label_202afc:
    // 0x202afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202b00: 0x3e00008  jr          $ra
    ctx->pc = 0x202B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B00u;
        // 0x202b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202B08u;
}

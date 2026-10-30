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

// Function: sub_00228ED0
// Address: 0x228ed0 - 0x228f08
void sub_00228ED0_0x228ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228ED0_0x228ed0");
#endif

    switch (ctx->pc) {
        case 0x228efcu: goto label_228efc;
        default: break;
    }

    ctx->pc = 0x228ed0u;

    // 0x228ed0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x228ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x228ed4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228ed8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x228ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x228edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228ee0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x228ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ee4: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x228ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x228ee8: 0x24430600  addiu       $v1, $v0, 0x600
    ctx->pc = 0x228ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x228eec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x228eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x228ef0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x228ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x228ef4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x228EF4u;
    SET_GPR_U32(ctx, 31, 0x228EFCu);
    ctx->pc = 0x228EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228EF4u;
    // 0x228ef8: 0xa0400617  sb          $zero, 0x617($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 1559), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x228EF4u, 0x228EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228EFCu;
label_228efc:
    // 0x228efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228f00: 0x3e00008  jr          $ra
    ctx->pc = 0x228F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F00u;
        // 0x228f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228F08u;
}

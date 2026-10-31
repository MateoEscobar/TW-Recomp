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

// Function: sub_001521B8
// Address: 0x1521b8 - 0x152208
void sub_001521B8_0x1521b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001521B8_0x1521b8");
#endif

    switch (ctx->pc) {
        case 0x1521fcu: goto label_1521fc;
        default: break;
    }

    ctx->pc = 0x1521b8u;

    // 0x1521b8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1521b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1521bc: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1521bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1521c0: 0x8cc3c5cc  lw          $v1, -0x3A34($a2)
    ctx->pc = 0x1521c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C5CCu));
    // 0x1521c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1521c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1521c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1521c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1521cc: 0x244245c0  addiu       $v0, $v0, 0x45C0
    ctx->pc = 0x1521ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
    // 0x1521d0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1521d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1521d4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1521d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1521d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1521d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1521dc: 0x8cc8c5d8  lw          $t0, -0x3A28($a2)
    ctx->pc = 0x1521dcu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x50C5D8u));
    // 0x1521e0: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x1521e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1521e4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x1521e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1521e8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x1521e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x1521ec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1521ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1521f0: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x1521f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x1521f4: 0xc05482c  jal         func_1520B0
    ctx->pc = 0x1521F4u;
    SET_GPR_U32(ctx, 31, 0x1521FCu);
    ctx->pc = 0x1521F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1521F4u;
    // 0x1521f8: 0xac450008  sw          $a1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1520B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1520B0u, 0x1521F4u, 0x1521FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1521FCu;
label_1521fc:
    // 0x1521fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1521fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152200: 0x3e00008  jr          $ra
    ctx->pc = 0x152200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152200u;
        // 0x152204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152208u;
}

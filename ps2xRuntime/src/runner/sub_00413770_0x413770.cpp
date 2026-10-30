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

// Function: sub_00413770
// Address: 0x413770 - 0x4137d8
void sub_00413770_0x413770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413770_0x413770");
#endif

    switch (ctx->pc) {
        case 0x4137acu: goto label_4137ac;
        case 0x4137c0u: goto label_4137c0;
        default: break;
    }

    ctx->pc = 0x413770u;

    // 0x413770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x413770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x413774: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x413774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x413778: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x413778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x41377c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x413780: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x413780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x413784: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x413784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x413788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x413788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x41378c: 0x24423a10  addiu       $v0, $v0, 0x3A10
    ctx->pc = 0x41378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14864));
    // 0x413790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x413790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x413794: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x413794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413798: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x413798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x41379c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x41379cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4137a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4137a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4137a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4137A4u;
    SET_GPR_U32(ctx, 31, 0x4137ACu);
    ctx->pc = 0x4137A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4137A4u;
    // 0x4137a8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4137A4u, 0x4137ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4137ACu;
label_4137ac:
    // 0x4137ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4137acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4137b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4137b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4137b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4137b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4137b8: 0xc104e2a  jal         func_4138A8
    ctx->pc = 0x4137B8u;
    SET_GPR_U32(ctx, 31, 0x4137C0u);
    ctx->pc = 0x4137BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4137B8u;
    // 0x4137bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4138A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4138A8u, 0x4137B8u, 0x4137C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4137C0u;
label_4137c0:
    // 0x4137c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4137c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4137c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4137c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4137c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4137c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4137cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4137ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4137d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4137D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4137D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4137D0u;
        // 0x4137d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4137D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4137D8u;
}

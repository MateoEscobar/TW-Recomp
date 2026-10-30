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

// Function: sub_0030D7A0
// Address: 0x30d7a0 - 0x30d820
void sub_0030D7A0_0x30d7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D7A0_0x30d7a0");
#endif

    switch (ctx->pc) {
        case 0x30d7f0u: goto label_30d7f0;
        default: break;
    }

    ctx->pc = 0x30d7a0u;

    // 0x30d7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d7a4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30d7a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30d7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x30d7ac: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30d7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30d7b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30d7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30d7b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30d7bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30d7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d7c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x30d7c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7c8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30d7cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30d7d0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x30d7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30d7d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30d7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30d7dc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30d7e0: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30d7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d7e4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30d7e8: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30D7E8u;
    SET_GPR_U32(ctx, 31, 0x30D7F0u);
    ctx->pc = 0x30D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7E8u;
    // 0x30d7ec: 0xae090008  sw          $t1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30D7E8u, 0x30D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7F0u;
label_30d7f0:
    // 0x30d7f0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30d7f4: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x30d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x30d7f8: 0x24423680  addiu       $v0, $v0, 0x3680
    ctx->pc = 0x30d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13952));
    // 0x30d7fc: 0xa2120024  sb          $s2, 0x24($s0)
    ctx->pc = 0x30d7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 18));
    // 0x30d800: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30d800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30d804: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30d804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d808: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30d808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d80c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x30d80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d810: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x30d810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d818: 0x3e00008  jr          $ra
    ctx->pc = 0x30D818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D818u;
        // 0x30d81c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D820u;
}

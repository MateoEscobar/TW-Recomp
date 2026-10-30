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

// Function: sub_003205B0
// Address: 0x3205b0 - 0x320618
void sub_003205B0_0x3205b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003205B0_0x3205b0");
#endif

    switch (ctx->pc) {
        case 0x3205f0u: goto label_3205f0;
        default: break;
    }

    ctx->pc = 0x3205b0u;

    // 0x3205b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3205b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3205b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3205b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3205b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3205b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3205bc: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x3205bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x3205c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3205c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3205c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3205c8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3205c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3205cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3205ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3205d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3205d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3205d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3205d8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3205d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3205dc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3205dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3205e0: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x3205e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x3205e4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3205e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3205e8: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x3205E8u;
    SET_GPR_U32(ctx, 31, 0x3205F0u);
    ctx->pc = 0x3205ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3205E8u;
    // 0x3205ec: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x3205E8u, 0x3205F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3205F0u;
label_3205f0:
    // 0x3205f0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x3205f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x3205f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3205f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3205f8: 0x24634160  addiu       $v1, $v1, 0x4160
    ctx->pc = 0x3205f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16736));
    // 0x3205fc: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x3205fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x320600: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x320600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x320604: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x320604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x320608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x320608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32060c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32060cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320610: 0x3e00008  jr          $ra
    ctx->pc = 0x320610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320610u;
        // 0x320614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320618u;
}

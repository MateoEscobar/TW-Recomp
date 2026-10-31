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

// Function: sub_0030E0C0
// Address: 0x30e0c0 - 0x30e130
void sub_0030E0C0_0x30e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E0C0_0x30e0c0");
#endif

    switch (ctx->pc) {
        case 0x30e108u: goto label_30e108;
        default: break;
    }

    ctx->pc = 0x30e0c0u;

    // 0x30e0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e0c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30e0c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30e0cc: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30e0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30e0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e0d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30e0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e0dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30e0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e0e0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30e0e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30e0e8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x30e0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e0ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30e0f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30e0f4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30e0f8: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30e0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e0fc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30e100: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30E100u;
    SET_GPR_U32(ctx, 31, 0x30E108u);
    ctx->pc = 0x30E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E100u;
    // 0x30e104: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30E100u, 0x30E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E108u;
label_30e108:
    // 0x30e108: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x30e108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x30e10c: 0xa2110020  sb          $s1, 0x20($s0)
    ctx->pc = 0x30e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 17));
    // 0x30e110: 0x246336e0  addiu       $v1, $v1, 0x36E0
    ctx->pc = 0x30e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14048));
    // 0x30e114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30e114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e118: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x30e118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x30e11c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30e11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30e120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e128: 0x3e00008  jr          $ra
    ctx->pc = 0x30E128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E128u;
        // 0x30e12c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E130u;
}

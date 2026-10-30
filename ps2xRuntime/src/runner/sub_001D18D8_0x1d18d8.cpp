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

// Function: sub_001D18D8
// Address: 0x1d18d8 - 0x1d1958
void sub_001D18D8_0x1d18d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D18D8_0x1d18d8");
#endif

    switch (ctx->pc) {
        case 0x1d1914u: goto label_1d1914;
        case 0x1d1920u: goto label_1d1920;
        case 0x1d192cu: goto label_1d192c;
        case 0x1d1938u: goto label_1d1938;
        case 0x1d1944u: goto label_1d1944;
        default: break;
    }

    ctx->pc = 0x1d18d8u;

    // 0x1d18d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d18d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d18dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1d18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x1d18e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d18e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d18e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1d18e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1d18e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d18e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d18ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d18ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d18f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d18f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d18f4: 0x2442b488  addiu       $v0, $v0, -0x4B78
    ctx->pc = 0x1d18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947976));
    // 0x1d18f8: 0x2463b4b0  addiu       $v1, $v1, -0x4B50
    ctx->pc = 0x1d18f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948016));
    // 0x1d18fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d18fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1900: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1d1900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1d1904: 0x26040430  addiu       $a0, $s0, 0x430
    ctx->pc = 0x1d1904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1072));
    // 0x1d1908: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d1908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d190c: 0xc073aac  jal         func_1CEAB0
    ctx->pc = 0x1D190Cu;
    SET_GPR_U32(ctx, 31, 0x1D1914u);
    ctx->pc = 0x1D1910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D190Cu;
    // 0x1d1910: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEAB0u, 0x1D190Cu, 0x1D1914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1914u;
label_1d1914:
    // 0x1d1914: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x1d1914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x1d1918: 0xc074fde  jal         func_1D3F78
    ctx->pc = 0x1D1918u;
    SET_GPR_U32(ctx, 31, 0x1D1920u);
    ctx->pc = 0x1D191Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1918u;
    // 0x1d191c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3F78u, 0x1D1918u, 0x1D1920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1920u;
label_1d1920:
    // 0x1d1920: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x1d1920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1d1924: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x1D1924u;
    SET_GPR_U32(ctx, 31, 0x1D192Cu);
    ctx->pc = 0x1D1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1924u;
    // 0x1d1928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x1D1924u, 0x1D192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D192Cu;
label_1d192c:
    // 0x1d192c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1d192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1d1930: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1D1930u;
    SET_GPR_U32(ctx, 31, 0x1D1938u);
    ctx->pc = 0x1D1934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1930u;
    // 0x1d1934: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1D1930u, 0x1D1938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1938u;
label_1d1938:
    // 0x1d1938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d193c: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x1D193Cu;
    SET_GPR_U32(ctx, 31, 0x1D1944u);
    ctx->pc = 0x1D1940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D193Cu;
    // 0x1d1940: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1D193Cu, 0x1D1944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1944u;
label_1d1944:
    // 0x1d1944: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d1944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d194c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d194cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1950: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1950u;
        // 0x1d1954: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1958u;
}

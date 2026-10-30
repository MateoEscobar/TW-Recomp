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

// Function: sub_001CAFA0
// Address: 0x1cafa0 - 0x1cb000
void sub_001CAFA0_0x1cafa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAFA0_0x1cafa0");
#endif

    switch (ctx->pc) {
        case 0x1cafd0u: goto label_1cafd0;
        case 0x1cafe0u: goto label_1cafe0;
        case 0x1cafe8u: goto label_1cafe8;
        default: break;
    }

    ctx->pc = 0x1cafa0u;

    // 0x1cafa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cafa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cafa4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cafa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cafa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cafa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cafac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cafacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafb0: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1cafb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1cafb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cafb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cafb8: 0x8e24ea74  lw          $a0, -0x158C($s1)
    ctx->pc = 0x1cafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50EA74u));
    // 0x1cafbc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAFBCu;
    {
        const bool branch_taken_0x1cafbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFBCu;
        // 0x1cafc0: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cafbc) {
            ctx->pc = 0x1CAFD4u;
            goto label_1cafd4;
        }
    }
    ctx->pc = 0x1CAFC4u;
    // 0x1cafc4: 0x240600e7  addiu       $a2, $zero, 0xE7
    ctx->pc = 0x1cafc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
    // 0x1cafc8: 0xc136ac2  jal         func_4DAB08
    ctx->pc = 0x1CAFC8u;
    SET_GPR_U32(ctx, 31, 0x1CAFD0u);
    ctx->pc = 0x1CAFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFC8u;
    // 0x1cafcc: 0x24a556e0  addiu       $a1, $a1, 0x56E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB08u, 0x1CAFC8u, 0x1CAFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFD0u;
label_1cafd0:
    // 0x1cafd0: 0xae20ea74  sw          $zero, -0x158C($s1)
    ctx->pc = 0x1cafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294961780), GPR_U32(ctx, 0));
label_1cafd4:
    // 0x1cafd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cafd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cafd8: 0xc072b1e  jal         func_1CAC78
    ctx->pc = 0x1CAFD8u;
    SET_GPR_U32(ctx, 31, 0x1CAFE0u);
    ctx->pc = 0x1CAFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFD8u;
    // 0x1cafdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAC78u, 0x1CAFD8u, 0x1CAFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFE0u;
label_1cafe0:
    // 0x1cafe0: 0xc0705c6  jal         func_1C1718
    ctx->pc = 0x1CAFE0u;
    SET_GPR_U32(ctx, 31, 0x1CAFE8u);
    ctx->pc = 0x1CAFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFE0u;
    // 0x1cafe4: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1718u, 0x1CAFE0u, 0x1CAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFE8u;
label_1cafe8:
    // 0x1cafe8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cafe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cafec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cafecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1caff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAFF4u;
        // 0x1caff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAFFCu;
    // 0x1caffc: 0x0  nop
    ctx->pc = 0x1caffcu;
    // NOP
    ctx->pc = 0x1cb000u;
}

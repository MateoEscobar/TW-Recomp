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

// Function: sub_002D3290
// Address: 0x2d3290 - 0x2d32f8
void sub_002D3290_0x2d3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3290_0x2d3290");
#endif

    switch (ctx->pc) {
        case 0x2d32b8u: goto label_2d32b8;
        case 0x2d32c4u: goto label_2d32c4;
        case 0x2d32d4u: goto label_2d32d4;
        case 0x2d32e8u: goto label_2d32e8;
        default: break;
    }

    ctx->pc = 0x2d3290u;

    // 0x2d3290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d3294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3298: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d3298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d329c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d32a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d32a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d32a8: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x2d32a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x2d32ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d32acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d32b0: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D32B0u;
    SET_GPR_U32(ctx, 31, 0x2D32B8u);
    ctx->pc = 0x2D32B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D32B0u;
    // 0x2d32b4: 0x82050030  lb          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D32B0u, 0x2D32B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32B8u;
label_2d32b8:
    // 0x2d32b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d32bc: 0xc0a3398  jal         func_28CE60
    ctx->pc = 0x2D32BCu;
    SET_GPR_U32(ctx, 31, 0x2D32C4u);
    ctx->pc = 0x2D32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D32BCu;
    // 0x2d32c0: 0x82050031  lb          $a1, 0x31($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x2D32BCu, 0x2D32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32C4u;
label_2d32c4:
    // 0x2d32c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d32c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d32c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d32cc: 0xc08a05a  jal         func_228168
    ctx->pc = 0x2D32CCu;
    SET_GPR_U32(ctx, 31, 0x2D32D4u);
    ctx->pc = 0x2D32D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D32CCu;
    // 0x2d32d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x2D32CCu, 0x2D32D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32D4u;
label_2d32d4:
    // 0x2d32d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d32d8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D32D8u;
    {
        const bool branch_taken_0x2d32d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d32d8) {
            ctx->pc = 0x2D32DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D32D8u;
            // 0x2d32dc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D32ECu;
            goto label_2d32ec;
        }
    }
    ctx->pc = 0x2D32E0u;
    // 0x2d32e0: 0xc08c050  jal         func_230140
    ctx->pc = 0x2D32E0u;
    SET_GPR_U32(ctx, 31, 0x2D32E8u);
    ctx->pc = 0x2D32E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D32E0u;
    // 0x2d32e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x2D32E0u, 0x2D32E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32E8u;
label_2d32e8:
    // 0x2d32e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d32e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d32ec:
    // 0x2d32ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d32ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d32f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D32F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D32F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32F0u;
        // 0x2d32f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D32F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D32F8u;
}

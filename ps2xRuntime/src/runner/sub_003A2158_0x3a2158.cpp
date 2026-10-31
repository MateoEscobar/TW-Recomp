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

// Function: sub_003A2158
// Address: 0x3a2158 - 0x3a21c0
void sub_003A2158_0x3a2158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2158_0x3a2158");
#endif

    switch (ctx->pc) {
        case 0x3a2194u: goto label_3a2194;
        case 0x3a21a4u: goto label_3a21a4;
        case 0x3a21acu: goto label_3a21ac;
        default: break;
    }

    ctx->pc = 0x3a2158u;

    // 0x3a2158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a2158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a215c: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x3a215cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x3a2160: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a2160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a2164: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a2164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a2168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a2168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a216c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a216cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a2174: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3a2174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3a2178: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x3a2178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x3a217c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a217cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3a2180: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a2180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a2184: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a2184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a2188: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3a2188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3a218c: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A218Cu;
    SET_GPR_U32(ctx, 31, 0x3A2194u);
    ctx->pc = 0x3A2190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A218Cu;
    // 0x3a2190: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A218Cu, 0x3A2194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2194u;
label_3a2194:
    // 0x3a2194: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a2198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a2198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a219c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3A219Cu;
    SET_GPR_U32(ctx, 31, 0x3A21A4u);
    ctx->pc = 0x3A21A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A219Cu;
    // 0x3a21a0: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3A219Cu, 0x3A21A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A21A4u;
label_3a21a4:
    // 0x3a21a4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A21A4u;
    SET_GPR_U32(ctx, 31, 0x3A21ACu);
    ctx->pc = 0x3A21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A21A4u;
    // 0x3a21a8: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A21A4u, 0x3A21ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A21ACu;
label_3a21ac:
    // 0x3a21ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a21acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a21b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a21b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a21b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a21b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a21b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A21B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21B8u;
        // 0x3a21bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A21B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A21C0u;
}

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

// Function: sub_00322188
// Address: 0x322188 - 0x3221e8
void sub_00322188_0x322188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322188_0x322188");
#endif

    ctx->pc = 0x322188u;

    // 0x322188: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x322188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32218c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x32218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x322190: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x322190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x322194: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x322194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x322198: 0x246342c8  addiu       $v1, $v1, 0x42C8
    ctx->pc = 0x322198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17096));
    // 0x32219c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x32219cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3221a0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x3221a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x3221a4: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x3221a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x3221a8: 0xa1040016  sb          $a0, 0x16($t0)
    ctx->pc = 0x3221a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 22), (uint8_t)GPR_U32(ctx, 4));
    // 0x3221ac: 0xa1060017  sb          $a2, 0x17($t0)
    ctx->pc = 0x3221acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 23), (uint8_t)GPR_U32(ctx, 6));
    // 0x3221b0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3221b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3221b4: 0xa1000008  sb          $zero, 0x8($t0)
    ctx->pc = 0x3221b4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x3221b8: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x3221b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x3221bc: 0xa1000014  sb          $zero, 0x14($t0)
    ctx->pc = 0x3221bcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x3221c0: 0xa1000015  sb          $zero, 0x15($t0)
    ctx->pc = 0x3221c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x3221c4: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3221C4u;
    {
        const bool branch_taken_0x3221c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3221C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221C4u;
        // 0x3221c8: 0xa1000018  sb          $zero, 0x18($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221c4) {
            ctx->pc = 0x3221E0u;
            goto label_3221e0;
        }
    }
    ctx->pc = 0x3221CCu;
    // 0x3221cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3221ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3221d0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3221d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x3221d4: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3221d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3221d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3221d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3221dc: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x3221dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_3221e0:
    // 0x3221e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3221E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3221E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221E0u;
        // 0x3221e4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3221E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3221E8u;
}

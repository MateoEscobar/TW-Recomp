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

// Function: sub_00110638
// Address: 0x110638 - 0x110690
void sub_00110638_0x110638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110638_0x110638");
#endif

    ctx->pc = 0x110638u;

    // 0x110638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x110638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11063c: 0x0  nop
    ctx->pc = 0x11063cu;
    // NOP
    // 0x110640: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x110640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x110644: 0x0  nop
    ctx->pc = 0x110644u;
    // NOP
    // 0x110648: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x110648u;
    {
        const bool branch_taken_0x110648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110648u;
        // 0x11064c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110648) {
            ctx->pc = 0x110654u;
            goto label_110654;
        }
    }
    ctx->pc = 0x110650u;
    // 0x110650: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x110650u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_110654:
    // 0x110654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x110658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11065c: 0x0  nop
    ctx->pc = 0x11065cu;
    // NOP
    // 0x110660: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x110660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x110664: 0x0  nop
    ctx->pc = 0x110664u;
    // NOP
    // 0x110668: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x110668u;
    {
        const bool branch_taken_0x110668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x110668) {
            ctx->pc = 0x11066Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110668u;
            // 0x11066c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x110670u;
            goto label_110670;
        }
    }
    ctx->pc = 0x110670u;
label_110670:
    // 0x110670: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x110670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x110674: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x110674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x110678: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x110678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x11067c: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x11067cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x110680: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x110680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x110684: 0xe44c7a20  swc1        $f12, 0x7A20($v0)
    ctx->pc = 0x110684u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 31264), bits); }
    // 0x110688: 0x3e00008  jr          $ra
    ctx->pc = 0x110688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110688u;
        // 0x11068c: 0xe48c57a8  swc1        $f12, 0x57A8($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 22440), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110690u;
}

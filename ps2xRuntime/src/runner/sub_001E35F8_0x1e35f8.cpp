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

// Function: sub_001E35F8
// Address: 0x1e35f8 - 0x1e3670
void sub_001E35F8_0x1e35f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E35F8_0x1e35f8");
#endif

    switch (ctx->pc) {
        case 0x1e3644u: goto label_1e3644;
        case 0x1e3654u: goto label_1e3654;
        case 0x1e365cu: goto label_1e365c;
        default: break;
    }

    ctx->pc = 0x1e35f8u;

    // 0x1e35f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e35f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e35fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e35fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e3600: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e3600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1e3604: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e3608: 0xc440eee4  lwc1        $f0, -0x111C($v0)
    ctx->pc = 0x1e3608u;
    { uint32_t bits = FAST_READ32(0x50EEE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e360c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e360cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3610: 0xc461eee8  lwc1        $f1, -0x1118($v1)
    ctx->pc = 0x1e3610u;
    { uint32_t bits = FAST_READ32(0x50EEE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3614: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e3614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3618: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e361c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e361cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e3620: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e3620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3628: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e362c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e3630: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1e3630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1e3634: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e3634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e3638: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1e3638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e363c: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E363Cu;
    SET_GPR_U32(ctx, 31, 0x1E3644u);
    ctx->pc = 0x1E3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E363Cu;
    // 0x1e3640: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E363Cu, 0x1E3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3644u;
label_1e3644:
    // 0x1e3644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3648: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e364c: 0xc073464  jal         func_1CD190
    ctx->pc = 0x1E364Cu;
    SET_GPR_U32(ctx, 31, 0x1E3654u);
    ctx->pc = 0x1E3650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E364Cu;
    // 0x1e3650: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD190u, 0x1E364Cu, 0x1E3654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3654u;
label_1e3654:
    // 0x1e3654: 0xc0734a0  jal         func_1CD280
    ctx->pc = 0x1E3654u;
    SET_GPR_U32(ctx, 31, 0x1E365Cu);
    ctx->pc = 0x1E3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3654u;
    // 0x1e3658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD280u, 0x1E3654u, 0x1E365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E365Cu;
label_1e365c:
    // 0x1e365c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e365cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3664: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3664u;
        // 0x1e3668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E366Cu;
    // 0x1e366c: 0x0  nop
    ctx->pc = 0x1e366cu;
    // NOP
    ctx->pc = 0x1e3670u;
}

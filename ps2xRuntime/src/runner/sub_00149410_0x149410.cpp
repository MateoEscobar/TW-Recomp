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

// Function: sub_00149410
// Address: 0x149410 - 0x1494d0
void sub_00149410_0x149410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149410_0x149410");
#endif

    switch (ctx->pc) {
        case 0x14944cu: goto label_14944c;
        case 0x149460u: goto label_149460;
        case 0x149474u: goto label_149474;
        case 0x149480u: goto label_149480;
        case 0x149488u: goto label_149488;
        case 0x1494b0u: goto label_1494b0;
        default: break;
    }

    ctx->pc = 0x149410u;

    // 0x149410: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x149410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x149414: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x149418: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x149418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14941c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14941cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149420: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x149420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x149424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x149424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149428: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x149428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14942c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x14942cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x149430: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x149430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x149434: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x149434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x149438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14943c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x14943cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149440: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x149440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149444: 0xc050fda  jal         func_143F68
    ctx->pc = 0x149444u;
    SET_GPR_U32(ctx, 31, 0x14944Cu);
    ctx->pc = 0x149448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149444u;
    // 0x149448: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x149444u, 0x14944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14944Cu;
label_14944c:
    // 0x14944c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x149450: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149454: 0x8c6447a4  lw          $a0, 0x47A4($v1)
    ctx->pc = 0x149454u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147A4u));
    // 0x149458: 0xc10318a  jal         func_40C628
    ctx->pc = 0x149458u;
    SET_GPR_U32(ctx, 31, 0x149460u);
    ctx->pc = 0x14945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149458u;
    // 0x14945c: 0xae620100  sw          $v0, 0x100($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C628u, 0x149458u, 0x149460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149460u;
label_149460:
    // 0x149460: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x149460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149464: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x149464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x149468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14946c: 0xc05406a  jal         func_1501A8
    ctx->pc = 0x14946Cu;
    SET_GPR_U32(ctx, 31, 0x149474u);
    ctx->pc = 0x149470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14946Cu;
    // 0x149470: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501A8u, 0x14946Cu, 0x149474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149474u;
label_149474:
    // 0x149474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x149474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149478: 0xc052540  jal         func_149500
    ctx->pc = 0x149478u;
    SET_GPR_U32(ctx, 31, 0x149480u);
    ctx->pc = 0x14947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149478u;
    // 0x14947c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149500u, 0x149478u, 0x149480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149480u;
label_149480:
    // 0x149480: 0xc0542dc  jal         func_150B70
    ctx->pc = 0x149480u;
    SET_GPR_U32(ctx, 31, 0x149488u);
    ctx->pc = 0x149484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149480u;
    // 0x149484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B70u, 0x149480u, 0x149488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149488u;
label_149488:
    // 0x149488: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x149488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14948c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x149494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x149498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14949c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14949cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1494a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494a4: 0x240a007e  addiu       $t2, $zero, 0x7E
    ctx->pc = 0x1494a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1494a8: 0xc05378a  jal         func_14DE28
    ctx->pc = 0x1494A8u;
    SET_GPR_U32(ctx, 31, 0x1494B0u);
    ctx->pc = 0x1494ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1494A8u;
    // 0x1494ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DE28u, 0x1494A8u, 0x1494B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1494B0u;
label_1494b0:
    // 0x1494b0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1494b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1494b4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1494b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1494b8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1494b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1494bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1494bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1494c0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1494c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1494c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1494c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1494c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1494C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1494CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1494C8u;
        // 0x1494cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1494C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1494D0u;
}

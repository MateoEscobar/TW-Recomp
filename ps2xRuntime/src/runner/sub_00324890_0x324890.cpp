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

// Function: sub_00324890
// Address: 0x324890 - 0x3248f0
void sub_00324890_0x324890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324890_0x324890");
#endif

    switch (ctx->pc) {
        case 0x3248d4u: goto label_3248d4;
        case 0x3248e0u: goto label_3248e0;
        default: break;
    }

    ctx->pc = 0x324890u;

    // 0x324890: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x324890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x324894: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x324894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
    // 0x324898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32489c: 0xffa60260  sd          $a2, 0x260($sp)
    ctx->pc = 0x32489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 6));
    // 0x3248a0: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x3248a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x3248a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3248a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248a8: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x3248a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x3248ac: 0xffa70268  sd          $a3, 0x268($sp)
    ctx->pc = 0x3248acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 7));
    // 0x3248b0: 0xffa80270  sd          $t0, 0x270($sp)
    ctx->pc = 0x3248b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 8));
    // 0x3248b4: 0xffa90278  sd          $t1, 0x278($sp)
    ctx->pc = 0x3248b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 9));
    // 0x3248b8: 0xffaa0280  sd          $t2, 0x280($sp)
    ctx->pc = 0x3248b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 10));
    // 0x3248bc: 0xffab0288  sd          $t3, 0x288($sp)
    ctx->pc = 0x3248bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 11));
    // 0x3248c0: 0xe7ac0250  swc1        $f12, 0x250($sp)
    ctx->pc = 0x3248c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x3248c4: 0xe7ae0254  swc1        $f14, 0x254($sp)
    ctx->pc = 0x3248c4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
    // 0x3248c8: 0xe7b00258  swc1        $f16, 0x258($sp)
    ctx->pc = 0x3248c8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x3248cc: 0xc10ce32  jal         func_4338C8
    ctx->pc = 0x3248CCu;
    SET_GPR_U32(ctx, 31, 0x3248D4u);
    ctx->pc = 0x3248D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3248CCu;
    // 0x3248d0: 0xe7b2025c  swc1        $f18, 0x25C($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4338C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4338C8u, 0x3248CCu, 0x3248D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3248D4u;
label_3248d4:
    // 0x3248d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3248d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248d8: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3248D8u;
    SET_GPR_U32(ctx, 31, 0x3248E0u);
    ctx->pc = 0x3248DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3248D8u;
    // 0x3248dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3248D8u, 0x3248E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3248E0u;
label_3248e0:
    // 0x3248e0: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x3248e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x3248e4: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x3248e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3248e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3248E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3248ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248E8u;
        // 0x3248ec: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3248E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3248F0u;
}

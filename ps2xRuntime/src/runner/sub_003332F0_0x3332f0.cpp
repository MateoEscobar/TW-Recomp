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

// Function: sub_003332F0
// Address: 0x3332f0 - 0x333380
void sub_003332F0_0x3332f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003332F0_0x3332f0");
#endif

    switch (ctx->pc) {
        case 0x333328u: goto label_333328;
        case 0x333340u: goto label_333340;
        case 0x33335cu: goto label_33335c;
        default: break;
    }

    ctx->pc = 0x3332f0u;

    // 0x3332f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3332f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3332f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3332f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3332f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3332f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3332fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3332fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333300: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x333300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x333304: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x333304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333308: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x333308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x33330c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x33330cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333310: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x333310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x333314: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x333314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333318: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x333318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x33331c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333320: 0xc0cca8e  jal         func_332A38
    ctx->pc = 0x333320u;
    SET_GPR_U32(ctx, 31, 0x333328u);
    ctx->pc = 0x333324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333320u;
    // 0x333324: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332A38u, 0x333320u, 0x333328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333328u;
label_333328:
    // 0x333328: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x333328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33332c: 0x1254000b  beq         $s2, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x33332Cu;
    {
        const bool branch_taken_0x33332c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x333330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33332Cu;
        // 0x333330: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33332c) {
            ctx->pc = 0x33335Cu;
            goto label_33335c;
        }
    }
    ctx->pc = 0x333334u;
    // 0x333334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333338: 0xc0cca76  jal         func_3329D8
    ctx->pc = 0x333338u;
    SET_GPR_U32(ctx, 31, 0x333340u);
    ctx->pc = 0x33333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333338u;
    // 0x33333c: 0x261066b8  addiu       $s0, $s0, 0x66B8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329D8u, 0x333338u, 0x333340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333340u;
label_333340:
    // 0x333340: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x333340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333348: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x333348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33334c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33334cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333350: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x333350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333354: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x333354u;
    SET_GPR_U32(ctx, 31, 0x33335Cu);
    ctx->pc = 0x333358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333354u;
    // 0x333358: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x333354u, 0x33335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33335Cu;
label_33335c:
    // 0x33335c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x33335cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x333360: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x333360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x333364: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x333364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333368: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x333368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33336c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x33336cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333370: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x333370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333378: 0x3e00008  jr          $ra
    ctx->pc = 0x333378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333378u;
        // 0x33337c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333380u;
}

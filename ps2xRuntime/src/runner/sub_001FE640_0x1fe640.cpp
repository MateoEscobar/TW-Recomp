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

// Function: sub_001FE640
// Address: 0x1fe640 - 0x1fe720
void sub_001FE640_0x1fe640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE640_0x1fe640");
#endif

    switch (ctx->pc) {
        case 0x1fe670u: goto label_1fe670;
        case 0x1fe688u: goto label_1fe688;
        case 0x1fe6a0u: goto label_1fe6a0;
        case 0x1fe6a8u: goto label_1fe6a8;
        case 0x1fe6bcu: goto label_1fe6bc;
        case 0x1fe6e4u: goto label_1fe6e4;
        case 0x1fe700u: goto label_1fe700;
        default: break;
    }

    ctx->pc = 0x1fe640u;

    // 0x1fe640: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1fe640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1fe644: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1fe644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1fe648: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1fe648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1fe64c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1fe64cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1fe650: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1fe650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1fe654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe658: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fe658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fe65c: 0x3c120056  lui         $s2, 0x56
    ctx->pc = 0x1fe65cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)86 << 16));
    // 0x1fe660: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1fe660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1fe664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fe668: 0xc07f9c8  jal         func_1FE720
    ctx->pc = 0x1FE668u;
    SET_GPR_U32(ctx, 31, 0x1FE670u);
    ctx->pc = 0x1FE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE668u;
    // 0x1fe66c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE720u, 0x1FE668u, 0x1FE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE670u;
label_1fe670:
    // 0x1fe670: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1fe670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x1fe674: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1fe674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1fe678: 0x24a58128  addiu       $a1, $a1, -0x7ED8
    ctx->pc = 0x1fe678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934824));
    // 0x1fe67c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fe67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe680: 0xc05a872  jal         func_16A1C8
    ctx->pc = 0x1FE680u;
    SET_GPR_U32(ctx, 31, 0x1FE688u);
    ctx->pc = 0x1FE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE680u;
    // 0x1fe684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1C8u, 0x1FE680u, 0x1FE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE688u;
label_1fe688:
    // 0x1fe688: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1fe688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fe68c: 0xa602f4ec  sh          $v0, -0xB14($s0)
    ctx->pc = 0x1fe68cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4294964460), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fe690: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fe690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe698: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1FE698u;
    SET_GPR_U32(ctx, 31, 0x1FE6A0u);
    ctx->pc = 0x1FE69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE698u;
    // 0x1fe69c: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1FE698u, 0x1FE6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6A0u;
label_1fe6a0:
    // 0x1fe6a0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1fe6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x1fe6a4: 0x2450ee90  addiu       $s0, $v0, -0x1170
    ctx->pc = 0x1fe6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
label_1fe6a8:
    // 0x1fe6a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1fe6acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1fe6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1fe6b4: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1FE6B4u;
    SET_GPR_U32(ctx, 31, 0x1FE6BCu);
    ctx->pc = 0x1FE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6B4u;
    // 0x1fe6b8: 0x26468138  addiu       $a2, $s2, -0x7EC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1FE6B4u, 0x1FE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6BCu;
label_1fe6bc:
    // 0x1fe6bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fe6c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fe6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fe6c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fe6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6c8: 0x8689f4ec  lh          $t1, -0xB14($s4)
    ctx->pc = 0x1fe6c8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294964460)));
    // 0x1fe6cc: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x1fe6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1fe6d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1fe6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe6dc: 0xc08cf58  jal         func_233D60
    ctx->pc = 0x1FE6DCu;
    SET_GPR_U32(ctx, 31, 0x1FE6E4u);
    ctx->pc = 0x1FE6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6DCu;
    // 0x1fe6e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x1FE6DCu, 0x1FE6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE6E4u;
label_1fe6e4:
    // 0x1fe6e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fe6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fe6e8: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x1fe6e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fe6ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FE6ECu;
    {
        const bool branch_taken_0x1fe6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6ECu;
        // 0x1fe6f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe6ec) {
            ctx->pc = 0x1FE6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe6a8;
        }
    }
    ctx->pc = 0x1FE6F4u;
    // 0x1fe6f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fe6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fe6f8: 0xc06254a  jal         func_189528
    ctx->pc = 0x1FE6F8u;
    SET_GPR_U32(ctx, 31, 0x1FE700u);
    ctx->pc = 0x1FE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6F8u;
    // 0x1fe6fc: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189528u, 0x1FE6F8u, 0x1FE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE700u;
label_1fe700:
    // 0x1fe700: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1fe700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fe704: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1fe704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fe708: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1fe708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fe70c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fe70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fe710: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1fe710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe714: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe718: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE718u;
        // 0x1fe71c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE720u;
}

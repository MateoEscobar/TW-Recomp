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

// Function: sub_00114628
// Address: 0x114628 - 0x1146c0
void sub_00114628_0x114628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114628_0x114628");
#endif

    switch (ctx->pc) {
        case 0x11465cu: goto label_11465c;
        case 0x11466cu: goto label_11466c;
        case 0x114688u: goto label_114688;
        case 0x1146a0u: goto label_1146a0;
        case 0x1146a8u: goto label_1146a8;
        default: break;
    }

    ctx->pc = 0x114628u;

    // 0x114628: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x114628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11462c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11462cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x114630: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x114630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x114634: 0x34423d64  ori         $v0, $v0, 0x3D64
    ctx->pc = 0x114634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15716);
    // 0x114638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11463c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x11463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x114640: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x114640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x114644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114648: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x114648u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11464c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x114650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114654: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x114654u;
    SET_GPR_U32(ctx, 31, 0x11465Cu);
    ctx->pc = 0x114658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114654u;
    // 0x114658: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x114654u, 0x11465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11465Cu;
label_11465c:
    // 0x11465c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x11465Cu;
    {
        const bool branch_taken_0x11465c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11465c) {
            ctx->pc = 0x114660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11465Cu;
            // 0x114660: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1146ACu;
            goto label_1146ac;
        }
    }
    ctx->pc = 0x114664u;
    // 0x114664: 0xc04514a  jal         func_114528
    ctx->pc = 0x114664u;
    SET_GPR_U32(ctx, 31, 0x11466Cu);
    ctx->pc = 0x114668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114664u;
    // 0x114668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114528u, 0x114664u, 0x11466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11466Cu;
label_11466c:
    // 0x11466c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11466cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x114670: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x114670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x114674: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x114674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x114678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x114678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11467c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11467cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114680: 0xc10c4de  jal         func_431378
    ctx->pc = 0x114680u;
    SET_GPR_U32(ctx, 31, 0x114688u);
    ctx->pc = 0x114684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114680u;
    // 0x114684: 0xa0403da3  sb          $zero, 0x3DA3($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 15779), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x114680u, 0x114688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114688u;
label_114688:
    // 0x114688: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x114688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x11468c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114690: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x114690u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114694: 0x24c67d00  addiu       $a2, $a2, 0x7D00
    ctx->pc = 0x114694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32000));
    // 0x114698: 0xc10ca04  jal         func_432810
    ctx->pc = 0x114698u;
    SET_GPR_U32(ctx, 31, 0x1146A0u);
    ctx->pc = 0x11469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114698u;
    // 0x11469c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x114698u, 0x1146A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146A0u;
label_1146a0:
    // 0x1146a0: 0xc0d5e68  jal         func_3579A0
    ctx->pc = 0x1146A0u;
    SET_GPR_U32(ctx, 31, 0x1146A8u);
    ctx->pc = 0x1146A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1146A0u;
    // 0x1146a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3579A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3579A0u, 0x1146A0u, 0x1146A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146A8u;
label_1146a8:
    // 0x1146a8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1146a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1146ac:
    // 0x1146ac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1146acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1146b0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1146b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1146b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1146b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1146b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1146B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1146BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146B8u;
        // 0x1146bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1146B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1146C0u;
}

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

// Function: sub_003842C0
// Address: 0x3842c0 - 0x384398
void sub_003842C0_0x3842c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003842C0_0x3842c0");
#endif

    switch (ctx->pc) {
        case 0x3842e8u: goto label_3842e8;
        case 0x3842f0u: goto label_3842f0;
        case 0x384300u: goto label_384300;
        case 0x384318u: goto label_384318;
        case 0x384320u: goto label_384320;
        case 0x38433cu: goto label_38433c;
        case 0x384348u: goto label_384348;
        case 0x384358u: goto label_384358;
        case 0x38436cu: goto label_38436c;
        default: break;
    }

    ctx->pc = 0x3842c0u;

    // 0x3842c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3842c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3842c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3842c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3842c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3842c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3842cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3842ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3842d0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3842d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3842d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3842d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3842d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3842d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3842dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3842dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3842e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3842E0u;
    SET_GPR_U32(ctx, 31, 0x3842E8u);
    ctx->pc = 0x3842E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3842E0u;
    // 0x3842e4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3842E0u, 0x3842E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3842E8u;
label_3842e8:
    // 0x3842e8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3842E8u;
    SET_GPR_U32(ctx, 31, 0x3842F0u);
    ctx->pc = 0x3842ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3842E8u;
    // 0x3842ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3842E8u, 0x3842F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3842F0u;
label_3842f0:
    // 0x3842f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3842f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3842f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3842f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3842f8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3842f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3842fc: 0x0  nop
    ctx->pc = 0x3842fcu;
    // NOP
label_384300:
    // 0x384300: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x384300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x384304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384308: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x384308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38430c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38430cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384310: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x384310u;
    SET_GPR_U32(ctx, 31, 0x384318u);
    ctx->pc = 0x384314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384310u;
    // 0x384314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x384310u, 0x384318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384318u;
label_384318:
    // 0x384318: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x384318u;
    SET_GPR_U32(ctx, 31, 0x384320u);
    ctx->pc = 0x38431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384318u;
    // 0x38431c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x384318u, 0x384320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384320u;
label_384320:
    // 0x384320: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x384320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x384324: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x384324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x384328: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384328u;
    {
        const bool branch_taken_0x384328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384328u;
        // 0x38432c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384328) {
            ctx->pc = 0x384300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384300;
        }
    }
    ctx->pc = 0x384330u;
    // 0x384330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x384330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384334: 0xc08a222  jal         func_228888
    ctx->pc = 0x384334u;
    SET_GPR_U32(ctx, 31, 0x38433Cu);
    ctx->pc = 0x384338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384334u;
    // 0x384338: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228888u, 0x384334u, 0x38433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38433Cu;
label_38433c:
    // 0x38433c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38433cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384340: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x384340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x384344: 0x0  nop
    ctx->pc = 0x384344u;
    // NOP
label_384348:
    // 0x384348: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x384348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x38434c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38434cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x384350: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x384350u;
    SET_GPR_U32(ctx, 31, 0x384358u);
    ctx->pc = 0x384354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384350u;
    // 0x384354: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x384350u, 0x384358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384358u;
label_384358:
    // 0x384358: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x384358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38435c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38435cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384360: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x384360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384364: 0xc102576  jal         func_4095D8
    ctx->pc = 0x384364u;
    SET_GPR_U32(ctx, 31, 0x38436Cu);
    ctx->pc = 0x384368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384364u;
    // 0x384368: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x384364u, 0x38436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38436Cu;
label_38436c:
    // 0x38436c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x38436cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x384370: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384370u;
    {
        const bool branch_taken_0x384370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384370u;
        // 0x384374: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384370) {
            ctx->pc = 0x384348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384348;
        }
    }
    ctx->pc = 0x384378u;
    // 0x384378: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x384378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38437c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38437cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384380: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x384380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x384384: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x384384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x384388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38438c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38438cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384390: 0x3e00008  jr          $ra
    ctx->pc = 0x384390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384390u;
        // 0x384394: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384398u;
}

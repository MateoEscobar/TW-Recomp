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

// Function: sub_00471860
// Address: 0x471860 - 0x4718e0
void sub_00471860_0x471860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471860_0x471860");
#endif

    switch (ctx->pc) {
        case 0x471860u: goto label_471860;
        case 0x471864u: goto label_471864;
        case 0x471868u: goto label_471868;
        case 0x47186cu: goto label_47186c;
        case 0x471870u: goto label_471870;
        case 0x471874u: goto label_471874;
        case 0x471878u: goto label_471878;
        case 0x47187cu: goto label_47187c;
        case 0x471880u: goto label_471880;
        case 0x471884u: goto label_471884;
        case 0x471888u: goto label_471888;
        case 0x47188cu: goto label_47188c;
        case 0x471890u: goto label_471890;
        case 0x471894u: goto label_471894;
        case 0x471898u: goto label_471898;
        case 0x47189cu: goto label_47189c;
        case 0x4718a0u: goto label_4718a0;
        case 0x4718a4u: goto label_4718a4;
        case 0x4718a8u: goto label_4718a8;
        case 0x4718acu: goto label_4718ac;
        case 0x4718b0u: goto label_4718b0;
        case 0x4718b4u: goto label_4718b4;
        case 0x4718b8u: goto label_4718b8;
        case 0x4718bcu: goto label_4718bc;
        case 0x4718c0u: goto label_4718c0;
        case 0x4718c4u: goto label_4718c4;
        case 0x4718c8u: goto label_4718c8;
        case 0x4718ccu: goto label_4718cc;
        case 0x4718d0u: goto label_4718d0;
        case 0x4718d4u: goto label_4718d4;
        case 0x4718d8u: goto label_4718d8;
        case 0x4718dcu: goto label_4718dc;
        default: break;
    }

    ctx->pc = 0x471860u;

label_471860:
    // 0x471860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x471860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_471864:
    // 0x471864: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x471864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_471868:
    // 0x471868: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x471868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47186c:
    // 0x47186c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47186cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471870:
    // 0x471870: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x471870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_471874:
    // 0x471874: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x471874u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_471878:
    // 0x471878: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x471878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_47187c:
    // 0x47187c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x47187cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_471880:
    // 0x471880: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x471880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_471884:
    // 0x471884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_471888:
    // 0x471888: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x471888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_47188c:
    // 0x47188c: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_471890:
    if (ctx->pc == 0x471890u) {
        ctx->pc = 0x471890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47188Cu;
        // 0x471890: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471894u;
        goto label_471894;
    }
    ctx->pc = 0x47188Cu;
    {
        const bool branch_taken_0x47188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x471890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47188Cu;
        // 0x471890: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47188c) {
            ctx->pc = 0x4718BCu;
            goto label_4718bc;
        }
    }
    ctx->pc = 0x471894u;
label_471894:
    // 0x471894: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x471894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_471898:
    // 0x471898: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_47189c:
    if (ctx->pc == 0x47189Cu) {
        ctx->pc = 0x47189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471898u;
        // 0x47189c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4718A0u;
        goto label_4718a0;
    }
    ctx->pc = 0x471898u;
    {
        const bool branch_taken_0x471898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471898u;
        // 0x47189c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471898) {
            ctx->pc = 0x4718B0u;
            goto label_4718b0;
        }
    }
    ctx->pc = 0x4718A0u;
label_4718a0:
    // 0x4718a0: 0x280f809  jalr        $s4
label_4718a4:
    if (ctx->pc == 0x4718A4u) {
        ctx->pc = 0x4718A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718A0u;
        // 0x4718a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4718A8u;
        goto label_4718a8;
    }
    ctx->pc = 0x4718A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x4718A8u);
        ctx->pc = 0x4718A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718A0u;
        // 0x4718a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4718A0u, 0x4718A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4718A8u;
label_4718a8:
    // 0x4718a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4718ac:
    if (ctx->pc == 0x4718ACu) {
        ctx->pc = 0x4718ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718A8u;
        // 0x4718ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4718B0u;
        goto label_4718b0;
    }
    ctx->pc = 0x4718A8u;
    {
        const bool branch_taken_0x4718a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4718ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718A8u;
        // 0x4718ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4718a8) {
            ctx->pc = 0x4718C0u;
            goto label_4718c0;
        }
    }
    ctx->pc = 0x4718B0u;
label_4718b0:
    // 0x4718b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4718b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4718b4:
    // 0x4718b4: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_4718b8:
    if (ctx->pc == 0x4718B8u) {
        ctx->pc = 0x4718B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718B4u;
        // 0x4718b8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4718BCu;
        goto label_4718bc;
    }
    ctx->pc = 0x4718B4u;
    {
        const bool branch_taken_0x4718b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4718b4) {
            ctx->pc = 0x4718B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4718B4u;
            // 0x4718b8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471898;
        }
    }
    ctx->pc = 0x4718BCu;
label_4718bc:
    // 0x4718bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4718bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4718c0:
    // 0x4718c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4718c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4718c4:
    // 0x4718c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4718c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4718c8:
    // 0x4718c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4718c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4718cc:
    // 0x4718cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4718ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4718d0:
    // 0x4718d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4718d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4718d4:
    // 0x4718d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4718d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4718d8:
    // 0x4718d8: 0x3e00008  jr          $ra
label_4718dc:
    if (ctx->pc == 0x4718DCu) {
        ctx->pc = 0x4718DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718D8u;
        // 0x4718dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4718E0u;
        goto label_fallthrough_0x4718d8;
    }
    ctx->pc = 0x4718D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4718DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4718D8u;
        // 0x4718dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4718D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4718d8:
    ctx->pc = 0x4718E0u;
}

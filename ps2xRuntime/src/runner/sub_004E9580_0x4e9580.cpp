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

// Function: sub_004E9580
// Address: 0x4e9580 - 0x4e9600
void sub_004E9580_0x4e9580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9580_0x4e9580");
#endif

    switch (ctx->pc) {
        case 0x4e9580u: goto label_4e9580;
        case 0x4e9584u: goto label_4e9584;
        case 0x4e9588u: goto label_4e9588;
        case 0x4e958cu: goto label_4e958c;
        case 0x4e9590u: goto label_4e9590;
        case 0x4e9594u: goto label_4e9594;
        case 0x4e9598u: goto label_4e9598;
        case 0x4e959cu: goto label_4e959c;
        case 0x4e95a0u: goto label_4e95a0;
        case 0x4e95a4u: goto label_4e95a4;
        case 0x4e95a8u: goto label_4e95a8;
        case 0x4e95acu: goto label_4e95ac;
        case 0x4e95b0u: goto label_4e95b0;
        case 0x4e95b4u: goto label_4e95b4;
        case 0x4e95b8u: goto label_4e95b8;
        case 0x4e95bcu: goto label_4e95bc;
        case 0x4e95c0u: goto label_4e95c0;
        case 0x4e95c4u: goto label_4e95c4;
        case 0x4e95c8u: goto label_4e95c8;
        case 0x4e95ccu: goto label_4e95cc;
        case 0x4e95d0u: goto label_4e95d0;
        case 0x4e95d4u: goto label_4e95d4;
        case 0x4e95d8u: goto label_4e95d8;
        case 0x4e95dcu: goto label_4e95dc;
        case 0x4e95e0u: goto label_4e95e0;
        case 0x4e95e4u: goto label_4e95e4;
        case 0x4e95e8u: goto label_4e95e8;
        case 0x4e95ecu: goto label_4e95ec;
        case 0x4e95f0u: goto label_4e95f0;
        case 0x4e95f4u: goto label_4e95f4;
        case 0x4e95f8u: goto label_4e95f8;
        case 0x4e95fcu: goto label_4e95fc;
        default: break;
    }

    ctx->pc = 0x4e9580u;

label_4e9580:
    // 0x4e9580: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9584:
    // 0x4e9584: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9588:
    // 0x4e9588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e958c:
    // 0x4e958c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e958cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9590:
    // 0x4e9590: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9594:
    // 0x4e9594: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9598:
    // 0x4e9598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e959c:
    // 0x4e959c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e95a0:
    if (ctx->pc == 0x4E95A0u) {
        ctx->pc = 0x4E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E959Cu;
        // 0x4e95a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E95A4u;
        goto label_4e95a4;
    }
    ctx->pc = 0x4E959Cu;
    {
        const bool branch_taken_0x4e959c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E959Cu;
        // 0x4e95a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e959c) {
            ctx->pc = 0x4E95E4u;
            goto label_4e95e4;
        }
    }
    ctx->pc = 0x4E95A4u;
label_4e95a4:
    // 0x4e95a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e95a8:
    // 0x4e95a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e95a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e95ac:
    // 0x4e95ac: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e95acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e95b0:
    // 0x4e95b0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e95b4:
    // 0x4e95b4: 0x60f809  jalr        $v1
label_4e95b8:
    if (ctx->pc == 0x4E95B8u) {
        ctx->pc = 0x4E95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E95B4u;
        // 0x4e95b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E95BCu;
        goto label_4e95bc;
    }
    ctx->pc = 0x4E95B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E95BCu);
        ctx->pc = 0x4E95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E95B4u;
        // 0x4e95b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E95B4u, 0x4E95BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E95BCu;
label_4e95bc:
    // 0x4e95bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e95c0:
    // 0x4e95c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e95c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e95c4:
    // 0x4e95c4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e95c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e95c8:
    // 0x4e95c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e95c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e95cc:
    // 0x4e95cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e95ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e95d0:
    // 0x4e95d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e95d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e95d4:
    // 0x4e95d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e95d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e95d8:
    // 0x4e95d8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e95dc:
    // 0x4e95dc: 0x60f809  jalr        $v1
label_4e95e0:
    if (ctx->pc == 0x4E95E0u) {
        ctx->pc = 0x4E95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E95DCu;
        // 0x4e95e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E95E4u;
        goto label_4e95e4;
    }
    ctx->pc = 0x4E95DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E95E4u);
        ctx->pc = 0x4E95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E95DCu;
        // 0x4e95e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E95DCu, 0x4E95E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E95E4u;
label_4e95e4:
    // 0x4e95e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e95e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e95e8:
    // 0x4e95e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e95e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e95ec:
    // 0x4e95ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e95ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e95f0:
    // 0x4e95f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e95f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e95f4:
    // 0x4e95f4: 0x3e00008  jr          $ra
label_4e95f8:
    if (ctx->pc == 0x4E95F8u) {
        ctx->pc = 0x4E95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E95F4u;
        // 0x4e95f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E95FCu;
        goto label_4e95fc;
    }
    ctx->pc = 0x4E95F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E95F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E95F4u;
        // 0x4e95f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E95F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E95FCu;
label_4e95fc:
    // 0x4e95fc: 0x0  nop
    ctx->pc = 0x4e95fcu;
    // NOP
    ctx->pc = 0x4e9600u;
}

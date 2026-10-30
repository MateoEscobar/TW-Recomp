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

// Function: sub_004EA578
// Address: 0x4ea578 - 0x4ea610
void sub_004EA578_0x4ea578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA578_0x4ea578");
#endif

    switch (ctx->pc) {
        case 0x4ea578u: goto label_4ea578;
        case 0x4ea57cu: goto label_4ea57c;
        case 0x4ea580u: goto label_4ea580;
        case 0x4ea584u: goto label_4ea584;
        case 0x4ea588u: goto label_4ea588;
        case 0x4ea58cu: goto label_4ea58c;
        case 0x4ea590u: goto label_4ea590;
        case 0x4ea594u: goto label_4ea594;
        case 0x4ea598u: goto label_4ea598;
        case 0x4ea59cu: goto label_4ea59c;
        case 0x4ea5a0u: goto label_4ea5a0;
        case 0x4ea5a4u: goto label_4ea5a4;
        case 0x4ea5a8u: goto label_4ea5a8;
        case 0x4ea5acu: goto label_4ea5ac;
        case 0x4ea5b0u: goto label_4ea5b0;
        case 0x4ea5b4u: goto label_4ea5b4;
        case 0x4ea5b8u: goto label_4ea5b8;
        case 0x4ea5bcu: goto label_4ea5bc;
        case 0x4ea5c0u: goto label_4ea5c0;
        case 0x4ea5c4u: goto label_4ea5c4;
        case 0x4ea5c8u: goto label_4ea5c8;
        case 0x4ea5ccu: goto label_4ea5cc;
        case 0x4ea5d0u: goto label_4ea5d0;
        case 0x4ea5d4u: goto label_4ea5d4;
        case 0x4ea5d8u: goto label_4ea5d8;
        case 0x4ea5dcu: goto label_4ea5dc;
        case 0x4ea5e0u: goto label_4ea5e0;
        case 0x4ea5e4u: goto label_4ea5e4;
        case 0x4ea5e8u: goto label_4ea5e8;
        case 0x4ea5ecu: goto label_4ea5ec;
        case 0x4ea5f0u: goto label_4ea5f0;
        case 0x4ea5f4u: goto label_4ea5f4;
        case 0x4ea5f8u: goto label_4ea5f8;
        case 0x4ea5fcu: goto label_4ea5fc;
        case 0x4ea600u: goto label_4ea600;
        case 0x4ea604u: goto label_4ea604;
        case 0x4ea608u: goto label_4ea608;
        case 0x4ea60cu: goto label_4ea60c;
        default: break;
    }

    ctx->pc = 0x4ea578u;

label_4ea578:
    // 0x4ea578: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4ea578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4ea57c:
    // 0x4ea57c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4ea57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4ea580:
    // 0x4ea580: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4ea580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4ea584:
    // 0x4ea584: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4ea584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea588:
    // 0x4ea588: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4ea588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4ea58c:
    // 0x4ea58c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ea58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea590:
    // 0x4ea590: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4ea590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4ea594:
    // 0x4ea594: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4ea594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4ea598:
    // 0x4ea598: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_4ea59c:
    if (ctx->pc == 0x4EA59Cu) {
        ctx->pc = 0x4EA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA598u;
        // 0x4ea59c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA5A0u;
        goto label_4ea5a0;
    }
    ctx->pc = 0x4EA598u;
    {
        const bool branch_taken_0x4ea598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA598u;
        // 0x4ea59c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea598) {
            ctx->pc = 0x4EA5F0u;
            goto label_4ea5f0;
        }
    }
    ctx->pc = 0x4EA5A0u;
label_4ea5a0:
    // 0x4ea5a0: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x4ea5a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_4ea5a4:
    // 0x4ea5a4: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4ea5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4ea5a8:
    // 0x4ea5a8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4ea5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4ea5ac:
    // 0x4ea5ac: 0x0  nop
    ctx->pc = 0x4ea5acu;
    // NOP
label_4ea5b0:
    // 0x4ea5b0: 0xc13a95e  jal         func_4EA578
label_4ea5b4:
    if (ctx->pc == 0x4EA5B4u) {
        ctx->pc = 0x4EA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA5B0u;
        // 0x4ea5b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA5B8u;
        goto label_4ea5b8;
    }
    ctx->pc = 0x4EA5B0u;
    SET_GPR_U32(ctx, 31, 0x4EA5B8u);
    ctx->pc = 0x4EA5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA5B0u;
    // 0x4ea5b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA578u;
    goto label_4ea578;
    ctx->pc = 0x4EA5B8u;
label_4ea5b8:
    // 0x4ea5b8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_4ea5bc:
    if (ctx->pc == 0x4EA5BCu) {
        ctx->pc = 0x4EA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA5B8u;
        // 0x4ea5bc: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA5C0u;
        goto label_4ea5c0;
    }
    ctx->pc = 0x4EA5B8u;
    {
        const bool branch_taken_0x4ea5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA5B8u;
        // 0x4ea5bc: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea5b8) {
            ctx->pc = 0x4EA5E4u;
            goto label_4ea5e4;
        }
    }
    ctx->pc = 0x4EA5C0u;
label_4ea5c0:
    // 0x4ea5c0: 0x8e88b9c0  lw          $t0, -0x4640($s4)
    ctx->pc = 0x4ea5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949312)));
label_4ea5c4:
    // 0x4ea5c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea5c8:
    // 0x4ea5c8: 0x26667050  addiu       $a2, $s3, 0x7050
    ctx->pc = 0x4ea5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 28752));
label_4ea5cc:
    // 0x4ea5cc: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4ea5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4ea5d0:
    // 0x4ea5d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea5d4:
    // 0x4ea5d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea5d8:
    // 0x4ea5d8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea5dc:
    // 0x4ea5dc: 0x60f809  jalr        $v1
label_4ea5e0:
    if (ctx->pc == 0x4EA5E0u) {
        ctx->pc = 0x4EA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA5DCu;
        // 0x4ea5e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA5E4u;
        goto label_4ea5e4;
    }
    ctx->pc = 0x4EA5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA5E4u);
        ctx->pc = 0x4EA5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA5DCu;
        // 0x4ea5e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA5DCu, 0x4EA5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA5E4u;
label_4ea5e4:
    // 0x4ea5e4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4ea5e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea5e8:
    // 0x4ea5e8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
label_4ea5ec:
    if (ctx->pc == 0x4EA5ECu) {
        ctx->pc = 0x4EA5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA5E8u;
        // 0x4ea5ec: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA5F0u;
        goto label_4ea5f0;
    }
    ctx->pc = 0x4EA5E8u;
    {
        const bool branch_taken_0x4ea5e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea5e8) {
            ctx->pc = 0x4EA5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EA5E8u;
            // 0x4ea5ec: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EA5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ea5b0;
        }
    }
    ctx->pc = 0x4EA5F0u;
label_4ea5f0:
    // 0x4ea5f0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4ea5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ea5f4:
    // 0x4ea5f4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4ea5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ea5f8:
    // 0x4ea5f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ea5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea5fc:
    // 0x4ea5fc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4ea5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea600:
    // 0x4ea600: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4ea600u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea604:
    // 0x4ea604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea608:
    // 0x4ea608: 0x3e00008  jr          $ra
label_4ea60c:
    if (ctx->pc == 0x4EA60Cu) {
        ctx->pc = 0x4EA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA608u;
        // 0x4ea60c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA610u;
        goto label_fallthrough_0x4ea608;
    }
    ctx->pc = 0x4EA608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA608u;
        // 0x4ea60c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4ea608:
    ctx->pc = 0x4EA610u;
}

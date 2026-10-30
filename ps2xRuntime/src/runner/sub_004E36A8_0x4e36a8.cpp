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

// Function: sub_004E36A8
// Address: 0x4e36a8 - 0x4e3728
void sub_004E36A8_0x4e36a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E36A8_0x4e36a8");
#endif

    switch (ctx->pc) {
        case 0x4e36a8u: goto label_4e36a8;
        case 0x4e36acu: goto label_4e36ac;
        case 0x4e36b0u: goto label_4e36b0;
        case 0x4e36b4u: goto label_4e36b4;
        case 0x4e36b8u: goto label_4e36b8;
        case 0x4e36bcu: goto label_4e36bc;
        case 0x4e36c0u: goto label_4e36c0;
        case 0x4e36c4u: goto label_4e36c4;
        case 0x4e36c8u: goto label_4e36c8;
        case 0x4e36ccu: goto label_4e36cc;
        case 0x4e36d0u: goto label_4e36d0;
        case 0x4e36d4u: goto label_4e36d4;
        case 0x4e36d8u: goto label_4e36d8;
        case 0x4e36dcu: goto label_4e36dc;
        case 0x4e36e0u: goto label_4e36e0;
        case 0x4e36e4u: goto label_4e36e4;
        case 0x4e36e8u: goto label_4e36e8;
        case 0x4e36ecu: goto label_4e36ec;
        case 0x4e36f0u: goto label_4e36f0;
        case 0x4e36f4u: goto label_4e36f4;
        case 0x4e36f8u: goto label_4e36f8;
        case 0x4e36fcu: goto label_4e36fc;
        case 0x4e3700u: goto label_4e3700;
        case 0x4e3704u: goto label_4e3704;
        case 0x4e3708u: goto label_4e3708;
        case 0x4e370cu: goto label_4e370c;
        case 0x4e3710u: goto label_4e3710;
        case 0x4e3714u: goto label_4e3714;
        case 0x4e3718u: goto label_4e3718;
        case 0x4e371cu: goto label_4e371c;
        case 0x4e3720u: goto label_4e3720;
        case 0x4e3724u: goto label_4e3724;
        default: break;
    }

    ctx->pc = 0x4e36a8u;

label_4e36a8:
    // 0x4e36a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e36a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e36ac:
    // 0x4e36ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e36acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e36b0:
    // 0x4e36b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e36b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e36b4:
    // 0x4e36b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e36b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e36b8:
    // 0x4e36b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e36b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e36bc:
    // 0x4e36bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e36bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e36c0:
    // 0x4e36c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e36c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e36c4:
    // 0x4e36c4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e36c8:
    if (ctx->pc == 0x4E36C8u) {
        ctx->pc = 0x4E36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36C4u;
        // 0x4e36c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36CCu;
        goto label_4e36cc;
    }
    ctx->pc = 0x4E36C4u;
    {
        const bool branch_taken_0x4e36c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36C4u;
        // 0x4e36c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e36c4) {
            ctx->pc = 0x4E370Cu;
            goto label_4e370c;
        }
    }
    ctx->pc = 0x4E36CCu;
label_4e36cc:
    // 0x4e36cc: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x4e36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_4e36d0:
    // 0x4e36d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e36d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e36d4:
    // 0x4e36d4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x4e36d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_4e36d8:
    // 0x4e36d8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x4e36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4e36dc:
    // 0x4e36dc: 0x60f809  jalr        $v1
label_4e36e0:
    if (ctx->pc == 0x4E36E0u) {
        ctx->pc = 0x4E36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36DCu;
        // 0x4e36e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E36E4u;
        goto label_4e36e4;
    }
    ctx->pc = 0x4E36DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E36E4u);
        ctx->pc = 0x4E36E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E36DCu;
        // 0x4e36e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E36DCu, 0x4E36E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E36E4u;
label_4e36e4:
    // 0x4e36e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e36e8:
    // 0x4e36e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e36e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e36ec:
    // 0x4e36ec: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e36ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e36f0:
    // 0x4e36f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e36f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e36f4:
    // 0x4e36f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e36f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e36f8:
    // 0x4e36f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e36fc:
    // 0x4e36fc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e36fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3700:
    // 0x4e3700: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3704:
    // 0x4e3704: 0x60f809  jalr        $v1
label_4e3708:
    if (ctx->pc == 0x4E3708u) {
        ctx->pc = 0x4E3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3704u;
        // 0x4e3708: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E370Cu;
        goto label_4e370c;
    }
    ctx->pc = 0x4E3704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E370Cu);
        ctx->pc = 0x4E3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3704u;
        // 0x4e3708: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3704u, 0x4E370Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E370Cu;
label_4e370c:
    // 0x4e370c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e370cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3710:
    // 0x4e3710: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e3710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3714:
    // 0x4e3714: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e3714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3718:
    // 0x4e3718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e371c:
    // 0x4e371c: 0x3e00008  jr          $ra
label_4e3720:
    if (ctx->pc == 0x4E3720u) {
        ctx->pc = 0x4E3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E371Cu;
        // 0x4e3720: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3724u;
        goto label_4e3724;
    }
    ctx->pc = 0x4E371Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E371Cu;
        // 0x4e3720: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E371Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E3724u;
label_4e3724:
    // 0x4e3724: 0x0  nop
    ctx->pc = 0x4e3724u;
    // NOP
    ctx->pc = 0x4e3728u;
}

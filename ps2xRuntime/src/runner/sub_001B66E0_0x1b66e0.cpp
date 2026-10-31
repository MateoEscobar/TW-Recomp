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

// Function: sub_001B66E0
// Address: 0x1b66e0 - 0x1b6770
void sub_001B66E0_0x1b66e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B66E0_0x1b66e0");
#endif

    switch (ctx->pc) {
        case 0x1b66e0u: goto label_1b66e0;
        case 0x1b66e4u: goto label_1b66e4;
        case 0x1b66e8u: goto label_1b66e8;
        case 0x1b66ecu: goto label_1b66ec;
        case 0x1b66f0u: goto label_1b66f0;
        case 0x1b66f4u: goto label_1b66f4;
        case 0x1b66f8u: goto label_1b66f8;
        case 0x1b66fcu: goto label_1b66fc;
        case 0x1b6700u: goto label_1b6700;
        case 0x1b6704u: goto label_1b6704;
        case 0x1b6708u: goto label_1b6708;
        case 0x1b670cu: goto label_1b670c;
        case 0x1b6710u: goto label_1b6710;
        case 0x1b6714u: goto label_1b6714;
        case 0x1b6718u: goto label_1b6718;
        case 0x1b671cu: goto label_1b671c;
        case 0x1b6720u: goto label_1b6720;
        case 0x1b6724u: goto label_1b6724;
        case 0x1b6728u: goto label_1b6728;
        case 0x1b672cu: goto label_1b672c;
        case 0x1b6730u: goto label_1b6730;
        case 0x1b6734u: goto label_1b6734;
        case 0x1b6738u: goto label_1b6738;
        case 0x1b673cu: goto label_1b673c;
        case 0x1b6740u: goto label_1b6740;
        case 0x1b6744u: goto label_1b6744;
        case 0x1b6748u: goto label_1b6748;
        case 0x1b674cu: goto label_1b674c;
        case 0x1b6750u: goto label_1b6750;
        case 0x1b6754u: goto label_1b6754;
        case 0x1b6758u: goto label_1b6758;
        case 0x1b675cu: goto label_1b675c;
        case 0x1b6760u: goto label_1b6760;
        case 0x1b6764u: goto label_1b6764;
        case 0x1b6768u: goto label_1b6768;
        case 0x1b676cu: goto label_1b676c;
        default: break;
    }

    ctx->pc = 0x1b66e0u;

label_1b66e0:
    // 0x1b66e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b66e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b66e4:
    // 0x1b66e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b66e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1b66e8:
    // 0x1b66e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b66e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b66ec:
    // 0x1b66ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b66ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b66f0:
    // 0x1b66f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b66f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b66f4:
    // 0x1b66f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b66f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1b66f8:
    // 0x1b66f8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1b66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1b66fc:
    // 0x1b66fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b66fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b6700:
    // 0x1b6700: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b6700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b6704:
    // 0x1b6704: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1b6704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_1b6708:
    // 0x1b6708: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b670c:
    if (ctx->pc == 0x1B670Cu) {
        ctx->pc = 0x1B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6708u;
        // 0x1b670c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6710u;
        goto label_1b6710;
    }
    ctx->pc = 0x1B6708u;
    {
        const bool branch_taken_0x1b6708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6708u;
        // 0x1b670c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6708) {
            ctx->pc = 0x1B6718u;
            goto label_1b6718;
        }
    }
    ctx->pc = 0x1B6710u;
label_1b6710:
    // 0x1b6710: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1b6714:
    // 0x1b6714: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1b6714u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b6718:
    // 0x1b6718: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1b671c:
    if (ctx->pc == 0x1B671Cu) {
        ctx->pc = 0x1B671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6718u;
        // 0x1b671c: 0x26100340  addiu       $s0, $s0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6720u;
        goto label_1b6720;
    }
    ctx->pc = 0x1B6718u;
    {
        const bool branch_taken_0x1b6718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6718u;
        // 0x1b671c: 0x26100340  addiu       $s0, $s0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6718) {
            ctx->pc = 0x1B6728u;
            goto label_1b6728;
        }
    }
    ctx->pc = 0x1B6720u;
label_1b6720:
    // 0x1b6720: 0xc0687c4  jal         func_1A1F10
label_1b6724:
    if (ctx->pc == 0x1B6724u) {
        ctx->pc = 0x1B6728u;
        goto label_1b6728;
    }
    ctx->pc = 0x1B6720u;
    SET_GPR_U32(ctx, 31, 0x1B6728u);
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1B6720u, 0x1B6728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6728u;
label_1b6728:
    // 0x1b6728: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b6728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b672c:
    // 0x1b672c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b672cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6730:
    // 0x1b6730: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b6730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6734:
    // 0x1b6734: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b6734u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b6738:
    // 0x1b6738: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b6738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b673c:
    // 0x1b673c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1b673cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1b6740:
    // 0x1b6740: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1b6740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1b6744:
    // 0x1b6744: 0x40f809  jalr        $v0
label_1b6748:
    if (ctx->pc == 0x1B6748u) {
        ctx->pc = 0x1B6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6744u;
        // 0x1b6748: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B674Cu;
        goto label_1b674c;
    }
    ctx->pc = 0x1B6744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B674Cu);
        ctx->pc = 0x1B6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6744u;
        // 0x1b6748: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6744u, 0x1B674Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B674Cu;
label_1b674c:
    // 0x1b674c: 0x2e420009  sltiu       $v0, $s2, 0x9
    ctx->pc = 0x1b674cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1b6750:
    // 0x1b6750: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1b6754:
    if (ctx->pc == 0x1B6754u) {
        ctx->pc = 0x1B6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6750u;
        // 0x1b6754: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6758u;
        goto label_1b6758;
    }
    ctx->pc = 0x1B6750u;
    {
        const bool branch_taken_0x1b6750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6750u;
        // 0x1b6754: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6750) {
            ctx->pc = 0x1B6730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6730;
        }
    }
    ctx->pc = 0x1B6758u;
label_1b6758:
    // 0x1b6758: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b6758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b675c:
    // 0x1b675c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b675cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6760:
    // 0x1b6760: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b6760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6764:
    // 0x1b6764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b6768:
    // 0x1b6768: 0x3e00008  jr          $ra
label_1b676c:
    if (ctx->pc == 0x1B676Cu) {
        ctx->pc = 0x1B676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6768u;
        // 0x1b676c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6770u;
        goto label_fallthrough_0x1b6768;
    }
    ctx->pc = 0x1B6768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6768u;
        // 0x1b676c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b6768:
    ctx->pc = 0x1B6770u;
}

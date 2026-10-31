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

// Function: sub_003AF728
// Address: 0x3af728 - 0x3af7a0
void sub_003AF728_0x3af728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF728_0x3af728");
#endif

    switch (ctx->pc) {
        case 0x3af728u: goto label_3af728;
        case 0x3af72cu: goto label_3af72c;
        case 0x3af730u: goto label_3af730;
        case 0x3af734u: goto label_3af734;
        case 0x3af738u: goto label_3af738;
        case 0x3af73cu: goto label_3af73c;
        case 0x3af740u: goto label_3af740;
        case 0x3af744u: goto label_3af744;
        case 0x3af748u: goto label_3af748;
        case 0x3af74cu: goto label_3af74c;
        case 0x3af750u: goto label_3af750;
        case 0x3af754u: goto label_3af754;
        case 0x3af758u: goto label_3af758;
        case 0x3af75cu: goto label_3af75c;
        case 0x3af760u: goto label_3af760;
        case 0x3af764u: goto label_3af764;
        case 0x3af768u: goto label_3af768;
        case 0x3af76cu: goto label_3af76c;
        case 0x3af770u: goto label_3af770;
        case 0x3af774u: goto label_3af774;
        case 0x3af778u: goto label_3af778;
        case 0x3af77cu: goto label_3af77c;
        case 0x3af780u: goto label_3af780;
        case 0x3af784u: goto label_3af784;
        case 0x3af788u: goto label_3af788;
        case 0x3af78cu: goto label_3af78c;
        case 0x3af790u: goto label_3af790;
        case 0x3af794u: goto label_3af794;
        case 0x3af798u: goto label_3af798;
        case 0x3af79cu: goto label_3af79c;
        default: break;
    }

    ctx->pc = 0x3af728u;

label_3af728:
    // 0x3af728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3af72c:
    // 0x3af72c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3af72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3af730:
    // 0x3af730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3af730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3af734:
    // 0x3af734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af738:
    // 0x3af738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3af738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3af73c:
    // 0x3af73c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3af73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3af740:
    // 0x3af740: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3af740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3af744:
    // 0x3af744: 0x40f809  jalr        $v0
label_3af748:
    if (ctx->pc == 0x3AF748u) {
        ctx->pc = 0x3AF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF744u;
        // 0x3af748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF74Cu;
        goto label_3af74c;
    }
    ctx->pc = 0x3AF744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF74Cu);
        ctx->pc = 0x3AF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF744u;
        // 0x3af748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF744u, 0x3AF74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF74Cu;
label_3af74c:
    // 0x3af74c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3af74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af750:
    // 0x3af750: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3af750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3af754:
    // 0x3af754: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3af754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3af758:
    // 0x3af758: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_3af75c:
    if (ctx->pc == 0x3AF75Cu) {
        ctx->pc = 0x3AF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF758u;
        // 0x3af75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF760u;
        goto label_3af760;
    }
    ctx->pc = 0x3AF758u;
    {
        const bool branch_taken_0x3af758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF758u;
        // 0x3af75c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af758) {
            ctx->pc = 0x3AF78Cu;
            goto label_3af78c;
        }
    }
    ctx->pc = 0x3AF760u;
label_3af760:
    // 0x3af760: 0x920200b0  lbu         $v0, 0xB0($s0)
    ctx->pc = 0x3af760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
label_3af764:
    // 0x3af764: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3af764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3af768:
    // 0x3af768: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3af76c:
    if (ctx->pc == 0x3AF76Cu) {
        ctx->pc = 0x3AF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF768u;
        // 0x3af76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF770u;
        goto label_3af770;
    }
    ctx->pc = 0x3AF768u;
    {
        const bool branch_taken_0x3af768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF768u;
        // 0x3af76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af768) {
            ctx->pc = 0x3AF78Cu;
            goto label_3af78c;
        }
    }
    ctx->pc = 0x3AF770u;
label_3af770:
    // 0x3af770: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3af770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3af774:
    // 0x3af774: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3af774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3af778:
    // 0x3af778: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3af778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3af77c:
    // 0x3af77c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3af77cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3af780:
    // 0x3af780: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3af780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3af784:
    // 0x3af784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3af784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af788:
    // 0x3af788: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3af788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3af78c:
    // 0x3af78c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3af78cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3af790:
    // 0x3af790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3af794:
    // 0x3af794: 0x3e00008  jr          $ra
label_3af798:
    if (ctx->pc == 0x3AF798u) {
        ctx->pc = 0x3AF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF794u;
        // 0x3af798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF79Cu;
        goto label_3af79c;
    }
    ctx->pc = 0x3AF794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF794u;
        // 0x3af798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF79Cu;
label_3af79c:
    // 0x3af79c: 0x0  nop
    ctx->pc = 0x3af79cu;
    // NOP
    ctx->pc = 0x3af7a0u;
}

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

// Function: sub_00396710
// Address: 0x396710 - 0x396778
void sub_00396710_0x396710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396710_0x396710");
#endif

    switch (ctx->pc) {
        case 0x396710u: goto label_396710;
        case 0x396714u: goto label_396714;
        case 0x396718u: goto label_396718;
        case 0x39671cu: goto label_39671c;
        case 0x396720u: goto label_396720;
        case 0x396724u: goto label_396724;
        case 0x396728u: goto label_396728;
        case 0x39672cu: goto label_39672c;
        case 0x396730u: goto label_396730;
        case 0x396734u: goto label_396734;
        case 0x396738u: goto label_396738;
        case 0x39673cu: goto label_39673c;
        case 0x396740u: goto label_396740;
        case 0x396744u: goto label_396744;
        case 0x396748u: goto label_396748;
        case 0x39674cu: goto label_39674c;
        case 0x396750u: goto label_396750;
        case 0x396754u: goto label_396754;
        case 0x396758u: goto label_396758;
        case 0x39675cu: goto label_39675c;
        case 0x396760u: goto label_396760;
        case 0x396764u: goto label_396764;
        case 0x396768u: goto label_396768;
        case 0x39676cu: goto label_39676c;
        case 0x396770u: goto label_396770;
        case 0x396774u: goto label_396774;
        default: break;
    }

    ctx->pc = 0x396710u;

label_396710:
    // 0x396710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_396714:
    // 0x396714: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x396714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_396718:
    // 0x396718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39671c:
    // 0x39671c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39671cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_396720:
    // 0x396720: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x396720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_396724:
    // 0x396724: 0x846500f0  lh          $a1, 0xF0($v1)
    ctx->pc = 0x396724u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_396728:
    // 0x396728: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x396728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39672c:
    // 0x39672c: 0x40f809  jalr        $v0
label_396730:
    if (ctx->pc == 0x396730u) {
        ctx->pc = 0x396730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39672Cu;
        // 0x396730: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396734u;
        goto label_396734;
    }
    ctx->pc = 0x39672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x396734u);
        ctx->pc = 0x396730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39672Cu;
        // 0x396730: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39672Cu, 0x396734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x396734u;
label_396734:
    // 0x396734: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_396738:
    if (ctx->pc == 0x396738u) {
        ctx->pc = 0x396738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396734u;
        // 0x396738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39673Cu;
        goto label_39673c;
    }
    ctx->pc = 0x396734u;
    {
        const bool branch_taken_0x396734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396734) {
            ctx->pc = 0x396738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396734u;
            // 0x396738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396764u;
            goto label_396764;
        }
    }
    ctx->pc = 0x39673Cu;
label_39673c:
    // 0x39673c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_396740:
    if (ctx->pc == 0x396740u) {
        ctx->pc = 0x396740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39673Cu;
        // 0x396740: 0x8c430040  lw          $v1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396744u;
        goto label_396744;
    }
    ctx->pc = 0x39673Cu;
    {
        const bool branch_taken_0x39673c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39673Cu;
        // 0x396740: 0x8c430040  lw          $v1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39673c) {
            ctx->pc = 0x396754u;
            goto label_396754;
        }
    }
    ctx->pc = 0x396744u;
label_396744:
    // 0x396744: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x396744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_396748:
    // 0x396748: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x396748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_39674c:
    // 0x39674c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_396750:
    if (ctx->pc == 0x396750u) {
        ctx->pc = 0x396750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39674Cu;
        // 0x396750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396754u;
        goto label_396754;
    }
    ctx->pc = 0x39674Cu;
    {
        const bool branch_taken_0x39674c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39674Cu;
        // 0x396750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39674c) {
            ctx->pc = 0x396764u;
            goto label_396764;
        }
    }
    ctx->pc = 0x396754u;
label_396754:
    // 0x396754: 0x30630038  andi        $v1, $v1, 0x38
    ctx->pc = 0x396754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)56);
label_396758:
    // 0x396758: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_39675c:
    if (ctx->pc == 0x39675Cu) {
        ctx->pc = 0x39675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396758u;
        // 0x39675c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396760u;
        goto label_396760;
    }
    ctx->pc = 0x396758u;
    {
        const bool branch_taken_0x396758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396758u;
        // 0x39675c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396758) {
            ctx->pc = 0x396764u;
            goto label_396764;
        }
    }
    ctx->pc = 0x396760u;
label_396760:
    // 0x396760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x396760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396764:
    // 0x396764: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x396764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_396768:
    // 0x396768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39676c:
    // 0x39676c: 0x3e00008  jr          $ra
label_396770:
    if (ctx->pc == 0x396770u) {
        ctx->pc = 0x396770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39676Cu;
        // 0x396770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x396774u;
        goto label_396774;
    }
    ctx->pc = 0x39676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39676Cu;
        // 0x396770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39676Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396774u;
label_396774:
    // 0x396774: 0x0  nop
    ctx->pc = 0x396774u;
    // NOP
    ctx->pc = 0x396778u;
}

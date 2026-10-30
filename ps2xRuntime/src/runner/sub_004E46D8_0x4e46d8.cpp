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

// Function: sub_004E46D8
// Address: 0x4e46d8 - 0x4e4768
void sub_004E46D8_0x4e46d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E46D8_0x4e46d8");
#endif

    switch (ctx->pc) {
        case 0x4e46d8u: goto label_4e46d8;
        case 0x4e46dcu: goto label_4e46dc;
        case 0x4e46e0u: goto label_4e46e0;
        case 0x4e46e4u: goto label_4e46e4;
        case 0x4e46e8u: goto label_4e46e8;
        case 0x4e46ecu: goto label_4e46ec;
        case 0x4e46f0u: goto label_4e46f0;
        case 0x4e46f4u: goto label_4e46f4;
        case 0x4e46f8u: goto label_4e46f8;
        case 0x4e46fcu: goto label_4e46fc;
        case 0x4e4700u: goto label_4e4700;
        case 0x4e4704u: goto label_4e4704;
        case 0x4e4708u: goto label_4e4708;
        case 0x4e470cu: goto label_4e470c;
        case 0x4e4710u: goto label_4e4710;
        case 0x4e4714u: goto label_4e4714;
        case 0x4e4718u: goto label_4e4718;
        case 0x4e471cu: goto label_4e471c;
        case 0x4e4720u: goto label_4e4720;
        case 0x4e4724u: goto label_4e4724;
        case 0x4e4728u: goto label_4e4728;
        case 0x4e472cu: goto label_4e472c;
        case 0x4e4730u: goto label_4e4730;
        case 0x4e4734u: goto label_4e4734;
        case 0x4e4738u: goto label_4e4738;
        case 0x4e473cu: goto label_4e473c;
        case 0x4e4740u: goto label_4e4740;
        case 0x4e4744u: goto label_4e4744;
        case 0x4e4748u: goto label_4e4748;
        case 0x4e474cu: goto label_4e474c;
        case 0x4e4750u: goto label_4e4750;
        case 0x4e4754u: goto label_4e4754;
        case 0x4e4758u: goto label_4e4758;
        case 0x4e475cu: goto label_4e475c;
        case 0x4e4760u: goto label_4e4760;
        case 0x4e4764u: goto label_4e4764;
        default: break;
    }

    ctx->pc = 0x4e46d8u;

label_4e46d8:
    // 0x4e46d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e46d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e46dc:
    // 0x4e46dc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4e46e0:
    // 0x4e46e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e46e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e46e4:
    // 0x4e46e4: 0x24429aa8  addiu       $v0, $v0, -0x6558
    ctx->pc = 0x4e46e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941352));
label_4e46e8:
    // 0x4e46e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e46ec:
    // 0x4e46ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e46ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e46f0:
    // 0x4e46f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e46f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e46f4:
    // 0x4e46f4: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x4e46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4e46f8:
    // 0x4e46f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e46fc:
    // 0x4e46fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e46fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4700:
    // 0x4e4700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4704:
    // 0x4e4704: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4e4708:
    if (ctx->pc == 0x4E4708u) {
        ctx->pc = 0x4E4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4704u;
        // 0x4e4708: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E470Cu;
        goto label_4e470c;
    }
    ctx->pc = 0x4E4704u;
    {
        const bool branch_taken_0x4e4704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4704u;
        // 0x4e4708: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4704) {
            ctx->pc = 0x4E4740u;
            goto label_4e4740;
        }
    }
    ctx->pc = 0x4E470Cu;
label_4e470c:
    // 0x4e470c: 0x26300450  addiu       $s0, $s1, 0x450
    ctx->pc = 0x4e470cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1104));
label_4e4710:
    // 0x4e4710: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
label_4e4714:
    if (ctx->pc == 0x4E4714u) {
        ctx->pc = 0x4E4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4710u;
        // 0x4e4714: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4718u;
        goto label_4e4718;
    }
    ctx->pc = 0x4E4710u;
    {
        const bool branch_taken_0x4e4710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4E4714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4710u;
        // 0x4e4714: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4710) {
            ctx->pc = 0x4E4740u;
            goto label_4e4740;
        }
    }
    ctx->pc = 0x4E4718u;
label_4e4718:
    // 0x4e4718: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x4e4718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_4e471c:
    // 0x4e471c: 0x0  nop
    ctx->pc = 0x4e471cu;
    // NOP
label_4e4720:
    // 0x4e4720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e4720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4724:
    // 0x4e4724: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e4724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4728:
    // 0x4e4728: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e4728u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e472c:
    // 0x4e472c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e472cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e4730:
    // 0x4e4730: 0x60f809  jalr        $v1
label_4e4734:
    if (ctx->pc == 0x4E4734u) {
        ctx->pc = 0x4E4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4730u;
        // 0x4e4734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4738u;
        goto label_4e4738;
    }
    ctx->pc = 0x4E4730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4738u);
        ctx->pc = 0x4E4734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4730u;
        // 0x4e4734: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4730u, 0x4E4738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4738u;
label_4e4738:
    // 0x4e4738: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
label_4e473c:
    if (ctx->pc == 0x4E473Cu) {
        ctx->pc = 0x4E473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4738u;
        // 0x4e473c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4740u;
        goto label_4e4740;
    }
    ctx->pc = 0x4E4738u;
    {
        const bool branch_taken_0x4e4738 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4738u;
        // 0x4e473c: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4738) {
            ctx->pc = 0x4E4720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e4720;
        }
    }
    ctx->pc = 0x4E4740u;
label_4e4740:
    // 0x4e4740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e4740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e4744:
    // 0x4e4744: 0xc06a39e  jal         func_1A8E78
label_4e4748:
    if (ctx->pc == 0x4E4748u) {
        ctx->pc = 0x4E4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4744u;
        // 0x4e4748: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E474Cu;
        goto label_4e474c;
    }
    ctx->pc = 0x4E4744u;
    SET_GPR_U32(ctx, 31, 0x4E474Cu);
    ctx->pc = 0x4E4748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4744u;
    // 0x4e4748: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E4744u, 0x4E474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E474Cu;
label_4e474c:
    // 0x4e474c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e474cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e4750:
    // 0x4e4750: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e4750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4754:
    // 0x4e4754: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e4754u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4758:
    // 0x4e4758: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e4758u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e475c:
    // 0x4e475c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4760:
    // 0x4e4760: 0x3e00008  jr          $ra
label_4e4764:
    if (ctx->pc == 0x4E4764u) {
        ctx->pc = 0x4E4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4760u;
        // 0x4e4764: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4768u;
        goto label_fallthrough_0x4e4760;
    }
    ctx->pc = 0x4E4760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4760u;
        // 0x4e4764: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e4760:
    ctx->pc = 0x4E4768u;
}

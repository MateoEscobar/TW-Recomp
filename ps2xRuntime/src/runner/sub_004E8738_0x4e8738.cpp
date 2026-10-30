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

// Function: sub_004E8738
// Address: 0x4e8738 - 0x4e87d0
void sub_004E8738_0x4e8738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8738_0x4e8738");
#endif

    switch (ctx->pc) {
        case 0x4e8738u: goto label_4e8738;
        case 0x4e873cu: goto label_4e873c;
        case 0x4e8740u: goto label_4e8740;
        case 0x4e8744u: goto label_4e8744;
        case 0x4e8748u: goto label_4e8748;
        case 0x4e874cu: goto label_4e874c;
        case 0x4e8750u: goto label_4e8750;
        case 0x4e8754u: goto label_4e8754;
        case 0x4e8758u: goto label_4e8758;
        case 0x4e875cu: goto label_4e875c;
        case 0x4e8760u: goto label_4e8760;
        case 0x4e8764u: goto label_4e8764;
        case 0x4e8768u: goto label_4e8768;
        case 0x4e876cu: goto label_4e876c;
        case 0x4e8770u: goto label_4e8770;
        case 0x4e8774u: goto label_4e8774;
        case 0x4e8778u: goto label_4e8778;
        case 0x4e877cu: goto label_4e877c;
        case 0x4e8780u: goto label_4e8780;
        case 0x4e8784u: goto label_4e8784;
        case 0x4e8788u: goto label_4e8788;
        case 0x4e878cu: goto label_4e878c;
        case 0x4e8790u: goto label_4e8790;
        case 0x4e8794u: goto label_4e8794;
        case 0x4e8798u: goto label_4e8798;
        case 0x4e879cu: goto label_4e879c;
        case 0x4e87a0u: goto label_4e87a0;
        case 0x4e87a4u: goto label_4e87a4;
        case 0x4e87a8u: goto label_4e87a8;
        case 0x4e87acu: goto label_4e87ac;
        case 0x4e87b0u: goto label_4e87b0;
        case 0x4e87b4u: goto label_4e87b4;
        case 0x4e87b8u: goto label_4e87b8;
        case 0x4e87bcu: goto label_4e87bc;
        case 0x4e87c0u: goto label_4e87c0;
        case 0x4e87c4u: goto label_4e87c4;
        case 0x4e87c8u: goto label_4e87c8;
        case 0x4e87ccu: goto label_4e87cc;
        default: break;
    }

    ctx->pc = 0x4e8738u;

label_4e8738:
    // 0x4e8738: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e8738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e873c:
    // 0x4e873c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4e873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4e8740:
    // 0x4e8740: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e8740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e8744:
    // 0x4e8744: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e8744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8748:
    // 0x4e8748: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4e8748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4e874c:
    // 0x4e874c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e874cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8750:
    // 0x4e8750: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4e8750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4e8754:
    // 0x4e8754: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4e8754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4e8758:
    // 0x4e8758: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_4e875c:
    if (ctx->pc == 0x4E875Cu) {
        ctx->pc = 0x4E875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8758u;
        // 0x4e875c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8760u;
        goto label_4e8760;
    }
    ctx->pc = 0x4E8758u;
    {
        const bool branch_taken_0x4e8758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8758u;
        // 0x4e875c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8758) {
            ctx->pc = 0x4E87B0u;
            goto label_4e87b0;
        }
    }
    ctx->pc = 0x4E8760u;
label_4e8760:
    // 0x4e8760: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x4e8760u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_4e8764:
    // 0x4e8764: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4e8764u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4e8768:
    // 0x4e8768: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4e8768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4e876c:
    // 0x4e876c: 0x0  nop
    ctx->pc = 0x4e876cu;
    // NOP
label_4e8770:
    // 0x4e8770: 0xc13a1ce  jal         func_4E8738
label_4e8774:
    if (ctx->pc == 0x4E8774u) {
        ctx->pc = 0x4E8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8770u;
        // 0x4e8774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8778u;
        goto label_4e8778;
    }
    ctx->pc = 0x4E8770u;
    SET_GPR_U32(ctx, 31, 0x4E8778u);
    ctx->pc = 0x4E8774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8770u;
    // 0x4e8774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8738u;
    goto label_4e8738;
    ctx->pc = 0x4E8778u;
label_4e8778:
    // 0x4e8778: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_4e877c:
    if (ctx->pc == 0x4E877Cu) {
        ctx->pc = 0x4E877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8778u;
        // 0x4e877c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8780u;
        goto label_4e8780;
    }
    ctx->pc = 0x4E8778u;
    {
        const bool branch_taken_0x4e8778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8778u;
        // 0x4e877c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8778) {
            ctx->pc = 0x4E87A4u;
            goto label_4e87a4;
        }
    }
    ctx->pc = 0x4E8780u;
label_4e8780:
    // 0x4e8780: 0x8e88b9c0  lw          $t0, -0x4640($s4)
    ctx->pc = 0x4e8780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949312)));
label_4e8784:
    // 0x4e8784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e8784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8788:
    // 0x4e8788: 0x26666660  addiu       $a2, $s3, 0x6660
    ctx->pc = 0x4e8788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 26208));
label_4e878c:
    // 0x4e878c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e878cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e8790:
    // 0x4e8790: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e8790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e8794:
    // 0x4e8794: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e8794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e8798:
    // 0x4e8798: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e8798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e879c:
    // 0x4e879c: 0x60f809  jalr        $v1
label_4e87a0:
    if (ctx->pc == 0x4E87A0u) {
        ctx->pc = 0x4E87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E879Cu;
        // 0x4e87a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E87A4u;
        goto label_4e87a4;
    }
    ctx->pc = 0x4E879Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E87A4u);
        ctx->pc = 0x4E87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E879Cu;
        // 0x4e87a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E879Cu, 0x4E87A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E87A4u;
label_4e87a4:
    // 0x4e87a4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4e87a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e87a8:
    // 0x4e87a8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
label_4e87ac:
    if (ctx->pc == 0x4E87ACu) {
        ctx->pc = 0x4E87ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E87A8u;
        // 0x4e87ac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E87B0u;
        goto label_4e87b0;
    }
    ctx->pc = 0x4E87A8u;
    {
        const bool branch_taken_0x4e87a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e87a8) {
            ctx->pc = 0x4E87ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E87A8u;
            // 0x4e87ac: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e8770;
        }
    }
    ctx->pc = 0x4E87B0u;
label_4e87b0:
    // 0x4e87b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4e87b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e87b4:
    // 0x4e87b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4e87b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e87b8:
    // 0x4e87b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e87b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e87bc:
    // 0x4e87bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4e87bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e87c0:
    // 0x4e87c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4e87c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e87c4:
    // 0x4e87c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e87c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e87c8:
    // 0x4e87c8: 0x3e00008  jr          $ra
label_4e87cc:
    if (ctx->pc == 0x4E87CCu) {
        ctx->pc = 0x4E87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E87C8u;
        // 0x4e87cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E87D0u;
        goto label_fallthrough_0x4e87c8;
    }
    ctx->pc = 0x4E87C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E87CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E87C8u;
        // 0x4e87cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E87C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e87c8:
    ctx->pc = 0x4E87D0u;
}

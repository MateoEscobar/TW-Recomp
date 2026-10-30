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

// Function: sub_004EA710
// Address: 0x4ea710 - 0x4ea790
void sub_004EA710_0x4ea710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA710_0x4ea710");
#endif

    switch (ctx->pc) {
        case 0x4ea710u: goto label_4ea710;
        case 0x4ea714u: goto label_4ea714;
        case 0x4ea718u: goto label_4ea718;
        case 0x4ea71cu: goto label_4ea71c;
        case 0x4ea720u: goto label_4ea720;
        case 0x4ea724u: goto label_4ea724;
        case 0x4ea728u: goto label_4ea728;
        case 0x4ea72cu: goto label_4ea72c;
        case 0x4ea730u: goto label_4ea730;
        case 0x4ea734u: goto label_4ea734;
        case 0x4ea738u: goto label_4ea738;
        case 0x4ea73cu: goto label_4ea73c;
        case 0x4ea740u: goto label_4ea740;
        case 0x4ea744u: goto label_4ea744;
        case 0x4ea748u: goto label_4ea748;
        case 0x4ea74cu: goto label_4ea74c;
        case 0x4ea750u: goto label_4ea750;
        case 0x4ea754u: goto label_4ea754;
        case 0x4ea758u: goto label_4ea758;
        case 0x4ea75cu: goto label_4ea75c;
        case 0x4ea760u: goto label_4ea760;
        case 0x4ea764u: goto label_4ea764;
        case 0x4ea768u: goto label_4ea768;
        case 0x4ea76cu: goto label_4ea76c;
        case 0x4ea770u: goto label_4ea770;
        case 0x4ea774u: goto label_4ea774;
        case 0x4ea778u: goto label_4ea778;
        case 0x4ea77cu: goto label_4ea77c;
        case 0x4ea780u: goto label_4ea780;
        case 0x4ea784u: goto label_4ea784;
        case 0x4ea788u: goto label_4ea788;
        case 0x4ea78cu: goto label_4ea78c;
        default: break;
    }

    ctx->pc = 0x4ea710u;

label_4ea710:
    // 0x4ea710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea714:
    // 0x4ea714: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea718:
    // 0x4ea718: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea71c:
    // 0x4ea71c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea720:
    // 0x4ea720: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea724:
    // 0x4ea724: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea728:
    // 0x4ea728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea72c:
    // 0x4ea72c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea730:
    if (ctx->pc == 0x4EA730u) {
        ctx->pc = 0x4EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA72Cu;
        // 0x4ea730: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA734u;
        goto label_4ea734;
    }
    ctx->pc = 0x4EA72Cu;
    {
        const bool branch_taken_0x4ea72c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA72Cu;
        // 0x4ea730: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea72c) {
            ctx->pc = 0x4EA774u;
            goto label_4ea774;
        }
    }
    ctx->pc = 0x4EA734u;
label_4ea734:
    // 0x4ea734: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea738:
    // 0x4ea738: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea73c:
    // 0x4ea73c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea740:
    // 0x4ea740: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea744:
    // 0x4ea744: 0x60f809  jalr        $v1
label_4ea748:
    if (ctx->pc == 0x4EA748u) {
        ctx->pc = 0x4EA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA744u;
        // 0x4ea748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA74Cu;
        goto label_4ea74c;
    }
    ctx->pc = 0x4EA744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA74Cu);
        ctx->pc = 0x4EA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA744u;
        // 0x4ea748: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA744u, 0x4EA74Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA74Cu;
label_4ea74c:
    // 0x4ea74c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea750:
    // 0x4ea750: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea754:
    // 0x4ea754: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea758:
    // 0x4ea758: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea75c:
    // 0x4ea75c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea760:
    // 0x4ea760: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea764:
    // 0x4ea764: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea768:
    // 0x4ea768: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea76c:
    // 0x4ea76c: 0x60f809  jalr        $v1
label_4ea770:
    if (ctx->pc == 0x4EA770u) {
        ctx->pc = 0x4EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA76Cu;
        // 0x4ea770: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA774u;
        goto label_4ea774;
    }
    ctx->pc = 0x4EA76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA774u);
        ctx->pc = 0x4EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA76Cu;
        // 0x4ea770: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA76Cu, 0x4EA774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA774u;
label_4ea774:
    // 0x4ea774: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea778:
    // 0x4ea778: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea77c:
    // 0x4ea77c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea77cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea780:
    // 0x4ea780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea784:
    // 0x4ea784: 0x3e00008  jr          $ra
label_4ea788:
    if (ctx->pc == 0x4EA788u) {
        ctx->pc = 0x4EA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA784u;
        // 0x4ea788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA78Cu;
        goto label_4ea78c;
    }
    ctx->pc = 0x4EA784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA784u;
        // 0x4ea788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA78Cu;
label_4ea78c:
    // 0x4ea78c: 0x0  nop
    ctx->pc = 0x4ea78cu;
    // NOP
    ctx->pc = 0x4ea790u;
}

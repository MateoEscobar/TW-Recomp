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

// Function: sub_001FE730
// Address: 0x1fe730 - 0x1fe7c0
void sub_001FE730_0x1fe730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE730_0x1fe730");
#endif

    switch (ctx->pc) {
        case 0x1fe748u: goto label_1fe748;
        case 0x1fe750u: goto label_1fe750;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe768u: goto label_1fe768;
        case 0x1fe770u: goto label_1fe770;
        case 0x1fe77cu: goto label_1fe77c;
        case 0x1fe7a4u: goto label_1fe7a4;
        default: break;
    }

    ctx->pc = 0x1fe730u;

    // 0x1fe730: 0x2450ee90  addiu       $s0, $v0, -0x1170
    ctx->pc = 0x1fe730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962832));
    // 0x1fe734: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe738: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fe738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe740: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1fe740u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1fe744: 0x0  nop
    ctx->pc = 0x1fe744u;
    // NOP
label_1fe748:
    // 0x1fe748: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1FE748u;
    SET_GPR_U32(ctx, 31, 0x1FE750u);
    ctx->pc = 0x1FE74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE748u;
    // 0x1fe74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1FE748u, 0x1FE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE750u;
label_1fe750:
    // 0x1fe750: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE750u;
    {
        const bool branch_taken_0x1fe750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe750) {
            ctx->pc = 0x1FE754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE750u;
            // 0x1fe754: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE780u;
            goto label_1fe780;
        }
    }
    ctx->pc = 0x1FE758u;
    // 0x1fe758: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1FE758u;
    SET_GPR_U32(ctx, 31, 0x1FE760u);
    ctx->pc = 0x1FE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE758u;
    // 0x1fe75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1FE758u, 0x1FE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE760u;
label_1fe760:
    // 0x1fe760: 0xc089c70  jal         func_2271C0
    ctx->pc = 0x1FE760u;
    SET_GPR_U32(ctx, 31, 0x1FE768u);
    ctx->pc = 0x1FE764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE760u;
    // 0x1fe764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x1FE760u, 0x1FE768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE768u;
label_1fe768:
    // 0x1fe768: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1FE768u;
    SET_GPR_U32(ctx, 31, 0x1FE770u);
    ctx->pc = 0x1FE76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE768u;
    // 0x1fe76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1FE768u, 0x1FE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE770u;
label_1fe770:
    // 0x1fe770: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe774: 0xc0871f2  jal         func_21C7C8
    ctx->pc = 0x1FE774u;
    SET_GPR_U32(ctx, 31, 0x1FE77Cu);
    ctx->pc = 0x1FE778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE774u;
    // 0x1fe778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x1FE774u, 0x1FE77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE77Cu;
label_1fe77c:
    // 0x1fe77c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fe780:
    // 0x1fe780: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x1fe780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fe784: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FE784u;
    {
        const bool branch_taken_0x1fe784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE784u;
        // 0x1fe788: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe784) {
            ctx->pc = 0x1FE748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe748;
        }
    }
    ctx->pc = 0x1FE78Cu;
    // 0x1fe78c: 0x8644f4ec  lh          $a0, -0xB14($s2)
    ctx->pc = 0x1fe78cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4294964460)));
    // 0x1fe790: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1fe790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fe794: 0x50900005  beql        $a0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE794u;
    {
        const bool branch_taken_0x1fe794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x1fe794) {
            ctx->pc = 0x1FE798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE794u;
            // 0x1fe798: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE7ACu;
            goto label_1fe7ac;
        }
    }
    ctx->pc = 0x1FE79Cu;
    // 0x1fe79c: 0xc05a87a  jal         func_16A1E8
    ctx->pc = 0x1FE79Cu;
    SET_GPR_U32(ctx, 31, 0x1FE7A4u);
    ctx->pc = 0x16A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1E8u, 0x1FE79Cu, 0x1FE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7A4u;
label_1fe7a4:
    // 0x1fe7a4: 0xa650f4ec  sh          $s0, -0xB14($s2)
    ctx->pc = 0x1fe7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4294964460), (uint16_t)GPR_U32(ctx, 16));
    // 0x1fe7a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe7ac:
    // 0x1fe7ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe7b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe7b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7B8u;
        // 0x1fe7bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE7C0u;
}

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

// Function: sub_002DC708
// Address: 0x2dc708 - 0x2dc7a0
void sub_002DC708_0x2dc708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC708_0x2dc708");
#endif

    switch (ctx->pc) {
        case 0x2dc734u: goto label_2dc734;
        case 0x2dc73cu: goto label_2dc73c;
        case 0x2dc74cu: goto label_2dc74c;
        case 0x2dc754u: goto label_2dc754;
        case 0x2dc778u: goto label_2dc778;
        case 0x2dc784u: goto label_2dc784;
        default: break;
    }

    ctx->pc = 0x2dc708u;

    // 0x2dc708: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dc708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dc70c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dc70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dc710: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dc710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dc714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dc714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc718: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2dc718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2dc71c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dc71cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc720: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2dc720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2dc724: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2dc724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2dc728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc72c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DC72Cu;
    SET_GPR_U32(ctx, 31, 0x2DC734u);
    ctx->pc = 0x2DC730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC72Cu;
    // 0x2dc730: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DC72Cu, 0x2DC734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC734u;
label_2dc734:
    // 0x2dc734: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DC734u;
    SET_GPR_U32(ctx, 31, 0x2DC73Cu);
    ctx->pc = 0x2DC738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC734u;
    // 0x2dc738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DC734u, 0x2DC73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC73Cu;
label_2dc73c:
    // 0x2dc73c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DC73Cu;
    {
        const bool branch_taken_0x2dc73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC73Cu;
        // 0x2dc740: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc73c) {
            ctx->pc = 0x2DC788u;
            goto label_2dc788;
        }
    }
    ctx->pc = 0x2DC744u;
    // 0x2dc744: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DC744u;
    SET_GPR_U32(ctx, 31, 0x2DC74Cu);
    ctx->pc = 0x2DC748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC744u;
    // 0x2dc748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DC744u, 0x2DC74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC74Cu;
label_2dc74c:
    // 0x2dc74c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DC74Cu;
    SET_GPR_U32(ctx, 31, 0x2DC754u);
    ctx->pc = 0x2DC750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC74Cu;
    // 0x2dc750: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DC74Cu, 0x2DC754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC754u;
label_2dc754:
    // 0x2dc754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc758: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC758u;
    {
        const bool branch_taken_0x2dc758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC758u;
        // 0x2dc75c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc758) {
            ctx->pc = 0x2DC778u;
            goto label_2dc778;
        }
    }
    ctx->pc = 0x2DC760u;
    // 0x2dc760: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2dc760u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2dc764: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2dc764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc76c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dc76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc770: 0xc0b71e8  jal         func_2DC7A0
    ctx->pc = 0x2DC770u;
    SET_GPR_U32(ctx, 31, 0x2DC778u);
    ctx->pc = 0x2DC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC770u;
    // 0x2dc774: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC7A0u, 0x2DC770u, 0x2DC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC778u;
label_2dc778:
    // 0x2dc778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc77c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DC77Cu;
    SET_GPR_U32(ctx, 31, 0x2DC784u);
    ctx->pc = 0x2DC780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC77Cu;
    // 0x2dc780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DC77Cu, 0x2DC784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC784u;
label_2dc784:
    // 0x2dc784: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2dc784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2dc788:
    // 0x2dc788: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2dc788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc78c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dc78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc790: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2dc790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc798: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC798u;
        // 0x2dc79c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC7A0u;
}

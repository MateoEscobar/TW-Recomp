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

// Function: sub_00340700
// Address: 0x340700 - 0x3407a0
void sub_00340700_0x340700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340700_0x340700");
#endif

    switch (ctx->pc) {
        case 0x34071cu: goto label_34071c;
        case 0x340788u: goto label_340788;
        default: break;
    }

    ctx->pc = 0x340700u;

    // 0x340700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340704: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x340704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x340708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x340708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34070c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340714: 0xc0cf35c  jal         func_33CD70
    ctx->pc = 0x340714u;
    SET_GPR_U32(ctx, 31, 0x34071Cu);
    ctx->pc = 0x340718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340714u;
    // 0x340718: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CD70u, 0x340714u, 0x34071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34071Cu;
label_34071c:
    // 0x34071c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x34071cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x340720: 0x3442f450  ori         $v0, $v0, 0xF450
    ctx->pc = 0x340720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62544);
    // 0x340724: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x340724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x340728: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x340728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x34072c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x34072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x340730: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x340730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x340734: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x340734u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x340738: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x340738u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x34073c: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x34073Cu;
    {
        const bool branch_taken_0x34073c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34073c) {
            ctx->pc = 0x340740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34073Cu;
            // 0x340740: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340774u;
            goto label_340774;
        }
    }
    ctx->pc = 0x340744u;
    // 0x340744: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x340744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x340748: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x340748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x34074c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34074cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x340750: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x340750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x340754: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x340754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x340758: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x340758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x34075c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x34075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x340760: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x340760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x340764: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x340764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x340768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x340768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34076c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34076cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x340770: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x340770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_340774:
    // 0x340774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x340774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34077c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x34077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x340780: 0xc0d0176  jal         func_3405D8
    ctx->pc = 0x340780u;
    SET_GPR_U32(ctx, 31, 0x340788u);
    ctx->pc = 0x340784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340780u;
    // 0x340784: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3405D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3405D8u, 0x340780u, 0x340788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340788u;
label_340788:
    // 0x340788: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x340788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34078c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34078cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340794: 0x3e00008  jr          $ra
    ctx->pc = 0x340794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340794u;
        // 0x340798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34079Cu;
    // 0x34079c: 0x0  nop
    ctx->pc = 0x34079cu;
    // NOP
    ctx->pc = 0x3407a0u;
}

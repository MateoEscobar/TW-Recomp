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

// Function: sub_0021CCE8
// Address: 0x21cce8 - 0x21cda8
void sub_0021CCE8_0x21cce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CCE8_0x21cce8");
#endif

    switch (ctx->pc) {
        case 0x21cd48u: goto label_21cd48;
        case 0x21cd54u: goto label_21cd54;
        case 0x21cd80u: goto label_21cd80;
        default: break;
    }

    ctx->pc = 0x21cce8u;

    // 0x21cce8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21cce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21ccec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21ccf0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x21ccf4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21ccf8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21ccfc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21ccfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x21cd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x21cd04: 0x2442f020  addiu       $v0, $v0, -0xFE0
    ctx->pc = 0x21cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963232));
    // 0x21cd08: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x21cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x21cd0c: 0x2463f088  addiu       $v1, $v1, -0xF78
    ctx->pc = 0x21cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963336));
    // 0x21cd10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21cd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21cd14: 0x262403c8  addiu       $a0, $s1, 0x3C8
    ctx->pc = 0x21cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 968));
    // 0x21cd18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x21cd1c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21cd1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cd20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21cd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21cd24: 0x3c130054  lui         $s3, 0x54
    ctx->pc = 0x21cd24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
    // 0x21cd28: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x21cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x21cd2c: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x21cd2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x21cd30: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x21CD30u;
    {
        const bool branch_taken_0x21cd30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD30u;
        // 0x21cd34: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd30) {
            ctx->pc = 0x21CD60u;
            goto label_21cd60;
        }
    }
    ctx->pc = 0x21CD38u;
    // 0x21cd38: 0x263004e0  addiu       $s0, $s1, 0x4E0
    ctx->pc = 0x21cd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1248));
    // 0x21cd3c: 0x10900008  beq         $a0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21CD3Cu;
    {
        const bool branch_taken_0x21cd3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x21CD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD3Cu;
        // 0x21cd40: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd3c) {
            ctx->pc = 0x21CD60u;
            goto label_21cd60;
        }
    }
    ctx->pc = 0x21CD44u;
    // 0x21cd44: 0x0  nop
    ctx->pc = 0x21cd44u;
    // NOP
label_21cd48:
    // 0x21cd48: 0x2610ffd8  addiu       $s0, $s0, -0x28
    ctx->pc = 0x21cd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
    // 0x21cd4c: 0xc042f3e  jal         func_10BCF8
    ctx->pc = 0x21CD4Cu;
    SET_GPR_U32(ctx, 31, 0x21CD54u);
    ctx->pc = 0x21CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD4Cu;
    // 0x21cd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BCF8u, 0x21CD4Cu, 0x21CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD54u;
label_21cd54:
    // 0x21cd54: 0x0  nop
    ctx->pc = 0x21cd54u;
    // NOP
    // 0x21cd58: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21CD58u;
    {
        const bool branch_taken_0x21cd58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x21CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD58u;
        // 0x21cd5c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd58) {
            ctx->pc = 0x21CD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cd48;
        }
    }
    ctx->pc = 0x21CD60u;
label_21cd60:
    // 0x21cd60: 0x26624b98  addiu       $v0, $s3, 0x4B98
    ctx->pc = 0x21cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 19352));
    // 0x21cd64: 0x26844298  addiu       $a0, $s4, 0x4298
    ctx->pc = 0x21cd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 17048));
    // 0x21cd68: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x21cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
    // 0x21cd6c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x21cd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x21cd70: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CD70u;
    {
        const bool branch_taken_0x21cd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD70u;
        // 0x21cd74: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cd70) {
            ctx->pc = 0x21CD80u;
            goto label_21cd80;
        }
    }
    ctx->pc = 0x21CD78u;
    // 0x21cd78: 0xc10b208  jal         func_42C820
    ctx->pc = 0x21CD78u;
    SET_GPR_U32(ctx, 31, 0x21CD80u);
    ctx->pc = 0x21CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CD78u;
    // 0x21cd7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x21CD78u, 0x21CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CD80u;
label_21cd80:
    // 0x21cd80: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21cd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21cd84: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21cd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21cd88: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21cd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21cd8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21cd8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cd90: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x21cd90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cd94: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x21cd94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cd98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21cd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CD9Cu;
        // 0x21cda0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CDA4u;
    // 0x21cda4: 0x0  nop
    ctx->pc = 0x21cda4u;
    // NOP
    ctx->pc = 0x21cda8u;
}

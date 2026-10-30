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

// Function: sub_0041FC28
// Address: 0x41fc28 - 0x41fcc8
void sub_0041FC28_0x41fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FC28_0x41fc28");
#endif

    switch (ctx->pc) {
        case 0x41fc70u: goto label_41fc70;
        case 0x41fc94u: goto label_41fc94;
        default: break;
    }

    ctx->pc = 0x41fc28u;

    // 0x41fc28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x41fc2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x41fc30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x41fc34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41fc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fc38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x41fc3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41fc40: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x41fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x41fc44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FC44u;
    {
        const bool branch_taken_0x41fc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC44u;
        // 0x41fc48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc44) {
            ctx->pc = 0x41FC54u;
            goto label_41fc54;
        }
    }
    ctx->pc = 0x41FC4Cu;
    // 0x41fc4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x41FC4Cu;
    {
        const bool branch_taken_0x41fc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC4Cu;
        // 0x41fc50: 0xae000194  sw          $zero, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc4c) {
            ctx->pc = 0x41FCACu;
            goto label_41fcac;
        }
    }
    ctx->pc = 0x41FC54u;
label_41fc54:
    // 0x41fc54: 0x26110148  addiu       $s1, $s0, 0x148
    ctx->pc = 0x41fc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x41fc58: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fc58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fc60: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x41fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x41fc64: 0x24a5b510  addiu       $a1, $a1, -0x4AF0
    ctx->pc = 0x41fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
    // 0x41fc68: 0xc052caa  jal         func_14B2A8
    ctx->pc = 0x41FC68u;
    SET_GPR_U32(ctx, 31, 0x41FC70u);
    ctx->pc = 0x41FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC68u;
    // 0x41fc6c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2A8u, 0x41FC68u, 0x41FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC70u;
label_41fc70:
    // 0x41fc70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x41fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fc74: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x41fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x41fc78: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x41FC78u;
    {
        const bool branch_taken_0x41fc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x41FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FC78u;
        // 0x41fc7c: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fc78) {
            ctx->pc = 0x41FCACu;
            goto label_41fcac;
        }
    }
    ctx->pc = 0x41FC80u;
    // 0x41fc80: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fc80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fc88: 0x24a5b530  addiu       $a1, $a1, -0x4AD0
    ctx->pc = 0x41fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948144));
    // 0x41fc8c: 0xc052caa  jal         func_14B2A8
    ctx->pc = 0x41FC8Cu;
    SET_GPR_U32(ctx, 31, 0x41FC94u);
    ctx->pc = 0x41FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FC8Cu;
    // 0x41fc90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B2A8u, 0x41FC8Cu, 0x41FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FC94u;
label_41fc94:
    // 0x41fc94: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x41fc94u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x41fc98: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x41fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fc9c: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x41fc9cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x41fca0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41fca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41FCA4u;
    {
        const bool branch_taken_0x41fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FCA4u;
        // 0x41fca8: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fca4) {
            ctx->pc = 0x41FCB0u;
            goto label_41fcb0;
        }
    }
    ctx->pc = 0x41FCACu;
label_41fcac:
    // 0x41fcac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41fcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41fcb0:
    // 0x41fcb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41fcb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41fcb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41fcb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41fcb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41fcb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41fcbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41fcbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x41FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FCC0u;
        // 0x41fcc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FCC8u;
}

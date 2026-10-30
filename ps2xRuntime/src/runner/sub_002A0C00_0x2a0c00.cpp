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

// Function: sub_002A0C00
// Address: 0x2a0c00 - 0x2a0c78
void sub_002A0C00_0x2a0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0C00_0x2a0c00");
#endif

    switch (ctx->pc) {
        case 0x2a0c28u: goto label_2a0c28;
        case 0x2a0c30u: goto label_2a0c30;
        case 0x2a0c38u: goto label_2a0c38;
        case 0x2a0c50u: goto label_2a0c50;
        case 0x2a0c5cu: goto label_2a0c5c;
        default: break;
    }

    ctx->pc = 0x2a0c00u;

    // 0x2a0c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a0c04: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a0c04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a0c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0c0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a0c10: 0x59403  sra         $s2, $a1, 16
    ctx->pc = 0x2a0c10u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a0c14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a0c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2a0c18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a0c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a0c1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0c20: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A0C20u;
    SET_GPR_U32(ctx, 31, 0x2A0C28u);
    ctx->pc = 0x2A0C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C20u;
    // 0x2a0c24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A0C20u, 0x2A0C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C28u;
label_2a0c28:
    // 0x2a0c28: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A0C28u;
    SET_GPR_U32(ctx, 31, 0x2A0C30u);
    ctx->pc = 0x2A0C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C28u;
    // 0x2a0c2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A0C28u, 0x2A0C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C30u;
label_2a0c30:
    // 0x2a0c30: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A0C30u;
    SET_GPR_U32(ctx, 31, 0x2A0C38u);
    ctx->pc = 0x2A0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C30u;
    // 0x2a0c34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A0C30u, 0x2A0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C38u;
label_2a0c38:
    // 0x2a0c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0C3Cu;
    {
        const bool branch_taken_0x2a0c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C3Cu;
        // 0x2a0c40: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c3c) {
            ctx->pc = 0x2A0C50u;
            goto label_2a0c50;
        }
    }
    ctx->pc = 0x2A0C44u;
    // 0x2a0c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c48: 0xc0a831e  jal         func_2A0C78
    ctx->pc = 0x2A0C48u;
    SET_GPR_U32(ctx, 31, 0x2A0C50u);
    ctx->pc = 0x2A0C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C48u;
    // 0x2a0c4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0C78u, 0x2A0C48u, 0x2A0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C50u;
label_2a0c50:
    // 0x2a0c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c54: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A0C54u;
    SET_GPR_U32(ctx, 31, 0x2A0C5Cu);
    ctx->pc = 0x2A0C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0C54u;
    // 0x2a0c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A0C54u, 0x2A0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C5Cu;
label_2a0c5c:
    // 0x2a0c5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a0c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0c60: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a0c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0c64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a0c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0C6Cu;
        // 0x2a0c70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0C74u;
    // 0x2a0c74: 0x0  nop
    ctx->pc = 0x2a0c74u;
    // NOP
    ctx->pc = 0x2a0c78u;
}

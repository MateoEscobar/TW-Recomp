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

// Function: sub_0035FBE0
// Address: 0x35fbe0 - 0x35fc80
void sub_0035FBE0_0x35fbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FBE0_0x35fbe0");
#endif

    switch (ctx->pc) {
        case 0x35fc0cu: goto label_35fc0c;
        case 0x35fc14u: goto label_35fc14;
        case 0x35fc28u: goto label_35fc28;
        case 0x35fc30u: goto label_35fc30;
        case 0x35fc44u: goto label_35fc44;
        case 0x35fc4cu: goto label_35fc4c;
        case 0x35fc5cu: goto label_35fc5c;
        default: break;
    }

    ctx->pc = 0x35fbe0u;

    // 0x35fbe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35fbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35fbe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fbe8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35fbec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35fbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35fbf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35fbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fbf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35fbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fbf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35fbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35fbfc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35fbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35fc00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fc04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FC04u;
    SET_GPR_U32(ctx, 31, 0x35FC0Cu);
    ctx->pc = 0x35FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC04u;
    // 0x35fc08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FC04u, 0x35FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC0Cu;
label_35fc0c:
    // 0x35fc0c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FC0Cu;
    SET_GPR_U32(ctx, 31, 0x35FC14u);
    ctx->pc = 0x35FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC0Cu;
    // 0x35fc10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FC0Cu, 0x35FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC14u;
label_35fc14:
    // 0x35fc14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35fc18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fc20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FC20u;
    SET_GPR_U32(ctx, 31, 0x35FC28u);
    ctx->pc = 0x35FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC20u;
    // 0x35fc24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FC20u, 0x35FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC28u;
label_35fc28:
    // 0x35fc28: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35FC28u;
    SET_GPR_U32(ctx, 31, 0x35FC30u);
    ctx->pc = 0x35FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC28u;
    // 0x35fc2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35FC28u, 0x35FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC30u;
label_35fc30:
    // 0x35fc30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35fc34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35fc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FC3Cu;
    SET_GPR_U32(ctx, 31, 0x35FC44u);
    ctx->pc = 0x35FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC3Cu;
    // 0x35fc40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FC3Cu, 0x35FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC44u;
label_35fc44:
    // 0x35fc44: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FC44u;
    SET_GPR_U32(ctx, 31, 0x35FC4Cu);
    ctx->pc = 0x35FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC44u;
    // 0x35fc48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FC44u, 0x35FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC4Cu;
label_35fc4c:
    // 0x35fc4c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35fc4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fc50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc54: 0xc0a4a7e  jal         func_2929F8
    ctx->pc = 0x35FC54u;
    SET_GPR_U32(ctx, 31, 0x35FC5Cu);
    ctx->pc = 0x35FC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FC54u;
    // 0x35fc58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2929F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929F8u, 0x35FC54u, 0x35FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FC5Cu;
label_35fc5c:
    // 0x35fc5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35fc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35fc60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fc64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35fc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fc68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35fc68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fc6c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35fc6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fc70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fc74: 0x3e00008  jr          $ra
    ctx->pc = 0x35FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FC74u;
        // 0x35fc78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FC7Cu;
    // 0x35fc7c: 0x0  nop
    ctx->pc = 0x35fc7cu;
    // NOP
    ctx->pc = 0x35fc80u;
}

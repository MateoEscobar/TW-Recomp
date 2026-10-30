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

// Function: sub_0038FBE8
// Address: 0x38fbe8 - 0x38fc70
void sub_0038FBE8_0x38fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FBE8_0x38fbe8");
#endif

    switch (ctx->pc) {
        case 0x38fbe8u: goto label_38fbe8;
        case 0x38fbecu: goto label_38fbec;
        case 0x38fbf0u: goto label_38fbf0;
        case 0x38fbf4u: goto label_38fbf4;
        case 0x38fbf8u: goto label_38fbf8;
        case 0x38fbfcu: goto label_38fbfc;
        case 0x38fc00u: goto label_38fc00;
        case 0x38fc04u: goto label_38fc04;
        case 0x38fc08u: goto label_38fc08;
        case 0x38fc0cu: goto label_38fc0c;
        case 0x38fc10u: goto label_38fc10;
        case 0x38fc14u: goto label_38fc14;
        case 0x38fc18u: goto label_38fc18;
        case 0x38fc1cu: goto label_38fc1c;
        case 0x38fc20u: goto label_38fc20;
        case 0x38fc24u: goto label_38fc24;
        case 0x38fc28u: goto label_38fc28;
        case 0x38fc2cu: goto label_38fc2c;
        case 0x38fc30u: goto label_38fc30;
        case 0x38fc34u: goto label_38fc34;
        case 0x38fc38u: goto label_38fc38;
        case 0x38fc3cu: goto label_38fc3c;
        case 0x38fc40u: goto label_38fc40;
        case 0x38fc44u: goto label_38fc44;
        case 0x38fc48u: goto label_38fc48;
        case 0x38fc4cu: goto label_38fc4c;
        case 0x38fc50u: goto label_38fc50;
        case 0x38fc54u: goto label_38fc54;
        case 0x38fc58u: goto label_38fc58;
        case 0x38fc5cu: goto label_38fc5c;
        case 0x38fc60u: goto label_38fc60;
        case 0x38fc64u: goto label_38fc64;
        case 0x38fc68u: goto label_38fc68;
        case 0x38fc6cu: goto label_38fc6c;
        default: break;
    }

    ctx->pc = 0x38fbe8u;

label_38fbe8:
    // 0x38fbe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38fbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38fbec:
    // 0x38fbec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38fbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38fbf0:
    // 0x38fbf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38fbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_38fbf4:
    // 0x38fbf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38fbf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fbf8:
    // 0x38fbf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38fbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_38fbfc:
    // 0x38fbfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x38fbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38fc00:
    // 0x38fc00: 0x1000000b  b           . + 4 + (0xB << 2)
label_38fc04:
    if (ctx->pc == 0x38FC04u) {
        ctx->pc = 0x38FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC00u;
        // 0x38fc04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FC08u;
        goto label_38fc08;
    }
    ctx->pc = 0x38FC00u;
    {
        const bool branch_taken_0x38fc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC00u;
        // 0x38fc04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc00) {
            ctx->pc = 0x38FC30u;
            goto label_38fc30;
        }
    }
    ctx->pc = 0x38FC08u;
label_38fc08:
    // 0x38fc08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x38fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_38fc0c:
    // 0x38fc0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x38fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38fc10:
    // 0x38fc10: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x38fc10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38fc14:
    // 0x38fc14: 0xc0e3bcc  jal         func_38EF30
label_38fc18:
    if (ctx->pc == 0x38FC18u) {
        ctx->pc = 0x38FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC14u;
        // 0x38fc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FC1Cu;
        goto label_38fc1c;
    }
    ctx->pc = 0x38FC14u;
    SET_GPR_U32(ctx, 31, 0x38FC1Cu);
    ctx->pc = 0x38FC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FC14u;
    // 0x38fc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EF30u, 0x38FC14u, 0x38FC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FC1Cu;
label_38fc1c:
    // 0x38fc1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38fc20:
    // 0x38fc20: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x38fc20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_38fc24:
    // 0x38fc24: 0x8c62013c  lw          $v0, 0x13C($v1)
    ctx->pc = 0x38fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_38fc28:
    // 0x38fc28: 0x40f809  jalr        $v0
label_38fc2c:
    if (ctx->pc == 0x38FC2Cu) {
        ctx->pc = 0x38FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC28u;
        // 0x38fc2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FC30u;
        goto label_38fc30;
    }
    ctx->pc = 0x38FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38FC30u);
        ctx->pc = 0x38FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC28u;
        // 0x38fc2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FC28u, 0x38FC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38FC30u;
label_38fc30:
    // 0x38fc30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38fc34:
    // 0x38fc34: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x38fc34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_38fc38:
    // 0x38fc38: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x38fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_38fc3c:
    // 0x38fc3c: 0x40f809  jalr        $v0
label_38fc40:
    if (ctx->pc == 0x38FC40u) {
        ctx->pc = 0x38FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC3Cu;
        // 0x38fc40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FC44u;
        goto label_38fc44;
    }
    ctx->pc = 0x38FC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38FC44u);
        ctx->pc = 0x38FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC3Cu;
        // 0x38fc40: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FC3Cu, 0x38FC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38FC44u;
label_38fc44:
    // 0x38fc44: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x38fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_38fc48:
    // 0x38fc48: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x38fc48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38fc4c:
    // 0x38fc4c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_38fc50:
    if (ctx->pc == 0x38FC50u) {
        ctx->pc = 0x38FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC4Cu;
        // 0x38fc50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FC54u;
        goto label_38fc54;
    }
    ctx->pc = 0x38FC4Cu;
    {
        const bool branch_taken_0x38fc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC4Cu;
        // 0x38fc50: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc4c) {
            ctx->pc = 0x38FC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fc08;
        }
    }
    ctx->pc = 0x38FC54u;
label_38fc54:
    // 0x38fc54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38fc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38fc58:
    // 0x38fc58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38fc58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38fc5c:
    // 0x38fc5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38fc5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38fc60:
    // 0x38fc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38fc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38fc64:
    // 0x38fc64: 0x3e00008  jr          $ra
label_38fc68:
    if (ctx->pc == 0x38FC68u) {
        ctx->pc = 0x38FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC64u;
        // 0x38fc68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FC6Cu;
        goto label_38fc6c;
    }
    ctx->pc = 0x38FC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC64u;
        // 0x38fc68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FC6Cu;
label_38fc6c:
    // 0x38fc6c: 0x0  nop
    ctx->pc = 0x38fc6cu;
    // NOP
    ctx->pc = 0x38fc70u;
}

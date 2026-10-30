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

// Function: sub_00391C10
// Address: 0x391c10 - 0x391c98
void sub_00391C10_0x391c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391C10_0x391c10");
#endif

    switch (ctx->pc) {
        case 0x391c10u: goto label_391c10;
        case 0x391c14u: goto label_391c14;
        case 0x391c18u: goto label_391c18;
        case 0x391c1cu: goto label_391c1c;
        case 0x391c20u: goto label_391c20;
        case 0x391c24u: goto label_391c24;
        case 0x391c28u: goto label_391c28;
        case 0x391c2cu: goto label_391c2c;
        case 0x391c30u: goto label_391c30;
        case 0x391c34u: goto label_391c34;
        case 0x391c38u: goto label_391c38;
        case 0x391c3cu: goto label_391c3c;
        case 0x391c40u: goto label_391c40;
        case 0x391c44u: goto label_391c44;
        case 0x391c48u: goto label_391c48;
        case 0x391c4cu: goto label_391c4c;
        case 0x391c50u: goto label_391c50;
        case 0x391c54u: goto label_391c54;
        case 0x391c58u: goto label_391c58;
        case 0x391c5cu: goto label_391c5c;
        case 0x391c60u: goto label_391c60;
        case 0x391c64u: goto label_391c64;
        case 0x391c68u: goto label_391c68;
        case 0x391c6cu: goto label_391c6c;
        case 0x391c70u: goto label_391c70;
        case 0x391c74u: goto label_391c74;
        case 0x391c78u: goto label_391c78;
        case 0x391c7cu: goto label_391c7c;
        case 0x391c80u: goto label_391c80;
        case 0x391c84u: goto label_391c84;
        case 0x391c88u: goto label_391c88;
        case 0x391c8cu: goto label_391c8c;
        case 0x391c90u: goto label_391c90;
        case 0x391c94u: goto label_391c94;
        default: break;
    }

    ctx->pc = 0x391c10u;

label_391c10:
    // 0x391c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x391c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_391c14:
    // 0x391c14: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x391c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_391c18:
    // 0x391c18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x391c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_391c1c:
    // 0x391c1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x391c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_391c20:
    // 0x391c20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x391c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_391c24:
    // 0x391c24: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x391c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_391c28:
    // 0x391c28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x391c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_391c2c:
    // 0x391c2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_391c30:
    if (ctx->pc == 0x391C30u) {
        ctx->pc = 0x391C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C2Cu;
        // 0x391c30: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C34u;
        goto label_391c34;
    }
    ctx->pc = 0x391C2Cu;
    {
        const bool branch_taken_0x391c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C2Cu;
        // 0x391c30: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391c2c) {
            ctx->pc = 0x391C40u;
            goto label_391c40;
        }
    }
    ctx->pc = 0x391C34u;
label_391c34:
    // 0x391c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x391c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_391c38:
    // 0x391c38: 0xc0d043c  jal         func_3410F0
label_391c3c:
    if (ctx->pc == 0x391C3Cu) {
        ctx->pc = 0x391C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C38u;
        // 0x391c3c: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C40u;
        goto label_391c40;
    }
    ctx->pc = 0x391C38u;
    SET_GPR_U32(ctx, 31, 0x391C40u);
    ctx->pc = 0x391C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C38u;
    // 0x391c3c: 0x8c447198  lw          $a0, 0x7198($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410F0u, 0x391C38u, 0x391C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C40u;
label_391c40:
    // 0x391c40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x391c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_391c44:
    // 0x391c44: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x391c44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_391c48:
    // 0x391c48: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x391c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_391c4c:
    // 0x391c4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x391c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_391c50:
    // 0x391c50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x391c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_391c54:
    // 0x391c54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x391c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_391c58:
    // 0x391c58: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x391c58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_391c5c:
    // 0x391c5c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x391c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_391c60:
    // 0x391c60: 0x40f809  jalr        $v0
label_391c64:
    if (ctx->pc == 0x391C64u) {
        ctx->pc = 0x391C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C60u;
        // 0x391c64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C68u;
        goto label_391c68;
    }
    ctx->pc = 0x391C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391C68u);
        ctx->pc = 0x391C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C60u;
        // 0x391c64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391C60u, 0x391C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391C68u;
label_391c68:
    // 0x391c68: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x391c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_391c6c:
    // 0x391c6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x391c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_391c70:
    // 0x391c70: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x391c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_391c74:
    // 0x391c74: 0xc0e632c  jal         func_398CB0
label_391c78:
    if (ctx->pc == 0x391C78u) {
        ctx->pc = 0x391C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C74u;
        // 0x391c78: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C7Cu;
        goto label_391c7c;
    }
    ctx->pc = 0x391C74u;
    SET_GPR_U32(ctx, 31, 0x391C7Cu);
    ctx->pc = 0x391C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C74u;
    // 0x391c78: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398CB0u, 0x391C74u, 0x391C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C7Cu;
label_391c7c:
    // 0x391c7c: 0xc0e46c2  jal         func_391B08
label_391c80:
    if (ctx->pc == 0x391C80u) {
        ctx->pc = 0x391C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C7Cu;
        // 0x391c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C84u;
        goto label_391c84;
    }
    ctx->pc = 0x391C7Cu;
    SET_GPR_U32(ctx, 31, 0x391C84u);
    ctx->pc = 0x391C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391C7Cu;
    // 0x391c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391B08u, 0x391C7Cu, 0x391C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391C84u;
label_391c84:
    // 0x391c84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x391c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_391c88:
    // 0x391c88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x391c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_391c8c:
    // 0x391c8c: 0x3e00008  jr          $ra
label_391c90:
    if (ctx->pc == 0x391C90u) {
        ctx->pc = 0x391C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C8Cu;
        // 0x391c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391C94u;
        goto label_391c94;
    }
    ctx->pc = 0x391C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391C8Cu;
        // 0x391c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391C94u;
label_391c94:
    // 0x391c94: 0x0  nop
    ctx->pc = 0x391c94u;
    // NOP
    ctx->pc = 0x391c98u;
}

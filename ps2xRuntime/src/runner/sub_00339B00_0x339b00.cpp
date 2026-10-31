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

// Function: sub_00339B00
// Address: 0x339b00 - 0x339b80
void sub_00339B00_0x339b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339B00_0x339b00");
#endif

    switch (ctx->pc) {
        case 0x339b00u: goto label_339b00;
        case 0x339b04u: goto label_339b04;
        case 0x339b08u: goto label_339b08;
        case 0x339b0cu: goto label_339b0c;
        case 0x339b10u: goto label_339b10;
        case 0x339b14u: goto label_339b14;
        case 0x339b18u: goto label_339b18;
        case 0x339b1cu: goto label_339b1c;
        case 0x339b20u: goto label_339b20;
        case 0x339b24u: goto label_339b24;
        case 0x339b28u: goto label_339b28;
        case 0x339b2cu: goto label_339b2c;
        case 0x339b30u: goto label_339b30;
        case 0x339b34u: goto label_339b34;
        case 0x339b38u: goto label_339b38;
        case 0x339b3cu: goto label_339b3c;
        case 0x339b40u: goto label_339b40;
        case 0x339b44u: goto label_339b44;
        case 0x339b48u: goto label_339b48;
        case 0x339b4cu: goto label_339b4c;
        case 0x339b50u: goto label_339b50;
        case 0x339b54u: goto label_339b54;
        case 0x339b58u: goto label_339b58;
        case 0x339b5cu: goto label_339b5c;
        case 0x339b60u: goto label_339b60;
        case 0x339b64u: goto label_339b64;
        case 0x339b68u: goto label_339b68;
        case 0x339b6cu: goto label_339b6c;
        case 0x339b70u: goto label_339b70;
        case 0x339b74u: goto label_339b74;
        case 0x339b78u: goto label_339b78;
        case 0x339b7cu: goto label_339b7c;
        default: break;
    }

    ctx->pc = 0x339b00u;

label_339b00:
    // 0x339b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x339b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_339b04:
    // 0x339b04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x339b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_339b08:
    // 0x339b08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x339b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_339b0c:
    // 0x339b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x339b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339b10:
    // 0x339b10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x339b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_339b14:
    // 0x339b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_339b18:
    // 0x339b18: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x339b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_339b1c:
    // 0x339b1c: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_339b20:
    if (ctx->pc == 0x339B20u) {
        ctx->pc = 0x339B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B1Cu;
        // 0x339b20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B24u;
        goto label_339b24;
    }
    ctx->pc = 0x339B1Cu;
    {
        const bool branch_taken_0x339b1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x339B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B1Cu;
        // 0x339b20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b1c) {
            ctx->pc = 0x339B60u;
            goto label_339b60;
        }
    }
    ctx->pc = 0x339B24u;
label_339b24:
    // 0x339b24: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x339b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_339b28:
    // 0x339b28: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x339b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_339b2c:
    // 0x339b2c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x339b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_339b30:
    // 0x339b30: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x339b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_339b34:
    // 0x339b34: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x339b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_339b38:
    // 0x339b38: 0x40f809  jalr        $v0
label_339b3c:
    if (ctx->pc == 0x339B3Cu) {
        ctx->pc = 0x339B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B38u;
        // 0x339b3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B40u;
        goto label_339b40;
    }
    ctx->pc = 0x339B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x339B40u);
        ctx->pc = 0x339B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B38u;
        // 0x339b3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339B38u, 0x339B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x339B40u;
label_339b40:
    // 0x339b40: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_339b44:
    if (ctx->pc == 0x339B44u) {
        ctx->pc = 0x339B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B40u;
        // 0x339b44: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B48u;
        goto label_339b48;
    }
    ctx->pc = 0x339B40u;
    {
        const bool branch_taken_0x339b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339b40) {
            ctx->pc = 0x339B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339B40u;
            // 0x339b44: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B50u;
            goto label_339b50;
        }
    }
    ctx->pc = 0x339B48u;
label_339b48:
    // 0x339b48: 0x10000006  b           . + 4 + (0x6 << 2)
label_339b4c:
    if (ctx->pc == 0x339B4Cu) {
        ctx->pc = 0x339B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B48u;
        // 0x339b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B50u;
        goto label_339b50;
    }
    ctx->pc = 0x339B48u;
    {
        const bool branch_taken_0x339b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B48u;
        // 0x339b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b48) {
            ctx->pc = 0x339B64u;
            goto label_339b64;
        }
    }
    ctx->pc = 0x339B50u;
label_339b50:
    // 0x339b50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x339b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_339b54:
    // 0x339b54: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x339b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_339b58:
    // 0x339b58: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_339b5c:
    if (ctx->pc == 0x339B5Cu) {
        ctx->pc = 0x339B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B58u;
        // 0x339b5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B60u;
        goto label_339b60;
    }
    ctx->pc = 0x339B58u;
    {
        const bool branch_taken_0x339b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B58u;
        // 0x339b5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b58) {
            ctx->pc = 0x339B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339b28;
        }
    }
    ctx->pc = 0x339B60u;
label_339b60:
    // 0x339b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339b64:
    // 0x339b64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x339b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_339b68:
    // 0x339b68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x339b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339b6c:
    // 0x339b6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x339b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339b70:
    // 0x339b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339b74:
    // 0x339b74: 0x3e00008  jr          $ra
label_339b78:
    if (ctx->pc == 0x339B78u) {
        ctx->pc = 0x339B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B74u;
        // 0x339b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339B7Cu;
        goto label_339b7c;
    }
    ctx->pc = 0x339B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B74u;
        // 0x339b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339B7Cu;
label_339b7c:
    // 0x339b7c: 0x0  nop
    ctx->pc = 0x339b7cu;
    // NOP
    ctx->pc = 0x339b80u;
}

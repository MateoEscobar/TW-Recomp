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

// Function: sub_003B0EF0
// Address: 0x3b0ef0 - 0x3b0f68
void sub_003B0EF0_0x3b0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0EF0_0x3b0ef0");
#endif

    switch (ctx->pc) {
        case 0x3b0ef0u: goto label_3b0ef0;
        case 0x3b0ef4u: goto label_3b0ef4;
        case 0x3b0ef8u: goto label_3b0ef8;
        case 0x3b0efcu: goto label_3b0efc;
        case 0x3b0f00u: goto label_3b0f00;
        case 0x3b0f04u: goto label_3b0f04;
        case 0x3b0f08u: goto label_3b0f08;
        case 0x3b0f0cu: goto label_3b0f0c;
        case 0x3b0f10u: goto label_3b0f10;
        case 0x3b0f14u: goto label_3b0f14;
        case 0x3b0f18u: goto label_3b0f18;
        case 0x3b0f1cu: goto label_3b0f1c;
        case 0x3b0f20u: goto label_3b0f20;
        case 0x3b0f24u: goto label_3b0f24;
        case 0x3b0f28u: goto label_3b0f28;
        case 0x3b0f2cu: goto label_3b0f2c;
        case 0x3b0f30u: goto label_3b0f30;
        case 0x3b0f34u: goto label_3b0f34;
        case 0x3b0f38u: goto label_3b0f38;
        case 0x3b0f3cu: goto label_3b0f3c;
        case 0x3b0f40u: goto label_3b0f40;
        case 0x3b0f44u: goto label_3b0f44;
        case 0x3b0f48u: goto label_3b0f48;
        case 0x3b0f4cu: goto label_3b0f4c;
        case 0x3b0f50u: goto label_3b0f50;
        case 0x3b0f54u: goto label_3b0f54;
        case 0x3b0f58u: goto label_3b0f58;
        case 0x3b0f5cu: goto label_3b0f5c;
        case 0x3b0f60u: goto label_3b0f60;
        case 0x3b0f64u: goto label_3b0f64;
        default: break;
    }

    ctx->pc = 0x3b0ef0u;

label_3b0ef0:
    // 0x3b0ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b0ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b0ef4:
    // 0x3b0ef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b0ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b0ef8:
    // 0x3b0ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b0efc:
    // 0x3b0efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b0efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f00:
    // 0x3b0f00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b0f04:
    // 0x3b0f04: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b0f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b0f08:
    // 0x3b0f08: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b0f0c:
    // 0x3b0f0c: 0x40f809  jalr        $v0
label_3b0f10:
    if (ctx->pc == 0x3B0F10u) {
        ctx->pc = 0x3B0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F0Cu;
        // 0x3b0f10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F14u;
        goto label_3b0f14;
    }
    ctx->pc = 0x3B0F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0F14u);
        ctx->pc = 0x3B0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F0Cu;
        // 0x3b0f10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0F0Cu, 0x3B0F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0F14u;
label_3b0f14:
    // 0x3b0f14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b0f18:
    // 0x3b0f18: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3b0f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b0f1c:
    // 0x3b0f1c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x3b0f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b0f20:
    // 0x3b0f20: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
label_3b0f24:
    if (ctx->pc == 0x3B0F24u) {
        ctx->pc = 0x3B0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F20u;
        // 0x3b0f24: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F28u;
        goto label_3b0f28;
    }
    ctx->pc = 0x3B0F20u;
    {
        const bool branch_taken_0x3b0f20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3B0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F20u;
        // 0x3b0f24: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f20) {
            ctx->pc = 0x3B0F38u;
            goto label_3b0f38;
        }
    }
    ctx->pc = 0x3B0F28u;
label_3b0f28:
    // 0x3b0f28: 0x920200b0  lbu         $v0, 0xB0($s0)
    ctx->pc = 0x3b0f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
label_3b0f2c:
    // 0x3b0f2c: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3b0f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3b0f30:
    // 0x3b0f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3b0f34:
    if (ctx->pc == 0x3B0F34u) {
        ctx->pc = 0x3B0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F30u;
        // 0x3b0f34: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F38u;
        goto label_3b0f38;
    }
    ctx->pc = 0x3B0F30u;
    {
        const bool branch_taken_0x3b0f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F30u;
        // 0x3b0f34: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f30) {
            ctx->pc = 0x3B0F40u;
            goto label_3b0f40;
        }
    }
    ctx->pc = 0x3B0F38u;
label_3b0f38:
    // 0x3b0f38: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b0f3c:
    if (ctx->pc == 0x3B0F3Cu) {
        ctx->pc = 0x3B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F38u;
        // 0x3b0f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F40u;
        goto label_3b0f40;
    }
    ctx->pc = 0x3B0F38u;
    {
        const bool branch_taken_0x3b0f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F38u;
        // 0x3b0f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0f38) {
            ctx->pc = 0x3B0F54u;
            goto label_3b0f54;
        }
    }
    ctx->pc = 0x3B0F40u;
label_3b0f40:
    // 0x3b0f40: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3b0f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3b0f44:
    // 0x3b0f44: 0x3463ff70  ori         $v1, $v1, 0xFF70
    ctx->pc = 0x3b0f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65392);
label_3b0f48:
    // 0x3b0f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b0f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b0f4c:
    // 0x3b0f4c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3b0f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3b0f50:
    // 0x3b0f50: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3b0f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3b0f54:
    // 0x3b0f54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b0f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0f58:
    // 0x3b0f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0f5c:
    // 0x3b0f5c: 0x3e00008  jr          $ra
label_3b0f60:
    if (ctx->pc == 0x3B0F60u) {
        ctx->pc = 0x3B0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F5Cu;
        // 0x3b0f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0F64u;
        goto label_3b0f64;
    }
    ctx->pc = 0x3B0F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0F5Cu;
        // 0x3b0f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0F64u;
label_3b0f64:
    // 0x3b0f64: 0x0  nop
    ctx->pc = 0x3b0f64u;
    // NOP
    ctx->pc = 0x3b0f68u;
}

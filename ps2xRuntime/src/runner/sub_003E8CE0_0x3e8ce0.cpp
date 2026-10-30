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

// Function: sub_003E8CE0
// Address: 0x3e8ce0 - 0x3e8d48
void sub_003E8CE0_0x3e8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8CE0_0x3e8ce0");
#endif

    switch (ctx->pc) {
        case 0x3e8ce0u: goto label_3e8ce0;
        case 0x3e8ce4u: goto label_3e8ce4;
        case 0x3e8ce8u: goto label_3e8ce8;
        case 0x3e8cecu: goto label_3e8cec;
        case 0x3e8cf0u: goto label_3e8cf0;
        case 0x3e8cf4u: goto label_3e8cf4;
        case 0x3e8cf8u: goto label_3e8cf8;
        case 0x3e8cfcu: goto label_3e8cfc;
        case 0x3e8d00u: goto label_3e8d00;
        case 0x3e8d04u: goto label_3e8d04;
        case 0x3e8d08u: goto label_3e8d08;
        case 0x3e8d0cu: goto label_3e8d0c;
        case 0x3e8d10u: goto label_3e8d10;
        case 0x3e8d14u: goto label_3e8d14;
        case 0x3e8d18u: goto label_3e8d18;
        case 0x3e8d1cu: goto label_3e8d1c;
        case 0x3e8d20u: goto label_3e8d20;
        case 0x3e8d24u: goto label_3e8d24;
        case 0x3e8d28u: goto label_3e8d28;
        case 0x3e8d2cu: goto label_3e8d2c;
        case 0x3e8d30u: goto label_3e8d30;
        case 0x3e8d34u: goto label_3e8d34;
        case 0x3e8d38u: goto label_3e8d38;
        case 0x3e8d3cu: goto label_3e8d3c;
        case 0x3e8d40u: goto label_3e8d40;
        case 0x3e8d44u: goto label_3e8d44;
        default: break;
    }

    ctx->pc = 0x3e8ce0u;

label_3e8ce0:
    // 0x3e8ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e8ce4:
    // 0x3e8ce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e8ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e8ce8:
    // 0x3e8ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e8cec:
    // 0x3e8cec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e8cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8cf0:
    // 0x3e8cf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8cf4:
    // 0x3e8cf4: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3e8cf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8cf8:
    // 0x3e8cf8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8cfc:
    // 0x3e8cfc: 0x40f809  jalr        $v0
label_3e8d00:
    if (ctx->pc == 0x3E8D00u) {
        ctx->pc = 0x3E8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8CFCu;
        // 0x3e8d00: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8D04u;
        goto label_3e8d04;
    }
    ctx->pc = 0x3E8CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8D04u);
        ctx->pc = 0x3E8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8CFCu;
        // 0x3e8d00: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8CFCu, 0x3E8D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8D04u;
label_3e8d04:
    // 0x3e8d04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e8d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8d08:
    // 0x3e8d08: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3e8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3e8d0c:
    // 0x3e8d0c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3e8d10:
    if (ctx->pc == 0x3E8D10u) {
        ctx->pc = 0x3E8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D0Cu;
        // 0x3e8d10: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8D14u;
        goto label_3e8d14;
    }
    ctx->pc = 0x3E8D0Cu;
    {
        const bool branch_taken_0x3e8d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D0Cu;
        // 0x3e8d10: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d0c) {
            ctx->pc = 0x3E8D24u;
            goto label_3e8d24;
        }
    }
    ctx->pc = 0x3E8D14u;
label_3e8d14:
    // 0x3e8d14: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3e8d18:
    if (ctx->pc == 0x3E8D18u) {
        ctx->pc = 0x3E8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D14u;
        // 0x3e8d18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8D1Cu;
        goto label_3e8d1c;
    }
    ctx->pc = 0x3E8D14u;
    {
        const bool branch_taken_0x3e8d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E8D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D14u;
        // 0x3e8d18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d14) {
            ctx->pc = 0x3E8D30u;
            goto label_3e8d30;
        }
    }
    ctx->pc = 0x3E8D1Cu;
label_3e8d1c:
    // 0x3e8d1c: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e8d20:
    if (ctx->pc == 0x3E8D20u) {
        ctx->pc = 0x3E8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D1Cu;
        // 0x3e8d20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8D24u;
        goto label_3e8d24;
    }
    ctx->pc = 0x3E8D1Cu;
    {
        const bool branch_taken_0x3e8d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D1Cu;
        // 0x3e8d20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d1c) {
            ctx->pc = 0x3E8D3Cu;
            goto label_3e8d3c;
        }
    }
    ctx->pc = 0x3E8D24u;
label_3e8d24:
    // 0x3e8d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8d28:
    // 0x3e8d28: 0x10000002  b           . + 4 + (0x2 << 2)
label_3e8d2c:
    if (ctx->pc == 0x3E8D2Cu) {
        ctx->pc = 0x3E8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D28u;
        // 0x3e8d2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8D30u;
        goto label_3e8d30;
    }
    ctx->pc = 0x3E8D28u;
    {
        const bool branch_taken_0x3e8d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D28u;
        // 0x3e8d2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8d28) {
            ctx->pc = 0x3E8D34u;
            goto label_3e8d34;
        }
    }
    ctx->pc = 0x3E8D30u;
label_3e8d30:
    // 0x3e8d30: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3e8d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3e8d34:
    // 0x3e8d34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e8d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8d38:
    // 0x3e8d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8d3c:
    // 0x3e8d3c: 0x3e00008  jr          $ra
label_3e8d40:
    if (ctx->pc == 0x3E8D40u) {
        ctx->pc = 0x3E8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D3Cu;
        // 0x3e8d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8D44u;
        goto label_3e8d44;
    }
    ctx->pc = 0x3E8D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8D3Cu;
        // 0x3e8d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8D44u;
label_3e8d44:
    // 0x3e8d44: 0x0  nop
    ctx->pc = 0x3e8d44u;
    // NOP
    ctx->pc = 0x3e8d48u;
}

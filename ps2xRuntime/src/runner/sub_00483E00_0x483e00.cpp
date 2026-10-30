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

// Function: sub_00483E00
// Address: 0x483e00 - 0x483e70
void sub_00483E00_0x483e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483E00_0x483e00");
#endif

    switch (ctx->pc) {
        case 0x483e00u: goto label_483e00;
        case 0x483e04u: goto label_483e04;
        case 0x483e08u: goto label_483e08;
        case 0x483e0cu: goto label_483e0c;
        case 0x483e10u: goto label_483e10;
        case 0x483e14u: goto label_483e14;
        case 0x483e18u: goto label_483e18;
        case 0x483e1cu: goto label_483e1c;
        case 0x483e20u: goto label_483e20;
        case 0x483e24u: goto label_483e24;
        case 0x483e28u: goto label_483e28;
        case 0x483e2cu: goto label_483e2c;
        case 0x483e30u: goto label_483e30;
        case 0x483e34u: goto label_483e34;
        case 0x483e38u: goto label_483e38;
        case 0x483e3cu: goto label_483e3c;
        case 0x483e40u: goto label_483e40;
        case 0x483e44u: goto label_483e44;
        case 0x483e48u: goto label_483e48;
        case 0x483e4cu: goto label_483e4c;
        case 0x483e50u: goto label_483e50;
        case 0x483e54u: goto label_483e54;
        case 0x483e58u: goto label_483e58;
        case 0x483e5cu: goto label_483e5c;
        case 0x483e60u: goto label_483e60;
        case 0x483e64u: goto label_483e64;
        case 0x483e68u: goto label_483e68;
        case 0x483e6cu: goto label_483e6c;
        default: break;
    }

    ctx->pc = 0x483e00u;

label_483e00:
    // 0x483e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x483e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_483e04:
    // 0x483e04: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x483e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_483e08:
    // 0x483e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_483e0c:
    // 0x483e0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x483e0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483e10:
    // 0x483e10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x483e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_483e14:
    // 0x483e14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x483e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_483e18:
    // 0x483e18: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x483e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_483e1c:
    // 0x483e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_483e20:
    // 0x483e20: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x483e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_483e24:
    // 0x483e24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_483e28:
    if (ctx->pc == 0x483E28u) {
        ctx->pc = 0x483E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E24u;
        // 0x483e28: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483E2Cu;
        goto label_483e2c;
    }
    ctx->pc = 0x483E24u;
    {
        const bool branch_taken_0x483e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x483E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E24u;
        // 0x483e28: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483e24) {
            ctx->pc = 0x483E4Cu;
            goto label_483e4c;
        }
    }
    ctx->pc = 0x483E2Cu;
label_483e2c:
    // 0x483e2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x483e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483e30:
    // 0x483e30: 0x8c50009c  lw          $s0, 0x9C($v0)
    ctx->pc = 0x483e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_483e34:
    // 0x483e34: 0x260f809  jalr        $s3
label_483e38:
    if (ctx->pc == 0x483E38u) {
        ctx->pc = 0x483E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E34u;
        // 0x483e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483E3Cu;
        goto label_483e3c;
    }
    ctx->pc = 0x483E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x483E3Cu);
        ctx->pc = 0x483E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E34u;
        // 0x483e38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483E34u, 0x483E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483E3Cu;
label_483e3c:
    // 0x483e3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_483e40:
    if (ctx->pc == 0x483E40u) {
        ctx->pc = 0x483E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E3Cu;
        // 0x483e40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483E44u;
        goto label_483e44;
    }
    ctx->pc = 0x483E3Cu;
    {
        const bool branch_taken_0x483e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x483E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E3Cu;
        // 0x483e40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483e3c) {
            ctx->pc = 0x483E4Cu;
            goto label_483e4c;
        }
    }
    ctx->pc = 0x483E44u;
label_483e44:
    // 0x483e44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_483e48:
    if (ctx->pc == 0x483E48u) {
        ctx->pc = 0x483E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E44u;
        // 0x483e48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483E4Cu;
        goto label_483e4c;
    }
    ctx->pc = 0x483E44u;
    {
        const bool branch_taken_0x483e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x483E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E44u;
        // 0x483e48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483e44) {
            ctx->pc = 0x483E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483e30;
        }
    }
    ctx->pc = 0x483E4Cu;
label_483e4c:
    // 0x483e4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x483e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_483e50:
    // 0x483e50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x483e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_483e54:
    // 0x483e54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x483e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_483e58:
    // 0x483e58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x483e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_483e5c:
    // 0x483e5c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x483e5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_483e60:
    // 0x483e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_483e64:
    // 0x483e64: 0x3e00008  jr          $ra
label_483e68:
    if (ctx->pc == 0x483E68u) {
        ctx->pc = 0x483E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E64u;
        // 0x483e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483E6Cu;
        goto label_483e6c;
    }
    ctx->pc = 0x483E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E64u;
        // 0x483e68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483E6Cu;
label_483e6c:
    // 0x483e6c: 0x0  nop
    ctx->pc = 0x483e6cu;
    // NOP
    ctx->pc = 0x483e70u;
}

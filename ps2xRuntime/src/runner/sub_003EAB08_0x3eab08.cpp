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

// Function: sub_003EAB08
// Address: 0x3eab08 - 0x3eab70
void sub_003EAB08_0x3eab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAB08_0x3eab08");
#endif

    switch (ctx->pc) {
        case 0x3eab08u: goto label_3eab08;
        case 0x3eab0cu: goto label_3eab0c;
        case 0x3eab10u: goto label_3eab10;
        case 0x3eab14u: goto label_3eab14;
        case 0x3eab18u: goto label_3eab18;
        case 0x3eab1cu: goto label_3eab1c;
        case 0x3eab20u: goto label_3eab20;
        case 0x3eab24u: goto label_3eab24;
        case 0x3eab28u: goto label_3eab28;
        case 0x3eab2cu: goto label_3eab2c;
        case 0x3eab30u: goto label_3eab30;
        case 0x3eab34u: goto label_3eab34;
        case 0x3eab38u: goto label_3eab38;
        case 0x3eab3cu: goto label_3eab3c;
        case 0x3eab40u: goto label_3eab40;
        case 0x3eab44u: goto label_3eab44;
        case 0x3eab48u: goto label_3eab48;
        case 0x3eab4cu: goto label_3eab4c;
        case 0x3eab50u: goto label_3eab50;
        case 0x3eab54u: goto label_3eab54;
        case 0x3eab58u: goto label_3eab58;
        case 0x3eab5cu: goto label_3eab5c;
        case 0x3eab60u: goto label_3eab60;
        case 0x3eab64u: goto label_3eab64;
        case 0x3eab68u: goto label_3eab68;
        case 0x3eab6cu: goto label_3eab6c;
        default: break;
    }

    ctx->pc = 0x3eab08u;

label_3eab08:
    // 0x3eab08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eab0c:
    // 0x3eab0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3eab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3eab10:
    // 0x3eab10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eab14:
    // 0x3eab14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eab14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eab18:
    // 0x3eab18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eab1c:
    // 0x3eab1c: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3eab1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eab20:
    // 0x3eab20: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eab24:
    // 0x3eab24: 0x40f809  jalr        $v0
label_3eab28:
    if (ctx->pc == 0x3EAB28u) {
        ctx->pc = 0x3EAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB24u;
        // 0x3eab28: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB2Cu;
        goto label_3eab2c;
    }
    ctx->pc = 0x3EAB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAB2Cu);
        ctx->pc = 0x3EAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB24u;
        // 0x3eab28: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAB24u, 0x3EAB2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAB2Cu;
label_3eab2c:
    // 0x3eab2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3eab2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eab30:
    // 0x3eab30: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3eab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3eab34:
    // 0x3eab34: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3eab38:
    if (ctx->pc == 0x3EAB38u) {
        ctx->pc = 0x3EAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB34u;
        // 0x3eab38: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB3Cu;
        goto label_3eab3c;
    }
    ctx->pc = 0x3EAB34u;
    {
        const bool branch_taken_0x3eab34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB34u;
        // 0x3eab38: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab34) {
            ctx->pc = 0x3EAB4Cu;
            goto label_3eab4c;
        }
    }
    ctx->pc = 0x3EAB3Cu;
label_3eab3c:
    // 0x3eab3c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_3eab40:
    if (ctx->pc == 0x3EAB40u) {
        ctx->pc = 0x3EAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB3Cu;
        // 0x3eab40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB44u;
        goto label_3eab44;
    }
    ctx->pc = 0x3EAB3Cu;
    {
        const bool branch_taken_0x3eab3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EAB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB3Cu;
        // 0x3eab40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab3c) {
            ctx->pc = 0x3EAB58u;
            goto label_3eab58;
        }
    }
    ctx->pc = 0x3EAB44u;
label_3eab44:
    // 0x3eab44: 0x10000007  b           . + 4 + (0x7 << 2)
label_3eab48:
    if (ctx->pc == 0x3EAB48u) {
        ctx->pc = 0x3EAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB44u;
        // 0x3eab48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB4Cu;
        goto label_3eab4c;
    }
    ctx->pc = 0x3EAB44u;
    {
        const bool branch_taken_0x3eab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB44u;
        // 0x3eab48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab44) {
            ctx->pc = 0x3EAB64u;
            goto label_3eab64;
        }
    }
    ctx->pc = 0x3EAB4Cu;
label_3eab4c:
    // 0x3eab4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eab50:
    // 0x3eab50: 0x10000002  b           . + 4 + (0x2 << 2)
label_3eab54:
    if (ctx->pc == 0x3EAB54u) {
        ctx->pc = 0x3EAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB50u;
        // 0x3eab54: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB58u;
        goto label_3eab58;
    }
    ctx->pc = 0x3EAB50u;
    {
        const bool branch_taken_0x3eab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB50u;
        // 0x3eab54: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab50) {
            ctx->pc = 0x3EAB5Cu;
            goto label_3eab5c;
        }
    }
    ctx->pc = 0x3EAB58u;
label_3eab58:
    // 0x3eab58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3eab58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3eab5c:
    // 0x3eab5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eab5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eab60:
    // 0x3eab60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eab64:
    // 0x3eab64: 0x3e00008  jr          $ra
label_3eab68:
    if (ctx->pc == 0x3EAB68u) {
        ctx->pc = 0x3EAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB64u;
        // 0x3eab68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB6Cu;
        goto label_3eab6c;
    }
    ctx->pc = 0x3EAB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB64u;
        // 0x3eab68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAB6Cu;
label_3eab6c:
    // 0x3eab6c: 0x0  nop
    ctx->pc = 0x3eab6cu;
    // NOP
    ctx->pc = 0x3eab70u;
}

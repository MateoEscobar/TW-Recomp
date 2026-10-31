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

// Function: sub_0047FF30
// Address: 0x47ff30 - 0x47ffa0
void sub_0047FF30_0x47ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047FF30_0x47ff30");
#endif

    switch (ctx->pc) {
        case 0x47ff30u: goto label_47ff30;
        case 0x47ff34u: goto label_47ff34;
        case 0x47ff38u: goto label_47ff38;
        case 0x47ff3cu: goto label_47ff3c;
        case 0x47ff40u: goto label_47ff40;
        case 0x47ff44u: goto label_47ff44;
        case 0x47ff48u: goto label_47ff48;
        case 0x47ff4cu: goto label_47ff4c;
        case 0x47ff50u: goto label_47ff50;
        case 0x47ff54u: goto label_47ff54;
        case 0x47ff58u: goto label_47ff58;
        case 0x47ff5cu: goto label_47ff5c;
        case 0x47ff60u: goto label_47ff60;
        case 0x47ff64u: goto label_47ff64;
        case 0x47ff68u: goto label_47ff68;
        case 0x47ff6cu: goto label_47ff6c;
        case 0x47ff70u: goto label_47ff70;
        case 0x47ff74u: goto label_47ff74;
        case 0x47ff78u: goto label_47ff78;
        case 0x47ff7cu: goto label_47ff7c;
        case 0x47ff80u: goto label_47ff80;
        case 0x47ff84u: goto label_47ff84;
        case 0x47ff88u: goto label_47ff88;
        case 0x47ff8cu: goto label_47ff8c;
        case 0x47ff90u: goto label_47ff90;
        case 0x47ff94u: goto label_47ff94;
        case 0x47ff98u: goto label_47ff98;
        case 0x47ff9cu: goto label_47ff9c;
        default: break;
    }

    ctx->pc = 0x47ff30u;

label_47ff30:
    // 0x47ff30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47ff34:
    // 0x47ff34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x47ff34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_47ff38:
    // 0x47ff38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47ff3c:
    // 0x47ff3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x47ff3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47ff40:
    // 0x47ff40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x47ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_47ff44:
    // 0x47ff44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47ff48:
    // 0x47ff48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47ff48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47ff4c:
    // 0x47ff4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x47ff4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_47ff50:
    // 0x47ff50: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x47ff50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_47ff54:
    // 0x47ff54: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_47ff58:
    if (ctx->pc == 0x47FF58u) {
        ctx->pc = 0x47FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF54u;
        // 0x47ff58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FF5Cu;
        goto label_47ff5c;
    }
    ctx->pc = 0x47FF54u;
    {
        const bool branch_taken_0x47ff54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF54u;
        // 0x47ff58: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ff54) {
            ctx->pc = 0x47FF80u;
            goto label_47ff80;
        }
    }
    ctx->pc = 0x47FF5Cu;
label_47ff5c:
    // 0x47ff5c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x47ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_47ff60:
    // 0x47ff60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47ff60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47ff64:
    // 0x47ff64: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x47ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47ff68:
    // 0x47ff68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47ff68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47ff6c:
    // 0x47ff6c: 0x40f809  jalr        $v0
label_47ff70:
    if (ctx->pc == 0x47FF70u) {
        ctx->pc = 0x47FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF6Cu;
        // 0x47ff70: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FF74u;
        goto label_47ff74;
    }
    ctx->pc = 0x47FF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FF74u);
        ctx->pc = 0x47FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF6Cu;
        // 0x47ff70: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FF6Cu, 0x47FF74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FF74u;
label_47ff74:
    // 0x47ff74: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x47ff74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47ff78:
    // 0x47ff78: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_47ff7c:
    if (ctx->pc == 0x47FF7Cu) {
        ctx->pc = 0x47FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF78u;
        // 0x47ff7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FF80u;
        goto label_47ff80;
    }
    ctx->pc = 0x47FF78u;
    {
        const bool branch_taken_0x47ff78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47ff78) {
            ctx->pc = 0x47FF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47FF78u;
            // 0x47ff7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47FF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47ff60;
        }
    }
    ctx->pc = 0x47FF80u;
label_47ff80:
    // 0x47ff80: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47ff80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47ff84:
    // 0x47ff84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x47ff84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47ff88:
    // 0x47ff88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x47ff88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ff8c:
    // 0x47ff8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47ff8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ff90:
    // 0x47ff90: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x47ff90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ff94:
    // 0x47ff94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47ff94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47ff98:
    // 0x47ff98: 0x3e00008  jr          $ra
label_47ff9c:
    if (ctx->pc == 0x47FF9Cu) {
        ctx->pc = 0x47FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF98u;
        // 0x47ff9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47FFA0u;
        goto label_fallthrough_0x47ff98;
    }
    ctx->pc = 0x47FF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47FF98u;
        // 0x47ff9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47ff98:
    ctx->pc = 0x47FFA0u;
}

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

// Function: sub_002B4A38
// Address: 0x2b4a38 - 0x2b4a98
void sub_002B4A38_0x2b4a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4A38_0x2b4a38");
#endif

    switch (ctx->pc) {
        case 0x2b4a38u: goto label_2b4a38;
        case 0x2b4a3cu: goto label_2b4a3c;
        case 0x2b4a40u: goto label_2b4a40;
        case 0x2b4a44u: goto label_2b4a44;
        case 0x2b4a48u: goto label_2b4a48;
        case 0x2b4a4cu: goto label_2b4a4c;
        case 0x2b4a50u: goto label_2b4a50;
        case 0x2b4a54u: goto label_2b4a54;
        case 0x2b4a58u: goto label_2b4a58;
        case 0x2b4a5cu: goto label_2b4a5c;
        case 0x2b4a60u: goto label_2b4a60;
        case 0x2b4a64u: goto label_2b4a64;
        case 0x2b4a68u: goto label_2b4a68;
        case 0x2b4a6cu: goto label_2b4a6c;
        case 0x2b4a70u: goto label_2b4a70;
        case 0x2b4a74u: goto label_2b4a74;
        case 0x2b4a78u: goto label_2b4a78;
        case 0x2b4a7cu: goto label_2b4a7c;
        case 0x2b4a80u: goto label_2b4a80;
        case 0x2b4a84u: goto label_2b4a84;
        case 0x2b4a88u: goto label_2b4a88;
        case 0x2b4a8cu: goto label_2b4a8c;
        case 0x2b4a90u: goto label_2b4a90;
        case 0x2b4a94u: goto label_2b4a94;
        default: break;
    }

    ctx->pc = 0x2b4a38u;

label_2b4a38:
    // 0x2b4a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b4a3c:
    // 0x2b4a3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2b4a40:
    // 0x2b4a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b4a44:
    // 0x2b4a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4a48:
    // 0x2b4a48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b4a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b4a4c:
    // 0x2b4a4c: 0xc0e409a  jal         func_390268
label_2b4a50:
    if (ctx->pc == 0x2B4A50u) {
        ctx->pc = 0x2B4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A4Cu;
        // 0x2b4a50: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A54u;
        goto label_2b4a54;
    }
    ctx->pc = 0x2B4A4Cu;
    SET_GPR_U32(ctx, 31, 0x2B4A54u);
    ctx->pc = 0x2B4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4A4Cu;
    // 0x2b4a50: 0x24840124  addiu       $a0, $a0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B4A4Cu, 0x2B4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A54u;
label_2b4a54:
    // 0x2b4a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4a58:
    // 0x2b4a58: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2b4a5c:
    if (ctx->pc == 0x2B4A5Cu) {
        ctx->pc = 0x2B4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A58u;
        // 0x2b4a5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A60u;
        goto label_2b4a60;
    }
    ctx->pc = 0x2B4A58u;
    {
        const bool branch_taken_0x2b4a58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A58u;
        // 0x2b4a5c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a58) {
            ctx->pc = 0x2B4A7Cu;
            goto label_2b4a7c;
        }
    }
    ctx->pc = 0x2B4A60u;
label_2b4a60:
    // 0x2b4a60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b4a64:
    // 0x2b4a64: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b4a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b4a68:
    // 0x2b4a68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b4a6c:
    // 0x2b4a6c: 0x40f809  jalr        $v0
label_2b4a70:
    if (ctx->pc == 0x2B4A70u) {
        ctx->pc = 0x2B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A6Cu;
        // 0x2b4a70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A74u;
        goto label_2b4a74;
    }
    ctx->pc = 0x2B4A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B4A74u);
        ctx->pc = 0x2B4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A6Cu;
        // 0x2b4a70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A6Cu, 0x2B4A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4A74u;
label_2b4a74:
    // 0x2b4a74: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2b4a78:
    // 0x2b4a78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2b4a7c:
    // 0x2b4a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4a80:
    // 0x2b4a80: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2b4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2b4a84:
    // 0x2b4a84: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2b4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b4a88:
    // 0x2b4a88: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x2b4a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_2b4a8c:
    // 0x2b4a8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b4a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4a90:
    // 0x2b4a90: 0x3e00008  jr          $ra
label_2b4a94:
    if (ctx->pc == 0x2B4A94u) {
        ctx->pc = 0x2B4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A90u;
        // 0x2b4a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A98u;
        goto label_fallthrough_0x2b4a90;
    }
    ctx->pc = 0x2B4A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A90u;
        // 0x2b4a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b4a90:
    ctx->pc = 0x2B4A98u;
}

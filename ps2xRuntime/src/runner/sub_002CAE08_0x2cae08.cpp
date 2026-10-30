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

// Function: sub_002CAE08
// Address: 0x2cae08 - 0x2caea8
void sub_002CAE08_0x2cae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAE08_0x2cae08");
#endif

    switch (ctx->pc) {
        case 0x2cae28u: goto label_2cae28;
        case 0x2cae38u: goto label_2cae38;
        case 0x2cae44u: goto label_2cae44;
        case 0x2cae54u: goto label_2cae54;
        case 0x2cae68u: goto label_2cae68;
        case 0x2cae70u: goto label_2cae70;
        case 0x2cae90u: goto label_2cae90;
        default: break;
    }

    ctx->pc = 0x2cae08u;

    // 0x2cae08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cae0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cae10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cae14: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cae14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cae18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cae18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cae20: 0xc0a3678  jal         func_28D9E0
    ctx->pc = 0x2CAE20u;
    SET_GPR_U32(ctx, 31, 0x2CAE28u);
    ctx->pc = 0x2CAE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE20u;
    // 0x2cae24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9E0u, 0x2CAE20u, 0x2CAE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE28u;
label_2cae28:
    // 0x2cae28: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2cae28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cae2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cae2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae30: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2CAE30u;
    SET_GPR_U32(ctx, 31, 0x2CAE38u);
    ctx->pc = 0x2CAE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE30u;
    // 0x2cae34: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CAE30u, 0x2CAE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE38u;
label_2cae38:
    // 0x2cae38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae3c: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2CAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2CAE44u);
    ctx->pc = 0x2CAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE3Cu;
    // 0x2cae40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2CAE3Cu, 0x2CAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE44u;
label_2cae44:
    // 0x2cae44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CAE44u;
    {
        const bool branch_taken_0x2cae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAE44u;
        // 0x2cae48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae44) {
            ctx->pc = 0x2CAE94u;
            goto label_2cae94;
        }
    }
    ctx->pc = 0x2CAE4Cu;
    // 0x2cae4c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2CAE4Cu;
    SET_GPR_U32(ctx, 31, 0x2CAE54u);
    ctx->pc = 0x2CAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE4Cu;
    // 0x2cae50: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2CAE4Cu, 0x2CAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE54u;
label_2cae54:
    // 0x2cae54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cae54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae58: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CAE58u;
    {
        const bool branch_taken_0x2cae58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cae58) {
            ctx->pc = 0x2CAE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAE58u;
            // 0x2cae5c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAE94u;
            goto label_2cae94;
        }
    }
    ctx->pc = 0x2CAE60u;
    // 0x2cae60: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2CAE60u;
    SET_GPR_U32(ctx, 31, 0x2CAE68u);
    ctx->pc = 0x2CAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE60u;
    // 0x2cae64: 0x26440028  addiu       $a0, $s2, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2CAE60u, 0x2CAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE68u;
label_2cae68:
    // 0x2cae68: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2CAE68u;
    SET_GPR_U32(ctx, 31, 0x2CAE70u);
    ctx->pc = 0x2CAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE68u;
    // 0x2cae6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2CAE68u, 0x2CAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE70u;
label_2cae70:
    // 0x2cae70: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cae70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cae74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2cae78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2cae7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2cae7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2cae80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cae80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cae84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cae84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cae88: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2CAE88u;
    SET_GPR_U32(ctx, 31, 0x2CAE90u);
    ctx->pc = 0x2CAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAE88u;
    // 0x2cae8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2CAE88u, 0x2CAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE90u;
label_2cae90:
    // 0x2cae90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cae90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cae94:
    // 0x2cae94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cae94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cae98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cae98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cae9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cae9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEA0u;
        // 0x2caea4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAEA8u;
}

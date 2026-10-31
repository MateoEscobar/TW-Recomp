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

// Function: sub_002DFB00
// Address: 0x2dfb00 - 0x2dfba8
void sub_002DFB00_0x2dfb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFB00_0x2dfb00");
#endif

    switch (ctx->pc) {
        case 0x2dfb20u: goto label_2dfb20;
        case 0x2dfb28u: goto label_2dfb28;
        case 0x2dfb3cu: goto label_2dfb3c;
        case 0x2dfb44u: goto label_2dfb44;
        case 0x2dfb54u: goto label_2dfb54;
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfb88u: goto label_2dfb88;
        case 0x2dfb94u: goto label_2dfb94;
        default: break;
    }

    ctx->pc = 0x2dfb00u;

    // 0x2dfb00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dfb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dfb04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dfb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dfb08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2dfb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2dfb0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dfb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb10: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dfb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dfb14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dfb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dfb18: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DFB18u;
    SET_GPR_U32(ctx, 31, 0x2DFB20u);
    ctx->pc = 0x2DFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB18u;
    // 0x2dfb1c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DFB18u, 0x2DFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB20u;
label_2dfb20:
    // 0x2dfb20: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DFB20u;
    SET_GPR_U32(ctx, 31, 0x2DFB28u);
    ctx->pc = 0x2DFB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB20u;
    // 0x2dfb24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DFB20u, 0x2DFB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB28u;
label_2dfb28:
    // 0x2dfb28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb2c: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DFB2Cu;
    {
        const bool branch_taken_0x2dfb2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfb2c) {
            ctx->pc = 0x2DFB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFB2Cu;
            // 0x2dfb30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFB98u;
            goto label_2dfb98;
        }
    }
    ctx->pc = 0x2DFB34u;
    // 0x2dfb34: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DFB34u;
    SET_GPR_U32(ctx, 31, 0x2DFB3Cu);
    ctx->pc = 0x2DFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB34u;
    // 0x2dfb38: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DFB34u, 0x2DFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB3Cu;
label_2dfb3c:
    // 0x2dfb3c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DFB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFB44u);
    ctx->pc = 0x2DFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB3Cu;
    // 0x2dfb40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DFB3Cu, 0x2DFB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB44u;
label_2dfb44:
    // 0x2dfb44: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DFB44u;
    {
        const bool branch_taken_0x2dfb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfb44) {
            ctx->pc = 0x2DFB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFB44u;
            // 0x2dfb48: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFB98u;
            goto label_2dfb98;
        }
    }
    ctx->pc = 0x2DFB4Cu;
    // 0x2dfb4c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DFB4Cu;
    SET_GPR_U32(ctx, 31, 0x2DFB54u);
    ctx->pc = 0x2DFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB4Cu;
    // 0x2dfb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DFB4Cu, 0x2DFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB54u;
label_2dfb54:
    // 0x2dfb54: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DFB54u;
    SET_GPR_U32(ctx, 31, 0x2DFB5Cu);
    ctx->pc = 0x2DFB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB54u;
    // 0x2dfb58: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DFB54u, 0x2DFB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB5Cu;
label_2dfb5c:
    // 0x2dfb5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfb5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb60: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DFB60u;
    {
        const bool branch_taken_0x2dfb60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB60u;
        // 0x2dfb64: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb60) {
            ctx->pc = 0x2DFB88u;
            goto label_2dfb88;
        }
    }
    ctx->pc = 0x2DFB68u;
    // 0x2dfb68: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2dfb68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2dfb6c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2dfb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2dfb70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dfb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dfb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dfb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dfb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb80: 0xc0b7eea  jal         func_2DFBA8
    ctx->pc = 0x2DFB80u;
    SET_GPR_U32(ctx, 31, 0x2DFB88u);
    ctx->pc = 0x2DFB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB80u;
    // 0x2dfb84: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFBA8u, 0x2DFB80u, 0x2DFB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB88u;
label_2dfb88:
    // 0x2dfb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb8c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DFB8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFB94u);
    ctx->pc = 0x2DFB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB8Cu;
    // 0x2dfb90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DFB8Cu, 0x2DFB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB94u;
label_2dfb94:
    // 0x2dfb94: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2dfb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dfb98:
    // 0x2dfb98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dfb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dfb9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dfb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dfba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFBA0u;
        // 0x2dfba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFBA8u;
}

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

// Function: sub_00114A38
// Address: 0x114a38 - 0x114b00
void sub_00114A38_0x114a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114A38_0x114a38");
#endif

    switch (ctx->pc) {
        case 0x114a90u: goto label_114a90;
        case 0x114aa0u: goto label_114aa0;
        case 0x114ab4u: goto label_114ab4;
        case 0x114ad4u: goto label_114ad4;
        default: break;
    }

    ctx->pc = 0x114a38u;

    // 0x114a38: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x114a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x114a3c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x114a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x114a40: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x114a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x114a44: 0x2463aaa8  addiu       $v1, $v1, -0x5558
    ctx->pc = 0x114a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945448));
    // 0x114a48: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x114a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a4c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x114a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x114a50: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x114a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x114a54: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x114a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x114a58: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x114a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x114a5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114a60: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x114a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x114a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x114a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x114a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x114a6c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x114a6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x114a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a74: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x114a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x114a78: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x114a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x114a7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x114a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a80: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x114a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a84: 0x24a57de8  addiu       $a1, $a1, 0x7DE8
    ctx->pc = 0x114a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32232));
    // 0x114a88: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x114A88u;
    SET_GPR_U32(ctx, 31, 0x114A90u);
    ctx->pc = 0x114A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A88u;
    // 0x114a8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x114A88u, 0x114A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114A90u;
label_114a90:
    // 0x114a90: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x114a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x114a94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x114a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a98: 0xc050fda  jal         func_143F68
    ctx->pc = 0x114A98u;
    SET_GPR_U32(ctx, 31, 0x114AA0u);
    ctx->pc = 0x114A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A98u;
    // 0x114a9c: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x114A98u, 0x114AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AA0u;
label_114aa0:
    // 0x114aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114aa4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x114aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x114aa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x114aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114aac: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x114AACu;
    SET_GPR_U32(ctx, 31, 0x114AB4u);
    ctx->pc = 0x114AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AACu;
    // 0x114ab0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x114AACu, 0x114AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AB4u;
label_114ab4:
    // 0x114ab4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114AB4u;
    {
        const bool branch_taken_0x114ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AB4u;
        // 0x114ab8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ab4) {
            ctx->pc = 0x114AC4u;
            goto label_114ac4;
        }
    }
    ctx->pc = 0x114ABCu;
    // 0x114abc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x114ABCu;
    {
        const bool branch_taken_0x114abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ABCu;
        // 0x114ac0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114abc) {
            ctx->pc = 0x114ADCu;
            goto label_114adc;
        }
    }
    ctx->pc = 0x114AC4u;
label_114ac4:
    // 0x114ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x114ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ac8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x114ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114acc: 0xc045326  jal         func_114C98
    ctx->pc = 0x114ACCu;
    SET_GPR_U32(ctx, 31, 0x114AD4u);
    ctx->pc = 0x114AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114ACCu;
    // 0x114ad0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114C98u, 0x114ACCu, 0x114AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AD4u;
label_114ad4:
    // 0x114ad4: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x114ad4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x114ad8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x114ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_114adc:
    // 0x114adc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x114adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x114ae0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x114ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114ae4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x114ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114ae8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x114ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114aec: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x114aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114af0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x114af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114af4: 0x3e00008  jr          $ra
    ctx->pc = 0x114AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AF4u;
        // 0x114af8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114AFCu;
    // 0x114afc: 0x0  nop
    ctx->pc = 0x114afcu;
    // NOP
    ctx->pc = 0x114b00u;
}

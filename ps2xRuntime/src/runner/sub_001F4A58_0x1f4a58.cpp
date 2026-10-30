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

// Function: sub_001F4A58
// Address: 0x1f4a58 - 0x1f4b88
void sub_001F4A58_0x1f4a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4A58_0x1f4a58");
#endif

    switch (ctx->pc) {
        case 0x1f4a58u: goto label_1f4a58;
        case 0x1f4a5cu: goto label_1f4a5c;
        case 0x1f4a60u: goto label_1f4a60;
        case 0x1f4a64u: goto label_1f4a64;
        case 0x1f4a68u: goto label_1f4a68;
        case 0x1f4a6cu: goto label_1f4a6c;
        case 0x1f4a70u: goto label_1f4a70;
        case 0x1f4a74u: goto label_1f4a74;
        case 0x1f4a78u: goto label_1f4a78;
        case 0x1f4a7cu: goto label_1f4a7c;
        case 0x1f4a80u: goto label_1f4a80;
        case 0x1f4a84u: goto label_1f4a84;
        case 0x1f4a88u: goto label_1f4a88;
        case 0x1f4a8cu: goto label_1f4a8c;
        case 0x1f4a90u: goto label_1f4a90;
        case 0x1f4a94u: goto label_1f4a94;
        case 0x1f4a98u: goto label_1f4a98;
        case 0x1f4a9cu: goto label_1f4a9c;
        case 0x1f4aa0u: goto label_1f4aa0;
        case 0x1f4aa4u: goto label_1f4aa4;
        case 0x1f4aa8u: goto label_1f4aa8;
        case 0x1f4aacu: goto label_1f4aac;
        case 0x1f4ab0u: goto label_1f4ab0;
        case 0x1f4ab4u: goto label_1f4ab4;
        case 0x1f4ab8u: goto label_1f4ab8;
        case 0x1f4abcu: goto label_1f4abc;
        case 0x1f4ac0u: goto label_1f4ac0;
        case 0x1f4ac4u: goto label_1f4ac4;
        case 0x1f4ac8u: goto label_1f4ac8;
        case 0x1f4accu: goto label_1f4acc;
        case 0x1f4ad0u: goto label_1f4ad0;
        case 0x1f4ad4u: goto label_1f4ad4;
        case 0x1f4ad8u: goto label_1f4ad8;
        case 0x1f4adcu: goto label_1f4adc;
        case 0x1f4ae0u: goto label_1f4ae0;
        case 0x1f4ae4u: goto label_1f4ae4;
        case 0x1f4ae8u: goto label_1f4ae8;
        case 0x1f4aecu: goto label_1f4aec;
        case 0x1f4af0u: goto label_1f4af0;
        case 0x1f4af4u: goto label_1f4af4;
        case 0x1f4af8u: goto label_1f4af8;
        case 0x1f4afcu: goto label_1f4afc;
        case 0x1f4b00u: goto label_1f4b00;
        case 0x1f4b04u: goto label_1f4b04;
        case 0x1f4b08u: goto label_1f4b08;
        case 0x1f4b0cu: goto label_1f4b0c;
        case 0x1f4b10u: goto label_1f4b10;
        case 0x1f4b14u: goto label_1f4b14;
        case 0x1f4b18u: goto label_1f4b18;
        case 0x1f4b1cu: goto label_1f4b1c;
        case 0x1f4b20u: goto label_1f4b20;
        case 0x1f4b24u: goto label_1f4b24;
        case 0x1f4b28u: goto label_1f4b28;
        case 0x1f4b2cu: goto label_1f4b2c;
        case 0x1f4b30u: goto label_1f4b30;
        case 0x1f4b34u: goto label_1f4b34;
        case 0x1f4b38u: goto label_1f4b38;
        case 0x1f4b3cu: goto label_1f4b3c;
        case 0x1f4b40u: goto label_1f4b40;
        case 0x1f4b44u: goto label_1f4b44;
        case 0x1f4b48u: goto label_1f4b48;
        case 0x1f4b4cu: goto label_1f4b4c;
        case 0x1f4b50u: goto label_1f4b50;
        case 0x1f4b54u: goto label_1f4b54;
        case 0x1f4b58u: goto label_1f4b58;
        case 0x1f4b5cu: goto label_1f4b5c;
        case 0x1f4b60u: goto label_1f4b60;
        case 0x1f4b64u: goto label_1f4b64;
        case 0x1f4b68u: goto label_1f4b68;
        case 0x1f4b6cu: goto label_1f4b6c;
        case 0x1f4b70u: goto label_1f4b70;
        case 0x1f4b74u: goto label_1f4b74;
        case 0x1f4b78u: goto label_1f4b78;
        case 0x1f4b7cu: goto label_1f4b7c;
        case 0x1f4b80u: goto label_1f4b80;
        case 0x1f4b84u: goto label_1f4b84;
        default: break;
    }

    ctx->pc = 0x1f4a58u;

label_1f4a58:
    // 0x1f4a58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f4a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f4a5c:
    // 0x1f4a5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f4a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f4a60:
    // 0x1f4a60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f4a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1f4a64:
    // 0x1f4a64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f4a64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a68:
    // 0x1f4a68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f4a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f4a6c:
    // 0x1f4a6c: 0x265000b4  addiu       $s0, $s2, 0xB4
    ctx->pc = 0x1f4a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
label_1f4a70:
    // 0x1f4a70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f4a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1f4a74:
    // 0x1f4a74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f4a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4a78:
    // 0x1f4a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1f4a7c:
    // 0x1f4a7c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f4a7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f4a80:
    // 0x1f4a80: 0xc07f8b4  jal         func_1FE2D0
label_1f4a84:
    if (ctx->pc == 0x1F4A84u) {
        ctx->pc = 0x1F4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A80u;
        // 0x1f4a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A88u;
        goto label_1f4a88;
    }
    ctx->pc = 0x1F4A80u;
    SET_GPR_U32(ctx, 31, 0x1F4A88u);
    ctx->pc = 0x1F4A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4A80u;
    // 0x1f4a84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2D0u, 0x1F4A80u, 0x1F4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4A88u;
label_1f4a88:
    // 0x1f4a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f4a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f4a8c:
    // 0x1f4a8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1f4a90:
    // 0x1f4a90: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x1f4a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f4a94:
    // 0x1f4a94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1f4a98:
    if (ctx->pc == 0x1F4A98u) {
        ctx->pc = 0x1F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A94u;
        // 0x1f4a98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4A9Cu;
        goto label_1f4a9c;
    }
    ctx->pc = 0x1F4A94u;
    {
        const bool branch_taken_0x1f4a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4A94u;
        // 0x1f4a98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4a94) {
            ctx->pc = 0x1F4A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4a80;
        }
    }
    ctx->pc = 0x1F4A9Cu;
label_1f4a9c:
    // 0x1f4a9c: 0x265100b4  addiu       $s1, $s2, 0xB4
    ctx->pc = 0x1f4a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
label_1f4aa0:
    // 0x1f4aa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f4aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f4aa4:
    // 0x1f4aa4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f4aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f4aa8:
    // 0x1f4aa8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f4aa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f4aac:
    // 0x1f4aac: 0x265200e0  addiu       $s2, $s2, 0xE0
    ctx->pc = 0x1f4aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_1f4ab0:
    // 0x1f4ab0: 0xc0e4060  jal         func_390180
label_1f4ab4:
    if (ctx->pc == 0x1F4AB4u) {
        ctx->pc = 0x1F4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AB0u;
        // 0x1f4ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4AB8u;
        goto label_1f4ab8;
    }
    ctx->pc = 0x1F4AB0u;
    SET_GPR_U32(ctx, 31, 0x1F4AB8u);
    ctx->pc = 0x1F4AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AB0u;
    // 0x1f4ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1F4AB0u, 0x1F4AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AB8u;
label_1f4ab8:
    // 0x1f4ab8: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_1f4abc:
    if (ctx->pc == 0x1F4ABCu) {
        ctx->pc = 0x1F4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AB8u;
        // 0x1f4abc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4AC0u;
        goto label_1f4ac0;
    }
    ctx->pc = 0x1F4AB8u;
    {
        const bool branch_taken_0x1f4ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ab8) {
            ctx->pc = 0x1F4ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4AB8u;
            // 0x1f4abc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B54u;
            goto label_1f4b54;
        }
    }
    ctx->pc = 0x1F4AC0u;
label_1f4ac0:
    // 0x1f4ac0: 0xc0e409a  jal         func_390268
label_1f4ac4:
    if (ctx->pc == 0x1F4AC4u) {
        ctx->pc = 0x1F4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AC0u;
        // 0x1f4ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4AC8u;
        goto label_1f4ac8;
    }
    ctx->pc = 0x1F4AC0u;
    SET_GPR_U32(ctx, 31, 0x1F4AC8u);
    ctx->pc = 0x1F4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AC0u;
    // 0x1f4ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F4AC0u, 0x1F4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AC8u;
label_1f4ac8:
    // 0x1f4ac8: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_1f4acc:
    if (ctx->pc == 0x1F4ACCu) {
        ctx->pc = 0x1F4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AC8u;
        // 0x1f4acc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4AD0u;
        goto label_1f4ad0;
    }
    ctx->pc = 0x1F4AC8u;
    {
        const bool branch_taken_0x1f4ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4ac8) {
            ctx->pc = 0x1F4ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4AC8u;
            // 0x1f4acc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4B54u;
            goto label_1f4b54;
        }
    }
    ctx->pc = 0x1F4AD0u;
label_1f4ad0:
    // 0x1f4ad0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f4ad4:
    // 0x1f4ad4: 0xc0a48cc  jal         func_292330
label_1f4ad8:
    if (ctx->pc == 0x1F4AD8u) {
        ctx->pc = 0x1F4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AD4u;
        // 0x1f4ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4ADCu;
        goto label_1f4adc;
    }
    ctx->pc = 0x1F4AD4u;
    SET_GPR_U32(ctx, 31, 0x1F4ADCu);
    ctx->pc = 0x1F4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AD4u;
    // 0x1f4ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x1F4AD4u, 0x1F4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4ADCu;
label_1f4adc:
    // 0x1f4adc: 0xc0e409a  jal         func_390268
label_1f4ae0:
    if (ctx->pc == 0x1F4AE0u) {
        ctx->pc = 0x1F4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4ADCu;
        // 0x1f4ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4AE4u;
        goto label_1f4ae4;
    }
    ctx->pc = 0x1F4ADCu;
    SET_GPR_U32(ctx, 31, 0x1F4AE4u);
    ctx->pc = 0x1F4AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4ADCu;
    // 0x1f4ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F4ADCu, 0x1F4AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AE4u;
label_1f4ae4:
    // 0x1f4ae4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f4ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f4ae8:
    // 0x1f4ae8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f4ae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4aec:
    // 0x1f4aec: 0xc08d3be  jal         func_234EF8
label_1f4af0:
    if (ctx->pc == 0x1F4AF0u) {
        ctx->pc = 0x1F4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AECu;
        // 0x1f4af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4AF4u;
        goto label_1f4af4;
    }
    ctx->pc = 0x1F4AECu;
    SET_GPR_U32(ctx, 31, 0x1F4AF4u);
    ctx->pc = 0x1F4AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AECu;
    // 0x1f4af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x1F4AECu, 0x1F4AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4AF4u;
label_1f4af4:
    // 0x1f4af4: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x1f4af4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_1f4af8:
    // 0x1f4af8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f4afc:
    // 0x1f4afc: 0xc08e86c  jal         func_23A1B0
label_1f4b00:
    if (ctx->pc == 0x1F4B00u) {
        ctx->pc = 0x1F4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4AFCu;
        // 0x1f4b00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B04u;
        goto label_1f4b04;
    }
    ctx->pc = 0x1F4AFCu;
    SET_GPR_U32(ctx, 31, 0x1F4B04u);
    ctx->pc = 0x1F4B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4AFCu;
    // 0x1f4b00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x1F4AFCu, 0x1F4B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B04u;
label_1f4b04:
    // 0x1f4b04: 0xc642fff8  lwc1        $f2, -0x8($s2)
    ctx->pc = 0x1f4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f4b08:
    // 0x1f4b08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f4b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b0c:
    // 0x1f4b0c: 0xc641fffc  lwc1        $f1, -0x4($s2)
    ctx->pc = 0x1f4b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f4b10:
    // 0x1f4b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f4b14:
    // 0x1f4b14: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f4b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f4b18:
    // 0x1f4b18: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f4b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f4b1c:
    // 0x1f4b1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f4b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1f4b20:
    // 0x1f4b20: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f4b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f4b24:
    // 0x1f4b24: 0xc086c2e  jal         func_21B0B8
label_1f4b28:
    if (ctx->pc == 0x1F4B28u) {
        ctx->pc = 0x1F4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B24u;
        // 0x1f4b28: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B2Cu;
        goto label_1f4b2c;
    }
    ctx->pc = 0x1F4B24u;
    SET_GPR_U32(ctx, 31, 0x1F4B2Cu);
    ctx->pc = 0x1F4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B24u;
    // 0x1f4b28: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1F4B24u, 0x1F4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B2Cu;
label_1f4b2c:
    // 0x1f4b2c: 0xc047e6c  jal         func_11F9B0
label_1f4b30:
    if (ctx->pc == 0x1F4B30u) {
        ctx->pc = 0x1F4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B2Cu;
        // 0x1f4b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B34u;
        goto label_1f4b34;
    }
    ctx->pc = 0x1F4B2Cu;
    SET_GPR_U32(ctx, 31, 0x1F4B34u);
    ctx->pc = 0x1F4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4B2Cu;
    // 0x1f4b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F4B2Cu, 0x1F4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4B34u;
label_1f4b34:
    // 0x1f4b34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4b38:
    // 0x1f4b38: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1f4b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1f4b3c:
    // 0x1f4b3c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1f4b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1f4b40:
    // 0x1f4b40: 0xa0f809  jalr        $a1
label_1f4b44:
    if (ctx->pc == 0x1F4B44u) {
        ctx->pc = 0x1F4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B40u;
        // 0x1f4b44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B48u;
        goto label_1f4b48;
    }
    ctx->pc = 0x1F4B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F4B48u);
        ctx->pc = 0x1F4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B40u;
        // 0x1f4b44: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B40u, 0x1F4B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F4B48u;
label_1f4b48:
    // 0x1f4b48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1f4b48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f4b4c:
    // 0x1f4b4c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1f4b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_1f4b50:
    // 0x1f4b50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f4b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f4b54:
    // 0x1f4b54: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x1f4b54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1f4b58:
    // 0x1f4b58: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x1f4b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f4b5c:
    // 0x1f4b5c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_1f4b60:
    if (ctx->pc == 0x1F4B60u) {
        ctx->pc = 0x1F4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B5Cu;
        // 0x1f4b60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B64u;
        goto label_1f4b64;
    }
    ctx->pc = 0x1F4B5Cu;
    {
        const bool branch_taken_0x1f4b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B5Cu;
        // 0x1f4b60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4b5c) {
            ctx->pc = 0x1F4AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4ab0;
        }
    }
    ctx->pc = 0x1F4B64u;
label_1f4b64:
    // 0x1f4b64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f4b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f4b68:
    // 0x1f4b68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f4b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f4b6c:
    // 0x1f4b6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f4b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f4b70:
    // 0x1f4b70: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f4b70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4b74:
    // 0x1f4b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f4b78:
    // 0x1f4b78: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f4b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f4b7c:
    // 0x1f4b7c: 0x3e00008  jr          $ra
label_1f4b80:
    if (ctx->pc == 0x1F4B80u) {
        ctx->pc = 0x1F4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B7Cu;
        // 0x1f4b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F4B84u;
        goto label_1f4b84;
    }
    ctx->pc = 0x1F4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4B7Cu;
        // 0x1f4b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4B84u;
label_1f4b84:
    // 0x1f4b84: 0x0  nop
    ctx->pc = 0x1f4b84u;
    // NOP
    ctx->pc = 0x1f4b88u;
}

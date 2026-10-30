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

// Function: sub_002B6BB8
// Address: 0x2b6bb8 - 0x2b6dc0
void sub_002B6BB8_0x2b6bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6BB8_0x2b6bb8");
#endif

    switch (ctx->pc) {
        case 0x2b6becu: goto label_2b6bec;
        case 0x2b6bfcu: goto label_2b6bfc;
        case 0x2b6c0cu: goto label_2b6c0c;
        case 0x2b6c1cu: goto label_2b6c1c;
        case 0x2b6c60u: goto label_2b6c60;
        case 0x2b6c88u: goto label_2b6c88;
        case 0x2b6cb8u: goto label_2b6cb8;
        case 0x2b6cd0u: goto label_2b6cd0;
        case 0x2b6cdcu: goto label_2b6cdc;
        case 0x2b6d00u: goto label_2b6d00;
        case 0x2b6d18u: goto label_2b6d18;
        case 0x2b6d24u: goto label_2b6d24;
        case 0x2b6d3cu: goto label_2b6d3c;
        case 0x2b6d98u: goto label_2b6d98;
        default: break;
    }

    ctx->pc = 0x2b6bb8u;

    // 0x2b6bb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b6bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b6bbc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b6bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b6bc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b6bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b6bc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b6bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b6bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b6bcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b6bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b6bd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b6bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b6bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6bd8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2b6bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b6bdc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2b6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b6be0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b6be0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6be4: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x2B6BE4u;
    SET_GPR_U32(ctx, 31, 0x2B6BECu);
    ctx->pc = 0x2B6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6BE4u;
    // 0x2b6be8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x2B6BE4u, 0x2B6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BECu;
label_2b6bec:
    // 0x2b6bec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6BECu;
    {
        const bool branch_taken_0x2b6bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6bec) {
            ctx->pc = 0x2B6C04u;
            goto label_2b6c04;
        }
    }
    ctx->pc = 0x2B6BF4u;
    // 0x2b6bf4: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B6BF4u;
    SET_GPR_U32(ctx, 31, 0x2B6BFCu);
    ctx->pc = 0x2B6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6BF4u;
    // 0x2b6bf8: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B6BF4u, 0x2B6BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BFCu;
label_2b6bfc:
    // 0x2b6bfc: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2B6BFCu;
    {
        const bool branch_taken_0x2b6bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6BFCu;
        // 0x2b6c00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6bfc) {
            ctx->pc = 0x2B6D9Cu;
            goto label_2b6d9c;
        }
    }
    ctx->pc = 0x2B6C04u;
label_2b6c04:
    // 0x2b6c04: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B6C04u;
    SET_GPR_U32(ctx, 31, 0x2B6C0Cu);
    ctx->pc = 0x2B6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C04u;
    // 0x2b6c08: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B6C04u, 0x2B6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C0Cu;
label_2b6c0c:
    // 0x2b6c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c14: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x2B6C14u;
    SET_GPR_U32(ctx, 31, 0x2B6C1Cu);
    ctx->pc = 0x2B6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C14u;
    // 0x2b6c18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x2B6C14u, 0x2B6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C1Cu;
label_2b6c1c:
    // 0x2b6c1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6c20: 0x1043005d  beq         $v0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2B6C20u;
    {
        const bool branch_taken_0x2b6c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C20u;
        // 0x2b6c24: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c20) {
            ctx->pc = 0x2B6D98u;
            goto label_2b6d98;
        }
    }
    ctx->pc = 0x2B6C28u;
    // 0x2b6c28: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b6c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b6c2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b6c30: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B6C30u;
    {
        const bool branch_taken_0x2b6c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C30u;
        // 0x2b6c34: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c30) {
            ctx->pc = 0x2B6C94u;
            goto label_2b6c94;
        }
    }
    ctx->pc = 0x2B6C38u;
    // 0x2b6c38: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2b6c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b6c3c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b6c40: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B6C40u;
    {
        const bool branch_taken_0x2b6c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c40) {
            ctx->pc = 0x2B6C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C40u;
            // 0x2b6c44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C48u;
            goto label_2b6c48;
        }
    }
    ctx->pc = 0x2B6C48u;
label_2b6c48:
    // 0x2b6c48: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2b6c48u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b6c4c: 0x1810  mfhi        $v1
    ctx->pc = 0x2b6c4cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b6c50: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B6C50u;
    {
        const bool branch_taken_0x2b6c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c50) {
            ctx->pc = 0x2B6C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C50u;
            // 0x2b6c54: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C8Cu;
            goto label_2b6c8c;
        }
    }
    ctx->pc = 0x2B6C58u;
    // 0x2b6c58: 0xc08a158  jal         func_228560
    ctx->pc = 0x2B6C58u;
    SET_GPR_U32(ctx, 31, 0x2B6C60u);
    ctx->pc = 0x2B6C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C58u;
    // 0x2b6c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2B6C58u, 0x2B6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C60u;
label_2b6c60:
    // 0x2b6c60: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6C60u;
    {
        const bool branch_taken_0x2b6c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c60) {
            ctx->pc = 0x2B6C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6C60u;
            // 0x2b6c64: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6C8Cu;
            goto label_2b6c8c;
        }
    }
    ctx->pc = 0x2B6C68u;
    // 0x2b6c68: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2b6c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2b6c6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b6c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b6c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c80: 0xc0a4d90  jal         func_293640
    ctx->pc = 0x2B6C80u;
    SET_GPR_U32(ctx, 31, 0x2B6C88u);
    ctx->pc = 0x2B6C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C80u;
    // 0x2b6c84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293640u, 0x2B6C80u, 0x2B6C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C88u;
label_2b6c88:
    // 0x2b6c88: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2b6c8c:
    // 0x2b6c8c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b6c90: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x2b6c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_2b6c94:
    // 0x2b6c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6C94u;
    {
        const bool branch_taken_0x2b6c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C94u;
        // 0x2b6c98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c94) {
            ctx->pc = 0x2B6CA4u;
            goto label_2b6ca4;
        }
    }
    ctx->pc = 0x2B6C9Cu;
    // 0x2b6c9c: 0x8c82021c  lw          $v0, 0x21C($a0)
    ctx->pc = 0x2b6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 540)));
    // 0x2b6ca0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2b6ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b6ca4:
    // 0x2b6ca4: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B6CA4u;
    {
        const bool branch_taken_0x2b6ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CA4u;
        // 0x2b6ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ca4) {
            ctx->pc = 0x2B6D9Cu;
            goto label_2b6d9c;
        }
    }
    ctx->pc = 0x2B6CACu;
    // 0x2b6cac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b6cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6cb0: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B6CB0u;
    SET_GPR_U32(ctx, 31, 0x2B6CB8u);
    ctx->pc = 0x2B6CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CB0u;
    // 0x2b6cb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B6CB0u, 0x2B6CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CB8u;
label_2b6cb8:
    // 0x2b6cb8: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2b6cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b6cbc: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x2b6cbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2b6cc0: 0x5c400036  bgtzl       $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2B6CC0u;
    {
        const bool branch_taken_0x2b6cc0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2b6cc0) {
            ctx->pc = 0x2B6CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6CC0u;
            // 0x2b6cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D9Cu;
            goto label_2b6d9c;
        }
    }
    ctx->pc = 0x2B6CC8u;
    // 0x2b6cc8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B6CC8u;
    SET_GPR_U32(ctx, 31, 0x2B6CD0u);
    ctx->pc = 0x2B6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CC8u;
    // 0x2b6ccc: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B6CC8u, 0x2B6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CD0u;
label_2b6cd0:
    // 0x2b6cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6cd4: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B6CD4u;
    SET_GPR_U32(ctx, 31, 0x2B6CDCu);
    ctx->pc = 0x2B6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CD4u;
    // 0x2b6cd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B6CD4u, 0x2B6CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CDCu;
label_2b6cdc:
    // 0x2b6cdc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b6cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ce0: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B6CE0u;
    {
        const bool branch_taken_0x2b6ce0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CE0u;
        // 0x2b6ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ce0) {
            ctx->pc = 0x2B6D9Cu;
            goto label_2b6d9c;
        }
    }
    ctx->pc = 0x2B6CE8u;
    // 0x2b6ce8: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2b6cec: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b6cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b6cf0: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b6cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b6cf4: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b6cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b6cf8: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B6CF8u;
    SET_GPR_U32(ctx, 31, 0x2B6D00u);
    ctx->pc = 0x2B6CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CF8u;
    // 0x2b6cfc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B6CF8u, 0x2B6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D00u;
label_2b6d00:
    // 0x2b6d00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b6d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d04: 0x3a42002d  xori        $v0, $s2, 0x2D
    ctx->pc = 0x2b6d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)45);
    // 0x2b6d08: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B6D08u;
    {
        const bool branch_taken_0x2b6d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D08u;
        // 0x2b6d0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d08) {
            ctx->pc = 0x2B6D98u;
            goto label_2b6d98;
        }
    }
    ctx->pc = 0x2B6D10u;
    // 0x2b6d10: 0xc08c466  jal         func_231198
    ctx->pc = 0x2B6D10u;
    SET_GPR_U32(ctx, 31, 0x2B6D18u);
    ctx->pc = 0x2B6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D10u;
    // 0x2b6d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x2B6D10u, 0x2B6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D18u;
label_2b6d18:
    // 0x2b6d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d1c: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x2B6D1Cu;
    SET_GPR_U32(ctx, 31, 0x2B6D24u);
    ctx->pc = 0x2B6D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D1Cu;
    // 0x2b6d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2B6D1Cu, 0x2B6D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D24u;
label_2b6d24:
    // 0x2b6d24: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2b6d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2b6d28: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2b6d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2b6d2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b6d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d34: 0xc088ade  jal         func_222B78
    ctx->pc = 0x2B6D34u;
    SET_GPR_U32(ctx, 31, 0x2B6D3Cu);
    ctx->pc = 0x2B6D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D34u;
    // 0x2b6d38: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2B6D34u, 0x2B6D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D3Cu;
label_2b6d3c:
    // 0x2b6d3c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6d40: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x2b6d40u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6d44: 0x0  nop
    ctx->pc = 0x2b6d44u;
    // NOP
    // 0x2b6d48: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6d4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6d50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6d54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b6d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d58: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2b6d58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2b6d5c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2b6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b6d60: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2b6d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b6d64: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b6d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b6d68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b6d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6d6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b6d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6d70: 0x0  nop
    ctx->pc = 0x2b6d70u;
    // NOP
    // 0x2b6d74: 0x0  nop
    ctx->pc = 0x2b6d74u;
    // NOP
    // 0x2b6d78: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2b6d78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2b6d7c: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x2b6d7cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x2b6d80: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x2b6d80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x2b6d84: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2b6d84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b6d88: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b6d8c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2b6d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2b6d90: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B6D90u;
    SET_GPR_U32(ctx, 31, 0x2B6D98u);
    ctx->pc = 0x2B6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D90u;
    // 0x2b6d94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B6D90u, 0x2B6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D98u;
label_2b6d98:
    // 0x2b6d98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6d9c:
    // 0x2b6d9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b6d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6da0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b6da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6da4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b6da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6da8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b6da8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6dac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b6dacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6db4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b6db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DB8u;
        // 0x2b6dbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6DC0u;
}

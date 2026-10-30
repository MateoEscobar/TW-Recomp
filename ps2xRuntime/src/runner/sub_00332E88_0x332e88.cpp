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

// Function: sub_00332E88
// Address: 0x332e88 - 0x332f80
void sub_00332E88_0x332e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332E88_0x332e88");
#endif

    switch (ctx->pc) {
        case 0x332ec4u: goto label_332ec4;
        case 0x332ee4u: goto label_332ee4;
        case 0x332ef8u: goto label_332ef8;
        case 0x332f0cu: goto label_332f0c;
        case 0x332f28u: goto label_332f28;
        case 0x332f44u: goto label_332f44;
        default: break;
    }

    ctx->pc = 0x332e88u;

    // 0x332e88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x332e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x332e8c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x332e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x332e90: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x332e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x332e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332e98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x332e9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x332e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ea0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x332ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x332ea4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x332ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ea8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x332ea8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332eac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x332eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x332eb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x332eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332eb4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x332eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x332eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332ebc: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x332EBCu;
    SET_GPR_U32(ctx, 31, 0x332EC4u);
    ctx->pc = 0x332EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332EBCu;
    // 0x332ec0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x332EBCu, 0x332EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332EC4u;
label_332ec4:
    // 0x332ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x332ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ec8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x332ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x332ecc: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x332eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x332ed0: 0xa6500032  sh          $s0, 0x32($s2)
    ctx->pc = 0x332ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 16));
    // 0x332ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ed8: 0x3012  mflo        $a2
    ctx->pc = 0x332ed8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x332edc: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x332EDCu;
    SET_GPR_U32(ctx, 31, 0x332EE4u);
    ctx->pc = 0x332EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332EDCu;
    // 0x332ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x332EDCu, 0x332EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332EE4u;
label_332ee4:
    // 0x332ee4: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x332EE4u;
    {
        const bool branch_taken_0x332ee4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x332EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332EE4u;
        // 0x332ee8: 0xae420034  sw          $v0, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ee4) {
            ctx->pc = 0x332F58u;
            goto label_332f58;
        }
    }
    ctx->pc = 0x332EECu;
    // 0x332eec: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x332eecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ef0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x332ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332ef4: 0x0  nop
    ctx->pc = 0x332ef4u;
    // NOP
label_332ef8:
    // 0x332ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332efc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x332f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f04: 0xc0ccb4a  jal         func_332D28
    ctx->pc = 0x332F04u;
    SET_GPR_U32(ctx, 31, 0x332F0Cu);
    ctx->pc = 0x332F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332F04u;
    // 0x332f08: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332D28u, 0x332F04u, 0x332F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F0Cu;
label_332f0c:
    // 0x332f0c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x332f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x332f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x332f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f1c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x332f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x332f20: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x332F20u;
    SET_GPR_U32(ctx, 31, 0x332F28u);
    ctx->pc = 0x332F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332F20u;
    // 0x332f24: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x332F20u, 0x332F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F28u;
label_332f28:
    // 0x332f28: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x332f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x332f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x332f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x332f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x332f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f38: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x332f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x332f3c: 0xc0ccb26  jal         func_332C98
    ctx->pc = 0x332F3Cu;
    SET_GPR_U32(ctx, 31, 0x332F44u);
    ctx->pc = 0x332F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332F3Cu;
    // 0x332f40: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332C98u, 0x332F3Cu, 0x332F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F44u;
label_332f44:
    // 0x332f44: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x332f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x332f48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x332f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x332f4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x332f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x332f50: 0x16a0ffe9  bnez        $s5, . + 4 + (-0x17 << 2)
    ctx->pc = 0x332F50u;
    {
        const bool branch_taken_0x332f50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x332F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F50u;
        // 0x332f54: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f50) {
            ctx->pc = 0x332EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332ef8;
        }
    }
    ctx->pc = 0x332F58u;
label_332f58:
    // 0x332f58: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x332f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x332f5c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x332f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x332f60: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x332f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332f64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x332f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332f68: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x332f68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332f6c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x332f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332f74: 0x3e00008  jr          $ra
    ctx->pc = 0x332F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F74u;
        // 0x332f78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332F7Cu;
    // 0x332f7c: 0x0  nop
    ctx->pc = 0x332f7cu;
    // NOP
    ctx->pc = 0x332f80u;
}

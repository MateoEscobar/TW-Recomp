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

// Function: sub_0032EC40
// Address: 0x32ec40 - 0x32ed00
void sub_0032EC40_0x32ec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EC40_0x32ec40");
#endif

    switch (ctx->pc) {
        case 0x32ec6cu: goto label_32ec6c;
        case 0x32ec74u: goto label_32ec74;
        case 0x32ec7cu: goto label_32ec7c;
        case 0x32eca0u: goto label_32eca0;
        case 0x32ecb0u: goto label_32ecb0;
        case 0x32ecc4u: goto label_32ecc4;
        case 0x32ecd8u: goto label_32ecd8;
        case 0x32ece4u: goto label_32ece4;
        default: break;
    }

    ctx->pc = 0x32ec40u;

    // 0x32ec40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32ec40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32ec44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32ec48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ec4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ec4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ec54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32ec54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32ec58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32ec5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32ec5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec60: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x32ec60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x32ec64: 0xc0cb542  jal         func_32D508
    ctx->pc = 0x32EC64u;
    SET_GPR_U32(ctx, 31, 0x32EC6Cu);
    ctx->pc = 0x32EC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC64u;
    // 0x32ec68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D508u, 0x32EC64u, 0x32EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC6Cu;
label_32ec6c:
    // 0x32ec6c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32EC6Cu;
    SET_GPR_U32(ctx, 31, 0x32EC74u);
    ctx->pc = 0x32EC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC6Cu;
    // 0x32ec70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32EC6Cu, 0x32EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC74u;
label_32ec74:
    // 0x32ec74: 0xc0cb3bc  jal         func_32CEF0
    ctx->pc = 0x32EC74u;
    SET_GPR_U32(ctx, 31, 0x32EC7Cu);
    ctx->pc = 0x32EC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC74u;
    // 0x32ec78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEF0u, 0x32EC74u, 0x32EC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC7Cu;
label_32ec7c:
    // 0x32ec7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ec7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ec80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32ec80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32ec84: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x32ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x32ec88: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32EC88u;
    {
        const bool branch_taken_0x32ec88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC88u;
        // 0x32ec8c: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec88) {
            ctx->pc = 0x32ECA8u;
            goto label_32eca8;
        }
    }
    ctx->pc = 0x32EC90u;
    // 0x32ec90: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32EC90u;
    {
        const bool branch_taken_0x32ec90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32ec90) {
            ctx->pc = 0x32EC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EC90u;
            // 0x32ec94: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32ECB8u;
            goto label_32ecb8;
        }
    }
    ctx->pc = 0x32EC98u;
    // 0x32ec98: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x32EC98u;
    SET_GPR_U32(ctx, 31, 0x32ECA0u);
    ctx->pc = 0x32EC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC98u;
    // 0x32ec9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x32EC98u, 0x32ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECA0u;
label_32eca0:
    // 0x32eca0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32ECA0u;
    {
        const bool branch_taken_0x32eca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECA0u;
        // 0x32eca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eca0) {
            ctx->pc = 0x32ECC8u;
            goto label_32ecc8;
        }
    }
    ctx->pc = 0x32ECA8u;
label_32eca8:
    // 0x32eca8: 0xc0cbad8  jal         func_32EB60
    ctx->pc = 0x32ECA8u;
    SET_GPR_U32(ctx, 31, 0x32ECB0u);
    ctx->pc = 0x32ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECA8u;
    // 0x32ecac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EB60u, 0x32ECA8u, 0x32ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECB0u;
label_32ecb0:
    // 0x32ecb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32ECB0u;
    {
        const bool branch_taken_0x32ecb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECB0u;
        // 0x32ecb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ecb0) {
            ctx->pc = 0x32ECC8u;
            goto label_32ecc8;
        }
    }
    ctx->pc = 0x32ECB8u;
label_32ecb8:
    // 0x32ecb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ecbc: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32ECBCu;
    SET_GPR_U32(ctx, 31, 0x32ECC4u);
    ctx->pc = 0x32ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECBCu;
    // 0x32ecc0: 0x24a55e38  addiu       $a1, $a1, 0x5E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32ECBCu, 0x32ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECC4u;
label_32ecc4:
    // 0x32ecc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ecc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32ecc8:
    // 0x32ecc8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x32ecc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eccc: 0x24050106  addiu       $a1, $zero, 0x106
    ctx->pc = 0x32ecccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x32ecd0: 0xc0cb358  jal         func_32CD60
    ctx->pc = 0x32ECD0u;
    SET_GPR_U32(ctx, 31, 0x32ECD8u);
    ctx->pc = 0x32ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECD0u;
    // 0x32ecd4: 0x24060107  addiu       $a2, $zero, 0x107 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CD60u, 0x32ECD0u, 0x32ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECD8u;
label_32ecd8:
    // 0x32ecd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ecd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ecdc: 0xc0cb54a  jal         func_32D528
    ctx->pc = 0x32ECDCu;
    SET_GPR_U32(ctx, 31, 0x32ECE4u);
    ctx->pc = 0x32ECE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32ECDCu;
    // 0x32ece0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D528u, 0x32ECDCu, 0x32ECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ECE4u;
label_32ece4:
    // 0x32ece4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32ece4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32ece8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32ece8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ecec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ececu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ecf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ecf4: 0x3e00008  jr          $ra
    ctx->pc = 0x32ECF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECF4u;
        // 0x32ecf8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ECF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ECFCu;
    // 0x32ecfc: 0x0  nop
    ctx->pc = 0x32ecfcu;
    // NOP
    ctx->pc = 0x32ed00u;
}

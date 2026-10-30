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

// Function: sub_0018E9E0
// Address: 0x18e9e0 - 0x18eb10
void sub_0018E9E0_0x18e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E9E0_0x18e9e0");
#endif

    switch (ctx->pc) {
        case 0x18ea2cu: goto label_18ea2c;
        case 0x18ea7cu: goto label_18ea7c;
        case 0x18ea88u: goto label_18ea88;
        case 0x18eaa8u: goto label_18eaa8;
        case 0x18eab8u: goto label_18eab8;
        case 0x18eac8u: goto label_18eac8;
        default: break;
    }

    ctx->pc = 0x18e9e0u;

    // 0x18e9e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x18e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x18e9e4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x18e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x18e9e8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x18e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x18e9ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e9f0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x18e9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x18e9f4: 0x26320030  addiu       $s2, $s1, 0x30
    ctx->pc = 0x18e9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x18e9f8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x18e9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x18e9fc: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x18e9fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18ea00: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x18ea00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x18ea04: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x18ea04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea08: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x18ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x18ea0c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x18ea0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea10: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x18ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x18ea14: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18ea14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea18: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18ea1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18ea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18ea20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea24: 0xc137a34  jal         func_4DE8D0
    ctx->pc = 0x18EA24u;
    SET_GPR_U32(ctx, 31, 0x18EA2Cu);
    ctx->pc = 0x18EA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA24u;
    // 0x18ea28: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x18EA24u, 0x18EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA2Cu;
label_18ea2c:
    // 0x18ea2c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ea30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea34: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EA34u;
    {
        const bool branch_taken_0x18ea34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA34u;
        // 0x18ea38: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea34) {
            ctx->pc = 0x18EA58u;
            goto label_18ea58;
        }
    }
    ctx->pc = 0x18EA3Cu;
    // 0x18ea3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x18ea40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x18ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18ea44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ea48: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18ea4c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18ea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea50: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x18EA50u;
    {
        const bool branch_taken_0x18ea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA50u;
        // 0x18ea54: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea50) {
            ctx->pc = 0x18EAE8u;
            goto label_18eae8;
        }
    }
    ctx->pc = 0x18EA58u;
label_18ea58:
    // 0x18ea58: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x18EA58u;
    {
        const bool branch_taken_0x18ea58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA58u;
        // 0x18ea5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea58) {
            ctx->pc = 0x18EAE8u;
            goto label_18eae8;
        }
    }
    ctx->pc = 0x18EA60u;
    // 0x18ea60: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x18ea60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18ea64: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x18ea64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x18ea68: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x18ea68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea70: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x18ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x18ea74: 0xc10ca04  jal         func_432810
    ctx->pc = 0x18EA74u;
    SET_GPR_U32(ctx, 31, 0x18EA7Cu);
    ctx->pc = 0x18EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA74u;
    // 0x18ea78: 0x24c63028  addiu       $a2, $a2, 0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x18EA74u, 0x18EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA7Cu;
label_18ea7c:
    // 0x18ea7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea80: 0xc061668  jal         func_1859A0
    ctx->pc = 0x18EA80u;
    SET_GPR_U32(ctx, 31, 0x18EA88u);
    ctx->pc = 0x18EA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EA80u;
    // 0x18ea84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x18EA80u, 0x18EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EA88u;
label_18ea88:
    // 0x18ea88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18EA88u;
    {
        const bool branch_taken_0x18ea88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EA88u;
        // 0x18ea8c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ea88) {
            ctx->pc = 0x18EAACu;
            goto label_18eaac;
        }
    }
    ctx->pc = 0x18EA90u;
    // 0x18ea90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18ea94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea98: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x18ea98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ea9c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18ea9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eaa0: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x18EAA0u;
    SET_GPR_U32(ctx, 31, 0x18EAA8u);
    ctx->pc = 0x18EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAA0u;
    // 0x18eaa4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x18EAA0u, 0x18EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAA8u;
label_18eaa8:
    // 0x18eaa8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x18eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_18eaac:
    // 0x18eaac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eab0: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x18EAB0u;
    SET_GPR_U32(ctx, 31, 0x18EAB8u);
    ctx->pc = 0x18EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAB0u;
    // 0x18eab4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x18EAB0u, 0x18EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAB8u;
label_18eab8:
    // 0x18eab8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x18eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x18eabc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18eabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eac0: 0xc137a34  jal         func_4DE8D0
    ctx->pc = 0x18EAC0u;
    SET_GPR_U32(ctx, 31, 0x18EAC8u);
    ctx->pc = 0x18EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EAC0u;
    // 0x18eac4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE8D0u, 0x18EAC0u, 0x18EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EAC8u;
label_18eac8:
    // 0x18eac8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x18eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18eacc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x18eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x18ead0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x18ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x18ead4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x18ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ead8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18eadc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x18eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x18eae0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eae4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18eae8:
    // 0x18eae8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x18eae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x18eaec: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x18eaecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18eaf0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x18eaf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18eaf4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x18eaf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18eaf8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x18eaf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18eafc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x18eafcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18eb00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18eb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18eb04: 0x3e00008  jr          $ra
    ctx->pc = 0x18EB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EB04u;
        // 0x18eb08: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EB0Cu;
    // 0x18eb0c: 0x0  nop
    ctx->pc = 0x18eb0cu;
    // NOP
    ctx->pc = 0x18eb10u;
}

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

// Function: sub_004B9030
// Address: 0x4b9030 - 0x4b9178
void sub_004B9030_0x4b9030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9030_0x4b9030");
#endif

    switch (ctx->pc) {
        case 0x4b9058u: goto label_4b9058;
        case 0x4b9074u: goto label_4b9074;
        case 0x4b908cu: goto label_4b908c;
        case 0x4b90d0u: goto label_4b90d0;
        case 0x4b90e0u: goto label_4b90e0;
        case 0x4b9100u: goto label_4b9100;
        case 0x4b9120u: goto label_4b9120;
        case 0x4b9130u: goto label_4b9130;
        case 0x4b914cu: goto label_4b914c;
        default: break;
    }

    ctx->pc = 0x4b9030u;

    // 0x4b9030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4b9030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4b9034: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b9034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b9038: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b9038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b903c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x4b903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x4b9040: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4b9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4b9044: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b9044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b9048: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b9048u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b904c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4b904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4b9050: 0xc12e9fc  jal         func_4BA7F0
    ctx->pc = 0x4B9050u;
    SET_GPR_U32(ctx, 31, 0x4B9058u);
    ctx->pc = 0x4B9054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9050u;
    // 0x4b9054: 0xffb40070  sd          $s4, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BA7F0u, 0x4B9050u, 0x4B9058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9058u;
label_4b9058:
    // 0x4b9058: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b9058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b905c: 0x8e711974  lw          $s1, 0x1974($s3)
    ctx->pc = 0x4b905cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b9060: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b9060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b9064: 0x1222003c  beq         $s1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x4B9064u;
    {
        const bool branch_taken_0x4b9064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B9068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9064u;
        // 0x4b9068: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9064) {
            ctx->pc = 0x4B9158u;
            goto label_4b9158;
        }
    }
    ctx->pc = 0x4B906Cu;
    // 0x4b906c: 0xc12f8d8  jal         func_4BE360
    ctx->pc = 0x4B906Cu;
    SET_GPR_U32(ctx, 31, 0x4B9074u);
    ctx->pc = 0x4B9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B906Cu;
    // 0x4b9070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE360u, 0x4B906Cu, 0x4B9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9074u;
label_4b9074:
    // 0x4b9074: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4B9074u;
    {
        const bool branch_taken_0x4b9074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9074u;
        // 0x4b9078: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9074) {
            ctx->pc = 0x4B9158u;
            goto label_4b9158;
        }
    }
    ctx->pc = 0x4B907Cu;
    // 0x4b907c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4b907cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b9084: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B9084u;
    SET_GPR_U32(ctx, 31, 0x4B908Cu);
    ctx->pc = 0x4B9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9084u;
    // 0x4b9088: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B9084u, 0x4B908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B908Cu;
label_4b908c:
    // 0x4b908c: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4B908Cu;
    {
        const bool branch_taken_0x4b908c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B908Cu;
        // 0x4b9090: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b908c) {
            ctx->pc = 0x4B9158u;
            goto label_4b9158;
        }
    }
    ctx->pc = 0x4B9094u;
    // 0x4b9094: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b9094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b9098: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x4b9098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x4b909c: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x4b909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
    // 0x4b90a0: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x4b90a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    // 0x4b90a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b90a8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B90A8u;
    {
        const bool branch_taken_0x4b90a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B90A8u;
        // 0x4b90ac: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b90a8) {
            ctx->pc = 0x4B90C0u;
            goto label_4b90c0;
        }
    }
    ctx->pc = 0x4B90B0u;
    // 0x4b90b0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4b90b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4b90b4: 0xdc220f58  ld          $v0, 0xF58($at)
    ctx->pc = 0x4b90b4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x590F58u));
    // 0x4b90b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4B90B8u;
    {
        const bool branch_taken_0x4b90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B90B8u;
        // 0x4b90bc: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b90b8) {
            ctx->pc = 0x4B90D4u;
            goto label_4b90d4;
        }
    }
    ctx->pc = 0x4B90C0u;
label_4b90c0:
    // 0x4b90c0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b90c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b90c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b90c8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B90C8u;
    SET_GPR_U32(ctx, 31, 0x4B90D0u);
    ctx->pc = 0x4B90CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B90C8u;
    // 0x4b90cc: 0xdc450ed8  ld          $a1, 0xED8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 3800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B90C8u, 0x4B90D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B90D0u;
label_4b90d0:
    // 0x4b90d0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x4b90d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_4b90d4:
    // 0x4b90d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b90d8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B90D8u;
    SET_GPR_U32(ctx, 31, 0x4B90E0u);
    ctx->pc = 0x4B90DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B90D8u;
    // 0x4b90dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B90D8u, 0x4B90E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B90E0u;
label_4b90e0:
    // 0x4b90e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B90E0u;
    {
        const bool branch_taken_0x4b90e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B90E0u;
        // 0x4b90e4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b90e0) {
            ctx->pc = 0x4B9108u;
            goto label_4b9108;
        }
    }
    ctx->pc = 0x4B90E8u;
    // 0x4b90e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b90ec: 0x8e631974  lw          $v1, 0x1974($s3)
    ctx->pc = 0x4b90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b90f0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B90F0u;
    {
        const bool branch_taken_0x4b90f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B90F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B90F0u;
        // 0x4b90f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b90f0) {
            ctx->pc = 0x4B9118u;
            goto label_4b9118;
        }
    }
    ctx->pc = 0x4B90F8u;
    // 0x4b90f8: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B90F8u;
    SET_GPR_U32(ctx, 31, 0x4B9100u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B90F8u, 0x4B9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9100u;
label_4b9100:
    // 0x4b9100: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4B9100u;
    {
        const bool branch_taken_0x4b9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9100u;
        // 0x4b9104: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9100) {
            ctx->pc = 0x4B9134u;
            goto label_4b9134;
        }
    }
    ctx->pc = 0x4B9108u;
label_4b9108:
    // 0x4b9108: 0x8e621974  lw          $v0, 0x1974($s3)
    ctx->pc = 0x4b9108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6516)));
    // 0x4b910c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4b910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b9110: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B9110u;
    {
        const bool branch_taken_0x4b9110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x4B9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9110u;
        // 0x4b9114: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9110) {
            ctx->pc = 0x4B9128u;
            goto label_4b9128;
        }
    }
    ctx->pc = 0x4B9118u;
label_4b9118:
    // 0x4b9118: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B9118u;
    SET_GPR_U32(ctx, 31, 0x4B9120u);
    ctx->pc = 0x4B911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9118u;
    // 0x4b911c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B9118u, 0x4B9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9120u;
label_4b9120:
    // 0x4b9120: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B9120u;
    {
        const bool branch_taken_0x4b9120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9120u;
        // 0x4b9124: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9120) {
            ctx->pc = 0x4B913Cu;
            goto label_4b913c;
        }
    }
    ctx->pc = 0x4B9128u;
label_4b9128:
    // 0x4b9128: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9128u;
    SET_GPR_U32(ctx, 31, 0x4B9130u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9128u, 0x4B9130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9130u;
label_4b9130:
    // 0x4b9130: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x4b9130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_4b9134:
    // 0x4b9134: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b9138: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b913c:
    // 0x4b913c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B913Cu;
    {
        const bool branch_taken_0x4b913c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B913Cu;
        // 0x4b9140: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b913c) {
            ctx->pc = 0x4B9158u;
            goto label_4b9158;
        }
    }
    ctx->pc = 0x4B9144u;
    // 0x4b9144: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B9144u;
    SET_GPR_U32(ctx, 31, 0x4B914Cu);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B9144u, 0x4B914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B914Cu;
label_4b914c:
    // 0x4b914c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b914cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9150: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b9154: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x4b9154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4b9158:
    // 0x4b9158: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b9158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b915c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4b915cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b9160: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x4b9160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b9164: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4b9164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b9168: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b9168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b916c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b916cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9170: 0x3e00008  jr          $ra
    ctx->pc = 0x4B9170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9170u;
        // 0x4b9174: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B9170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B9178u;
}

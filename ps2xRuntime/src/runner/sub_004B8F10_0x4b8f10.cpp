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

// Function: sub_004B8F10
// Address: 0x4b8f10 - 0x4b9030
void sub_004B8F10_0x4b8f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8F10_0x4b8f10");
#endif

    switch (ctx->pc) {
        case 0x4b8f3cu: goto label_4b8f3c;
        case 0x4b8f58u: goto label_4b8f58;
        case 0x4b8f68u: goto label_4b8f68;
        case 0x4b8f7cu: goto label_4b8f7c;
        case 0x4b8fd4u: goto label_4b8fd4;
        case 0x4b8fe4u: goto label_4b8fe4;
        case 0x4b9000u: goto label_4b9000;
        default: break;
    }

    ctx->pc = 0x4b8f10u;

    // 0x4b8f10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4b8f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4b8f14: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x4b8f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x4b8f18: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x4b8f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x4b8f1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b8f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b8f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f24: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x4b8f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x4b8f28: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x4b8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x4b8f2c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4b8f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4b8f30: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4b8f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4b8f34: 0xc12e900  jal         func_4BA400
    ctx->pc = 0x4B8F34u;
    SET_GPR_U32(ctx, 31, 0x4B8F3Cu);
    ctx->pc = 0x4B8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F34u;
    // 0x4b8f38: 0x3c140059  lui         $s4, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)89 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BA400u, 0x4B8F34u, 0x4B8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F3Cu;
label_4b8f3c:
    // 0x4b8f3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b8f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f40: 0x8e931974  lw          $s3, 0x1974($s4)
    ctx->pc = 0x4b8f40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6516)));
    // 0x4b8f44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b8f48: 0x12620030  beq         $s3, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4B8F48u;
    {
        const bool branch_taken_0x4b8f48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8F48u;
        // 0x4b8f4c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8f48) {
            ctx->pc = 0x4B900Cu;
            goto label_4b900c;
        }
    }
    ctx->pc = 0x4B8F50u;
    // 0x4b8f50: 0xc12f8d8  jal         func_4BE360
    ctx->pc = 0x4B8F50u;
    SET_GPR_U32(ctx, 31, 0x4B8F58u);
    ctx->pc = 0x4B8F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F50u;
    // 0x4b8f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE360u, 0x4B8F50u, 0x4B8F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F58u;
label_4b8f58:
    // 0x4b8f58: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B8F58u;
    {
        const bool branch_taken_0x4b8f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8F58u;
        // 0x4b8f5c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8f58) {
            ctx->pc = 0x4B900Cu;
            goto label_4b900c;
        }
    }
    ctx->pc = 0x4B8F60u;
    // 0x4b8f60: 0xc12f8d8  jal         func_4BE360
    ctx->pc = 0x4B8F60u;
    SET_GPR_U32(ctx, 31, 0x4B8F68u);
    ctx->pc = 0x4B8F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F60u;
    // 0x4b8f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE360u, 0x4B8F60u, 0x4B8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F68u;
label_4b8f68:
    // 0x4b8f68: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4B8F68u;
    {
        const bool branch_taken_0x4b8f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8F68u;
        // 0x4b8f6c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8f68) {
            ctx->pc = 0x4B900Cu;
            goto label_4b900c;
        }
    }
    ctx->pc = 0x4B8F70u;
    // 0x4b8f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b8f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8f74: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B8F74u;
    SET_GPR_U32(ctx, 31, 0x4B8F7Cu);
    ctx->pc = 0x4B8F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8F74u;
    // 0x4b8f78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B8F74u, 0x4B8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8F7Cu;
label_4b8f7c:
    // 0x4b8f7c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4B8F7Cu;
    {
        const bool branch_taken_0x4b8f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8F7Cu;
        // 0x4b8f80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8f7c) {
            ctx->pc = 0x4B900Cu;
            goto label_4b900c;
        }
    }
    ctx->pc = 0x4B8F84u;
    // 0x4b8f84: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8f88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8f8c: 0x24420f40  addiu       $v0, $v0, 0xF40
    ctx->pc = 0x4b8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x4b8f90: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b8f94: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b8f98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4b8f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4b8f9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b8f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b8fa0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8FA0u;
    {
        const bool branch_taken_0x4b8fa0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8FA0u;
        // 0x4b8fa4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8fa0) {
            ctx->pc = 0x4B8FB0u;
            goto label_4b8fb0;
        }
    }
    ctx->pc = 0x4B8FA8u;
    // 0x4b8fa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B8FA8u;
    {
        const bool branch_taken_0x4b8fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8FA8u;
        // 0x4b8fac: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8fa8) {
            ctx->pc = 0x4B8FBCu;
            goto label_4b8fbc;
        }
    }
    ctx->pc = 0x4B8FB0u;
label_4b8fb0:
    // 0x4b8fb0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b8fb4: 0xdc430f48  ld          $v1, 0xF48($v0)
    ctx->pc = 0x4b8fb4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x590F48u));
    // 0x4b8fb8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x4b8fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_4b8fbc:
    // 0x4b8fbc: 0x8e831974  lw          $v1, 0x1974($s4)
    ctx->pc = 0x4b8fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6516)));
    // 0x4b8fc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b8fc4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8FC4u;
    {
        const bool branch_taken_0x4b8fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b8fc4) {
            ctx->pc = 0x4B8FDCu;
            goto label_4b8fdc;
        }
    }
    ctx->pc = 0x4B8FCCu;
    // 0x4b8fcc: 0xc12f8e6  jal         func_4BE398
    ctx->pc = 0x4B8FCCu;
    SET_GPR_U32(ctx, 31, 0x4B8FD4u);
    ctx->pc = 0x4B8FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8FCCu;
    // 0x4b8fd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE398u, 0x4B8FCCu, 0x4B8FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8FD4u;
label_4b8fd4:
    // 0x4b8fd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8FD4u;
    {
        const bool branch_taken_0x4b8fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8FD4u;
        // 0x4b8fd8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8fd4) {
            ctx->pc = 0x4B8FF0u;
            goto label_4b8ff0;
        }
    }
    ctx->pc = 0x4B8FDCu;
label_4b8fdc:
    // 0x4b8fdc: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B8FDCu;
    SET_GPR_U32(ctx, 31, 0x4B8FE4u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B8FDCu, 0x4B8FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8FE4u;
label_4b8fe4:
    // 0x4b8fe4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x4b8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4b8fe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b8fec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b8ff0:
    // 0x4b8ff0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8FF0u;
    {
        const bool branch_taken_0x4b8ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8ff0) {
            ctx->pc = 0x4B8FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B8FF0u;
            // 0x4b8ff4: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B900Cu;
            goto label_4b900c;
        }
    }
    ctx->pc = 0x4B8FF8u;
    // 0x4b8ff8: 0xc136270  jal         func_4D89C0
    ctx->pc = 0x4B8FF8u;
    SET_GPR_U32(ctx, 31, 0x4B9000u);
    ctx->pc = 0x4D89C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D89C0u, 0x4B8FF8u, 0x4B9000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9000u;
label_4b9000:
    // 0x4b9000: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4b9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b9004: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4b9008: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x4b9008u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4b900c:
    // 0x4b900c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4b900cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b9010: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x4b9010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b9014: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x4b9014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b9018: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4b9018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b901c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x4b901cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b9020: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x4b9020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b9024: 0x3e00008  jr          $ra
    ctx->pc = 0x4B9024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9024u;
        // 0x4b9028: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B9024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B902Cu;
    // 0x4b902c: 0x0  nop
    ctx->pc = 0x4b902cu;
    // NOP
    ctx->pc = 0x4b9030u;
}

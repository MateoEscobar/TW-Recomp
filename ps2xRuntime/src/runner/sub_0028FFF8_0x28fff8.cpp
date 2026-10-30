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

// Function: sub_0028FFF8
// Address: 0x28fff8 - 0x290138
void sub_0028FFF8_0x28fff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FFF8_0x28fff8");
#endif

    switch (ctx->pc) {
        case 0x29002cu: goto label_29002c;
        case 0x290048u: goto label_290048;
        case 0x290054u: goto label_290054;
        case 0x2900acu: goto label_2900ac;
        case 0x2900c4u: goto label_2900c4;
        case 0x2900ccu: goto label_2900cc;
        case 0x2900e0u: goto label_2900e0;
        case 0x2900f8u: goto label_2900f8;
        default: break;
    }

    ctx->pc = 0x28fff8u;

    // 0x28fff8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28fff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28fffc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x28fffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x290000: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x290000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x290004: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x290004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x290008: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x290008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x29000c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x29000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x290010: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x290010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x290014: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x290014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x290018: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x290018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x29001c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x29001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x290020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290024: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x290024u;
    SET_GPR_U32(ctx, 31, 0x29002Cu);
    ctx->pc = 0x290028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290024u;
    // 0x290028: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x290024u, 0x29002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29002Cu;
label_29002c:
    // 0x29002c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290030: 0x10430035  beq         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x290030u;
    {
        const bool branch_taken_0x290030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x290034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290030u;
        // 0x290034: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290030) {
            ctx->pc = 0x290108u;
            goto label_290108;
        }
    }
    ctx->pc = 0x290038u;
    // 0x290038: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x290038u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29003c: 0x24160017  addiu       $s6, $zero, 0x17
    ctx->pc = 0x29003cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x290040: 0x24150018  addiu       $s5, $zero, 0x18
    ctx->pc = 0x290040u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x290044: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x290044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
label_290048:
    // 0x290048: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x290048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29004c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x29004Cu;
    SET_GPR_U32(ctx, 31, 0x290054u);
    ctx->pc = 0x290050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29004Cu;
    // 0x290050: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x29004Cu, 0x290054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290054u;
label_290054:
    // 0x290054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x290054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290058: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x290058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29005c: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x29005Cu;
    {
        const bool branch_taken_0x29005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29005c) {
            ctx->pc = 0x290060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29005Cu;
            // 0x290060: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900FCu;
            goto label_2900fc;
        }
    }
    ctx->pc = 0x290064u;
    // 0x290064: 0x8e62020c  lw          $v0, 0x20C($s3)
    ctx->pc = 0x290064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
    // 0x290068: 0x52220024  beql        $s1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x290068u;
    {
        const bool branch_taken_0x290068 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x290068) {
            ctx->pc = 0x29006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290068u;
            // 0x29006c: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900FCu;
            goto label_2900fc;
        }
    }
    ctx->pc = 0x290070u;
    // 0x290070: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x290070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x290074: 0x50570021  beql        $v0, $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x290074u;
    {
        const bool branch_taken_0x290074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x290074) {
            ctx->pc = 0x290078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290074u;
            // 0x290078: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900FCu;
            goto label_2900fc;
        }
    }
    ctx->pc = 0x29007Cu;
    // 0x29007c: 0x5056001f  beql        $v0, $s6, . + 4 + (0x1F << 2)
    ctx->pc = 0x29007Cu;
    {
        const bool branch_taken_0x29007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x29007c) {
            ctx->pc = 0x290080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29007Cu;
            // 0x290080: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900FCu;
            goto label_2900fc;
        }
    }
    ctx->pc = 0x290084u;
    // 0x290084: 0x5055001d  beql        $v0, $s5, . + 4 + (0x1D << 2)
    ctx->pc = 0x290084u;
    {
        const bool branch_taken_0x290084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x290084) {
            ctx->pc = 0x290088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290084u;
            // 0x290088: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900FCu;
            goto label_2900fc;
        }
    }
    ctx->pc = 0x29008Cu;
    // 0x29008c: 0x8e2205e8  lw          $v0, 0x5E8($s1)
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1512)));
    // 0x290090: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290090u;
    {
        const bool branch_taken_0x290090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290090u;
        // 0x290094: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290090) {
            ctx->pc = 0x2900A8u;
            goto label_2900a8;
        }
    }
    ctx->pc = 0x290098u;
    // 0x290098: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x290098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x29009c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x29009Cu;
    {
        const bool branch_taken_0x29009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29009c) {
            ctx->pc = 0x2900A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29009Cu;
            // 0x2900a0: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900FCu;
            goto label_2900fc;
        }
    }
    ctx->pc = 0x2900A4u;
    // 0x2900a4: 0x0  nop
    ctx->pc = 0x2900a4u;
    // NOP
label_2900a8:
    // 0x2900a8: 0x26140001  addiu       $s4, $s0, 0x1
    ctx->pc = 0x2900a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2900ac:
    // 0x2900ac: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x2900acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2900b0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2900B0u;
    {
        const bool branch_taken_0x2900b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2900B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2900B0u;
        // 0x2900b4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900b0) {
            ctx->pc = 0x2900FCu;
            goto label_2900fc;
        }
    }
    ctx->pc = 0x2900B8u;
    // 0x2900b8: 0x26640164  addiu       $a0, $s3, 0x164
    ctx->pc = 0x2900b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    // 0x2900bc: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2900BCu;
    SET_GPR_U32(ctx, 31, 0x2900C4u);
    ctx->pc = 0x2900C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2900BCu;
    // 0x2900c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2900BCu, 0x2900C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900C4u;
label_2900c4:
    // 0x2900c4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2900C4u;
    SET_GPR_U32(ctx, 31, 0x2900CCu);
    ctx->pc = 0x2900C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2900C4u;
    // 0x2900c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2900C4u, 0x2900CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900CCu;
label_2900cc:
    // 0x2900cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2900ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900d0: 0x5200fff6  beql        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2900D0u;
    {
        const bool branch_taken_0x2900d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2900d0) {
            ctx->pc = 0x2900D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2900D0u;
            // 0x2900d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2900ac;
        }
    }
    ctx->pc = 0x2900D8u;
    // 0x2900d8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2900D8u;
    SET_GPR_U32(ctx, 31, 0x2900E0u);
    ctx->pc = 0x2900DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2900D8u;
    // 0x2900dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2900D8u, 0x2900E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900E0u;
label_2900e0:
    // 0x2900e0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2900e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2900e4: 0x5471fff1  bnel        $v1, $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2900E4u;
    {
        const bool branch_taken_0x2900e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2900e4) {
            ctx->pc = 0x2900E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2900E4u;
            // 0x2900e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2900ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2900ac;
        }
    }
    ctx->pc = 0x2900ECu;
    // 0x2900ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2900ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900f0: 0xc0a3fde  jal         func_28FF78
    ctx->pc = 0x2900F0u;
    SET_GPR_U32(ctx, 31, 0x2900F8u);
    ctx->pc = 0x2900F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2900F0u;
    // 0x2900f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF78u, 0x2900F0u, 0x2900F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2900F8u;
label_2900f8:
    // 0x2900f8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2900f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2900fc:
    // 0x2900fc: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x2900fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x290100: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x290100u;
    {
        const bool branch_taken_0x290100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290100) {
            ctx->pc = 0x290104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290100u;
            // 0x290104: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290048;
        }
    }
    ctx->pc = 0x290108u;
label_290108:
    // 0x290108: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x290108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29010c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x29010cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290110: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x290110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x290114: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x290114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290118: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x290118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29011c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x29011cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290120: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x290120u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290124: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x290124u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29012c: 0x3e00008  jr          $ra
    ctx->pc = 0x29012Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29012Cu;
        // 0x290130: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29012Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290134u;
    // 0x290134: 0x0  nop
    ctx->pc = 0x290134u;
    // NOP
    ctx->pc = 0x290138u;
}

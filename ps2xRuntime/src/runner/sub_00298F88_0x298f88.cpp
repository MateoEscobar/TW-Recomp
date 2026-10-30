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

// Function: sub_00298F88
// Address: 0x298f88 - 0x2990dc
void sub_00298F88_0x298f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298F88_0x298f88");
#endif

    switch (ctx->pc) {
        case 0x298fa4u: goto label_298fa4;
        case 0x298fc8u: goto label_298fc8;
        case 0x298fd8u: goto label_298fd8;
        case 0x298fecu: goto label_298fec;
        case 0x299000u: goto label_299000;
        case 0x299010u: goto label_299010;
        case 0x299020u: goto label_299020;
        case 0x299028u: goto label_299028;
        case 0x299074u: goto label_299074;
        case 0x2990a4u: goto label_2990a4;
        case 0x2990b4u: goto label_2990b4;
        case 0x2990c4u: goto label_2990c4;
        case 0x2990d4u: goto label_2990d4;
        default: break;
    }

    ctx->pc = 0x298f88u;

    // 0x298f88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298f8c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x298f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x298f90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x298f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x298f94: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x298f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x298f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298f9c: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x298F9Cu;
    SET_GPR_U32(ctx, 31, 0x298FA4u);
    ctx->pc = 0x298FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F9Cu;
    // 0x298fa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x298F9Cu, 0x298FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FA4u;
label_298fa4:
    // 0x298fa4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x298fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298fa8: 0x92220333  lbu         $v0, 0x333($s1)
    ctx->pc = 0x298fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 819)));
    // 0x298fac: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x298FACu;
    {
        const bool branch_taken_0x298fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298fac) {
            ctx->pc = 0x298FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298FACu;
            // 0x298fb0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2990E8u;
            return;
        }
    }
    ctx->pc = 0x298FB4u;
    // 0x298fb4: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x298fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x298fb8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x298FB8u;
    {
        const bool branch_taken_0x298fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x298fb8) {
            ctx->pc = 0x298FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298FB8u;
            // 0x298fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299008u;
            goto label_299008;
        }
    }
    ctx->pc = 0x298FC0u;
    // 0x298fc0: 0xc05d6de  jal         func_175B78
    ctx->pc = 0x298FC0u;
    SET_GPR_U32(ctx, 31, 0x298FC8u);
    ctx->pc = 0x175B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175B78u, 0x298FC0u, 0x298FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FC8u;
label_298fc8:
    // 0x298fc8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x298FC8u;
    {
        const bool branch_taken_0x298fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FC8u;
        // 0x298fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fc8) {
            ctx->pc = 0x299008u;
            goto label_299008;
        }
    }
    ctx->pc = 0x298FD0u;
    // 0x298fd0: 0xc0a5d08  jal         func_297420
    ctx->pc = 0x298FD0u;
    SET_GPR_U32(ctx, 31, 0x298FD8u);
    ctx->pc = 0x298FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FD0u;
    // 0x298fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297420u, 0x298FD0u, 0x298FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FD8u;
label_298fd8:
    // 0x298fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298fdc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x298FDCu;
    {
        const bool branch_taken_0x298fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x298fdc) {
            ctx->pc = 0x298FECu;
            goto label_298fec;
        }
    }
    ctx->pc = 0x298FE4u;
    // 0x298fe4: 0xc0a5d78  jal         func_2975E0
    ctx->pc = 0x298FE4u;
    SET_GPR_U32(ctx, 31, 0x298FECu);
    ctx->pc = 0x298FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FE4u;
    // 0x298fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x298FE4u, 0x298FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FECu;
label_298fec:
    // 0x298fec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x298fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x298ff0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298ff4: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x298ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x298ff8: 0xc0a67aa  jal         func_299EA8
    ctx->pc = 0x298FF8u;
    SET_GPR_U32(ctx, 31, 0x299000u);
    ctx->pc = 0x298FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FF8u;
    // 0x298ffc: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EA8u, 0x298FF8u, 0x299000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299000u;
label_299000:
    // 0x299000: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x299000u;
    {
        const bool branch_taken_0x299000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299000u;
        // 0x299004: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299000) {
            ctx->pc = 0x299034u;
            goto label_299034;
        }
    }
    ctx->pc = 0x299008u;
label_299008:
    // 0x299008: 0xc0a5d08  jal         func_297420
    ctx->pc = 0x299008u;
    SET_GPR_U32(ctx, 31, 0x299010u);
    ctx->pc = 0x29900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299008u;
    // 0x29900c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297420u, 0x299008u, 0x299010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299010u;
label_299010:
    // 0x299010: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x299010u;
    {
        const bool branch_taken_0x299010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x299010) {
            ctx->pc = 0x299020u;
            goto label_299020;
        }
    }
    ctx->pc = 0x299018u;
    // 0x299018: 0xc0a63a8  jal         func_298EA0
    ctx->pc = 0x299018u;
    SET_GPR_U32(ctx, 31, 0x299020u);
    ctx->pc = 0x29901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299018u;
    // 0x29901c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EA0u, 0x299018u, 0x299020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299020u;
label_299020:
    // 0x299020: 0xc0a6794  jal         func_299E50
    ctx->pc = 0x299020u;
    SET_GPR_U32(ctx, 31, 0x299028u);
    ctx->pc = 0x299024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299020u;
    // 0x299024: 0x26240284  addiu       $a0, $s1, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299E50u, 0x299020u, 0x299028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299028u;
label_299028:
    // 0x299028: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x299028u;
    {
        const bool branch_taken_0x299028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x299028) {
            ctx->pc = 0x29902Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299028u;
            // 0x29902c: 0x92020015  lbu         $v0, 0x15($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29903Cu;
            goto label_29903c;
        }
    }
    ctx->pc = 0x299030u;
    // 0x299030: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x299030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_299034:
    // 0x299034: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x299034u;
    {
        const bool branch_taken_0x299034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299034u;
        // 0x299038: 0xa2020015  sb          $v0, 0x15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299034) {
            ctx->pc = 0x2990E4u;
            return;
        }
    }
    ctx->pc = 0x29903Cu;
label_29903c:
    // 0x29903c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x29903cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x299040: 0x92040014  lbu         $a0, 0x14($s0)
    ctx->pc = 0x299040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x299044: 0x24630b00  addiu       $v1, $v1, 0xB00
    ctx->pc = 0x299044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2816));
    // 0x299048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x299048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29904c: 0xa2020015  sb          $v0, 0x15($s0)
    ctx->pc = 0x29904cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 2));
    // 0x299050: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x299050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x299054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x299054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x299058: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x299058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29905c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x29905cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x299060: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x299060u;
    {
        const bool branch_taken_0x299060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299060) {
            ctx->pc = 0x299064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299060u;
            // 0x299064: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2990E8u;
            return;
        }
    }
    ctx->pc = 0x299068u;
    // 0x299068: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x299068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x29906c: 0xc0a5d88  jal         func_297620
    ctx->pc = 0x29906Cu;
    SET_GPR_U32(ctx, 31, 0x299074u);
    ctx->pc = 0x299070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29906Cu;
    // 0x299070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297620u, 0x29906Cu, 0x299074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299074u;
label_299074:
    // 0x299074: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x299074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x299078: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x299078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29907c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x29907Cu;
    {
        const bool branch_taken_0x29907c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29907Cu;
        // 0x299080: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29907c) {
            ctx->pc = 0x2990E4u;
            return;
        }
    }
    ctx->pc = 0x299084u;
    // 0x299084: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x299084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299088: 0x244211e0  addiu       $v0, $v0, 0x11E0
    ctx->pc = 0x299088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x29908c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299090: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x299090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299094: 0x800008  jr          $a0
    ctx->pc = 0x299094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29909Cu: goto label_29909c;
            case 0x2990ACu: goto label_2990ac;
            case 0x2990BCu: goto label_2990bc;
            case 0x2990CCu: goto label_2990cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299094u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29909Cu;
label_29909c:
    // 0x29909c: 0xc0a5e3e  jal         func_2978F8
    ctx->pc = 0x29909Cu;
    SET_GPR_U32(ctx, 31, 0x2990A4u);
    ctx->pc = 0x2990A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29909Cu;
    // 0x2990a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2978F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2978F8u, 0x29909Cu, 0x2990A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990A4u;
label_2990a4:
    // 0x2990a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2990A4u;
    {
        const bool branch_taken_0x2990a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990A4u;
        // 0x2990a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990a4) {
            ctx->pc = 0x2990E8u;
            return;
        }
    }
    ctx->pc = 0x2990ACu;
label_2990ac:
    // 0x2990ac: 0xc0a5e96  jal         func_297A58
    ctx->pc = 0x2990ACu;
    SET_GPR_U32(ctx, 31, 0x2990B4u);
    ctx->pc = 0x2990B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2990ACu;
    // 0x2990b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297A58u, 0x2990ACu, 0x2990B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990B4u;
label_2990b4:
    // 0x2990b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2990B4u;
    {
        const bool branch_taken_0x2990b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990B4u;
        // 0x2990b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990b4) {
            ctx->pc = 0x2990E8u;
            return;
        }
    }
    ctx->pc = 0x2990BCu;
label_2990bc:
    // 0x2990bc: 0xc0a5f24  jal         func_297C90
    ctx->pc = 0x2990BCu;
    SET_GPR_U32(ctx, 31, 0x2990C4u);
    ctx->pc = 0x2990C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2990BCu;
    // 0x2990c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C90u, 0x2990BCu, 0x2990C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990C4u;
label_2990c4:
    // 0x2990c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2990C4u;
    {
        const bool branch_taken_0x2990c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990C4u;
        // 0x2990c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990c4) {
            ctx->pc = 0x2990E8u;
            return;
        }
    }
    ctx->pc = 0x2990CCu;
label_2990cc:
    // 0x2990cc: 0xc0a6016  jal         func_298058
    ctx->pc = 0x2990CCu;
    SET_GPR_U32(ctx, 31, 0x2990D4u);
    ctx->pc = 0x2990D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2990CCu;
    // 0x2990d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298058u, 0x2990CCu, 0x2990D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2990D4u;
label_2990d4:
    // 0x2990d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2990D4u;
    {
        const bool branch_taken_0x2990d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2990D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2990D4u;
        // 0x2990d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2990d4) {
            ctx->pc = 0x2990E8u;
            return;
        }
    }
    ctx->pc = 0x2990DCu;
}

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

// Function: sub_0022F4F8
// Address: 0x22f4f8 - 0x22f658
void sub_0022F4F8_0x22f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F4F8_0x22f4f8");
#endif

    switch (ctx->pc) {
        case 0x22f53cu: goto label_22f53c;
        case 0x22f568u: goto label_22f568;
        case 0x22f57cu: goto label_22f57c;
        case 0x22f588u: goto label_22f588;
        case 0x22f598u: goto label_22f598;
        case 0x22f5a4u: goto label_22f5a4;
        case 0x22f5c4u: goto label_22f5c4;
        case 0x22f604u: goto label_22f604;
        case 0x22f634u: goto label_22f634;
        default: break;
    }

    ctx->pc = 0x22f4f8u;

    // 0x22f4f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22f4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22f4fc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x22f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x22f500: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x22f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x22f504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22f504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f508: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x22f508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x22f50c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22f50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f510: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x22f510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x22f514: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22f514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22f518: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x22f518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x22f51c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f520: 0x922200e0  lbu         $v0, 0xE0($s1)
    ctx->pc = 0x22f520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x22f524: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x22f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x22f528: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22f528u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22f52c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F52Cu;
    {
        const bool branch_taken_0x22f52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F52Cu;
        // 0x22f530: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f52c) {
            ctx->pc = 0x22F544u;
            goto label_22f544;
        }
    }
    ctx->pc = 0x22F534u;
    // 0x22f534: 0xc088de4  jal         func_223790
    ctx->pc = 0x22F534u;
    SET_GPR_U32(ctx, 31, 0x22F53Cu);
    ctx->pc = 0x223790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223790u, 0x22F534u, 0x22F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F53Cu;
label_22f53c:
    // 0x22f53c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22F53Cu;
    {
        const bool branch_taken_0x22f53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F53Cu;
        // 0x22f540: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f53c) {
            ctx->pc = 0x22F548u;
            goto label_22f548;
        }
    }
    ctx->pc = 0x22F544u;
label_22f544:
    // 0x22f544: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x22f544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22f548:
    // 0x22f548: 0x922200e1  lbu         $v0, 0xE1($s1)
    ctx->pc = 0x22f548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 225)));
    // 0x22f54c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22f550: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22f554: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22f554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22f558: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22F558u;
    {
        const bool branch_taken_0x22f558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F558u;
        // 0x22f55c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f558) {
            ctx->pc = 0x22F56Cu;
            goto label_22f56c;
        }
    }
    ctx->pc = 0x22F560u;
    // 0x22f560: 0xc088dc8  jal         func_223720
    ctx->pc = 0x22F560u;
    SET_GPR_U32(ctx, 31, 0x22F568u);
    ctx->pc = 0x22F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F560u;
    // 0x22f564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223720u, 0x22F560u, 0x22F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F568u;
label_22f568:
    // 0x22f568: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22f568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f56c:
    // 0x22f56c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x22F56Cu;
    {
        const bool branch_taken_0x22f56c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F56Cu;
        // 0x22f570: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f56c) {
            ctx->pc = 0x22F5E4u;
            goto label_22f5e4;
        }
    }
    ctx->pc = 0x22F574u;
    // 0x22f574: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x22F574u;
    SET_GPR_U32(ctx, 31, 0x22F57Cu);
    ctx->pc = 0x22F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F574u;
    // 0x22f578: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x22F574u, 0x22F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F57Cu;
label_22f57c:
    // 0x22f57c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f580: 0xc040708  jal         func_101C20
    ctx->pc = 0x22F580u;
    SET_GPR_U32(ctx, 31, 0x22F588u);
    ctx->pc = 0x22F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F580u;
    // 0x22f584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101C20u, 0x22F580u, 0x22F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F588u;
label_22f588:
    // 0x22f588: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x22f588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22f58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f590: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x22F590u;
    SET_GPR_U32(ctx, 31, 0x22F598u);
    ctx->pc = 0x22F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F590u;
    // 0x22f594: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x22F590u, 0x22F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F598u;
label_22f598:
    // 0x22f598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22f598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f59c: 0xc0406fc  jal         func_101BF0
    ctx->pc = 0x22F59Cu;
    SET_GPR_U32(ctx, 31, 0x22F5A4u);
    ctx->pc = 0x22F5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F59Cu;
    // 0x22f5a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BF0u, 0x22F59Cu, 0x22F5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5A4u;
label_22f5a4:
    // 0x22f5a4: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x22f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x22f5a8: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x22f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x22f5ac: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x22f5acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x22f5b0: 0x388200a1  xori        $v0, $a0, 0xA1
    ctx->pc = 0x22f5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)161);
    // 0x22f5b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F5B4u;
    {
        const bool branch_taken_0x22f5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F5B4u;
        // 0x22f5b8: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f5b4) {
            ctx->pc = 0x22F5E4u;
            goto label_22f5e4;
        }
    }
    ctx->pc = 0x22F5BCu;
    // 0x22f5bc: 0xc08a200  jal         func_228800
    ctx->pc = 0x22F5BCu;
    SET_GPR_U32(ctx, 31, 0x22F5C4u);
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x22F5BCu, 0x22F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F5C4u;
label_22f5c4:
    // 0x22f5c4: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x22f5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x22f5c8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x22f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x22f5cc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F5CCu;
    {
        const bool branch_taken_0x22f5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f5cc) {
            ctx->pc = 0x22F5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F5CCu;
            // 0x22f5d0: 0x8e2600d4  lw          $a2, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F5E8u;
            goto label_22f5e8;
        }
    }
    ctx->pc = 0x22F5D4u;
    // 0x22f5d4: 0x260307d0  addiu       $v1, $s0, 0x7D0
    ctx->pc = 0x22f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2000));
    // 0x22f5d8: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x22f5d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x22f5dc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x22f5dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x22f5e0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x22f5e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_22f5e4:
    // 0x22f5e4: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x22f5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_22f5e8:
    // 0x22f5e8: 0x8e83b734  lw          $v1, -0x48CC($s4)
    ctx->pc = 0x22f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
    // 0x22f5ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f5f0: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x22f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x22f5f4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x22f5f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22f5fc: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22F5FCu;
    SET_GPR_U32(ctx, 31, 0x22F604u);
    ctx->pc = 0x22F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F5FCu;
    // 0x22f600: 0xacc20104  sw          $v0, 0x104($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F5FCu, 0x22F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F604u;
label_22f604:
    // 0x22f604: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F604u;
    {
        const bool branch_taken_0x22f604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F604u;
        // 0x22f608: 0x8e82b734  lw          $v0, -0x48CC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f604) {
            ctx->pc = 0x22F624u;
            goto label_22f624;
        }
    }
    ctx->pc = 0x22F60Cu;
    // 0x22f60c: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x22f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x22f610: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x22f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x22f614: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22f614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x22f618: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x22f618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x22f61c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22F61Cu;
    {
        const bool branch_taken_0x22f61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F61Cu;
        // 0x22f620: 0xac830100  sw          $v1, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f61c) {
            ctx->pc = 0x22F634u;
            goto label_22f634;
        }
    }
    ctx->pc = 0x22F624u;
label_22f624:
    // 0x22f624: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F624u;
    {
        const bool branch_taken_0x22f624 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F624u;
        // 0x22f628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f624) {
            ctx->pc = 0x22F634u;
            goto label_22f634;
        }
    }
    ctx->pc = 0x22F62Cu;
    // 0x22f62c: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x22F62Cu;
    SET_GPR_U32(ctx, 31, 0x22F634u);
    ctx->pc = 0x22F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F62Cu;
    // 0x22f630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22F62Cu, 0x22F634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F634u;
label_22f634:
    // 0x22f634: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x22f634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f638: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x22f638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22f63c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x22f63cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22f640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22f640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f644: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x22f644u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f648: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x22f648u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f650: 0x3e00008  jr          $ra
    ctx->pc = 0x22F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F650u;
        // 0x22f654: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F658u;
}

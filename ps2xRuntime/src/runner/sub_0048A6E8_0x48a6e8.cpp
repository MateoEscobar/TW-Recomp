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

// Function: sub_0048A6E8
// Address: 0x48a6e8 - 0x48aba0
void sub_0048A6E8_0x48a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A6E8_0x48a6e8");
#endif

    switch (ctx->pc) {
        case 0x48a730u: goto label_48a730;
        case 0x48a770u: goto label_48a770;
        case 0x48a7e8u: goto label_48a7e8;
        case 0x48a7fcu: goto label_48a7fc;
        case 0x48a820u: goto label_48a820;
        case 0x48a830u: goto label_48a830;
        case 0x48a870u: goto label_48a870;
        case 0x48a884u: goto label_48a884;
        case 0x48a8d0u: goto label_48a8d0;
        case 0x48a8e8u: goto label_48a8e8;
        case 0x48a904u: goto label_48a904;
        case 0x48a980u: goto label_48a980;
        case 0x48a9a0u: goto label_48a9a0;
        case 0x48a9b0u: goto label_48a9b0;
        case 0x48aa14u: goto label_48aa14;
        case 0x48aa64u: goto label_48aa64;
        case 0x48aab4u: goto label_48aab4;
        case 0x48ab20u: goto label_48ab20;
        case 0x48ab50u: goto label_48ab50;
        case 0x48ab5cu: goto label_48ab5c;
        default: break;
    }

    ctx->pc = 0x48a6e8u;

    // 0x48a6e8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x48a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x48a6ec: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x48a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x48a6f0: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x48a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x48a6f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x48a6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a6f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48a6fc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x48a6fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a700: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x48a700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x48a704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x48a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a708: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x48a708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x48a70c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48a70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a710: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x48a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x48a714: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x48a714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x48a718: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x48a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x48a71c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x48a720: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x48a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x48a724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48a728: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x48A728u;
    SET_GPR_U32(ctx, 31, 0x48A730u);
    ctx->pc = 0x48A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A728u;
    // 0x48a72c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x48A728u, 0x48A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A730u;
label_48a730:
    // 0x48a730: 0x8e504000  lw          $s0, 0x4000($s2)
    ctx->pc = 0x48a730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x48a734: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x48a734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a738: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x48A738u;
    {
        const bool branch_taken_0x48a738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A738u;
        // 0x48a73c: 0x8f958668  lw          $s5, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a738) {
            ctx->pc = 0x48A820u;
            goto label_48a820;
        }
    }
    ctx->pc = 0x48A740u;
    // 0x48a740: 0x1aa00034  blez        $s5, . + 4 + (0x34 << 2)
    ctx->pc = 0x48A740u;
    {
        const bool branch_taken_0x48a740 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x48A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A740u;
        // 0x48a744: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a740) {
            ctx->pc = 0x48A814u;
            goto label_48a814;
        }
    }
    ctx->pc = 0x48A748u;
    // 0x48a748: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x48a748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a74c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x48a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x48a750: 0x26b6ffff  addiu       $s6, $s5, -0x1
    ctx->pc = 0x48a750u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x48a754: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x48a754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x48a758: 0x2614001c  addiu       $s4, $s0, 0x1C
    ctx->pc = 0x48a758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x48a75c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x48a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x48a760: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x48a760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x48a764: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x48a764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x48a768: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x48a768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x48a76c: 0x0  nop
    ctx->pc = 0x48a76cu;
    // NOP
label_48a770:
    // 0x48a770: 0x8f828668  lw          $v0, -0x7998($gp)
    ctx->pc = 0x48a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48a774: 0x1318c3  sra         $v1, $s3, 3
    ctx->pc = 0x48a774u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 3));
    // 0x48a778: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x48a778u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x48a77c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x48a77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x48a780: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x48a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x48a784: 0x133883  sra         $a3, $s3, 2
    ctx->pc = 0x48a784u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), 2));
    // 0x48a788: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x48a788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x48a78c: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x48a78cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x48a790: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x48a790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x48a794: 0x473804  sllv        $a3, $a3, $v0
    ctx->pc = 0x48a794u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x48a798: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x48a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x48a79c: 0x132043  sra         $a0, $s3, 1
    ctx->pc = 0x48a79cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 1));
    // 0x48a7a0: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x48a7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x48a7a4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x48a7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x48a7a8: 0x32680001  andi        $t0, $s3, 0x1
    ctx->pc = 0x48a7a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x48a7ac: 0x442004  sllv        $a0, $a0, $v0
    ctx->pc = 0x48a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x48a7b0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x48a7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x48a7b4: 0x484004  sllv        $t0, $t0, $v0
    ctx->pc = 0x48a7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x48a7b8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x48a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48a7bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x48a7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a7c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x48a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x48a7c4: 0xa3a30011  sb          $v1, 0x11($sp)
    ctx->pc = 0x48a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x48a7c8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x48a7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x48a7cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48a7d0: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x48a7d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x48a7d4: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x48a7d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x48a7d8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x48a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x48a7dc: 0xa3a30013  sb          $v1, 0x13($sp)
    ctx->pc = 0x48a7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x48a7e0: 0xc122cee  jal         func_48B3B8
    ctx->pc = 0x48A7E0u;
    SET_GPR_U32(ctx, 31, 0x48A7E8u);
    ctx->pc = 0x48A7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A7E0u;
    // 0x48a7e4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B3B8u, 0x48A7E0u, 0x48A7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A7E8u;
label_48a7e8:
    // 0x48a7e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48A7E8u;
    {
        const bool branch_taken_0x48a7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A7E8u;
        // 0x48a7ec: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a7e8) {
            ctx->pc = 0x48A7FCu;
            goto label_48a7fc;
        }
    }
    ctx->pc = 0x48A7F0u;
    // 0x48a7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a7f4: 0xc122538  jal         func_4894E0
    ctx->pc = 0x48A7F4u;
    SET_GPR_U32(ctx, 31, 0x48A7FCu);
    ctx->pc = 0x48A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A7F4u;
    // 0x48a7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4894E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4894E0u, 0x48A7F4u, 0x48A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A7FCu;
label_48a7fc:
    // 0x48a7fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48a7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x48a800: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x48a800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x48a804: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x48A804u;
    {
        const bool branch_taken_0x48a804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A804u;
        // 0x48a808: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a804) {
            ctx->pc = 0x48A770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a770;
        }
    }
    ctx->pc = 0x48A80Cu;
    // 0x48a80c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48A80Cu;
    {
        const bool branch_taken_0x48a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a80c) {
            ctx->pc = 0x48A820u;
            goto label_48a820;
        }
    }
    ctx->pc = 0x48A814u;
label_48a814:
    // 0x48a814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a818: 0xc1224f4  jal         func_4893D0
    ctx->pc = 0x48A818u;
    SET_GPR_U32(ctx, 31, 0x48A820u);
    ctx->pc = 0x48A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A818u;
    // 0x48a81c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4893D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4893D0u, 0x48A818u, 0x48A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A820u;
label_48a820:
    // 0x48a820: 0x5bc0000b  blezl       $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x48A820u;
    {
        const bool branch_taken_0x48a820 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x48a820) {
            ctx->pc = 0x48A824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A820u;
            // 0x48a824: 0x8e444000  lw          $a0, 0x4000($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A850u;
            goto label_48a850;
        }
    }
    ctx->pc = 0x48A828u;
    // 0x48a828: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48a82c: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x48a82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_48a830:
    // 0x48a830: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x48a830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a834: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x48a834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48a838: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x48a838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a83c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x48a83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a840: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x48a840u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a844: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48A844u;
    {
        const bool branch_taken_0x48a844 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A844u;
        // 0x48a848: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a844) {
            ctx->pc = 0x48A830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a830;
        }
    }
    ctx->pc = 0x48A84Cu;
    // 0x48a84c: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x48a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
label_48a850:
    // 0x48a850: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48a850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a854: 0xafbe0024  sw          $fp, 0x24($sp)
    ctx->pc = 0x48a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 30));
    // 0x48a858: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x48A858u;
    {
        const bool branch_taken_0x48a858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A858u;
        // 0x48a85c: 0x8f858668  lw          $a1, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a858) {
            ctx->pc = 0x48A898u;
            goto label_48a898;
        }
    }
    ctx->pc = 0x48A860u;
    // 0x48a860: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x48A860u;
    {
        const bool branch_taken_0x48a860 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x48A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A860u;
        // 0x48a864: 0x24b4ffff  addiu       $s4, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a860) {
            ctx->pc = 0x48A894u;
            goto label_48a894;
        }
    }
    ctx->pc = 0x48A868u;
    // 0x48a868: 0x2490001c  addiu       $s0, $a0, 0x1C
    ctx->pc = 0x48a868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x48a86c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x48a86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_48a870:
    // 0x48a870: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48a870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48a874: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x48a874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a878: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x48a878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48a87c: 0xc122d40  jal         func_48B500
    ctx->pc = 0x48A87Cu;
    SET_GPR_U32(ctx, 31, 0x48A884u);
    ctx->pc = 0x48A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A87Cu;
    // 0x48a880: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B500u, 0x48A87Cu, 0x48A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A884u;
label_48a884:
    // 0x48a884: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48A884u;
    {
        const bool branch_taken_0x48a884 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x48A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A884u;
        // 0x48a888: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a884) {
            ctx->pc = 0x48A870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a870;
        }
    }
    ctx->pc = 0x48A88Cu;
    // 0x48a88c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48A88Cu;
    {
        const bool branch_taken_0x48a88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A88Cu;
        // 0x48a890: 0x3d3102a  slt         $v0, $fp, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a88c) {
            ctx->pc = 0x48A89Cu;
            goto label_48a89c;
        }
    }
    ctx->pc = 0x48A894u;
label_48a894:
    // 0x48a894: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x48a894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48a898:
    // 0x48a898: 0x3d3102a  slt         $v0, $fp, $s3
    ctx->pc = 0x48a898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_48a89c:
    // 0x48a89c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x48A89Cu;
    {
        const bool branch_taken_0x48a89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A89Cu;
        // 0x48a8a0: 0x8f858668  lw          $a1, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a89c) {
            ctx->pc = 0x48A90Cu;
            goto label_48a90c;
        }
    }
    ctx->pc = 0x48A8A4u;
    // 0x48a8a4: 0x8e504000  lw          $s0, 0x4000($s2)
    ctx->pc = 0x48a8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x48a8a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48a8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a8ac: 0xafb30024  sw          $s3, 0x24($sp)
    ctx->pc = 0x48a8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 19));
    // 0x48a8b0: 0x120000ae  beqz        $s0, . + 4 + (0xAE << 2)
    ctx->pc = 0x48A8B0u;
    {
        const bool branch_taken_0x48a8b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A8B0u;
        // 0x48a8b4: 0x8f878668  lw          $a3, -0x7998($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a8b0) {
            ctx->pc = 0x48AB6Cu;
            goto label_48ab6c;
        }
    }
    ctx->pc = 0x48A8B8u;
    // 0x48a8b8: 0x18e0000f  blez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x48A8B8u;
    {
        const bool branch_taken_0x48a8b8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x48A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A8B8u;
        // 0x48a8bc: 0x24f2ffff  addiu       $s2, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a8b8) {
            ctx->pc = 0x48A8F8u;
            goto label_48a8f8;
        }
    }
    ctx->pc = 0x48A8C0u;
    // 0x48a8c0: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x48a8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x48a8c4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x48a8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x48a8c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x48a8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48a8cc: 0x0  nop
    ctx->pc = 0x48a8ccu;
    // NOP
label_48a8d0:
    // 0x48a8d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48a8d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a8d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48a8d8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x48a8d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a8dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x48a8dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x48a8e0: 0xc122d5e  jal         func_48B578
    ctx->pc = 0x48A8E0u;
    SET_GPR_U32(ctx, 31, 0x48A8E8u);
    ctx->pc = 0x48A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A8E0u;
    // 0x48a8e4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B578u, 0x48A8E0u, 0x48A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A8E8u;
label_48a8e8:
    // 0x48a8e8: 0x623fff9  bgezl       $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x48A8E8u;
    {
        const bool branch_taken_0x48a8e8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x48a8e8) {
            ctx->pc = 0x48A8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A8E8u;
            // 0x48a8ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a8d0;
        }
    }
    ctx->pc = 0x48A8F0u;
    // 0x48a8f0: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x48A8F0u;
    {
        const bool branch_taken_0x48a8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A8F0u;
        // 0x48a8f4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a8f0) {
            ctx->pc = 0x48AB70u;
            goto label_48ab70;
        }
    }
    ctx->pc = 0x48A8F8u;
label_48a8f8:
    // 0x48a8f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x48a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48a8fc: 0xc1225d4  jal         func_489750
    ctx->pc = 0x48A8FCu;
    SET_GPR_U32(ctx, 31, 0x48A904u);
    ctx->pc = 0x48A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A8FCu;
    // 0x48a900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489750u, 0x48A8FCu, 0x48A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A904u;
label_48a904:
    // 0x48a904: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x48A904u;
    {
        const bool branch_taken_0x48a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A904u;
        // 0x48a908: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a904) {
            ctx->pc = 0x48AB6Cu;
            goto label_48ab6c;
        }
    }
    ctx->pc = 0x48A90Cu;
label_48a90c:
    // 0x48a90c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48a910: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x48a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x48a914: 0x26422400  addiu       $v0, $s2, 0x2400
    ctx->pc = 0x48a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9216));
    // 0x48a918: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x48a918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x48a91c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x48a91cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x48a920: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x48a920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x48a924: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x48a924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a928: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x48a928u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x48a92c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x48a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48a930: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x48a930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x48a934: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x48a934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a938: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x48a938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x48a93c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x48a93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48a940: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x48a940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x48a944: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x48a944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x48a948: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x48a948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x48a94c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x48a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x48a950: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x48a950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x48a954: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x48a954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x48a958: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x48a958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x48a95c: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x48a95cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x48a960: 0xae402400  sw          $zero, 0x2400($s2)
    ctx->pc = 0x48a960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 9216), GPR_U32(ctx, 0));
    // 0x48a964: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48a964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48a968: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x48a968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x48a96c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x48a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x48a970: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x48a970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x48a974: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x48a974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x48a978: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48A978u;
    SET_GPR_U32(ctx, 31, 0x48A980u);
    ctx->pc = 0x48A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48A978u;
    // 0x48a97c: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489EA8u, 0x48A978u, 0x48A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A980u;
label_48a980:
    // 0x48a980: 0xc6402414  lwc1        $f0, 0x2414($s2)
    ctx->pc = 0x48a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 9236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a984: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x48a984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x48a988: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x48A988u;
    {
        const bool branch_taken_0x48a988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A988u;
        // 0x48a98c: 0xe6402000  swc1        $f0, 0x2000($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a988) {
            ctx->pc = 0x48AB0Cu;
            goto label_48ab0c;
        }
    }
    ctx->pc = 0x48A990u;
    // 0x48a990: 0x26422414  addiu       $v0, $s2, 0x2414
    ctx->pc = 0x48a990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 9236));
    // 0x48a994: 0x26572000  addiu       $s7, $s2, 0x2000
    ctx->pc = 0x48a994u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 8192));
    // 0x48a998: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x48a998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x48a99c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x48a99cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a9a0:
    // 0x48a9a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x48a9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x48a9a4: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x48A9A4u;
    {
        const bool branch_taken_0x48a9a4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x48A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9A4u;
        // 0x48a9a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9a4) {
            ctx->pc = 0x48A9DCu;
            goto label_48a9dc;
        }
    }
    ctx->pc = 0x48A9ACu;
    // 0x48a9ac: 0x26442000  addiu       $a0, $s2, 0x2000
    ctx->pc = 0x48a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8192));
label_48a9b0:
    // 0x48a9b0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x48a9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48a9b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48a9b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x48a9b8: 0x0  nop
    ctx->pc = 0x48a9b8u;
    // NOP
    // 0x48a9bc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x48A9BCu;
    {
        const bool branch_taken_0x48a9bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a9bc) {
            ctx->pc = 0x48A9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48A9BCu;
            // 0x48a9c0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48A9D0u;
            goto label_48a9d0;
        }
    }
    ctx->pc = 0x48A9C4u;
    // 0x48a9c4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x48a9c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x48a9c8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x48a9c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a9cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_48a9d0:
    // 0x48a9d0: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x48a9d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x48a9d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x48A9D4u;
    {
        const bool branch_taken_0x48a9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9D4u;
        // 0x48a9d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9d4) {
            ctx->pc = 0x48A9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a9b0;
        }
    }
    ctx->pc = 0x48A9DCu;
label_48a9dc:
    // 0x48a9dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48a9e0: 0x12a2004a  beq         $s5, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x48A9E0u;
    {
        const bool branch_taken_0x48a9e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x48A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48A9E0u;
        // 0x48a9e4: 0x2416001c  addiu       $s6, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a9e0) {
            ctx->pc = 0x48AB0Cu;
            goto label_48ab0c;
        }
    }
    ctx->pc = 0x48A9E8u;
    // 0x48a9e8: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x48a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x48a9ec: 0x2b69818  mult        $s3, $s5, $s6
    ctx->pc = 0x48a9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x48a9f0: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x48a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x48a9f4: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x48a9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x48a9f8: 0x243a021  addu        $s4, $s2, $v1
    ctx->pc = 0x48a9f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x48a9fc: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x48a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x48aa00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x48aa00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa04: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x48aa04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa08: 0x26652400  addiu       $a1, $s3, 0x2400
    ctx->pc = 0x48aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 9216));
    // 0x48aa0c: 0xc122838  jal         func_48A0E0
    ctx->pc = 0x48AA0Cu;
    SET_GPR_U32(ctx, 31, 0x48AA14u);
    ctx->pc = 0x48AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AA0Cu;
    // 0x48aa10: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A0E0u, 0x48AA0Cu, 0x48AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AA14u;
label_48aa14:
    // 0x48aa14: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x48AA14u;
    {
        const bool branch_taken_0x48aa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AA14u;
        // 0x48aa18: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aa14) {
            ctx->pc = 0x48AAECu;
            goto label_48aaec;
        }
    }
    ctx->pc = 0x48AA1Cu;
    // 0x48aa1c: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x48aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x48aa20: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x48aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x48aa24: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x48aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x48aa28: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x48aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x48aa2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x48aa2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa30: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x48aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x48aa34: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x48aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48aa38: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x48aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x48aa3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x48aa3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa40: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x48aa40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x48aa44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x48aa48: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48aa4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x48aa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x48aa50: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x48aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x48aa54: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x48aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x48aa58: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x48aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x48aa5c: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48AA5Cu;
    SET_GPR_U32(ctx, 31, 0x48AA64u);
    ctx->pc = 0x48AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AA5Cu;
    // 0x48aa60: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489EA8u, 0x48AA5Cu, 0x48AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AA64u;
label_48aa64:
    // 0x48aa64: 0x2161818  mult        $v1, $s0, $s6
    ctx->pc = 0x48aa64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x48aa68: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x48aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x48aa6c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x48aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x48aa70: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x48aa70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa74: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x48aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x48aa78: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x48aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48aa7c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x48aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x48aa80: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x48aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x48aa84: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x48aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x48aa88: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x48aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x48aa8c: 0xa0400018  sb          $zero, 0x18($v0)
    ctx->pc = 0x48aa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x48aa90: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x48aa90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48aa94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x48aa98: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48aa9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x48aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x48aaa0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x48aaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x48aaa4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x48aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x48aaa8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x48aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x48aaac: 0xc1227aa  jal         func_489EA8
    ctx->pc = 0x48AAACu;
    SET_GPR_U32(ctx, 31, 0x48AAB4u);
    ctx->pc = 0x48AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AAACu;
    // 0x48aab0: 0xac400014  sw          $zero, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489EA8u, 0x48AAACu, 0x48AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AAB4u;
label_48aab4:
    // 0x48aab4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x48aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48aab8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x48aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x48aabc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x48aabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48aac0: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x48aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x48aac4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x48aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x48aac8: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x48aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x48aacc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x48aaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x48aad0: 0x400013  mtlo        $v0
    ctx->pc = 0x48aad0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x48aad4: 0x72162000  madd        $a0, $s0, $s6
    ctx->pc = 0x48aad4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x48aad8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x48aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x48aadc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x48aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x48aae0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x48aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48aae4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48AAE4u;
    {
        const bool branch_taken_0x48aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AAE4u;
        // 0x48aae8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48aae4) {
            ctx->pc = 0x48AAFCu;
            goto label_48aafc;
        }
    }
    ctx->pc = 0x48AAECu;
label_48aaec:
    // 0x48aaec: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x48aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x48aaf0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x48aaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x48aaf4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x48aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x48aaf8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x48aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_48aafc:
    // 0x48aafc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48aafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48ab00: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x48ab00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x48ab04: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x48AB04u;
    {
        const bool branch_taken_0x48ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AB04u;
        // 0x48ab08: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ab04) {
            ctx->pc = 0x48A9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48a9a0;
        }
    }
    ctx->pc = 0x48AB0Cu;
label_48ab0c:
    // 0x48ab0c: 0x1bc00017  blez        $fp, . + 4 + (0x17 << 2)
    ctx->pc = 0x48AB0Cu;
    {
        const bool branch_taken_0x48ab0c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x48AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AB0Cu;
        // 0x48ab10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ab0c) {
            ctx->pc = 0x48AB6Cu;
            goto label_48ab6c;
        }
    }
    ctx->pc = 0x48AB14u;
    // 0x48ab14: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x48ab14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ab18: 0x26532400  addiu       $s3, $s2, 0x2400
    ctx->pc = 0x48ab18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 9216));
    // 0x48ab1c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x48ab1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48ab20:
    // 0x48ab20: 0x8e444000  lw          $a0, 0x4000($s2)
    ctx->pc = 0x48ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16384)));
    // 0x48ab24: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x48ab24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x48ab28: 0x8f868668  lw          $a2, -0x7998($gp)
    ctx->pc = 0x48ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936168)));
    // 0x48ab2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x48ab2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ab30: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x48ab30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ab34: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x48ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x48ab38: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x48ab38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x48ab3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x48ab3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x48ab40: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x48ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x48ab44: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x48ab44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x48ab48: 0xc122738  jal         func_489CE0
    ctx->pc = 0x48AB48u;
    SET_GPR_U32(ctx, 31, 0x48AB50u);
    ctx->pc = 0x48AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AB48u;
    // 0x48ab4c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489CE0u, 0x48AB48u, 0x48AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AB50u;
label_48ab50:
    // 0x48ab50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x48ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ab54: 0xc1225d4  jal         func_489750
    ctx->pc = 0x48AB54u;
    SET_GPR_U32(ctx, 31, 0x48AB5Cu);
    ctx->pc = 0x48AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48AB54u;
    // 0x48ab58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489750u, 0x48AB54u, 0x48AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48AB5Cu;
label_48ab5c:
    // 0x48ab5c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x48ab5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x48ab60: 0x21e102a  slt         $v0, $s0, $fp
    ctx->pc = 0x48ab60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x48ab64: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48AB64u;
    {
        const bool branch_taken_0x48ab64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AB64u;
        // 0x48ab68: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48ab64) {
            ctx->pc = 0x48AB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48ab20;
        }
    }
    ctx->pc = 0x48AB6Cu;
label_48ab6c:
    // 0x48ab6c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x48ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_48ab70:
    // 0x48ab70: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x48ab70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x48ab74: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x48ab74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x48ab78: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x48ab78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x48ab7c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x48ab7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x48ab80: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x48ab80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48ab84: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x48ab84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48ab88: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48ab88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48ab8c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x48ab8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48ab90: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x48ab90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48ab94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48ab94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48ab98: 0x3e00008  jr          $ra
    ctx->pc = 0x48AB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48AB98u;
        // 0x48ab9c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48AB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48ABA0u;
}

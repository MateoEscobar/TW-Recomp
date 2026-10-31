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

// Function: sub_004AC258
// Address: 0x4ac258 - 0x4ac3b8
void sub_004AC258_0x4ac258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC258_0x4ac258");
#endif

    switch (ctx->pc) {
        case 0x4ac2c8u: goto label_4ac2c8;
        case 0x4ac2ecu: goto label_4ac2ec;
        case 0x4ac310u: goto label_4ac310;
        case 0x4ac338u: goto label_4ac338;
        case 0x4ac350u: goto label_4ac350;
        default: break;
    }

    ctx->pc = 0x4ac258u;

    // 0x4ac258: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ac258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4ac25c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x4ac25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x4ac260: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4ac260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4ac264: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ac264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ac268: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ac268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ac26c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ac26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac270: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4ac270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4ac274: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac278: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4ac278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4ac27c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x4ac27cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac280: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4ac280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4ac284: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4ac284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4ac288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ac28c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac290: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4ac290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4ac294: 0x9064001a  lbu         $a0, 0x1A($v1)
    ctx->pc = 0x4ac294u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ac298: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x4ac298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x4ac29c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC29Cu;
    {
        const bool branch_taken_0x4ac29c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC29Cu;
        // 0x4ac2a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac29c) {
            ctx->pc = 0x4AC2B4u;
            goto label_4ac2b4;
        }
    }
    ctx->pc = 0x4AC2A4u;
    // 0x4ac2a4: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x4ac2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x4ac2a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ac2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac2ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AC2ACu;
    {
        const bool branch_taken_0x4ac2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC2ACu;
        // 0x4ac2b0: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac2ac) {
            ctx->pc = 0x4AC2F0u;
            goto label_4ac2f0;
        }
    }
    ctx->pc = 0x4AC2B4u;
label_4ac2b4:
    // 0x4ac2b4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4ac2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ac2b8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC2B8u;
    {
        const bool branch_taken_0x4ac2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac2b8) {
            ctx->pc = 0x4AC2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC2B8u;
            // 0x4ac2bc: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC2D0u;
            goto label_4ac2d0;
        }
    }
    ctx->pc = 0x4AC2C0u;
    // 0x4ac2c0: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AC2C0u;
    SET_GPR_U32(ctx, 31, 0x4AC2C8u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AC2C0u, 0x4AC2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC2C8u;
label_4ac2c8:
    // 0x4ac2c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac2cc: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ac2ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ac2d0:
    // 0x4ac2d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ac2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ac2d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ac2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ac2d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ac2d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ac2dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC2DCu;
    {
        const bool branch_taken_0x4ac2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC2DCu;
        // 0x4ac2e0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac2dc) {
            ctx->pc = 0x4AC2F0u;
            goto label_4ac2f0;
        }
    }
    ctx->pc = 0x4AC2E4u;
    // 0x4ac2e4: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4AC2E4u;
    SET_GPR_U32(ctx, 31, 0x4AC2ECu);
    ctx->pc = 0x4AC2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC2E4u;
    // 0x4ac2e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4AC2E4u, 0x4AC2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC2ECu;
label_4ac2ec:
    // 0x4ac2ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ac2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac2f0:
    // 0x4ac2f0: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4AC2F0u;
    {
        const bool branch_taken_0x4ac2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC2F0u;
        // 0x4ac2f4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac2f0) {
            ctx->pc = 0x4AC384u;
            goto label_4ac384;
        }
    }
    ctx->pc = 0x4AC2F8u;
    // 0x4ac2f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac2fc: 0x2456c531  addiu       $s6, $v0, -0x3ACF
    ctx->pc = 0x4ac2fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
    // 0x4ac300: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x4ac300u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ac304: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x4ac304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ac308: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4AC308u;
    {
        const bool branch_taken_0x4ac308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC308u;
        // 0x4ac30c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac308) {
            ctx->pc = 0x4AC348u;
            goto label_4ac348;
        }
    }
    ctx->pc = 0x4AC310u;
label_4ac310:
    // 0x4ac310: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4ac310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ac314: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4ac314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x4ac318: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC318u;
    {
        const bool branch_taken_0x4ac318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac318) {
            ctx->pc = 0x4AC31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC318u;
            // 0x4ac31c: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC32Cu;
            goto label_4ac32c;
        }
    }
    ctx->pc = 0x4AC320u;
    // 0x4ac320: 0x56740007  bnel        $s3, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC320u;
    {
        const bool branch_taken_0x4ac320 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x4ac320) {
            ctx->pc = 0x4AC324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC320u;
            // 0x4ac324: 0xa2250000  sb          $a1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC340u;
            goto label_4ac340;
        }
    }
    ctx->pc = 0x4AC328u;
    // 0x4ac328: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4ac328u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_4ac32c:
    // 0x4ac32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ac32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac330: 0xc12bed0  jal         func_4AFB40
    ctx->pc = 0x4AC330u;
    SET_GPR_U32(ctx, 31, 0x4AC338u);
    ctx->pc = 0x4AC334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC330u;
    // 0x4ac334: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB40u, 0x4AC330u, 0x4AC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC338u;
label_4ac338:
    // 0x4ac338: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AC338u;
    {
        const bool branch_taken_0x4ac338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac338) {
            ctx->pc = 0x4AC36Cu;
            goto label_4ac36c;
        }
    }
    ctx->pc = 0x4AC340u;
label_4ac340:
    // 0x4ac340: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4ac340u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x4ac344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4ac344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4ac348:
    // 0x4ac348: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AC348u;
    SET_GPR_U32(ctx, 31, 0x4AC350u);
    ctx->pc = 0x4AC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC348u;
    // 0x4ac34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AC348u, 0x4AC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC350u;
label_4ac350:
    // 0x4ac350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac354: 0x14b5ffee  bne         $a1, $s5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4AC354u;
    {
        const bool branch_taken_0x4ac354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        ctx->pc = 0x4AC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC354u;
        // 0x4ac358: 0xb61821  addu        $v1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac354) {
            ctx->pc = 0x4AC310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ac310;
        }
    }
    ctx->pc = 0x4AC35Cu;
    // 0x4ac35c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac360: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ac364: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4ac364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4ac368: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ac368u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ac36c:
    // 0x4ac36c: 0x56370006  bnel        $s1, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AC36Cu;
    {
        const bool branch_taken_0x4ac36c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x4ac36c) {
            ctx->pc = 0x4AC370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC36Cu;
            // 0x4ac370: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC388u;
            goto label_4ac388;
        }
    }
    ctx->pc = 0x4AC374u;
    // 0x4ac374: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac378: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ac37c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4ac37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4ac380: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4ac380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4ac384:
    // 0x4ac384: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x4ac384u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_4ac388:
    // 0x4ac388: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ac388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac38c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4ac38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ac390: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x4ac390u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ac394: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4ac394u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ac398: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4ac398u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ac39c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ac39cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ac3a0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4ac3a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac3a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ac3a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac3a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ac3a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC3B0u;
        // 0x4ac3b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC3B8u;
}

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

// Function: sub_002511C8
// Address: 0x2511c8 - 0x2513a8
void sub_002511C8_0x2511c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002511C8_0x2511c8");
#endif

    switch (ctx->pc) {
        case 0x251214u: goto label_251214;
        case 0x251258u: goto label_251258;
        case 0x251290u: goto label_251290;
        case 0x2512a4u: goto label_2512a4;
        case 0x2512b4u: goto label_2512b4;
        case 0x2512c0u: goto label_2512c0;
        case 0x2512f0u: goto label_2512f0;
        case 0x251318u: goto label_251318;
        case 0x251334u: goto label_251334;
        case 0x251344u: goto label_251344;
        case 0x251360u: goto label_251360;
        case 0x251370u: goto label_251370;
        default: break;
    }

    ctx->pc = 0x2511c8u;

    // 0x2511c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2511c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2511cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2511ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2511d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2511d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2511d4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2511d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511d8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2511d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2511dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2511dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511e0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2511e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2511e4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2511e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511e8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2511e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2511ec: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2511ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511f0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2511f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2511f4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2511f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2511f8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2511f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2511fc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2511fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x251200: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x251200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x251204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251208: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x251208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x25120c: 0xc0944ea  jal         func_2513A8
    ctx->pc = 0x25120Cu;
    SET_GPR_U32(ctx, 31, 0x251214u);
    ctx->pc = 0x251210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25120Cu;
    // 0x251210: 0xafa90004  sw          $t1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513A8u, 0x25120Cu, 0x251214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251214u;
label_251214:
    // 0x251214: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251218: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x251218u;
    {
        const bool branch_taken_0x251218 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x25121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251218u;
        // 0x25121c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251218) {
            ctx->pc = 0x251260u;
            goto label_251260;
        }
    }
    ctx->pc = 0x251220u;
    // 0x251220: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x251220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x251224: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x251224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x251228: 0x34a5feff  ori         $a1, $a1, 0xFEFF
    ctx->pc = 0x251228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65279);
    // 0x25122c: 0x2651024  and         $v0, $s3, $a1
    ctx->pc = 0x25122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x251230: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x251230u;
    {
        const bool branch_taken_0x251230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x251234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251230u;
        // 0x251234: 0x8fa80000  lw          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251230) {
            ctx->pc = 0x25125Cu;
            goto label_25125c;
        }
    }
    ctx->pc = 0x251238u;
    // 0x251238: 0x3673008c  ori         $s3, $s3, 0x8C
    ctx->pc = 0x251238u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)140);
    // 0x25123c: 0x2655024  and         $t2, $s3, $a1
    ctx->pc = 0x25123cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) & GPR_U64(ctx, 5));
    // 0x251240: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x251240u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x251244: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x251244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251248: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x251248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25124c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x25124cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251250: 0xc0944ea  jal         func_2513A8
    ctx->pc = 0x251250u;
    SET_GPR_U32(ctx, 31, 0x251258u);
    ctx->pc = 0x251254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251250u;
    // 0x251254: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513A8u, 0x251250u, 0x251258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251258u;
label_251258:
    // 0x251258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25125c:
    // 0x25125c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x25125cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_251260:
    // 0x251260: 0x8c43059c  lw          $v1, 0x59C($v0)
    ctx->pc = 0x251260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1436)));
    // 0x251264: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x251264u;
    {
        const bool branch_taken_0x251264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251264u;
        // 0x251268: 0x32620100  andi        $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251264) {
            ctx->pc = 0x251370u;
            goto label_251370;
        }
    }
    ctx->pc = 0x25126Cu;
    // 0x25126c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x25126Cu;
    {
        const bool branch_taken_0x25126c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25126Cu;
        // 0x251270: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25126c) {
            ctx->pc = 0x251374u;
            goto label_251374;
        }
    }
    ctx->pc = 0x251274u;
    // 0x251274: 0x1240003e  beqz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x251274u;
    {
        const bool branch_taken_0x251274 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251274u;
        // 0x251278: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251274) {
            ctx->pc = 0x251370u;
            goto label_251370;
        }
    }
    ctx->pc = 0x25127Cu;
    // 0x25127c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x25127Cu;
    {
        const bool branch_taken_0x25127c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25127Cu;
        // 0x251280: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25127c) {
            ctx->pc = 0x251370u;
            goto label_251370;
        }
    }
    ctx->pc = 0x251284u;
    // 0x251284: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x251284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x251288: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x251288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25128c: 0x0  nop
    ctx->pc = 0x25128cu;
    // NOP
label_251290:
    // 0x251290: 0x1a20000f  blez        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x251290u;
    {
        const bool branch_taken_0x251290 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x251294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251290u;
        // 0x251294: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251290) {
            ctx->pc = 0x2512D0u;
            goto label_2512d0;
        }
    }
    ctx->pc = 0x251298u;
    // 0x251298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25129c: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x25129Cu;
    SET_GPR_U32(ctx, 31, 0x2512A4u);
    ctx->pc = 0x2512A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25129Cu;
    // 0x2512a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x25129Cu, 0x2512A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512A4u;
label_2512a4:
    // 0x2512a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2512a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2512a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512ac: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x2512ACu;
    SET_GPR_U32(ctx, 31, 0x2512B4u);
    ctx->pc = 0x2512B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2512ACu;
    // 0x2512b0: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x2512ACu, 0x2512B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512B4u;
label_2512b4:
    // 0x2512b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2512b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512b8: 0xc09441c  jal         func_251070
    ctx->pc = 0x2512B8u;
    SET_GPR_U32(ctx, 31, 0x2512C0u);
    ctx->pc = 0x2512BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2512B8u;
    // 0x2512bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251070u, 0x2512B8u, 0x2512C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512C0u;
label_2512c0:
    // 0x2512c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2512c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2512c4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2512C4u;
    {
        const bool branch_taken_0x2512c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2512c4) {
            ctx->pc = 0x251290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251290;
        }
    }
    ctx->pc = 0x2512CCu;
    // 0x2512cc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2512ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2512d0:
    // 0x2512d0: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
    ctx->pc = 0x2512D0u;
    {
        const bool branch_taken_0x2512d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D0u;
        // 0x2512d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512d0) {
            ctx->pc = 0x251370u;
            goto label_251370;
        }
    }
    ctx->pc = 0x2512D8u;
    // 0x2512d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2512d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2512dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2512dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512e0: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x2512e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x2512e4: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2512e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x2512e8: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x2512E8u;
    SET_GPR_U32(ctx, 31, 0x2512F0u);
    ctx->pc = 0x2512ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2512E8u;
    // 0x2512ec: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x2512E8u, 0x2512F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512F0u;
label_2512f0:
    // 0x2512f0: 0x94430016  lhu         $v1, 0x16($v0)
    ctx->pc = 0x2512f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x2512f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2512f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2512f8: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2512f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2512fc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2512fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251300: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x251300u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x251304: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x251304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251308: 0xa60305a4  sh          $v1, 0x5A4($s0)
    ctx->pc = 0x251308u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 3));
    // 0x25130c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x25130cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251310: 0xc0944ea  jal         func_2513A8
    ctx->pc = 0x251310u;
    SET_GPR_U32(ctx, 31, 0x251318u);
    ctx->pc = 0x251314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251310u;
    // 0x251314: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513A8u, 0x251310u, 0x251318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251318u;
label_251318:
    // 0x251318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x251318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25131c: 0x3402fde8  ori         $v0, $zero, 0xFDE8
    ctx->pc = 0x25131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65000);
    // 0x251320: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x251320u;
    {
        const bool branch_taken_0x251320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x251324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251320u;
        // 0x251324: 0xa60205a4  sh          $v0, 0x5A4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251320) {
            ctx->pc = 0x251370u;
            goto label_251370;
        }
    }
    ctx->pc = 0x251328u;
    // 0x251328: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25132c: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x25132Cu;
    SET_GPR_U32(ctx, 31, 0x251334u);
    ctx->pc = 0x251330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25132Cu;
    // 0x251330: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x25132Cu, 0x251334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251334u;
label_251334:
    // 0x251334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x251338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25133c: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x25133Cu;
    SET_GPR_U32(ctx, 31, 0x251344u);
    ctx->pc = 0x251340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25133Cu;
    // 0x251340: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x25133Cu, 0x251344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251344u;
label_251344:
    // 0x251344: 0x96040018  lhu         $a0, 0x18($s0)
    ctx->pc = 0x251344u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x251348: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x251348u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25134c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x25134cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x251350: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x251350u;
    {
        const bool branch_taken_0x251350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x251350) {
            ctx->pc = 0x251368u;
            goto label_251368;
        }
    }
    ctx->pc = 0x251358u;
    // 0x251358: 0xc0945a0  jal         func_251680
    ctx->pc = 0x251358u;
    SET_GPR_U32(ctx, 31, 0x251360u);
    ctx->pc = 0x25135Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251358u;
    // 0x25135c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251680u, 0x251358u, 0x251360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251360u;
label_251360:
    // 0x251360: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251360u;
    {
        const bool branch_taken_0x251360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251360u;
        // 0x251364: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251360) {
            ctx->pc = 0x251374u;
            goto label_251374;
        }
    }
    ctx->pc = 0x251368u;
label_251368:
    // 0x251368: 0xc0945a0  jal         func_251680
    ctx->pc = 0x251368u;
    SET_GPR_U32(ctx, 31, 0x251370u);
    ctx->pc = 0x25136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251368u;
    // 0x25136c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251680u, 0x251368u, 0x251370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251370u;
label_251370:
    // 0x251370: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x251370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_251374:
    // 0x251374: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x251374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x251378: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x251378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25137c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x25137cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251380: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x251380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x251384: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x251384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251388: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x251388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25138c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x25138cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251390: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x251390u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251394: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x251394u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25139c: 0x3e00008  jr          $ra
    ctx->pc = 0x25139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2513A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25139Cu;
        // 0x2513a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25139Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2513A4u;
    // 0x2513a4: 0x0  nop
    ctx->pc = 0x2513a4u;
    // NOP
    ctx->pc = 0x2513a8u;
}

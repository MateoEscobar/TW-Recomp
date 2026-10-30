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

// Function: sub_004AF250
// Address: 0x4af250 - 0x4af4a8
void sub_004AF250_0x4af250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF250_0x4af250");
#endif

    switch (ctx->pc) {
        case 0x4af298u: goto label_4af298;
        case 0x4af2b0u: goto label_4af2b0;
        case 0x4af2ecu: goto label_4af2ec;
        case 0x4af30cu: goto label_4af30c;
        case 0x4af338u: goto label_4af338;
        case 0x4af364u: goto label_4af364;
        case 0x4af3f8u: goto label_4af3f8;
        case 0x4af41cu: goto label_4af41c;
        default: break;
    }

    ctx->pc = 0x4af250u;

label_4af250:
    // 0x4af250: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x4af250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x4af254: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x4af254u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x4af258: 0xffb30240  sd          $s3, 0x240($sp)
    ctx->pc = 0x4af258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 19));
    // 0x4af25c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4af25cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af260: 0xffb10220  sd          $s1, 0x220($sp)
    ctx->pc = 0x4af260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 17));
    // 0x4af264: 0x69e03  sra         $s3, $a2, 24
    ctx->pc = 0x4af264u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 24));
    // 0x4af268: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x4af268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x4af26c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4af26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af270: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4af270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af274: 0xffb50260  sd          $s5, 0x260($sp)
    ctx->pc = 0x4af274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 21));
    // 0x4af278: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x4af278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x4af27c: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x4af27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
    // 0x4af280: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4af280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af284: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x4af284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x4af288: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x4af288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4af28c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4af28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af290: 0xc12ca4e  jal         func_4B2938
    ctx->pc = 0x4AF290u;
    SET_GPR_U32(ctx, 31, 0x4AF298u);
    ctx->pc = 0x4AF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF290u;
    // 0x4af294: 0x27a90200  addiu       $t1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B2938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B2938u, 0x4AF290u, 0x4AF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF298u;
label_4af298:
    // 0x4af298: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x4af298u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af29c: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x4af29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x4af2a0: 0x10750005  beq         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF2A0u;
    {
        const bool branch_taken_0x4af2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x4AF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF2A0u;
        // 0x4af2a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af2a0) {
            ctx->pc = 0x4AF2B8u;
            goto label_4af2b8;
        }
    }
    ctx->pc = 0x4AF2A8u;
    // 0x4af2a8: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AF2A8u;
    SET_GPR_U32(ctx, 31, 0x4AF2B0u);
    ctx->pc = 0x4AF2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF2A8u;
    // 0x4af2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AF2A8u, 0x4AF2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF2B0u;
label_4af2b0:
    // 0x4af2b0: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x4af2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x4af2b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4af2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4af2b8:
    // 0x4af2b8: 0xde140000  ld          $s4, 0x0($s0)
    ctx->pc = 0x4af2b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af2bc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x4af2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x4af2c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4af2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4af2c4: 0x282102d  daddu       $v0, $s4, $v0
    ctx->pc = 0x4af2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
    // 0x4af2c8: 0x10750015  beq         $v1, $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x4AF2C8u;
    {
        const bool branch_taken_0x4af2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x4AF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF2C8u;
        // 0x4af2cc: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af2c8) {
            ctx->pc = 0x4AF320u;
            goto label_4af320;
        }
    }
    ctx->pc = 0x4AF2D0u;
    // 0x4af2d0: 0x10730013  beq         $v1, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x4AF2D0u;
    {
        const bool branch_taken_0x4af2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x4AF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF2D0u;
        // 0x4af2d4: 0x64420001  daddiu      $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af2d0) {
            ctx->pc = 0x4AF320u;
            goto label_4af320;
        }
    }
    ctx->pc = 0x4AF2D8u;
    // 0x4af2d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4af2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2dc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x4af2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x4af2e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4af2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2e4: 0xc12bc94  jal         func_4AF250
    ctx->pc = 0x4AF2E4u;
    SET_GPR_U32(ctx, 31, 0x4AF2ECu);
    ctx->pc = 0x4AF2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF2E4u;
    // 0x4af2e8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF250u;
    goto label_4af250;
    ctx->pc = 0x4AF2ECu;
label_4af2ec:
    // 0x4af2ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4af2ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af2f0: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4AF2F0u;
    {
        const bool branch_taken_0x4af2f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF2F0u;
        // 0x4af2f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af2f0) {
            ctx->pc = 0x4AF364u;
            goto label_4af364;
        }
    }
    ctx->pc = 0x4AF2F8u;
    // 0x4af2f8: 0x14803c  dsll32      $s0, $s4, 0
    ctx->pc = 0x4af2f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 0));
    // 0x4af2fc: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4af2fcu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4af300: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x4af300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x4af304: 0xc10c190  jal         func_430640
    ctx->pc = 0x4AF304u;
    SET_GPR_U32(ctx, 31, 0x4AF30Cu);
    ctx->pc = 0x4AF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF304u;
    // 0x4af308: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4AF304u, 0x4AF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF30Cu;
label_4af30c:
    // 0x4af30c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x4af30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x4af310: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x4af310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x4af314: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x4af314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x4af318: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4AF318u;
    {
        const bool branch_taken_0x4af318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF318u;
        // 0x4af31c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af318) {
            ctx->pc = 0x4AF364u;
            goto label_4af364;
        }
    }
    ctx->pc = 0x4AF320u;
label_4af320:
    // 0x4af320: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x4af320u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af324: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x4af324u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x4af328: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x4af328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x4af32c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x4af32cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x4af330: 0xc1367b0  jal         func_4D9EC0
    ctx->pc = 0x4AF330u;
    SET_GPR_U32(ctx, 31, 0x4AF338u);
    ctx->pc = 0x4D9EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9EC0u, 0x4AF330u, 0x4AF338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF338u;
label_4af338:
    // 0x4af338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4af338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af33c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AF33Cu;
    {
        const bool branch_taken_0x4af33c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF33Cu;
        // 0x4af340: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af33c) {
            ctx->pc = 0x4AF364u;
            goto label_4af364;
        }
    }
    ctx->pc = 0x4AF344u;
    // 0x4af344: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4af344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af348: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4af348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af34c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4af34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4af350: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x4af350u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4af354: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4af354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af358: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x4af358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x4af35c: 0xc10c190  jal         func_430640
    ctx->pc = 0x4AF35Cu;
    SET_GPR_U32(ctx, 31, 0x4AF364u);
    ctx->pc = 0x4AF360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF35Cu;
    // 0x4af360: 0x922023  subu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4AF35Cu, 0x4AF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF364u;
label_4af364:
    // 0x4af364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4af364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af368: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x4af368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x4af36c: 0xdfb50260  ld          $s5, 0x260($sp)
    ctx->pc = 0x4af36cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x4af370: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x4af370u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x4af374: 0xdfb30240  ld          $s3, 0x240($sp)
    ctx->pc = 0x4af374u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x4af378: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x4af378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x4af37c: 0xdfb10220  ld          $s1, 0x220($sp)
    ctx->pc = 0x4af37cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x4af380: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x4af380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x4af384: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF384u;
        // 0x4af388: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF38Cu;
    // 0x4af38c: 0x0  nop
    ctx->pc = 0x4af38cu;
    // NOP
    // 0x4af390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4af390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4af394: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x4af394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x4af398: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4af398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4af39c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4af39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4af3a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4af3a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af3a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4af3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4af3a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4af3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4af3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4af3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af3b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af3b4: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af3b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af3b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF3B8u;
    {
        const bool branch_taken_0x4af3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3B8u;
        // 0x4af3bc: 0x68e03  sra         $s1, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3b8) {
            ctx->pc = 0x4AF3D0u;
            goto label_4af3d0;
        }
    }
    ctx->pc = 0x4AF3C0u;
    // 0x4af3c0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4af3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4af3c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4af3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af3c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4AF3C8u;
    {
        const bool branch_taken_0x4af3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3C8u;
        // 0x4af3cc: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3c8) {
            ctx->pc = 0x4AF3FCu;
            goto label_4af3fc;
        }
    }
    ctx->pc = 0x4AF3D0u;
label_4af3d0:
    // 0x4af3d0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4af3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4af3d4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AF3D4u;
    {
        const bool branch_taken_0x4af3d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3D4u;
        // 0x4af3d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3d4) {
            ctx->pc = 0x4AF3FCu;
            goto label_4af3fc;
        }
    }
    ctx->pc = 0x4AF3DCu;
    // 0x4af3dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4af3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4af3e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4af3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4af3e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4af3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4af3e8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AF3E8u;
    {
        const bool branch_taken_0x4af3e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3E8u;
        // 0x4af3ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3e8) {
            ctx->pc = 0x4AF3FCu;
            goto label_4af3fc;
        }
    }
    ctx->pc = 0x4AF3F0u;
    // 0x4af3f0: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AF3F0u;
    SET_GPR_U32(ctx, 31, 0x4AF3F8u);
    ctx->pc = 0x4AF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF3F0u;
    // 0x4af3f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AF3F0u, 0x4AF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF3F8u;
label_4af3f8:
    // 0x4af3f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4af3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4af3fc:
    // 0x4af3fc: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4AF3FCu;
    {
        const bool branch_taken_0x4af3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF3FCu;
        // 0x4af400: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af3fc) {
            ctx->pc = 0x4AF480u;
            goto label_4af480;
        }
    }
    ctx->pc = 0x4AF404u;
    // 0x4af404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4af404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af408: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x4af408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x4af40c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4af40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af410: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4af410u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4af414: 0xc12bc94  jal         func_4AF250
    ctx->pc = 0x4AF414u;
    SET_GPR_U32(ctx, 31, 0x4AF41Cu);
    ctx->pc = 0x4AF418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF414u;
    // 0x4af418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF250u;
    goto label_4af250;
    ctx->pc = 0x4AF41Cu;
label_4af41c:
    // 0x4af41c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AF41Cu;
    {
        const bool branch_taken_0x4af41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF41Cu;
        // 0x4af420: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af41c) {
            ctx->pc = 0x4AF438u;
            goto label_4af438;
        }
    }
    ctx->pc = 0x4AF424u;
    // 0x4af424: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4af424u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af428: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4af428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4af42c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4af42cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4af430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AF430u;
    {
        const bool branch_taken_0x4af430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF430u;
        // 0x4af434: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af430) {
            ctx->pc = 0x4AF440u;
            goto label_4af440;
        }
    }
    ctx->pc = 0x4AF438u;
label_4af438:
    // 0x4af438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4af438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af43c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4af43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_4af440:
    // 0x4af440: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4af440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4af444: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4af444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4af448: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4AF448u;
    {
        const bool branch_taken_0x4af448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF448u;
        // 0x4af44c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af448) {
            ctx->pc = 0x4AF48Cu;
            goto label_4af48c;
        }
    }
    ctx->pc = 0x4AF450u;
    // 0x4af450: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4af450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af454: 0x9043001a  lbu         $v1, 0x1A($v0)
    ctx->pc = 0x4af454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x4af458: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4af458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x4af45c: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x4af45cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x4af460: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4af460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4af464: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AF464u;
    {
        const bool branch_taken_0x4af464 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AF468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF464u;
        // 0x4af468: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af464) {
            ctx->pc = 0x4AF48Cu;
            goto label_4af48c;
        }
    }
    ctx->pc = 0x4AF46Cu;
    // 0x4af46c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4af470: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4af470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4af474: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4af474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4af478: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AF478u;
    {
        const bool branch_taken_0x4af478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF478u;
        // 0x4af47c: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af478) {
            ctx->pc = 0x4AF488u;
            goto label_4af488;
        }
    }
    ctx->pc = 0x4AF480u;
label_4af480:
    // 0x4af480: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4af480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x4af484: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4af484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4af488:
    // 0x4af488: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4af488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4af48c:
    // 0x4af48c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4af48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af490: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4af490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af494: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4af494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af498: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4af498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af49c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF49Cu;
        // 0x4af4a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF4A4u;
    // 0x4af4a4: 0x0  nop
    ctx->pc = 0x4af4a4u;
    // NOP
    ctx->pc = 0x4af4a8u;
}

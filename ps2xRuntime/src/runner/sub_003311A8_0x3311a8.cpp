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

// Function: sub_003311A8
// Address: 0x3311a8 - 0x331350
void sub_003311A8_0x3311a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003311A8_0x3311a8");
#endif

    switch (ctx->pc) {
        case 0x3311e8u: goto label_3311e8;
        case 0x3311f8u: goto label_3311f8;
        case 0x33120cu: goto label_33120c;
        case 0x331220u: goto label_331220;
        case 0x33126cu: goto label_33126c;
        case 0x331298u: goto label_331298;
        case 0x3312b4u: goto label_3312b4;
        case 0x3312d4u: goto label_3312d4;
        case 0x3312e0u: goto label_3312e0;
        case 0x3312f0u: goto label_3312f0;
        case 0x3312fcu: goto label_3312fc;
        case 0x33130cu: goto label_33130c;
        case 0x33131cu: goto label_33131c;
        default: break;
    }

    ctx->pc = 0x3311a8u;

    // 0x3311a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3311a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3311ac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3311acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3311b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3311b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3311b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3311b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3311b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3311bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3311bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311c0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3311c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3311c4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3311c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311c8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3311c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3311cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3311ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3311d0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3311d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3311d4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3311d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3311d8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3311d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3311dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3311dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3311e0: 0xc0c8d6e  jal         func_3235B8
    ctx->pc = 0x3311E0u;
    SET_GPR_U32(ctx, 31, 0x3311E8u);
    ctx->pc = 0x3311E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3311E0u;
    // 0x3311e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235B8u, 0x3311E0u, 0x3311E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311E8u;
label_3311e8:
    // 0x3311e8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3311E8u;
    {
        const bool branch_taken_0x3311e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3311ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3311E8u;
        // 0x3311ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3311e8) {
            ctx->pc = 0x3312CCu;
            goto label_3312cc;
        }
    }
    ctx->pc = 0x3311F0u;
    // 0x3311f0: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x3311F0u;
    SET_GPR_U32(ctx, 31, 0x3311F8u);
    ctx->pc = 0x3311F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3311F0u;
    // 0x3311f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x3311F0u, 0x3311F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311F8u;
label_3311f8:
    // 0x3311f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3311f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3311fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3311fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331200: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331204: 0xc0c8dd2  jal         func_323748
    ctx->pc = 0x331204u;
    SET_GPR_U32(ctx, 31, 0x33120Cu);
    ctx->pc = 0x331208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331204u;
    // 0x331208: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323748u, 0x331204u, 0x33120Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33120Cu;
label_33120c:
    // 0x33120c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x33120cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331210: 0x12c00042  beqz        $s6, . + 4 + (0x42 << 2)
    ctx->pc = 0x331210u;
    {
        const bool branch_taken_0x331210 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x331214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331210u;
        // 0x331214: 0x2634040c  addiu       $s4, $s1, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331210) {
            ctx->pc = 0x33131Cu;
            goto label_33131c;
        }
    }
    ctx->pc = 0x331218u;
    // 0x331218: 0x26be0008  addiu       $fp, $s5, 0x8
    ctx->pc = 0x331218u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x33121c: 0x26b7000c  addiu       $s7, $s5, 0xC
    ctx->pc = 0x33121cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
label_331220:
    // 0x331220: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x331220u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331224: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x331224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x331228: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x331228u;
    {
        const bool branch_taken_0x331228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331228) {
            ctx->pc = 0x33122Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331228u;
            // 0x33122c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331258u;
            goto label_331258;
        }
    }
    ctx->pc = 0x331230u;
    // 0x331230: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x331230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x331234: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x331234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x331238: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x331238u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33123c: 0x2442c531  addiu       $v0, $v0, -0x3ACF
    ctx->pc = 0x33123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952241));
    // 0x331240: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x331240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x331244: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x331244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331248: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x331248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x33124c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33124Cu;
    {
        const bool branch_taken_0x33124c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33124Cu;
        // 0x331250: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33124c) {
            ctx->pc = 0x331284u;
            goto label_331284;
        }
    }
    ctx->pc = 0x331254u;
    // 0x331254: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x331254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_331258:
    // 0x331258: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x331258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x33125c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33125Cu;
    {
        const bool branch_taken_0x33125c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33125c) {
            ctx->pc = 0x331260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33125Cu;
            // 0x331260: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331270u;
            goto label_331270;
        }
    }
    ctx->pc = 0x331264u;
    // 0x331264: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x331264u;
    SET_GPR_U32(ctx, 31, 0x33126Cu);
    ctx->pc = 0x331268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331264u;
    // 0x331268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x331264u, 0x33126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33126Cu;
label_33126c:
    // 0x33126c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x33126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_331270:
    // 0x331270: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x331270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331274: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x331274u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x331278: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x331278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33127c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33127Cu;
    {
        const bool branch_taken_0x33127c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33127Cu;
        // 0x331280: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33127c) {
            ctx->pc = 0x3312B4u;
            goto label_3312b4;
        }
    }
    ctx->pc = 0x331284u;
label_331284:
    // 0x331284: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x331284u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x331288: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33128c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x33128cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x331290: 0xc0cc0da  jal         func_330368
    ctx->pc = 0x331290u;
    SET_GPR_U32(ctx, 31, 0x331298u);
    ctx->pc = 0x331294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331290u;
    // 0x331294: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330368u, 0x331290u, 0x331298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331298u;
label_331298:
    // 0x331298: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x331298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33129c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312a0: 0x2e21821  addu        $v1, $s7, $v0
    ctx->pc = 0x3312a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x3312a4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x3312a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x3312a8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3312a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3312ac: 0xc0c929a  jal         func_324A68
    ctx->pc = 0x3312ACu;
    SET_GPR_U32(ctx, 31, 0x3312B4u);
    ctx->pc = 0x3312B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312ACu;
    // 0x3312b0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A68u, 0x3312ACu, 0x3312B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312B4u;
label_3312b4:
    // 0x3312b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3312b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3312b8: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x3312b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x3312bc: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3312BCu;
    {
        const bool branch_taken_0x3312bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3312C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312BCu;
        // 0x3312c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312bc) {
            ctx->pc = 0x331220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331220;
        }
    }
    ctx->pc = 0x3312C4u;
    // 0x3312c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3312C4u;
    {
        const bool branch_taken_0x3312c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3312C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312C4u;
        // 0x3312c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312c4) {
            ctx->pc = 0x331320u;
            goto label_331320;
        }
    }
    ctx->pc = 0x3312CCu;
label_3312cc:
    // 0x3312cc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x3312CCu;
    SET_GPR_U32(ctx, 31, 0x3312D4u);
    ctx->pc = 0x3312D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312CCu;
    // 0x3312d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x3312CCu, 0x3312D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312D4u;
label_3312d4:
    // 0x3312d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3312d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312d8: 0xc0cc3b6  jal         func_330ED8
    ctx->pc = 0x3312D8u;
    SET_GPR_U32(ctx, 31, 0x3312E0u);
    ctx->pc = 0x3312DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312D8u;
    // 0x3312dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330ED8u, 0x3312D8u, 0x3312E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312E0u;
label_3312e0:
    // 0x3312e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3312e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3312e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312e8: 0xc0c9048  jal         func_324120
    ctx->pc = 0x3312E8u;
    SET_GPR_U32(ctx, 31, 0x3312F0u);
    ctx->pc = 0x3312ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312E8u;
    // 0x3312ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324120u, 0x3312E8u, 0x3312F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312F0u;
label_3312f0:
    // 0x3312f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3312f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3312f4: 0xc0c8d6e  jal         func_3235B8
    ctx->pc = 0x3312F4u;
    SET_GPR_U32(ctx, 31, 0x3312FCu);
    ctx->pc = 0x3312F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3312F4u;
    // 0x3312f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235B8u, 0x3312F4u, 0x3312FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312FCu;
label_3312fc:
    // 0x3312fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3312FCu;
    {
        const bool branch_taken_0x3312fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312FCu;
        // 0x331300: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312fc) {
            ctx->pc = 0x331314u;
            goto label_331314;
        }
    }
    ctx->pc = 0x331304u;
    // 0x331304: 0xc0c92d8  jal         func_324B60
    ctx->pc = 0x331304u;
    SET_GPR_U32(ctx, 31, 0x33130Cu);
    ctx->pc = 0x331308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331304u;
    // 0x331308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B60u, 0x331304u, 0x33130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33130Cu;
label_33130c:
    // 0x33130c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33130Cu;
    {
        const bool branch_taken_0x33130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33130Cu;
        // 0x331310: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33130c) {
            ctx->pc = 0x331320u;
            goto label_331320;
        }
    }
    ctx->pc = 0x331314u;
label_331314:
    // 0x331314: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x331314u;
    SET_GPR_U32(ctx, 31, 0x33131Cu);
    ctx->pc = 0x331318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331314u;
    // 0x331318: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x331314u, 0x33131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33131Cu;
label_33131c:
    // 0x33131c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x33131cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_331320:
    // 0x331320: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x331320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x331324: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x331324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x331328: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x331328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33132c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x33132cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x331330: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x331330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331334: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x331334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331338: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x331338u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33133c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x33133cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331344: 0x3e00008  jr          $ra
    ctx->pc = 0x331344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331344u;
        // 0x331348: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33134Cu;
    // 0x33134c: 0x0  nop
    ctx->pc = 0x33134cu;
    // NOP
    ctx->pc = 0x331350u;
}

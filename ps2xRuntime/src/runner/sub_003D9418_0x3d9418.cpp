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

// Function: sub_003D9418
// Address: 0x3d9418 - 0x3d9508
void sub_003D9418_0x3d9418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9418_0x3d9418");
#endif

    switch (ctx->pc) {
        case 0x3d9418u: goto label_3d9418;
        case 0x3d941cu: goto label_3d941c;
        case 0x3d9420u: goto label_3d9420;
        case 0x3d9424u: goto label_3d9424;
        case 0x3d9428u: goto label_3d9428;
        case 0x3d942cu: goto label_3d942c;
        case 0x3d9430u: goto label_3d9430;
        case 0x3d9434u: goto label_3d9434;
        case 0x3d9438u: goto label_3d9438;
        case 0x3d943cu: goto label_3d943c;
        case 0x3d9440u: goto label_3d9440;
        case 0x3d9444u: goto label_3d9444;
        case 0x3d9448u: goto label_3d9448;
        case 0x3d944cu: goto label_3d944c;
        case 0x3d9450u: goto label_3d9450;
        case 0x3d9454u: goto label_3d9454;
        case 0x3d9458u: goto label_3d9458;
        case 0x3d945cu: goto label_3d945c;
        case 0x3d9460u: goto label_3d9460;
        case 0x3d9464u: goto label_3d9464;
        case 0x3d9468u: goto label_3d9468;
        case 0x3d946cu: goto label_3d946c;
        case 0x3d9470u: goto label_3d9470;
        case 0x3d9474u: goto label_3d9474;
        case 0x3d9478u: goto label_3d9478;
        case 0x3d947cu: goto label_3d947c;
        case 0x3d9480u: goto label_3d9480;
        case 0x3d9484u: goto label_3d9484;
        case 0x3d9488u: goto label_3d9488;
        case 0x3d948cu: goto label_3d948c;
        case 0x3d9490u: goto label_3d9490;
        case 0x3d9494u: goto label_3d9494;
        case 0x3d9498u: goto label_3d9498;
        case 0x3d949cu: goto label_3d949c;
        case 0x3d94a0u: goto label_3d94a0;
        case 0x3d94a4u: goto label_3d94a4;
        case 0x3d94a8u: goto label_3d94a8;
        case 0x3d94acu: goto label_3d94ac;
        case 0x3d94b0u: goto label_3d94b0;
        case 0x3d94b4u: goto label_3d94b4;
        case 0x3d94b8u: goto label_3d94b8;
        case 0x3d94bcu: goto label_3d94bc;
        case 0x3d94c0u: goto label_3d94c0;
        case 0x3d94c4u: goto label_3d94c4;
        case 0x3d94c8u: goto label_3d94c8;
        case 0x3d94ccu: goto label_3d94cc;
        case 0x3d94d0u: goto label_3d94d0;
        case 0x3d94d4u: goto label_3d94d4;
        case 0x3d94d8u: goto label_3d94d8;
        case 0x3d94dcu: goto label_3d94dc;
        case 0x3d94e0u: goto label_3d94e0;
        case 0x3d94e4u: goto label_3d94e4;
        case 0x3d94e8u: goto label_3d94e8;
        case 0x3d94ecu: goto label_3d94ec;
        case 0x3d94f0u: goto label_3d94f0;
        case 0x3d94f4u: goto label_3d94f4;
        case 0x3d94f8u: goto label_3d94f8;
        case 0x3d94fcu: goto label_3d94fc;
        case 0x3d9500u: goto label_3d9500;
        case 0x3d9504u: goto label_3d9504;
        default: break;
    }

    ctx->pc = 0x3d9418u;

label_3d9418:
    // 0x3d9418: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x3d9418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
label_3d941c:
    // 0x3d941c: 0x7fb00430  sq          $s0, 0x430($sp)
    ctx->pc = 0x3d941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 16));
label_3d9420:
    // 0x3d9420: 0x7fb10420  sq          $s1, 0x420($sp)
    ctx->pc = 0x3d9420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 17));
label_3d9424:
    // 0x3d9424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9428:
    // 0x3d9428: 0xffbf0410  sd          $ra, 0x410($sp)
    ctx->pc = 0x3d9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 31));
label_3d942c:
    // 0x3d942c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d942cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d9430:
    // 0x3d9430: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d9430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d9434:
    // 0x3d9434: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d9438:
    // 0x3d9438: 0x40f809  jalr        $v0
label_3d943c:
    if (ctx->pc == 0x3D943Cu) {
        ctx->pc = 0x3D943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9438u;
        // 0x3d943c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9440u;
        goto label_3d9440;
    }
    ctx->pc = 0x3D9438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D9440u);
        ctx->pc = 0x3D943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9438u;
        // 0x3d943c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9438u, 0x3D9440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D9440u;
label_3d9440:
    // 0x3d9440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d9440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9444:
    // 0x3d9444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d9444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d9448:
    // 0x3d9448: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d9448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d944c:
    // 0x3d944c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d9450:
    // 0x3d9450: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d9450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d9454:
    // 0x3d9454: 0x0  nop
    ctx->pc = 0x3d9454u;
    // NOP
label_3d9458:
    // 0x3d9458: 0x0  nop
    ctx->pc = 0x3d9458u;
    // NOP
label_3d945c:
    // 0x3d945c: 0x0  nop
    ctx->pc = 0x3d945cu;
    // NOP
label_3d9460:
    // 0x3d9460: 0x0  nop
    ctx->pc = 0x3d9460u;
    // NOP
label_3d9464:
    // 0x3d9464: 0x0  nop
    ctx->pc = 0x3d9464u;
    // NOP
label_3d9468:
    // 0x3d9468: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d946c:
    if (ctx->pc == 0x3D946Cu) {
        ctx->pc = 0x3D946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9468u;
        // 0x3d946c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9470u;
        goto label_3d9470;
    }
    ctx->pc = 0x3D9468u;
    {
        const bool branch_taken_0x3d9468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9468u;
        // 0x3d946c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9468) {
            ctx->pc = 0x3D9458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d9458;
        }
    }
    ctx->pc = 0x3D9470u;
label_3d9470:
    // 0x3d9470: 0xc138ddc  jal         func_4E3770
label_3d9474:
    if (ctx->pc == 0x3D9474u) {
        ctx->pc = 0x3D9478u;
        goto label_3d9478;
    }
    ctx->pc = 0x3D9470u;
    SET_GPR_U32(ctx, 31, 0x3D9478u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D9470u, 0x3D9478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9478u;
label_3d9478:
    // 0x3d9478: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3d9478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3d947c:
    // 0x3d947c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d947cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d9480:
    // 0x3d9480: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d9480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d9484:
    // 0x3d9484: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3d9484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3d9488:
    // 0x3d9488: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d9488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d948c:
    // 0x3d948c: 0xc0cd4ee  jal         func_3353B8
label_3d9490:
    if (ctx->pc == 0x3D9490u) {
        ctx->pc = 0x3D9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D948Cu;
        // 0x3d9490: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9494u;
        goto label_3d9494;
    }
    ctx->pc = 0x3D948Cu;
    SET_GPR_U32(ctx, 31, 0x3D9494u);
    ctx->pc = 0x3D9490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D948Cu;
    // 0x3d9490: 0xe600008c  swc1        $f0, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D948Cu, 0x3D9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9494u;
label_3d9494:
    // 0x3d9494: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x3d9494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_3d9498:
    // 0x3d9498: 0xc0e858c  jal         func_3A1630
label_3d949c:
    if (ctx->pc == 0x3D949Cu) {
        ctx->pc = 0x3D949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9498u;
        // 0x3d949c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94A0u;
        goto label_3d94a0;
    }
    ctx->pc = 0x3D9498u;
    SET_GPR_U32(ctx, 31, 0x3D94A0u);
    ctx->pc = 0x3D949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9498u;
    // 0x3d949c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D9498u, 0x3D94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D94A0u;
label_3d94a0:
    // 0x3d94a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d94a4:
    // 0x3d94a4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3d94a8:
    if (ctx->pc == 0x3D94A8u) {
        ctx->pc = 0x3D94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94A4u;
        // 0x3d94a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94ACu;
        goto label_3d94ac;
    }
    ctx->pc = 0x3D94A4u;
    {
        const bool branch_taken_0x3d94a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d94a4) {
            ctx->pc = 0x3D94A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D94A4u;
            // 0x3d94a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D94B8u;
            goto label_3d94b8;
        }
    }
    ctx->pc = 0x3D94ACu;
label_3d94ac:
    // 0x3d94ac: 0x3c02f45c  lui         $v0, 0xF45C
    ctx->pc = 0x3d94acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62556 << 16));
label_3d94b0:
    // 0x3d94b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3d94b4:
    if (ctx->pc == 0x3D94B4u) {
        ctx->pc = 0x3D94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94B0u;
        // 0x3d94b4: 0x34421cff  ori         $v0, $v0, 0x1CFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94B8u;
        goto label_3d94b8;
    }
    ctx->pc = 0x3D94B0u;
    {
        const bool branch_taken_0x3d94b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94B0u;
        // 0x3d94b4: 0x34421cff  ori         $v0, $v0, 0x1CFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7423);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94b0) {
            ctx->pc = 0x3D94C8u;
            goto label_3d94c8;
        }
    }
    ctx->pc = 0x3D94B8u;
label_3d94b8:
    // 0x3d94b8: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_3d94bc:
    if (ctx->pc == 0x3D94BCu) {
        ctx->pc = 0x3D94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94B8u;
        // 0x3d94bc: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D94C0u;
        goto label_3d94c0;
    }
    ctx->pc = 0x3D94B8u;
    {
        const bool branch_taken_0x3d94b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d94b8) {
            ctx->pc = 0x3D94BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D94B8u;
            // 0x3d94bc: 0x7bb00430  lq          $s0, 0x430($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D94F0u;
            goto label_3d94f0;
        }
    }
    ctx->pc = 0x3D94C0u;
label_3d94c0:
    // 0x3d94c0: 0x3c02f4ba  lui         $v0, 0xF4BA
    ctx->pc = 0x3d94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62650 << 16));
label_3d94c4:
    // 0x3d94c4: 0x34421fff  ori         $v0, $v0, 0x1FFF
    ctx->pc = 0x3d94c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8191);
label_3d94c8:
    // 0x3d94c8: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3d94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3d94cc:
    // 0x3d94cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d94d0:
    // 0x3d94d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d94d4:
    // 0x3d94d4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3d94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_3d94d8:
    // 0x3d94d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3d94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d94dc:
    // 0x3d94dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3d94dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3d94e0:
    // 0x3d94e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3d94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3d94e4:
    // 0x3d94e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3d94e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3d94e8:
    // 0x3d94e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3d94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3d94ec:
    // 0x3d94ec: 0x7bb00430  lq          $s0, 0x430($sp)
    ctx->pc = 0x3d94ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d94f0:
    // 0x3d94f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d94f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d94f4:
    // 0x3d94f4: 0x7bb10420  lq          $s1, 0x420($sp)
    ctx->pc = 0x3d94f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d94f8:
    // 0x3d94f8: 0xdfbf0410  ld          $ra, 0x410($sp)
    ctx->pc = 0x3d94f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_3d94fc:
    // 0x3d94fc: 0x3e00008  jr          $ra
label_3d9500:
    if (ctx->pc == 0x3D9500u) {
        ctx->pc = 0x3D9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94FCu;
        // 0x3d9500: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D9504u;
        goto label_3d9504;
    }
    ctx->pc = 0x3D94FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D94FCu;
        // 0x3d9500: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D94FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9504u;
label_3d9504:
    // 0x3d9504: 0x0  nop
    ctx->pc = 0x3d9504u;
    // NOP
    ctx->pc = 0x3d9508u;
}

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

// Function: sub_0024D340
// Address: 0x24d340 - 0x24d420
void sub_0024D340_0x24d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D340_0x24d340");
#endif

    switch (ctx->pc) {
        case 0x24d340u: goto label_24d340;
        case 0x24d344u: goto label_24d344;
        case 0x24d348u: goto label_24d348;
        case 0x24d34cu: goto label_24d34c;
        case 0x24d350u: goto label_24d350;
        case 0x24d354u: goto label_24d354;
        case 0x24d358u: goto label_24d358;
        case 0x24d35cu: goto label_24d35c;
        case 0x24d360u: goto label_24d360;
        case 0x24d364u: goto label_24d364;
        case 0x24d368u: goto label_24d368;
        case 0x24d36cu: goto label_24d36c;
        case 0x24d370u: goto label_24d370;
        case 0x24d374u: goto label_24d374;
        case 0x24d378u: goto label_24d378;
        case 0x24d37cu: goto label_24d37c;
        case 0x24d380u: goto label_24d380;
        case 0x24d384u: goto label_24d384;
        case 0x24d388u: goto label_24d388;
        case 0x24d38cu: goto label_24d38c;
        case 0x24d390u: goto label_24d390;
        case 0x24d394u: goto label_24d394;
        case 0x24d398u: goto label_24d398;
        case 0x24d39cu: goto label_24d39c;
        case 0x24d3a0u: goto label_24d3a0;
        case 0x24d3a4u: goto label_24d3a4;
        case 0x24d3a8u: goto label_24d3a8;
        case 0x24d3acu: goto label_24d3ac;
        case 0x24d3b0u: goto label_24d3b0;
        case 0x24d3b4u: goto label_24d3b4;
        case 0x24d3b8u: goto label_24d3b8;
        case 0x24d3bcu: goto label_24d3bc;
        case 0x24d3c0u: goto label_24d3c0;
        case 0x24d3c4u: goto label_24d3c4;
        case 0x24d3c8u: goto label_24d3c8;
        case 0x24d3ccu: goto label_24d3cc;
        case 0x24d3d0u: goto label_24d3d0;
        case 0x24d3d4u: goto label_24d3d4;
        case 0x24d3d8u: goto label_24d3d8;
        case 0x24d3dcu: goto label_24d3dc;
        case 0x24d3e0u: goto label_24d3e0;
        case 0x24d3e4u: goto label_24d3e4;
        case 0x24d3e8u: goto label_24d3e8;
        case 0x24d3ecu: goto label_24d3ec;
        case 0x24d3f0u: goto label_24d3f0;
        case 0x24d3f4u: goto label_24d3f4;
        case 0x24d3f8u: goto label_24d3f8;
        case 0x24d3fcu: goto label_24d3fc;
        case 0x24d400u: goto label_24d400;
        case 0x24d404u: goto label_24d404;
        case 0x24d408u: goto label_24d408;
        case 0x24d40cu: goto label_24d40c;
        case 0x24d410u: goto label_24d410;
        case 0x24d414u: goto label_24d414;
        case 0x24d418u: goto label_24d418;
        case 0x24d41cu: goto label_24d41c;
        default: break;
    }

    ctx->pc = 0x24d340u;

label_24d340:
    // 0x24d340: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_24d344:
    // 0x24d344: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x24d344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_24d348:
    // 0x24d348: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x24d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_24d34c:
    // 0x24d34c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24d350:
    // 0x24d350: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x24d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_24d354:
    // 0x24d354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24d358:
    // 0x24d358: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x24d358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_24d35c:
    // 0x24d35c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x24d35cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_24d360:
    // 0x24d360: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_24d364:
    if (ctx->pc == 0x24D364u) {
        ctx->pc = 0x24D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D360u;
        // 0x24d364: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D368u;
        goto label_24d368;
    }
    ctx->pc = 0x24D360u;
    {
        const bool branch_taken_0x24d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D360u;
        // 0x24d364: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d360) {
            ctx->pc = 0x24D408u;
            goto label_24d408;
        }
    }
    ctx->pc = 0x24D368u;
label_24d368:
    // 0x24d368: 0xc088ac6  jal         func_222B18
label_24d36c:
    if (ctx->pc == 0x24D36Cu) {
        ctx->pc = 0x24D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D368u;
        // 0x24d36c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D370u;
        goto label_24d370;
    }
    ctx->pc = 0x24D368u;
    SET_GPR_U32(ctx, 31, 0x24D370u);
    ctx->pc = 0x24D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D368u;
    // 0x24d36c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x24D368u, 0x24D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D370u;
label_24d370:
    // 0x24d370: 0x3c13006f  lui         $s3, 0x6F
    ctx->pc = 0x24d370u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
label_24d374:
    // 0x24d374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d378:
    // 0x24d378: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x24d378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_24d37c:
    // 0x24d37c: 0x0  nop
    ctx->pc = 0x24d37cu;
    // NOP
label_24d380:
    // 0x24d380: 0xc0e4060  jal         func_390180
label_24d384:
    if (ctx->pc == 0x24D384u) {
        ctx->pc = 0x24D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D380u;
        // 0x24d384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D388u;
        goto label_24d388;
    }
    ctx->pc = 0x24D380u;
    SET_GPR_U32(ctx, 31, 0x24D388u);
    ctx->pc = 0x24D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D380u;
    // 0x24d384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24D380u, 0x24D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D388u;
label_24d388:
    // 0x24d388: 0xc0e57ce  jal         func_395F38
label_24d38c:
    if (ctx->pc == 0x24D38Cu) {
        ctx->pc = 0x24D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D388u;
        // 0x24d38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D390u;
        goto label_24d390;
    }
    ctx->pc = 0x24D388u;
    SET_GPR_U32(ctx, 31, 0x24D390u);
    ctx->pc = 0x24D38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D388u;
    // 0x24d38c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24D388u, 0x24D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D390u;
label_24d390:
    // 0x24d390: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24d390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d394:
    // 0x24d394: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_24d398:
    if (ctx->pc == 0x24D398u) {
        ctx->pc = 0x24D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D394u;
        // 0x24d398: 0x8e62bd30  lw          $v0, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D39Cu;
        goto label_24d39c;
    }
    ctx->pc = 0x24D394u;
    {
        const bool branch_taken_0x24d394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D394u;
        // 0x24d398: 0x8e62bd30  lw          $v0, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d394) {
            ctx->pc = 0x24D3B4u;
            goto label_24d3b4;
        }
    }
    ctx->pc = 0x24D39Cu;
label_24d39c:
    // 0x24d39c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24d3a0:
    // 0x24d3a0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x24d3a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_24d3a4:
    // 0x24d3a4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x24d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_24d3a8:
    // 0x24d3a8: 0x60f809  jalr        $v1
label_24d3ac:
    if (ctx->pc == 0x24D3ACu) {
        ctx->pc = 0x24D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3A8u;
        // 0x24d3ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D3B0u;
        goto label_24d3b0;
    }
    ctx->pc = 0x24D3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24D3B0u);
        ctx->pc = 0x24D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3A8u;
        // 0x24d3ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D3A8u, 0x24D3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D3B0u;
label_24d3b0:
    // 0x24d3b0: 0x8e62bd30  lw          $v0, -0x42D0($s3)
    ctx->pc = 0x24d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
label_24d3b4:
    // 0x24d3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24d3b8:
    // 0x24d3b8: 0xc0e4060  jal         func_390180
label_24d3bc:
    if (ctx->pc == 0x24D3BCu) {
        ctx->pc = 0x24D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3B8u;
        // 0x24d3bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D3C0u;
        goto label_24d3c0;
    }
    ctx->pc = 0x24D3B8u;
    SET_GPR_U32(ctx, 31, 0x24D3C0u);
    ctx->pc = 0x24D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3B8u;
    // 0x24d3bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x24D3B8u, 0x24D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3C0u;
label_24d3c0:
    // 0x24d3c0: 0xc0e57ce  jal         func_395F38
label_24d3c4:
    if (ctx->pc == 0x24D3C4u) {
        ctx->pc = 0x24D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3C0u;
        // 0x24d3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D3C8u;
        goto label_24d3c8;
    }
    ctx->pc = 0x24D3C0u;
    SET_GPR_U32(ctx, 31, 0x24D3C8u);
    ctx->pc = 0x24D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3C0u;
    // 0x24d3c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x24D3C0u, 0x24D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3C8u;
label_24d3c8:
    // 0x24d3c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24d3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d3cc:
    // 0x24d3cc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_24d3d0:
    if (ctx->pc == 0x24D3D0u) {
        ctx->pc = 0x24D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3CCu;
        // 0x24d3d0: 0x8e63bd30  lw          $v1, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D3D4u;
        goto label_24d3d4;
    }
    ctx->pc = 0x24D3CCu;
    {
        const bool branch_taken_0x24d3cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3CCu;
        // 0x24d3d0: 0x8e63bd30  lw          $v1, -0x42D0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3cc) {
            ctx->pc = 0x24D3ECu;
            goto label_24d3ec;
        }
    }
    ctx->pc = 0x24D3D4u;
label_24d3d4:
    // 0x24d3d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24d3d8:
    // 0x24d3d8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x24d3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_24d3dc:
    // 0x24d3dc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x24d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_24d3e0:
    // 0x24d3e0: 0x60f809  jalr        $v1
label_24d3e4:
    if (ctx->pc == 0x24D3E4u) {
        ctx->pc = 0x24D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3E0u;
        // 0x24d3e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D3E8u;
        goto label_24d3e8;
    }
    ctx->pc = 0x24D3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24D3E8u);
        ctx->pc = 0x24D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3E0u;
        // 0x24d3e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D3E0u, 0x24D3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D3E8u;
label_24d3e8:
    // 0x24d3e8: 0x8e63bd30  lw          $v1, -0x42D0($s3)
    ctx->pc = 0x24d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950192)));
label_24d3ec:
    // 0x24d3ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24d3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_24d3f0:
    // 0x24d3f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x24d3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_24d3f4:
    // 0x24d3f4: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x24d3f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_24d3f8:
    // 0x24d3f8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x24d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_24d3fc:
    // 0x24d3fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_24d400:
    if (ctx->pc == 0x24D400u) {
        ctx->pc = 0x24D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3FCu;
        // 0x24d400: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D404u;
        goto label_24d404;
    }
    ctx->pc = 0x24D3FCu;
    {
        const bool branch_taken_0x24d3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D3FCu;
        // 0x24d400: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d3fc) {
            ctx->pc = 0x24D380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d380;
        }
    }
    ctx->pc = 0x24D404u;
label_24d404:
    // 0x24d404: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x24d404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24d408:
    // 0x24d408: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x24d408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24d40c:
    // 0x24d40c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d40cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24d410:
    // 0x24d410: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x24d410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24d414:
    // 0x24d414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24d418:
    // 0x24d418: 0x3e00008  jr          $ra
label_24d41c:
    if (ctx->pc == 0x24D41Cu) {
        ctx->pc = 0x24D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D418u;
        // 0x24d41c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D420u;
        goto label_fallthrough_0x24d418;
    }
    ctx->pc = 0x24D418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D418u;
        // 0x24d41c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24d418:
    ctx->pc = 0x24D420u;
}

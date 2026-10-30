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

// Function: sub_0041B3D8
// Address: 0x41b3d8 - 0x41b4c0
void sub_0041B3D8_0x41b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B3D8_0x41b3d8");
#endif

    switch (ctx->pc) {
        case 0x41b3d8u: goto label_41b3d8;
        case 0x41b3dcu: goto label_41b3dc;
        case 0x41b3e0u: goto label_41b3e0;
        case 0x41b3e4u: goto label_41b3e4;
        case 0x41b3e8u: goto label_41b3e8;
        case 0x41b3ecu: goto label_41b3ec;
        case 0x41b3f0u: goto label_41b3f0;
        case 0x41b3f4u: goto label_41b3f4;
        case 0x41b3f8u: goto label_41b3f8;
        case 0x41b3fcu: goto label_41b3fc;
        case 0x41b400u: goto label_41b400;
        case 0x41b404u: goto label_41b404;
        case 0x41b408u: goto label_41b408;
        case 0x41b40cu: goto label_41b40c;
        case 0x41b410u: goto label_41b410;
        case 0x41b414u: goto label_41b414;
        case 0x41b418u: goto label_41b418;
        case 0x41b41cu: goto label_41b41c;
        case 0x41b420u: goto label_41b420;
        case 0x41b424u: goto label_41b424;
        case 0x41b428u: goto label_41b428;
        case 0x41b42cu: goto label_41b42c;
        case 0x41b430u: goto label_41b430;
        case 0x41b434u: goto label_41b434;
        case 0x41b438u: goto label_41b438;
        case 0x41b43cu: goto label_41b43c;
        case 0x41b440u: goto label_41b440;
        case 0x41b444u: goto label_41b444;
        case 0x41b448u: goto label_41b448;
        case 0x41b44cu: goto label_41b44c;
        case 0x41b450u: goto label_41b450;
        case 0x41b454u: goto label_41b454;
        case 0x41b458u: goto label_41b458;
        case 0x41b45cu: goto label_41b45c;
        case 0x41b460u: goto label_41b460;
        case 0x41b464u: goto label_41b464;
        case 0x41b468u: goto label_41b468;
        case 0x41b46cu: goto label_41b46c;
        case 0x41b470u: goto label_41b470;
        case 0x41b474u: goto label_41b474;
        case 0x41b478u: goto label_41b478;
        case 0x41b47cu: goto label_41b47c;
        case 0x41b480u: goto label_41b480;
        case 0x41b484u: goto label_41b484;
        case 0x41b488u: goto label_41b488;
        case 0x41b48cu: goto label_41b48c;
        case 0x41b490u: goto label_41b490;
        case 0x41b494u: goto label_41b494;
        case 0x41b498u: goto label_41b498;
        case 0x41b49cu: goto label_41b49c;
        case 0x41b4a0u: goto label_41b4a0;
        case 0x41b4a4u: goto label_41b4a4;
        case 0x41b4a8u: goto label_41b4a8;
        case 0x41b4acu: goto label_41b4ac;
        case 0x41b4b0u: goto label_41b4b0;
        case 0x41b4b4u: goto label_41b4b4;
        case 0x41b4b8u: goto label_41b4b8;
        case 0x41b4bcu: goto label_41b4bc;
        default: break;
    }

    ctx->pc = 0x41b3d8u;

label_41b3d8:
    // 0x41b3d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41b3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41b3dc:
    // 0x41b3dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41b3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_41b3e0:
    // 0x41b3e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41b3e4:
    // 0x41b3e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b3e8:
    // 0x41b3e8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41b3ec:
    // 0x41b3ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b3f0:
    // 0x41b3f0: 0x82220360  lb          $v0, 0x360($s1)
    ctx->pc = 0x41b3f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 864)));
label_41b3f4:
    // 0x41b3f4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_41b3f8:
    if (ctx->pc == 0x41B3F8u) {
        ctx->pc = 0x41B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3F4u;
        // 0x41b3f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B3FCu;
        goto label_41b3fc;
    }
    ctx->pc = 0x41B3F4u;
    {
        const bool branch_taken_0x41b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3F4u;
        // 0x41b3f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b3f4) {
            ctx->pc = 0x41B4A4u;
            goto label_41b4a4;
        }
    }
    ctx->pc = 0x41B3FCu;
label_41b3fc:
    // 0x41b3fc: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_41b400:
    if (ctx->pc == 0x41B400u) {
        ctx->pc = 0x41B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3FCu;
        // 0x41b400: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B404u;
        goto label_41b404;
    }
    ctx->pc = 0x41B3FCu;
    {
        const bool branch_taken_0x41b3fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B3FCu;
        // 0x41b400: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b3fc) {
            ctx->pc = 0x41B4A8u;
            goto label_41b4a8;
        }
    }
    ctx->pc = 0x41B404u;
label_41b404:
    // 0x41b404: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x41b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41b408:
    // 0x41b408: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41b408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41b40c:
    // 0x41b40c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41b410:
    // 0x41b410: 0x40f809  jalr        $v0
label_41b414:
    if (ctx->pc == 0x41B414u) {
        ctx->pc = 0x41B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B410u;
        // 0x41b414: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B418u;
        goto label_41b418;
    }
    ctx->pc = 0x41B410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B418u);
        ctx->pc = 0x41B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B410u;
        // 0x41b414: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B410u, 0x41B418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B418u;
label_41b418:
    // 0x41b418: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41b418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41b41c:
    // 0x41b41c: 0xc0e4060  jal         func_390180
label_41b420:
    if (ctx->pc == 0x41B420u) {
        ctx->pc = 0x41B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B41Cu;
        // 0x41b420: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B424u;
        goto label_41b424;
    }
    ctx->pc = 0x41B41Cu;
    SET_GPR_U32(ctx, 31, 0x41B424u);
    ctx->pc = 0x41B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B41Cu;
    // 0x41b420: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41B41Cu, 0x41B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B424u;
label_41b424:
    // 0x41b424: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_41b428:
    if (ctx->pc == 0x41B428u) {
        ctx->pc = 0x41B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B424u;
        // 0x41b428: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B42Cu;
        goto label_41b42c;
    }
    ctx->pc = 0x41B424u;
    {
        const bool branch_taken_0x41b424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B424u;
        // 0x41b428: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b424) {
            ctx->pc = 0x41B4A4u;
            goto label_41b4a4;
        }
    }
    ctx->pc = 0x41B42Cu;
label_41b42c:
    // 0x41b42c: 0x26250360  addiu       $a1, $s1, 0x360
    ctx->pc = 0x41b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_41b430:
    // 0x41b430: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41b430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41b434:
    // 0x41b434: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41b434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b438:
    // 0x41b438: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41b438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41b43c:
    // 0x41b43c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41b440:
    // 0x41b440: 0x40f809  jalr        $v0
label_41b444:
    if (ctx->pc == 0x41B444u) {
        ctx->pc = 0x41B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B440u;
        // 0x41b444: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B448u;
        goto label_41b448;
    }
    ctx->pc = 0x41B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B448u);
        ctx->pc = 0x41B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B440u;
        // 0x41b444: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B440u, 0x41B448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B448u;
label_41b448:
    // 0x41b448: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_41b44c:
    if (ctx->pc == 0x41B44Cu) {
        ctx->pc = 0x41B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B448u;
        // 0x41b44c: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B450u;
        goto label_41b450;
    }
    ctx->pc = 0x41B448u;
    {
        const bool branch_taken_0x41b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B448u;
        // 0x41b44c: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b448) {
            ctx->pc = 0x41B4A4u;
            goto label_41b4a4;
        }
    }
    ctx->pc = 0x41B450u;
label_41b450:
    // 0x41b450: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41b450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41b454:
    // 0x41b454: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b458:
    // 0x41b458: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x41b458u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_41b45c:
    // 0x41b45c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x41b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_41b460:
    // 0x41b460: 0x60f809  jalr        $v1
label_41b464:
    if (ctx->pc == 0x41B464u) {
        ctx->pc = 0x41B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B460u;
        // 0x41b464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B468u;
        goto label_41b468;
    }
    ctx->pc = 0x41B460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B468u);
        ctx->pc = 0x41B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B460u;
        // 0x41b464: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B460u, 0x41B468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B468u;
label_41b468:
    // 0x41b468: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41b468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41b46c:
    // 0x41b46c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41b46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41b470:
    // 0x41b470: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b474:
    // 0x41b474: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x41b474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_41b478:
    // 0x41b478: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x41b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_41b47c:
    // 0x41b47c: 0x60f809  jalr        $v1
label_41b480:
    if (ctx->pc == 0x41B480u) {
        ctx->pc = 0x41B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B47Cu;
        // 0x41b480: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B484u;
        goto label_41b484;
    }
    ctx->pc = 0x41B47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B484u);
        ctx->pc = 0x41B480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B47Cu;
        // 0x41b480: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B47Cu, 0x41B484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B484u;
label_41b484:
    // 0x41b484: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x41b484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41b488:
    // 0x41b488: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41b48c:
    // 0x41b48c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b490:
    // 0x41b490: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41b494:
    // 0x41b494: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41b494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41b498:
    // 0x41b498: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41b49c:
    // 0x41b49c: 0x60f809  jalr        $v1
label_41b4a0:
    if (ctx->pc == 0x41B4A0u) {
        ctx->pc = 0x41B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B49Cu;
        // 0x41b4a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4A4u;
        goto label_41b4a4;
    }
    ctx->pc = 0x41B49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B4A4u);
        ctx->pc = 0x41B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B49Cu;
        // 0x41b4a0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B49Cu, 0x41B4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B4A4u;
label_41b4a4:
    // 0x41b4a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41b4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b4a8:
    // 0x41b4a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41b4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b4ac:
    // 0x41b4ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b4b0:
    // 0x41b4b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b4b4:
    // 0x41b4b4: 0x3e00008  jr          $ra
label_41b4b8:
    if (ctx->pc == 0x41B4B8u) {
        ctx->pc = 0x41B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4B4u;
        // 0x41b4b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B4BCu;
        goto label_41b4bc;
    }
    ctx->pc = 0x41B4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B4B4u;
        // 0x41b4b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B4BCu;
label_41b4bc:
    // 0x41b4bc: 0x0  nop
    ctx->pc = 0x41b4bcu;
    // NOP
    ctx->pc = 0x41b4c0u;
}

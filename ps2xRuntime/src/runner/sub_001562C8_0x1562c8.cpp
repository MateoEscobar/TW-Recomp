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

// Function: sub_001562C8
// Address: 0x1562c8 - 0x156408
void sub_001562C8_0x1562c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001562C8_0x1562c8");
#endif

    switch (ctx->pc) {
        case 0x1562c8u: goto label_1562c8;
        case 0x1562ccu: goto label_1562cc;
        case 0x1562d0u: goto label_1562d0;
        case 0x1562d4u: goto label_1562d4;
        case 0x1562d8u: goto label_1562d8;
        case 0x1562dcu: goto label_1562dc;
        case 0x1562e0u: goto label_1562e0;
        case 0x1562e4u: goto label_1562e4;
        case 0x1562e8u: goto label_1562e8;
        case 0x1562ecu: goto label_1562ec;
        case 0x1562f0u: goto label_1562f0;
        case 0x1562f4u: goto label_1562f4;
        case 0x1562f8u: goto label_1562f8;
        case 0x1562fcu: goto label_1562fc;
        case 0x156300u: goto label_156300;
        case 0x156304u: goto label_156304;
        case 0x156308u: goto label_156308;
        case 0x15630cu: goto label_15630c;
        case 0x156310u: goto label_156310;
        case 0x156314u: goto label_156314;
        case 0x156318u: goto label_156318;
        case 0x15631cu: goto label_15631c;
        case 0x156320u: goto label_156320;
        case 0x156324u: goto label_156324;
        case 0x156328u: goto label_156328;
        case 0x15632cu: goto label_15632c;
        case 0x156330u: goto label_156330;
        case 0x156334u: goto label_156334;
        case 0x156338u: goto label_156338;
        case 0x15633cu: goto label_15633c;
        case 0x156340u: goto label_156340;
        case 0x156344u: goto label_156344;
        case 0x156348u: goto label_156348;
        case 0x15634cu: goto label_15634c;
        case 0x156350u: goto label_156350;
        case 0x156354u: goto label_156354;
        case 0x156358u: goto label_156358;
        case 0x15635cu: goto label_15635c;
        case 0x156360u: goto label_156360;
        case 0x156364u: goto label_156364;
        case 0x156368u: goto label_156368;
        case 0x15636cu: goto label_15636c;
        case 0x156370u: goto label_156370;
        case 0x156374u: goto label_156374;
        case 0x156378u: goto label_156378;
        case 0x15637cu: goto label_15637c;
        case 0x156380u: goto label_156380;
        case 0x156384u: goto label_156384;
        case 0x156388u: goto label_156388;
        case 0x15638cu: goto label_15638c;
        case 0x156390u: goto label_156390;
        case 0x156394u: goto label_156394;
        case 0x156398u: goto label_156398;
        case 0x15639cu: goto label_15639c;
        case 0x1563a0u: goto label_1563a0;
        case 0x1563a4u: goto label_1563a4;
        case 0x1563a8u: goto label_1563a8;
        case 0x1563acu: goto label_1563ac;
        case 0x1563b0u: goto label_1563b0;
        case 0x1563b4u: goto label_1563b4;
        case 0x1563b8u: goto label_1563b8;
        case 0x1563bcu: goto label_1563bc;
        case 0x1563c0u: goto label_1563c0;
        case 0x1563c4u: goto label_1563c4;
        case 0x1563c8u: goto label_1563c8;
        case 0x1563ccu: goto label_1563cc;
        case 0x1563d0u: goto label_1563d0;
        case 0x1563d4u: goto label_1563d4;
        case 0x1563d8u: goto label_1563d8;
        case 0x1563dcu: goto label_1563dc;
        case 0x1563e0u: goto label_1563e0;
        case 0x1563e4u: goto label_1563e4;
        case 0x1563e8u: goto label_1563e8;
        case 0x1563ecu: goto label_1563ec;
        case 0x1563f0u: goto label_1563f0;
        case 0x1563f4u: goto label_1563f4;
        case 0x1563f8u: goto label_1563f8;
        case 0x1563fcu: goto label_1563fc;
        case 0x156400u: goto label_156400;
        case 0x156404u: goto label_156404;
        default: break;
    }

    ctx->pc = 0x1562c8u;

label_1562c8:
    // 0x1562c8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1562c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1562cc:
    // 0x1562cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1562ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1562d0:
    // 0x1562d0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1562d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1562d4:
    // 0x1562d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1562d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1562d8:
    // 0x1562d8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1562d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1562dc:
    // 0x1562dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1562dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1562e0:
    // 0x1562e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1562e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1562e4:
    // 0x1562e4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1562e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1562e8:
    // 0x1562e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1562e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1562ec:
    // 0x1562ec: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x1562ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_1562f0:
    // 0x1562f0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1562f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1562f4:
    // 0x1562f4: 0xc047e6c  jal         func_11F9B0
label_1562f8:
    if (ctx->pc == 0x1562F8u) {
        ctx->pc = 0x1562F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1562F4u;
        // 0x1562f8: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1562FCu;
        goto label_1562fc;
    }
    ctx->pc = 0x1562F4u;
    SET_GPR_U32(ctx, 31, 0x1562FCu);
    ctx->pc = 0x1562F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562F4u;
    // 0x1562f8: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1562F4u, 0x1562FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562FCu;
label_1562fc:
    // 0x1562fc: 0x8eb2cdb4  lw          $s2, -0x324C($s5)
    ctx->pc = 0x1562fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_156300:
    // 0x156300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x156300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156304:
    // 0x156304: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x156304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156308:
    // 0x156308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x156308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15630c:
    // 0x15630c: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x15630cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_156310:
    // 0x156310: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x156310u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_156314:
    // 0x156314: 0x86260028  lh          $a2, 0x28($s1)
    ctx->pc = 0x156314u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
label_156318:
    // 0x156318: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x156318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15631c:
    // 0x15631c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x15631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_156320:
    // 0x156320: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x156320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_156324:
    // 0x156324: 0x40f809  jalr        $v0
label_156328:
    if (ctx->pc == 0x156328u) {
        ctx->pc = 0x156328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156324u;
        // 0x156328: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15632Cu;
        goto label_15632c;
    }
    ctx->pc = 0x156324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15632Cu);
        ctx->pc = 0x156328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156324u;
        // 0x156328: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156324u, 0x15632Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15632Cu;
label_15632c:
    // 0x15632c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156330:
    // 0x156330: 0x84640250  lh          $a0, 0x250($v1)
    ctx->pc = 0x156330u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 592)));
label_156334:
    // 0x156334: 0x8c620254  lw          $v0, 0x254($v1)
    ctx->pc = 0x156334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 596)));
label_156338:
    // 0x156338: 0x40f809  jalr        $v0
label_15633c:
    if (ctx->pc == 0x15633Cu) {
        ctx->pc = 0x15633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156338u;
        // 0x15633c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156340u;
        goto label_156340;
    }
    ctx->pc = 0x156338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156340u);
        ctx->pc = 0x15633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156338u;
        // 0x15633c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156338u, 0x156340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156340u;
label_156340:
    // 0x156340: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156344:
    // 0x156344: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x156344u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156348:
    // 0x156348: 0x84640250  lh          $a0, 0x250($v1)
    ctx->pc = 0x156348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 592)));
label_15634c:
    // 0x15634c: 0x8c620254  lw          $v0, 0x254($v1)
    ctx->pc = 0x15634cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 596)));
label_156350:
    // 0x156350: 0x40f809  jalr        $v0
label_156354:
    if (ctx->pc == 0x156354u) {
        ctx->pc = 0x156354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156350u;
        // 0x156354: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156358u;
        goto label_156358;
    }
    ctx->pc = 0x156350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156358u);
        ctx->pc = 0x156354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156350u;
        // 0x156354: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156350u, 0x156358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156358u;
label_156358:
    // 0x156358: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x156358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15635c:
    // 0x15635c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15635cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_156360:
    // 0x156360: 0x846401f0  lh          $a0, 0x1F0($v1)
    ctx->pc = 0x156360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 496)));
label_156364:
    // 0x156364: 0x8c6201f4  lw          $v0, 0x1F4($v1)
    ctx->pc = 0x156364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 500)));
label_156368:
    // 0x156368: 0x40f809  jalr        $v0
label_15636c:
    if (ctx->pc == 0x15636Cu) {
        ctx->pc = 0x15636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156368u;
        // 0x15636c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156370u;
        goto label_156370;
    }
    ctx->pc = 0x156368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156370u);
        ctx->pc = 0x15636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156368u;
        // 0x15636c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156368u, 0x156370u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156370u;
label_156370:
    // 0x156370: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x156370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_156374:
    // 0x156374: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x156374u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_156378:
    // 0x156378: 0x84640200  lh          $a0, 0x200($v1)
    ctx->pc = 0x156378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 512)));
label_15637c:
    // 0x15637c: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x15637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
label_156380:
    // 0x156380: 0x40f809  jalr        $v0
label_156384:
    if (ctx->pc == 0x156384u) {
        ctx->pc = 0x156384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156380u;
        // 0x156384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156388u;
        goto label_156388;
    }
    ctx->pc = 0x156380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156388u);
        ctx->pc = 0x156384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156380u;
        // 0x156384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156380u, 0x156388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156388u;
label_156388:
    // 0x156388: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x156388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15638c:
    // 0x15638c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15638cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_156390:
    // 0x156390: 0x84640210  lh          $a0, 0x210($v1)
    ctx->pc = 0x156390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 528)));
label_156394:
    // 0x156394: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x156394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_156398:
    // 0x156398: 0x40f809  jalr        $v0
label_15639c:
    if (ctx->pc == 0x15639Cu) {
        ctx->pc = 0x15639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156398u;
        // 0x15639c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1563A0u;
        goto label_1563a0;
    }
    ctx->pc = 0x156398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1563A0u);
        ctx->pc = 0x15639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156398u;
        // 0x15639c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156398u, 0x1563A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1563A0u;
label_1563a0:
    // 0x1563a0: 0xc68c0000  lwc1        $f12, 0x0($s4)
    ctx->pc = 0x1563a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1563a4:
    // 0x1563a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1563a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1563a8:
    // 0x1563a8: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x1563a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1563ac:
    // 0x1563ac: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1563acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_1563b0:
    // 0x1563b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1563b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1563b4:
    // 0x1563b4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1563b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_1563b8:
    // 0x1563b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1563b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1563bc:
    // 0x1563bc: 0x40f809  jalr        $v0
label_1563c0:
    if (ctx->pc == 0x1563C0u) {
        ctx->pc = 0x1563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563BCu;
        // 0x1563c0: 0x46000406  mov.s       $f16, $f0 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1563C4u;
        goto label_1563c4;
    }
    ctx->pc = 0x1563BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1563C4u);
        ctx->pc = 0x1563C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563BCu;
        // 0x1563c0: 0x46000406  mov.s       $f16, $f0 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1563BCu, 0x1563C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1563C4u;
label_1563c4:
    // 0x1563c4: 0x8ea5cdb4  lw          $a1, -0x324C($s5)
    ctx->pc = 0x1563c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954420)));
label_1563c8:
    // 0x1563c8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1563c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1563cc:
    // 0x1563cc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1563ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1563d0:
    // 0x1563d0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1563d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1563d4:
    // 0x1563d4: 0x60f809  jalr        $v1
label_1563d8:
    if (ctx->pc == 0x1563D8u) {
        ctx->pc = 0x1563D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563D4u;
        // 0x1563d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1563DCu;
        goto label_1563dc;
    }
    ctx->pc = 0x1563D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1563DCu);
        ctx->pc = 0x1563D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1563D4u;
        // 0x1563d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1563D4u, 0x1563DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1563DCu;
label_1563dc:
    // 0x1563dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1563dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1563e0:
    // 0x1563e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1563e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1563e4:
    // 0x1563e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1563e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1563e8:
    // 0x1563e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1563e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1563ec:
    // 0x1563ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1563ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1563f0:
    // 0x1563f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1563f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1563f4:
    // 0x1563f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1563f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1563f8:
    // 0x1563f8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1563f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1563fc:
    // 0x1563fc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1563fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_156400:
    // 0x156400: 0x3e00008  jr          $ra
label_156404:
    if (ctx->pc == 0x156404u) {
        ctx->pc = 0x156404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156400u;
        // 0x156404: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156408u;
        goto label_fallthrough_0x156400;
    }
    ctx->pc = 0x156400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156400u;
        // 0x156404: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x156400:
    ctx->pc = 0x156408u;
}

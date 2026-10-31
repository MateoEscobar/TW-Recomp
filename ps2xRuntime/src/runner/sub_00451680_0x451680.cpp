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

// Function: sub_00451680
// Address: 0x451680 - 0x451bd8
void sub_00451680_0x451680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451680_0x451680");
#endif

    switch (ctx->pc) {
        case 0x45173cu: goto label_45173c;
        case 0x451764u: goto label_451764;
        case 0x45177cu: goto label_45177c;
        case 0x4517a0u: goto label_4517a0;
        case 0x4519a0u: goto label_4519a0;
        case 0x451b58u: goto label_451b58;
        case 0x451ba0u: goto label_451ba0;
        default: break;
    }

    ctx->pc = 0x451680u;

    // 0x451680: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x451680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x451684: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x451684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x451688: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x451688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x45168c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x45168cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x451690: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x451690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x451694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x451694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451698: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x451698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x45169c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45169cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4516a0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x4516a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x4516a4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x4516a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x4516a8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x4516a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x4516ac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4516acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x4516b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4516b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x4516b4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x4516b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x4516b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4516b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4516bc: 0x8c73ad18  lw          $s3, -0x52E8($v1)
    ctx->pc = 0x4516bcu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x70AD18u));
    // 0x4516c0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4516c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4516c4: 0x8e160008  lw          $s6, 0x8($s0)
    ctx->pc = 0x4516c4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4516c8: 0x24a50214  addiu       $a1, $a1, 0x214
    ctx->pc = 0x4516c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 532));
    // 0x4516cc: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x4516ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x4516d0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x4516d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x4516d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4516d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4516d8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x4516d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4516dc: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x4516dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4516e0: 0x8c94009c  lw          $s4, 0x9C($a0)
    ctx->pc = 0x4516e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x4516e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4516E4u;
    {
        const bool branch_taken_0x4516e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4516e4) {
            ctx->pc = 0x4516E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4516E4u;
            // 0x4516e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4516ECu;
            goto label_4516ec;
        }
    }
    ctx->pc = 0x4516ECu;
label_4516ec:
    // 0x4516ec: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x4516ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4516f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4516f4: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x4516f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x4516f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4516f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4516fc: 0x8812  mflo        $s1
    ctx->pc = 0x4516fcu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x451700: 0x1486000e  bne         $a0, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x451700u;
    {
        const bool branch_taken_0x451700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x451704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451700u;
        // 0x451704: 0x8e770060  lw          $s7, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451700) {
            ctx->pc = 0x45173Cu;
            goto label_45173c;
        }
    }
    ctx->pc = 0x451708u;
    // 0x451708: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x451708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x45170c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45170cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x451710: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x451710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x451714: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x451714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x451718: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x451718u;
    {
        const bool branch_taken_0x451718 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x451718) {
            ctx->pc = 0x45171Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451718u;
            // 0x45171c: 0xac71001c  sw          $s1, 0x1C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451730u;
            goto label_451730;
        }
    }
    ctx->pc = 0x451720u;
    // 0x451720: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x451720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x451724: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x451724u;
    {
        const bool branch_taken_0x451724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x451728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451724u;
        // 0x451728: 0x8f828418  lw          $v0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451724) {
            ctx->pc = 0x451740u;
            goto label_451740;
        }
    }
    ctx->pc = 0x45172Cu;
    // 0x45172c: 0xac71001c  sw          $s1, 0x1C($v1)
    ctx->pc = 0x45172cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
label_451730:
    // 0x451730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x451730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451734: 0xc11d3ae  jal         func_474EB8
    ctx->pc = 0x451734u;
    SET_GPR_U32(ctx, 31, 0x45173Cu);
    ctx->pc = 0x451738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451734u;
    // 0x451738: 0xac72000c  sw          $s2, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x474EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474EB8u, 0x451734u, 0x45173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45173Cu;
label_45173c:
    // 0x45173c: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x45173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
label_451740:
    // 0x451740: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x451740u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x451744: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x451744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x451748: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x451748u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45174c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x45174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x451750: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x451750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x451754: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x451754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451758: 0x3a80a  movz        $s5, $zero, $v1
    ctx->pc = 0x451758u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x45175c: 0xc114438  jal         func_4510E0
    ctx->pc = 0x45175Cu;
    SET_GPR_U32(ctx, 31, 0x451764u);
    ctx->pc = 0x451760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45175Cu;
    // 0x451760: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4510E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4510E0u, 0x45175Cu, 0x451764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451764u;
label_451764:
    // 0x451764: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x451764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x451768: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x451768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x45176c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x45176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x451770: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x451770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x451774: 0xc114462  jal         func_451188
    ctx->pc = 0x451774u;
    SET_GPR_U32(ctx, 31, 0x45177Cu);
    ctx->pc = 0x451778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451774u;
    // 0x451778: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x451188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x451188u, 0x451774u, 0x45177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45177Cu;
label_45177c:
    // 0x45177c: 0xde8200b8  ld          $v0, 0xB8($s4)
    ctx->pc = 0x45177cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x451780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x451780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451784: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x451784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x451788: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x451788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x45178c: 0xde8300c8  ld          $v1, 0xC8($s4)
    ctx->pc = 0x45178cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x451790: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x451790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x451794: 0xde8200c0  ld          $v0, 0xC0($s4)
    ctx->pc = 0x451794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x451798: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x451798u;
    SET_GPR_U32(ctx, 31, 0x4517A0u);
    ctx->pc = 0x45179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451798u;
    // 0x45179c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x451798u, 0x4517A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4517A0u;
label_4517a0:
    // 0x4517a0: 0x10400100  beqz        $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x4517A0u;
    {
        const bool branch_taken_0x4517a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4517A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4517A0u;
        // 0x4517a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4517a0) {
            ctx->pc = 0x451BA4u;
            goto label_451ba4;
        }
    }
    ctx->pc = 0x4517A8u;
    // 0x4517a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4517a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4517ac: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x4517acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x4517b0: 0x3c036c0a  lui         $v1, 0x6C0A
    ctx->pc = 0x4517b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27658 << 16));
    // 0x4517b4: 0x346303c6  ori         $v1, $v1, 0x3C6
    ctx->pc = 0x4517b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)966);
    // 0x4517b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4517b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4517bc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4517bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x4517c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4517c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4517c4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x4517c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x4517c8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4517c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4517cc: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x4517ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4517d0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4517d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4517d4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4517d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4517d8: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x4517d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x4517dc: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x4517dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x4517e0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x4517e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x4517e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4517e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4517e8: 0xc6e0000c  lwc1        $f0, 0xC($s7)
    ctx->pc = 0x4517e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4517ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4517ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4517f0: 0xc6620070  lwc1        $f2, 0x70($s3)
    ctx->pc = 0x4517f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4517f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4517f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4517f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4517f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4517fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x4517fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x451800: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x451800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x451804: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x451804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x451808: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x451808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45180c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x45180cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x451810: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x451810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x451814: 0xc6620074  lwc1        $f2, 0x74($s3)
    ctx->pc = 0x451814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x451818: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x451818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x45181c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x45181cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x451820: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x451820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x451824: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x451824u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x451828: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x451828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45182c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x45182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x451830: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x451830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x451834: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x451834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x451838: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x451838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x45183c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x45183cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x451840: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x451840u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x451844: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x451844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x451848: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x451848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x45184c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x45184cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x451850: 0x2484f7d0  addiu       $a0, $a0, -0x830
    ctx->pc = 0x451850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    // 0x451854: 0x24c50020  addiu       $a1, $a2, 0x20
    ctx->pc = 0x451854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x451858: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x451858u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7D0u));
    // 0x45185c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x45185cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x451860: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x451860u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x451864: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x451864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x451868: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x451868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
    // 0x45186c: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x45186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x451870: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x451870u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7E0u));
    // 0x451874: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x451874u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x451878: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x451878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x45187c: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x45187cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x451880: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x451880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x451884: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x451884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x451888: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x451888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x45188c: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x45188cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451890: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x451890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x451894: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x451894u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x451898: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x451898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45189c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x45189cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4518a0: 0x31978  dsll        $v1, $v1, 5
    ctx->pc = 0x4518a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 5);
    // 0x4518a4: 0x154138  dsll        $t0, $s5, 4
    ctx->pc = 0x4518a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 21) << 4);
    // 0x4518a8: 0x8ca400b4  lw          $a0, 0xB4($a1)
    ctx->pc = 0x4518a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x4518ac: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4518acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4518b0: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x4518b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4518b4: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x4518b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x4518b8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4518b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x4518bc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x4518bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x4518c0: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x4518c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x4518c4: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x4518c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x4518c8: 0x34e72412  ori         $a3, $a3, 0x2412
    ctx->pc = 0x4518c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9234);
    // 0x4518cc: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x4518ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x4518d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4518d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4518d4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4518d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4518d8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4518d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4518dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4518dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4518e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4518e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4518e4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x4518e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x4518e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4518e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4518ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4518ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4518f0: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x4518f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x4518f4: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x4518f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x4518f8: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x4518f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x4518fc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4518fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x451900: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x451900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x451904: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x451904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x451908: 0x34428005  ori         $v0, $v0, 0x8005
    ctx->pc = 0x451908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x45190c: 0x71221389  pcpyld      $v0, $t1, $v0
    ctx->pc = 0x45190cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x451910: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x451910u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x451914: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x451914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x451918: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x451918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x45191c: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x45191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x451920: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x451920u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x451924: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x451924u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x451928: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x451928u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x45192c: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x45192cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x451930: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x451930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x451934: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x451934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x451938: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x451938u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x45193c: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x45193cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x451940: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x451940u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x451944: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x451944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x451948: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x451948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x45194c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x45194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x451950: 0xdfa40020  ld          $a0, 0x20($sp)
    ctx->pc = 0x451950u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x451954: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x451954u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x451958: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x451958u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x45195c: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x45195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x451960: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x451960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x451964: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x451964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x451968: 0xde8200d0  ld          $v0, 0xD0($s4)
    ctx->pc = 0x451968u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x45196c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x45196cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x451970: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x451970u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
    // 0x451974: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x451974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x451978: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x451978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x45197c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x45197cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x451980: 0xdf8286e8  ld          $v0, -0x7918($gp)
    ctx->pc = 0x451980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x451984: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x451984u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x451988: 0x7cc20090  sq          $v0, 0x90($a2)
    ctx->pc = 0x451988u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), GPR_VEC(ctx, 2));
    // 0x45198c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x45198cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x451990: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x451990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x451994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x451994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451998: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x451998u;
    SET_GPR_U32(ctx, 31, 0x4519A0u);
    ctx->pc = 0x45199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451998u;
    // 0x45199c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x451998u, 0x4519A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4519A0u;
label_4519a0:
    // 0x4519a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4519a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4519a4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4519a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x4519a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4519a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4519ac: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x4519acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4519b0: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x4519b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4519b4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x4519b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x4519b8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4519b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4519bc: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x4519bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x4519c0: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x4519c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x4519c4: 0x346303fb  ori         $v1, $v1, 0x3FB
    ctx->pc = 0x4519c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1019);
    // 0x4519c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4519c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4519cc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4519ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x4519d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4519d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4519d4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x4519d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x4519d8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x4519d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x4519dc: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x4519dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x4519e0: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x4519e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4519e4: 0xc7858010  lwc1        $f5, -0x7FF0($gp)
    ctx->pc = 0x4519e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4519e8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x4519E8u;
    {
        const bool branch_taken_0x4519e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4519ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4519E8u;
        // 0x4519ec: 0xaf82898c  sw          $v0, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4519e8) {
            ctx->pc = 0x4519F8u;
            goto label_4519f8;
        }
    }
    ctx->pc = 0x4519F0u;
    // 0x4519f0: 0xc7858014  lwc1        $f5, -0x7FEC($gp)
    ctx->pc = 0x4519f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x4519f4: 0x0  nop
    ctx->pc = 0x4519f4u;
    // NOP
label_4519f8:
    // 0x4519f8: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x4519f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x4519fc: 0x92030045  lbu         $v1, 0x45($s0)
    ctx->pc = 0x4519fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x451a00: 0x92040046  lbu         $a0, 0x46($s0)
    ctx->pc = 0x451a00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x451a04: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x451a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x451a08: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x451a08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x451a0c: 0x92050047  lbu         $a1, 0x47($s0)
    ctx->pc = 0x451a0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x451a10: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x451a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x451a14: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x451a14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x451a18: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x451a18u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x451a1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x451a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x451a20: 0xc7818018  lwc1        $f1, -0x7FE8($gp)
    ctx->pc = 0x451a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x451a24: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x451a24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x451a28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x451a28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x451a2c: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x451a2cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x451a30: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x451a30u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x451a34: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x451a34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x451a38: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x451a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x451a3c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x451a3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x451a40: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x451a40u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x451a44: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x451a44u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x451a48: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x451a48u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x451a4c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x451a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x451a50: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x451a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x451a54: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x451a54u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x451a58: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x451a58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x451a5c: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x451a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x451a60: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x451a60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x451a64: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x451a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x451a68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x451a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x451a6c: 0x10450008  beq         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x451A6Cu;
    {
        const bool branch_taken_0x451a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x451A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451A6Cu;
        // 0x451a70: 0x8f828418  lw          $v0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451a6c) {
            ctx->pc = 0x451A90u;
            goto label_451a90;
        }
    }
    ctx->pc = 0x451A74u;
    // 0x451a74: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x451a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x451a78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x451a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x451a7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x451a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x451a80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x451a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x451a84: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x451A84u;
    {
        const bool branch_taken_0x451a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x451a84) {
            ctx->pc = 0x451A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451A84u;
            // 0x451a88: 0x92020028  lbu         $v0, 0x28($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451AA8u;
            goto label_451aa8;
        }
    }
    ctx->pc = 0x451A8Cu;
    // 0x451a8c: 0x0  nop
    ctx->pc = 0x451a8cu;
    // NOP
label_451a90:
    // 0x451a90: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x451a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x451a94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x451a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x451a98: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x451A98u;
    {
        const bool branch_taken_0x451a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x451a98) {
            ctx->pc = 0x451A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x451A98u;
            // 0x451a9c: 0xa205002b  sb          $a1, 0x2B($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x451ABCu;
            goto label_451abc;
        }
    }
    ctx->pc = 0x451AA0u;
    // 0x451aa0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x451AA0u;
    {
        const bool branch_taken_0x451aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x451AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451AA0u;
        // 0x451aa4: 0xa200002b  sb          $zero, 0x2B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451aa0) {
            ctx->pc = 0x451ABCu;
            goto label_451abc;
        }
    }
    ctx->pc = 0x451AA8u;
label_451aa8:
    // 0x451aa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x451aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x451aac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x451AACu;
    {
        const bool branch_taken_0x451aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x451AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451AACu;
        // 0x451ab0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451aac) {
            ctx->pc = 0x451AB8u;
            goto label_451ab8;
        }
    }
    ctx->pc = 0x451AB4u;
    // 0x451ab4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x451ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_451ab8:
    // 0x451ab8: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x451ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
label_451abc:
    // 0x451abc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x451abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x451ac0: 0x9202002b  lbu         $v0, 0x2B($s0)
    ctx->pc = 0x451ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 43)));
    // 0x451ac4: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x451ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x451ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x451ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x451acc: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x451accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x451ad0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x451ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x451ad4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x451ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x451ad8: 0x1065000b  beq         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x451AD8u;
    {
        const bool branch_taken_0x451ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x451ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451AD8u;
        // 0x451adc: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451ad8) {
            ctx->pc = 0x451B08u;
            goto label_451b08;
        }
    }
    ctx->pc = 0x451AE0u;
    // 0x451ae0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x451ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x451ae4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x451ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x451ae8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x451ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x451aec: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x451aecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x451af0: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x451af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x451af4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x451af4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x451af8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x451af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x451afc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x451afcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x451b00: 0xaf858784  sw          $a1, -0x787C($gp)
    ctx->pc = 0x451b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 5));
    // 0x451b04: 0x0  nop
    ctx->pc = 0x451b04u;
    // NOP
label_451b08:
    // 0x451b08: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x451b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x451b0c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x451b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x451b10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x451b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x451b14: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x451b14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x451b18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x451b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x451b1c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x451b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x451b20: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x451b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x451b24: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x451b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x451b28: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x451b28u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x451b2c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x451b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x451b30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x451b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x451b34: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x451b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x451b38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x451b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x451b3c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x451b3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x451b40: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x451b40u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x451b44: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x451b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x451b48: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x451b48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x451b4c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x451b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x451b50: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x451b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x451b54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x451b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_451b58:
    // 0x451b58: 0x42000039  di
    ctx->pc = 0x451b58u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x451b5c: 0x40f  sync.p
    ctx->pc = 0x451b5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x451b60: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x451b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x451b64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x451b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x451b68: 0x0  nop
    ctx->pc = 0x451b68u;
    // NOP
    // 0x451b6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x451B6Cu;
    {
        const bool branch_taken_0x451b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x451b6c) {
            ctx->pc = 0x451B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_451b58;
        }
    }
    ctx->pc = 0x451B74u;
    // 0x451b74: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x451b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x451b78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x451b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x451b7c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x451b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x451b80: 0x42000038  ei
    ctx->pc = 0x451b80u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x451b84: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x451b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x451b88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x451b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x451b8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x451b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x451b90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x451B90u;
    {
        const bool branch_taken_0x451b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x451B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451B90u;
        // 0x451b94: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451b90) {
            ctx->pc = 0x451BA0u;
            goto label_451ba0;
        }
    }
    ctx->pc = 0x451B98u;
    // 0x451b98: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x451B98u;
    SET_GPR_U32(ctx, 31, 0x451BA0u);
    ctx->pc = 0x451B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x451B98u;
    // 0x451b9c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x451B98u, 0x451BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x451BA0u;
label_451ba0:
    // 0x451ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x451ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_451ba4:
    // 0x451ba4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x451ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x451ba8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x451ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x451bac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x451bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x451bb0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x451bb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x451bb4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x451bb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x451bb8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x451bb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x451bbc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x451bbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x451bc0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x451bc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x451bc4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x451bc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x451bc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x451bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x451bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x451BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x451BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451BCCu;
        // 0x451bd0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x451BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x451BD4u;
    // 0x451bd4: 0x0  nop
    ctx->pc = 0x451bd4u;
    // NOP
    ctx->pc = 0x451bd8u;
}

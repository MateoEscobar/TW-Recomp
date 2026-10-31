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

// Function: sub_00121720
// Address: 0x121720 - 0x121888
void sub_00121720_0x121720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121720_0x121720");
#endif

    switch (ctx->pc) {
        case 0x121720u: goto label_121720;
        case 0x121724u: goto label_121724;
        case 0x121728u: goto label_121728;
        case 0x12172cu: goto label_12172c;
        case 0x121730u: goto label_121730;
        case 0x121734u: goto label_121734;
        case 0x121738u: goto label_121738;
        case 0x12173cu: goto label_12173c;
        case 0x121740u: goto label_121740;
        case 0x121744u: goto label_121744;
        case 0x121748u: goto label_121748;
        case 0x12174cu: goto label_12174c;
        case 0x121750u: goto label_121750;
        case 0x121754u: goto label_121754;
        case 0x121758u: goto label_121758;
        case 0x12175cu: goto label_12175c;
        case 0x121760u: goto label_121760;
        case 0x121764u: goto label_121764;
        case 0x121768u: goto label_121768;
        case 0x12176cu: goto label_12176c;
        case 0x121770u: goto label_121770;
        case 0x121774u: goto label_121774;
        case 0x121778u: goto label_121778;
        case 0x12177cu: goto label_12177c;
        case 0x121780u: goto label_121780;
        case 0x121784u: goto label_121784;
        case 0x121788u: goto label_121788;
        case 0x12178cu: goto label_12178c;
        case 0x121790u: goto label_121790;
        case 0x121794u: goto label_121794;
        case 0x121798u: goto label_121798;
        case 0x12179cu: goto label_12179c;
        case 0x1217a0u: goto label_1217a0;
        case 0x1217a4u: goto label_1217a4;
        case 0x1217a8u: goto label_1217a8;
        case 0x1217acu: goto label_1217ac;
        case 0x1217b0u: goto label_1217b0;
        case 0x1217b4u: goto label_1217b4;
        case 0x1217b8u: goto label_1217b8;
        case 0x1217bcu: goto label_1217bc;
        case 0x1217c0u: goto label_1217c0;
        case 0x1217c4u: goto label_1217c4;
        case 0x1217c8u: goto label_1217c8;
        case 0x1217ccu: goto label_1217cc;
        case 0x1217d0u: goto label_1217d0;
        case 0x1217d4u: goto label_1217d4;
        case 0x1217d8u: goto label_1217d8;
        case 0x1217dcu: goto label_1217dc;
        case 0x1217e0u: goto label_1217e0;
        case 0x1217e4u: goto label_1217e4;
        case 0x1217e8u: goto label_1217e8;
        case 0x1217ecu: goto label_1217ec;
        case 0x1217f0u: goto label_1217f0;
        case 0x1217f4u: goto label_1217f4;
        case 0x1217f8u: goto label_1217f8;
        case 0x1217fcu: goto label_1217fc;
        case 0x121800u: goto label_121800;
        case 0x121804u: goto label_121804;
        case 0x121808u: goto label_121808;
        case 0x12180cu: goto label_12180c;
        case 0x121810u: goto label_121810;
        case 0x121814u: goto label_121814;
        case 0x121818u: goto label_121818;
        case 0x12181cu: goto label_12181c;
        case 0x121820u: goto label_121820;
        case 0x121824u: goto label_121824;
        case 0x121828u: goto label_121828;
        case 0x12182cu: goto label_12182c;
        case 0x121830u: goto label_121830;
        case 0x121834u: goto label_121834;
        case 0x121838u: goto label_121838;
        case 0x12183cu: goto label_12183c;
        case 0x121840u: goto label_121840;
        case 0x121844u: goto label_121844;
        case 0x121848u: goto label_121848;
        case 0x12184cu: goto label_12184c;
        case 0x121850u: goto label_121850;
        case 0x121854u: goto label_121854;
        case 0x121858u: goto label_121858;
        case 0x12185cu: goto label_12185c;
        case 0x121860u: goto label_121860;
        case 0x121864u: goto label_121864;
        case 0x121868u: goto label_121868;
        case 0x12186cu: goto label_12186c;
        case 0x121870u: goto label_121870;
        case 0x121874u: goto label_121874;
        case 0x121878u: goto label_121878;
        case 0x12187cu: goto label_12187c;
        case 0x121880u: goto label_121880;
        case 0x121884u: goto label_121884;
        default: break;
    }

    ctx->pc = 0x121720u;

label_121720:
    // 0x121720: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x121720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_121724:
    // 0x121724: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x121724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_121728:
    // 0x121728: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x121728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_12172c:
    // 0x12172c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x12172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_121730:
    // 0x121730: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x121730u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121734:
    // 0x121734: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x121734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_121738:
    // 0x121738: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x121738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_12173c:
    // 0x12173c: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x12173cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_121740:
    // 0x121740: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x121740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_121744:
    // 0x121744: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x121744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_121748:
    // 0x121748: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x121748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_12174c:
    // 0x12174c: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x12174cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_121750:
    // 0x121750: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x121750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_121754:
    // 0x121754: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x121754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_121758:
    // 0x121758: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x121758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_12175c:
    // 0x12175c: 0x40f809  jalr        $v0
label_121760:
    if (ctx->pc == 0x121760u) {
        ctx->pc = 0x121760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12175Cu;
        // 0x121760: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121764u;
        goto label_121764;
    }
    ctx->pc = 0x12175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121764u);
        ctx->pc = 0x121760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12175Cu;
        // 0x121760: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12175Cu, 0x121764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121764u;
label_121764:
    // 0x121764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121768:
    // 0x121768: 0xc0cd8ec  jal         func_3363B0
label_12176c:
    if (ctx->pc == 0x12176Cu) {
        ctx->pc = 0x12176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121768u;
        // 0x12176c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121770u;
        goto label_121770;
    }
    ctx->pc = 0x121768u;
    SET_GPR_U32(ctx, 31, 0x121770u);
    ctx->pc = 0x12176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121768u;
    // 0x12176c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x121768u, 0x121770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121770u;
label_121770:
    // 0x121770: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x121770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_121774:
    // 0x121774: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x121774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_121778:
    // 0x121778: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x121778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_12177c:
    // 0x12177c: 0x40f809  jalr        $v0
label_121780:
    if (ctx->pc == 0x121780u) {
        ctx->pc = 0x121780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12177Cu;
        // 0x121780: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121784u;
        goto label_121784;
    }
    ctx->pc = 0x12177Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121784u);
        ctx->pc = 0x121780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12177Cu;
        // 0x121780: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12177Cu, 0x121784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121784u;
label_121784:
    // 0x121784: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x121784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_121788:
    // 0x121788: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x121788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12178c:
    // 0x12178c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12178cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121790:
    // 0x121790: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x121790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_121794:
    // 0x121794: 0xc136b24  jal         func_4DAC90
label_121798:
    if (ctx->pc == 0x121798u) {
        ctx->pc = 0x121798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121794u;
        // 0x121798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12179Cu;
        goto label_12179c;
    }
    ctx->pc = 0x121794u;
    SET_GPR_U32(ctx, 31, 0x12179Cu);
    ctx->pc = 0x121798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121794u;
    // 0x121798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x121794u, 0x12179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12179Cu;
label_12179c:
    // 0x12179c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x12179cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1217a0:
    // 0x1217a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1217a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1217a4:
    // 0x1217a4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1217a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1217a8:
    // 0x1217a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1217a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1217ac:
    // 0x1217ac: 0xc136b18  jal         func_4DAC60
label_1217b0:
    if (ctx->pc == 0x1217B0u) {
        ctx->pc = 0x1217B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217ACu;
        // 0x1217b0: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1217B4u;
        goto label_1217b4;
    }
    ctx->pc = 0x1217ACu;
    SET_GPR_U32(ctx, 31, 0x1217B4u);
    ctx->pc = 0x1217B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217ACu;
    // 0x1217b0: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x1217ACu, 0x1217B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217B4u;
label_1217b4:
    // 0x1217b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1217b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1217b8:
    // 0x1217b8: 0x7ba800a0  lq          $t0, 0xA0($sp)
    ctx->pc = 0x1217b8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1217bc:
    // 0x1217bc: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x1217bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
label_1217c0:
    // 0x1217c0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1217c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1217c4:
    // 0x1217c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1217c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1217c8:
    // 0x1217c8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1217c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1217cc:
    // 0x1217cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1217ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1217d0:
    // 0x1217d0: 0x7fa80000  sq          $t0, 0x0($sp)
    ctx->pc = 0x1217d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 8));
label_1217d4:
    // 0x1217d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1217d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1217d8:
    // 0x1217d8: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x1217d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
label_1217dc:
    // 0x1217dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1217dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1217e0:
    // 0x1217e0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1217e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_1217e4:
    // 0x1217e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1217e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1217e8:
    // 0x1217e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1217e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1217ec:
    // 0x1217ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1217ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1217f0:
    // 0x1217f0: 0xc0d4336  jal         func_350CD8
label_1217f4:
    if (ctx->pc == 0x1217F4u) {
        ctx->pc = 0x1217F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217F0u;
        // 0x1217f4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1217F8u;
        goto label_1217f8;
    }
    ctx->pc = 0x1217F0u;
    SET_GPR_U32(ctx, 31, 0x1217F8u);
    ctx->pc = 0x1217F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1217F0u;
    // 0x1217f4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x1217F0u, 0x1217F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1217F8u;
label_1217f8:
    // 0x1217f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1217f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1217fc:
    // 0x1217fc: 0xa26001d4  sb          $zero, 0x1D4($s3)
    ctx->pc = 0x1217fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 468), (uint8_t)GPR_U32(ctx, 0));
label_121800:
    // 0x121800: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_121804:
    if (ctx->pc == 0x121804u) {
        ctx->pc = 0x121804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121800u;
        // 0x121804: 0xa26001d5  sb          $zero, 0x1D5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 469), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121808u;
        goto label_121808;
    }
    ctx->pc = 0x121800u;
    {
        const bool branch_taken_0x121800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121800u;
        // 0x121804: 0xa26001d5  sb          $zero, 0x1D5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 469), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121800) {
            ctx->pc = 0x12181Cu;
            goto label_12181c;
        }
    }
    ctx->pc = 0x121808u;
label_121808:
    // 0x121808: 0x93a2005c  lbu         $v0, 0x5C($sp)
    ctx->pc = 0x121808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
label_12180c:
    // 0x12180c: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x12180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_121810:
    // 0x121810: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x121810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_121814:
    // 0x121814: 0xa26301d5  sb          $v1, 0x1D5($s3)
    ctx->pc = 0x121814u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 469), (uint8_t)GPR_U32(ctx, 3));
label_121818:
    // 0x121818: 0xa26201d4  sb          $v0, 0x1D4($s3)
    ctx->pc = 0x121818u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 468), (uint8_t)GPR_U32(ctx, 2));
label_12181c:
    // 0x12181c: 0xc047e6c  jal         func_11F9B0
label_121820:
    if (ctx->pc == 0x121820u) {
        ctx->pc = 0x121820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12181Cu;
        // 0x121820: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121824u;
        goto label_121824;
    }
    ctx->pc = 0x12181Cu;
    SET_GPR_U32(ctx, 31, 0x121824u);
    ctx->pc = 0x121820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12181Cu;
    // 0x121820: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x12181Cu, 0x121824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121824u;
label_121824:
    // 0x121824: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
label_121828:
    if (ctx->pc == 0x121828u) {
        ctx->pc = 0x121828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121824u;
        // 0x121828: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12182Cu;
        goto label_12182c;
    }
    ctx->pc = 0x121824u;
    {
        const bool branch_taken_0x121824 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x121828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121824u;
        // 0x121828: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121824) {
            ctx->pc = 0x121844u;
            goto label_121844;
        }
    }
    ctx->pc = 0x12182Cu;
label_12182c:
    // 0x12182c: 0x926501d4  lbu         $a1, 0x1D4($s3)
    ctx->pc = 0x12182cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 468)));
label_121830:
    // 0x121830: 0x8c44deb8  lw          $a0, -0x2148($v0)
    ctx->pc = 0x121830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_121834:
    // 0x121834: 0xc062f74  jal         func_18BDD0
label_121838:
    if (ctx->pc == 0x121838u) {
        ctx->pc = 0x121838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121834u;
        // 0x121838: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12183Cu;
        goto label_12183c;
    }
    ctx->pc = 0x121834u;
    SET_GPR_U32(ctx, 31, 0x12183Cu);
    ctx->pc = 0x121838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121834u;
    // 0x121838: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BDD0u, 0x121834u, 0x12183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12183Cu;
label_12183c:
    // 0x12183c: 0x1000000b  b           . + 4 + (0xB << 2)
label_121840:
    if (ctx->pc == 0x121840u) {
        ctx->pc = 0x121840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12183Cu;
        // 0x121840: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121844u;
        goto label_121844;
    }
    ctx->pc = 0x12183Cu;
    {
        const bool branch_taken_0x12183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12183Cu;
        // 0x121840: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12183c) {
            ctx->pc = 0x12186Cu;
            goto label_12186c;
        }
    }
    ctx->pc = 0x121844u;
label_121844:
    // 0x121844: 0xc047e6c  jal         func_11F9B0
label_121848:
    if (ctx->pc == 0x121848u) {
        ctx->pc = 0x121848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121844u;
        // 0x121848: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12184Cu;
        goto label_12184c;
    }
    ctx->pc = 0x121844u;
    SET_GPR_U32(ctx, 31, 0x12184Cu);
    ctx->pc = 0x121848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121844u;
    // 0x121848: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x121844u, 0x12184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12184Cu;
label_12184c:
    // 0x12184c: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
label_121850:
    if (ctx->pc == 0x121850u) {
        ctx->pc = 0x121850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12184Cu;
        // 0x121850: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121854u;
        goto label_121854;
    }
    ctx->pc = 0x12184Cu;
    {
        const bool branch_taken_0x12184c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x121850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12184Cu;
        // 0x121850: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12184c) {
            ctx->pc = 0x12186Cu;
            goto label_12186c;
        }
    }
    ctx->pc = 0x121854u;
label_121854:
    // 0x121854: 0x926501d4  lbu         $a1, 0x1D4($s3)
    ctx->pc = 0x121854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 468)));
label_121858:
    // 0x121858: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x121858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_12185c:
    // 0x12185c: 0x8c44debc  lw          $a0, -0x2144($v0)
    ctx->pc = 0x12185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958780)));
label_121860:
    // 0x121860: 0xc062f74  jal         func_18BDD0
label_121864:
    if (ctx->pc == 0x121864u) {
        ctx->pc = 0x121864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121860u;
        // 0x121864: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x121868u;
        goto label_121868;
    }
    ctx->pc = 0x121860u;
    SET_GPR_U32(ctx, 31, 0x121868u);
    ctx->pc = 0x121864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121860u;
    // 0x121864: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BDD0u, 0x121860u, 0x121868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121868u;
label_121868:
    // 0x121868: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x121868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_12186c:
    // 0x12186c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x12186cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_121870:
    // 0x121870: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x121870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_121874:
    // 0x121874: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x121874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_121878:
    // 0x121878: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x121878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_12187c:
    // 0x12187c: 0x3e00008  jr          $ra
label_121880:
    if (ctx->pc == 0x121880u) {
        ctx->pc = 0x121880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12187Cu;
        // 0x121880: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121884u;
        goto label_121884;
    }
    ctx->pc = 0x12187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12187Cu;
        // 0x121880: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121884u;
label_121884:
    // 0x121884: 0x0  nop
    ctx->pc = 0x121884u;
    // NOP
    ctx->pc = 0x121888u;
}

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

// Function: sub_00495730
// Address: 0x495730 - 0x4958a8
void sub_00495730_0x495730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495730_0x495730");
#endif

    switch (ctx->pc) {
        case 0x495810u: goto label_495810;
        case 0x495874u: goto label_495874;
        case 0x495880u: goto label_495880;
        default: break;
    }

    ctx->pc = 0x495730u;

    // 0x495730: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x495730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x495734: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x495734u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x495738: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x495738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x49573c: 0x35298006  ori         $t1, $t1, 0x8006
    ctx->pc = 0x49573cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32774);
    // 0x495740: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x495740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x495744: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x495744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x495748: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x495748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x49574c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x49574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x495750: 0x72699b89  pcpyld      $s3, $s3, $t1
    ctx->pc = 0x495750u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 19), GPR_VEC(ctx, 9)));
    // 0x495754: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x495754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x495758: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x495758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x49575c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x49575cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x495760: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x495760u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x495764: 0x2416003b  addiu       $s6, $zero, 0x3B
    ctx->pc = 0x495764u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x495768: 0x8c48f4f8  lw          $t0, -0xB08($v0)
    ctx->pc = 0x495768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964472)));
    // 0x49576c: 0x72c9b389  pcpyld      $s6, $s6, $t1
    ctx->pc = 0x49576cu;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 22), GPR_VEC(ctx, 9)));
    // 0x495770: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x495770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495774: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x495774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x495778: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x495778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x49577c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x49577cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x495780: 0x24120049  addiu       $s2, $zero, 0x49
    ctx->pc = 0x495780u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x495784: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x495784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x495788: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x495788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49578c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x49578cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x495790: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x495790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x495794: 0x72509389  pcpyld      $s2, $s2, $s0
    ctx->pc = 0x495794u;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 18), GPR_VEC(ctx, 16)));
    // 0x495798: 0x3c096071  lui         $t1, 0x6071
    ctx->pc = 0x495798u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24689 << 16));
    // 0x49579c: 0x35292435  ori         $t1, $t1, 0x2435
    ctx->pc = 0x49579cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)9269);
    // 0x4957a0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x4957a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x4957a4: 0x35297160  ori         $t1, $t1, 0x7160
    ctx->pc = 0x4957a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)29024);
    // 0x4957a8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x4957a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x4957ac: 0x35293524  ori         $t1, $t1, 0x3524
    ctx->pc = 0x4957acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13604);
    // 0x4957b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4957b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4957b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4957b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4957b8: 0xaf84873c  sw          $a0, -0x78C4($gp)
    ctx->pc = 0x4957b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936380), GPR_U32(ctx, 4));
    // 0x4957bc: 0x24110042  addiu       $s1, $zero, 0x42
    ctx->pc = 0x4957bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x4957c0: 0xff858718  sd          $a1, -0x78E8($gp)
    ctx->pc = 0x4957c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 5));
    // 0x4957c4: 0x24140044  addiu       $s4, $zero, 0x44
    ctx->pc = 0x4957c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x4957c8: 0x24150046  addiu       $s5, $zero, 0x46
    ctx->pc = 0x4957c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x4957cc: 0x72288b89  pcpyld      $s1, $s1, $t0
    ctx->pc = 0x4957ccu;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 17), GPR_VEC(ctx, 8)));
    // 0x4957d0: 0x7289a389  pcpyld      $s4, $s4, $t1
    ctx->pc = 0x4957d0u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 20), GPR_VEC(ctx, 9)));
    // 0x4957d4: 0x72a2ab89  pcpyld      $s5, $s5, $v0
    ctx->pc = 0x4957d4u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 21), GPR_VEC(ctx, 2)));
    // 0x4957d8: 0x70f08389  pcpyld      $s0, $a3, $s0
    ctx->pc = 0x4957d8u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 16)));
    // 0x4957dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4957dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4957e0: 0xaf868a34  sw          $a2, -0x75CC($gp)
    ctx->pc = 0x4957e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 6));
    // 0x4957e4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4957e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4957e8: 0xaf838a4c  sw          $v1, -0x75B4($gp)
    ctx->pc = 0x4957e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937164), GPR_U32(ctx, 3));
    // 0x4957ec: 0xaf868738  sw          $a2, -0x78C8($gp)
    ctx->pc = 0x4957ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936376), GPR_U32(ctx, 6));
    // 0x4957f0: 0xff888720  sd          $t0, -0x78E0($gp)
    ctx->pc = 0x4957f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936352), GPR_U64(ctx, 8));
    // 0x4957f4: 0xff878730  sd          $a3, -0x78D0($gp)
    ctx->pc = 0x4957f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 7));
    // 0x4957f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4957f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4957fc: 0xaf808a30  sw          $zero, -0x75D0($gp)
    ctx->pc = 0x4957fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    // 0x495800: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x495800u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x495804: 0xaf808a28  sw          $zero, -0x75D8($gp)
    ctx->pc = 0x495804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 0));
    // 0x495808: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x495808u;
    SET_GPR_U32(ctx, 31, 0x495810u);
    ctx->pc = 0x49580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495808u;
    // 0x49580c: 0xff808710  sd          $zero, -0x78F0($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x495808u, 0x495810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495810u;
label_495810:
    // 0x495810: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x495810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x495814: 0x7c730000  sq          $s3, 0x0($v1)
    ctx->pc = 0x495814u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 19));
    // 0x495818: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x495818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x49581c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x49581cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x495820: 0x7c710000  sq          $s1, 0x0($v1)
    ctx->pc = 0x495820u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 17));
    // 0x495824: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x495824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x495828: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x495828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x49582c: 0x7c700010  sq          $s0, 0x10($v1)
    ctx->pc = 0x49582cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 16));
    // 0x495830: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x495830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x495834: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x495834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x495838: 0x7c720020  sq          $s2, 0x20($v1)
    ctx->pc = 0x495838u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 18));
    // 0x49583c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x49583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x495840: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x495840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x495844: 0x7c760030  sq          $s6, 0x30($v1)
    ctx->pc = 0x495844u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 22));
    // 0x495848: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x495848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x49584c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x49584cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x495850: 0x7c740040  sq          $s4, 0x40($v1)
    ctx->pc = 0x495850u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 20));
    // 0x495854: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x495854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x495858: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x495858u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x49585c: 0x7c750050  sq          $s5, 0x50($v1)
    ctx->pc = 0x49585cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 21));
    // 0x495860: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x495860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x495864: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x495864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x495868: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x495868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49586c: 0xc123894  jal         func_48E250
    ctx->pc = 0x49586Cu;
    SET_GPR_U32(ctx, 31, 0x495874u);
    ctx->pc = 0x495870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49586Cu;
    // 0x495870: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E250u, 0x49586Cu, 0x495874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495874u;
label_495874:
    // 0x495874: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x495874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x495878: 0xc123894  jal         func_48E250
    ctx->pc = 0x495878u;
    SET_GPR_U32(ctx, 31, 0x495880u);
    ctx->pc = 0x49587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495878u;
    // 0x49587c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E250u, 0x495878u, 0x495880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495880u;
label_495880:
    // 0x495880: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x495880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x495884: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x495884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x495888: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x495888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49588c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x49588cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x495890: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x495890u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x495894: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x495894u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x495898: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x495898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49589c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49589cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4958a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4958A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4958A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4958A0u;
        // 0x4958a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4958A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4958A8u;
}

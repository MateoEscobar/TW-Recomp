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

// Function: sub_003477C0
// Address: 0x3477c0 - 0x347c08
void sub_003477C0_0x3477c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003477C0_0x3477c0");
#endif

    switch (ctx->pc) {
        case 0x347800u: goto label_347800;
        case 0x347810u: goto label_347810;
        case 0x347824u: goto label_347824;
        case 0x347850u: goto label_347850;
        case 0x347870u: goto label_347870;
        case 0x347888u: goto label_347888;
        case 0x3478e8u: goto label_3478e8;
        case 0x3479b4u: goto label_3479b4;
        case 0x347a54u: goto label_347a54;
        case 0x347a74u: goto label_347a74;
        case 0x347ac8u: goto label_347ac8;
        case 0x347b54u: goto label_347b54;
        default: break;
    }

    ctx->pc = 0x3477c0u;

    // 0x3477c0: 0x27bdb7f0  addiu       $sp, $sp, -0x4810
    ctx->pc = 0x3477c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294948848));
    // 0x3477c4: 0x7fb74790  sq          $s7, 0x4790($sp)
    ctx->pc = 0x3477c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18320), GPR_VEC(ctx, 23));
    // 0x3477c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3477c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477cc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3477ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3477d0: 0xafa54734  sw          $a1, 0x4734($sp)
    ctx->pc = 0x3477d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18228), GPR_U32(ctx, 5));
    // 0x3477d4: 0x7fb04800  sq          $s0, 0x4800($sp)
    ctx->pc = 0x3477d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18432), GPR_VEC(ctx, 16));
    // 0x3477d8: 0x7fb147f0  sq          $s1, 0x47F0($sp)
    ctx->pc = 0x3477d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18416), GPR_VEC(ctx, 17));
    // 0x3477dc: 0x7fb247e0  sq          $s2, 0x47E0($sp)
    ctx->pc = 0x3477dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18400), GPR_VEC(ctx, 18));
    // 0x3477e0: 0x7fb347d0  sq          $s3, 0x47D0($sp)
    ctx->pc = 0x3477e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18384), GPR_VEC(ctx, 19));
    // 0x3477e4: 0x7fb447c0  sq          $s4, 0x47C0($sp)
    ctx->pc = 0x3477e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18368), GPR_VEC(ctx, 20));
    // 0x3477e8: 0x7fb547b0  sq          $s5, 0x47B0($sp)
    ctx->pc = 0x3477e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18352), GPR_VEC(ctx, 21));
    // 0x3477ec: 0x7fb647a0  sq          $s6, 0x47A0($sp)
    ctx->pc = 0x3477ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18336), GPR_VEC(ctx, 22));
    // 0x3477f0: 0x7fbe4780  sq          $fp, 0x4780($sp)
    ctx->pc = 0x3477f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18304), GPR_VEC(ctx, 30));
    // 0x3477f4: 0xffbf4770  sd          $ra, 0x4770($sp)
    ctx->pc = 0x3477f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 18288), GPR_U64(ctx, 31));
    // 0x3477f8: 0xc0d0456  jal         func_341158
    ctx->pc = 0x3477F8u;
    SET_GPR_U32(ctx, 31, 0x347800u);
    ctx->pc = 0x3477FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3477F8u;
    // 0x3477fc: 0xafa04744  sw          $zero, 0x4744($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 18244), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341158u, 0x3477F8u, 0x347800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347800u;
label_347800:
    // 0x347800: 0xc6ec0010  lwc1        $f12, 0x10($s7)
    ctx->pc = 0x347800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x347804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347808: 0xc0d0598  jal         func_341660
    ctx->pc = 0x347808u;
    SET_GPR_U32(ctx, 31, 0x347810u);
    ctx->pc = 0x34780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347808u;
    // 0x34780c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341660u, 0x347808u, 0x347810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347810u;
label_347810:
    // 0x347810: 0x27a44730  addiu       $a0, $sp, 0x4730
    ctx->pc = 0x347810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 18224));
    // 0x347814: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x347814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x347818: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x347818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34781c: 0xc0d1c5c  jal         func_347170
    ctx->pc = 0x34781Cu;
    SET_GPR_U32(ctx, 31, 0x347824u);
    ctx->pc = 0x347820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34781Cu;
    // 0x347820: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347170u, 0x34781Cu, 0x347824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347824u;
label_347824:
    // 0x347824: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x347824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x347828: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x347828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34782c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x34782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x347830: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347834: 0xafa24738  sw          $v0, 0x4738($sp)
    ctx->pc = 0x347834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18232), GPR_U32(ctx, 2));
    // 0x347838: 0xafa3473c  sw          $v1, 0x473C($sp)
    ctx->pc = 0x347838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18236), GPR_U32(ctx, 3));
    // 0x34783c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x34783cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x347840: 0xafa44740  sw          $a0, 0x4740($sp)
    ctx->pc = 0x347840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18240), GPR_U32(ctx, 4));
    // 0x347844: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x347844u;
    {
        const bool branch_taken_0x347844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347844u;
        // 0x347848: 0xafa54748  sw          $a1, 0x4748($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347844) {
            ctx->pc = 0x347B3Cu;
            goto label_347b3c;
        }
    }
    ctx->pc = 0x34784Cu;
    // 0x34784c: 0x0  nop
    ctx->pc = 0x34784cu;
    // NOP
label_347850:
    // 0x347850: 0x8fa64748  lw          $a2, 0x4748($sp)
    ctx->pc = 0x347850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18248)));
    // 0x347854: 0x8fb60034  lw          $s6, 0x34($sp)
    ctx->pc = 0x347854u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x347858: 0x8fa7473c  lw          $a3, 0x473C($sp)
    ctx->pc = 0x347858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18236)));
    // 0x34785c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x34785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x347860: 0xf6102b  sltu        $v0, $a3, $s6
    ctx->pc = 0x347860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x347864: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x347864u;
    {
        const bool branch_taken_0x347864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347864u;
        // 0x347868: 0xafa64758  sw          $a2, 0x4758($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18264), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347864) {
            ctx->pc = 0x347B28u;
            goto label_347b28;
        }
    }
    ctx->pc = 0x34786Cu;
    // 0x34786c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_347870:
    // 0x347870: 0x26c90001  addiu       $t1, $s6, 0x1
    ctx->pc = 0x347870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x347874: 0x8faa4740  lw          $t2, 0x4740($sp)
    ctx->pc = 0x347874u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18240)));
    // 0x347878: 0x144102b  sltu        $v0, $t2, $a0
    ctx->pc = 0x347878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34787c: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x34787Cu;
    {
        const bool branch_taken_0x34787c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34787Cu;
        // 0x347880: 0xafa94750  sw          $t1, 0x4750($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18256), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34787c) {
            ctx->pc = 0x347B14u;
            goto label_347b14;
        }
    }
    ctx->pc = 0x347884u;
    // 0x347884: 0x8fa54730  lw          $a1, 0x4730($sp)
    ctx->pc = 0x347884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18224)));
label_347888:
    // 0x347888: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x347888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34788c: 0xafa24754  sw          $v0, 0x4754($sp)
    ctx->pc = 0x34788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18260), GPR_U32(ctx, 2));
    // 0x347890: 0x94a20072  lhu         $v0, 0x72($a1)
    ctx->pc = 0x347890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 114)));
    // 0x347894: 0x94a30070  lhu         $v1, 0x70($a1)
    ctx->pc = 0x347894u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x347898: 0x823018  mult        $a2, $a0, $v0
    ctx->pc = 0x347898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x34789c: 0x8ca40078  lw          $a0, 0x78($a1)
    ctx->pc = 0x34789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x3478a0: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x3478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    // 0x3478a4: 0x8fa64748  lw          $a2, 0x4748($sp)
    ctx->pc = 0x3478a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18248)));
    // 0x3478a8: 0xc00013  mtlo        $a2
    ctx->pc = 0x3478a8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x3478ac: 0x70431000  madd        $v0, $v0, $v1
    ctx->pc = 0x3478acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3478b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3478b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3478b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3478b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3478b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3478b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3478bc: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3478BCu;
    {
        const bool branch_taken_0x3478bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3478C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478BCu;
        // 0x3478c0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478bc) {
            ctx->pc = 0x347B00u;
            goto label_347b00;
        }
    }
    ctx->pc = 0x3478C4u;
    // 0x3478c4: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x3478c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x3478c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3478c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3478cc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x3478ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3478d0: 0x963e0000  lhu         $fp, 0x0($s1)
    ctx->pc = 0x3478d0u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3478d4: 0x13c0008a  beqz        $fp, . + 4 + (0x8A << 2)
    ctx->pc = 0x3478D4u;
    {
        const bool branch_taken_0x3478d4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3478D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3478D4u;
        // 0x3478d8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3478d4) {
            ctx->pc = 0x347B00u;
            goto label_347b00;
        }
    }
    ctx->pc = 0x3478DCu;
    // 0x3478dc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3478dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3478e0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3478e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3478e4: 0xafa7474c  sw          $a3, 0x474C($sp)
    ctx->pc = 0x3478e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18252), GPR_U32(ctx, 7));
label_3478e8:
    // 0x3478e8: 0x8fa34730  lw          $v1, 0x4730($sp)
    ctx->pc = 0x3478e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18224)));
    // 0x3478ec: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3478ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3478f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3478f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3478f4: 0x26350002  addiu       $s5, $s1, 0x2
    ctx->pc = 0x3478f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x3478f8: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x3478f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3478fc: 0x30460007  andi        $a2, $v0, 0x7
    ctx->pc = 0x3478fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x347900: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x347900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x347904: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x347904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x347908: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x347908u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34790c: 0xc31007  srav        $v0, $v1, $a2
    ctx->pc = 0x34790cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x347910: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x347910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x347914: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x347914u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x347918: 0x14a00075  bnez        $a1, . + 4 + (0x75 << 2)
    ctx->pc = 0x347918u;
    {
        const bool branch_taken_0x347918 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x34791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347918u;
        // 0x34791c: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347918) {
            ctx->pc = 0x347AF0u;
            goto label_347af0;
        }
    }
    ctx->pc = 0x347920u;
    // 0x347920: 0xc81004  sllv        $v0, $t0, $a2
    ctx->pc = 0x347920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x347924: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x347924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x347928: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x347928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34792c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x34792cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x347930: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x347930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x347934: 0x8fa74730  lw          $a3, 0x4730($sp)
    ctx->pc = 0x347934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18224)));
    // 0x347938: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x347938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34793c: 0x8ce40088  lw          $a0, 0x88($a3)
    ctx->pc = 0x34793cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x347940: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x347940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x347944: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x347944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x347948: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x347948u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x34794c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x34794cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x347950: 0x54400068  bnel        $v0, $zero, . + 4 + (0x68 << 2)
    ctx->pc = 0x347950u;
    {
        const bool branch_taken_0x347950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x347950) {
            ctx->pc = 0x347954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347950u;
            // 0x347954: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347AF4u;
            goto label_347af4;
        }
    }
    ctx->pc = 0x347958u;
    // 0x347958: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x347958u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34795c: 0x27b24510  addiu       $s2, $sp, 0x4510
    ctx->pc = 0x34795cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 17680));
    // 0x347960: 0x8ce3008c  lw          $v1, 0x8C($a3)
    ctx->pc = 0x347960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x347964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347968: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x347968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x34796c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34796cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347970: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x347970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x347974: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x347974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347978: 0x7fa24510  sq          $v0, 0x4510($sp)
    ctx->pc = 0x347978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
    // 0x34797c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x34797cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x347980: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x347980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x347984: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x347984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x347988: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x347988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34798c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x34798cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x347990: 0x7fa24520  sq          $v0, 0x4520($sp)
    ctx->pc = 0x347990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
    // 0x347994: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x347994u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x347998: 0x8ce6008c  lw          $a2, 0x8C($a3)
    ctx->pc = 0x347998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
    // 0x34799c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34799cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3479a0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3479a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3479a4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3479a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3479a8: 0x7fa84760  sq          $t0, 0x4760($sp)
    ctx->pc = 0x3479a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18272), GPR_VEC(ctx, 8));
    // 0x3479ac: 0xc0d0f0c  jal         func_343C30
    ctx->pc = 0x3479ACu;
    SET_GPR_U32(ctx, 31, 0x3479B4u);
    ctx->pc = 0x3479B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3479ACu;
    // 0x3479b0: 0x7fa24530  sq          $v0, 0x4530($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 17712), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C30u, 0x3479ACu, 0x3479B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3479B4u;
label_3479b4:
    // 0x3479b4: 0xc7a04588  lwc1        $f0, 0x4588($sp)
    ctx->pc = 0x3479b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 17800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3479b8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3479b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x3479bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3479bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x3479c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3479c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3479c4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3479c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3479c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3479c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3479cc: 0x0  nop
    ctx->pc = 0x3479ccu;
    // NOP
    // 0x3479d0: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x3479D0u;
    {
        const bool branch_taken_0x3479d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3479D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3479D0u;
        // 0x3479d4: 0x7ba84760  lq          $t0, 0x4760($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 18272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3479d0) {
            ctx->pc = 0x347AF0u;
            goto label_347af0;
        }
    }
    ctx->pc = 0x3479D8u;
    // 0x3479d8: 0x7ba44580  lq          $a0, 0x4580($sp)
    ctx->pc = 0x3479d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 17792)));
    // 0x3479dc: 0x7ba24510  lq          $v0, 0x4510($sp)
    ctx->pc = 0x3479dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17680)));
    // 0x3479e0: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x3479e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3479e4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3479e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3479e8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3479e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3479ec: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3479ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3479f0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3479f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3479f4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3479f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3479f8: 0x48291800  qmfc2.ni    $t1, $vf3
    ctx->pc = 0x3479f8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3479fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3479fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x347a00: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x347a00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x347a04: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x347a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x347a08: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x347a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x347a0c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x347a0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x347a10: 0x482a1800  qmfc2.ni    $t2, $vf3
    ctx->pc = 0x347a10u;
    SET_GPR_VEC(ctx, 10, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x347a14: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x347a14u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x347a18: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x347a18u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347a1c: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x347a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x347a20: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x347a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x347a24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x347a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x347a28: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x347a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x347a2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x347a2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347a30: 0x0  nop
    ctx->pc = 0x347a30u;
    // NOP
    // 0x347a34: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x347A34u;
    {
        const bool branch_taken_0x347a34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x347a34) {
            ctx->pc = 0x347A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347A34u;
            // 0x347a38: 0x7fa84760  sq          $t0, 0x4760($sp) (Delay Slot)
            WRITE128(ADD32(GPR_U32(ctx, 29), 18272), GPR_VEC(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347A5Cu;
            goto label_347a5c;
        }
    }
    ctx->pc = 0x347A3Cu;
    // 0x347a3c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x347a3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x347a40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x347a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x347a44: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x347A44u;
    {
        const bool branch_taken_0x347a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347a44) {
            ctx->pc = 0x347A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347A44u;
            // 0x347a48: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347AF4u;
            goto label_347af4;
        }
    }
    ctx->pc = 0x347A4Cu;
    // 0x347a4c: 0xc0d0f24  jal         func_343C90
    ctx->pc = 0x347A4Cu;
    SET_GPR_U32(ctx, 31, 0x347A54u);
    ctx->pc = 0x347A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A4Cu;
    // 0x347a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343C90u, 0x347A4Cu, 0x347A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A54u;
label_347a54:
    // 0x347a54: 0x7ba84760  lq          $t0, 0x4760($sp)
    ctx->pc = 0x347a54u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 18272)));
    // 0x347a58: 0x7fa84760  sq          $t0, 0x4760($sp)
    ctx->pc = 0x347a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 18272), GPR_VEC(ctx, 8));
label_347a5c:
    // 0x347a5c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x347a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x347a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x347a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x347a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347a6c: 0xc0d3a10  jal         func_34E840
    ctx->pc = 0x347A6Cu;
    SET_GPR_U32(ctx, 31, 0x347A74u);
    ctx->pc = 0x347A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347A6Cu;
    // 0x347a70: 0x26350002  addiu       $s5, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E840u, 0x347A6Cu, 0x347A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347A74u;
label_347a74:
    // 0x347a74: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x347a74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x347a78: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x347a78u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x347a7c: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x347a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347a80: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x347a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x347a84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x347a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347a88: 0x0  nop
    ctx->pc = 0x347a88u;
    // NOP
    // 0x347a8c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x347A8Cu;
    {
        const bool branch_taken_0x347a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x347A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347A8Cu;
        // 0x347a90: 0x7ba84760  lq          $t0, 0x4760($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 18272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347a8c) {
            ctx->pc = 0x347AF0u;
            goto label_347af0;
        }
    }
    ctx->pc = 0x347A94u;
    // 0x347a94: 0x8fa5474c  lw          $a1, 0x474C($sp)
    ctx->pc = 0x347a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18252)));
    // 0x347a98: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x347a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x347a9c: 0x8fa64744  lw          $a2, 0x4744($sp)
    ctx->pc = 0x347a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18244)));
    // 0x347aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347aa4: 0xa00013  mtlo        $a1
    ctx->pc = 0x347aa4u;
    ctx->lo = GPR_U64(ctx, 5);
    // 0x347aa8: 0x8fa54744  lw          $a1, 0x4744($sp)
    ctx->pc = 0x347aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18244)));
    // 0x347aac: 0x70a21800  madd        $v1, $a1, $v0
    ctx->pc = 0x347aacu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x347ab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x347ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x347ab4: 0x27a54590  addiu       $a1, $sp, 0x4590
    ctx->pc = 0x347ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 17808));
    // 0x347ab8: 0xafa64744  sw          $a2, 0x4744($sp)
    ctx->pc = 0x347ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 18244), GPR_U32(ctx, 6));
    // 0x347abc: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x347abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x347ac0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x347ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x347ac4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x347ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_347ac8:
    // 0x347ac8: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x347ac8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347acc: 0x78890010  lq          $t1, 0x10($a0)
    ctx->pc = 0x347accu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x347ad0: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x347ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x347ad4: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x347ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x347ad8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x347ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x347adc: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x347ADCu;
    {
        const bool branch_taken_0x347adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x347AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347ADCu;
        // 0x347ae0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347adc) {
            ctx->pc = 0x347AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347ac8;
        }
    }
    ctx->pc = 0x347AE4u;
    // 0x347ae4: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x347ae4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347ae8: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x347ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x347aec: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x347aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_347af0:
    // 0x347af0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x347af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_347af4:
    // 0x347af4: 0x27e102b  sltu        $v0, $s3, $fp
    ctx->pc = 0x347af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x347af8: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x347AF8u;
    {
        const bool branch_taken_0x347af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AF8u;
        // 0x347afc: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347af8) {
            ctx->pc = 0x3478E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3478e8;
        }
    }
    ctx->pc = 0x347B00u;
label_347b00:
    // 0x347b00: 0x8fa44754  lw          $a0, 0x4754($sp)
    ctx->pc = 0x347b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18260)));
    // 0x347b04: 0x8fa64740  lw          $a2, 0x4740($sp)
    ctx->pc = 0x347b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18240)));
    // 0x347b08: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x347b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x347b0c: 0x1040ff5e  beqz        $v0, . + 4 + (-0xA2 << 2)
    ctx->pc = 0x347B0Cu;
    {
        const bool branch_taken_0x347b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B0Cu;
        // 0x347b10: 0x8fa54730  lw          $a1, 0x4730($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b0c) {
            ctx->pc = 0x347888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347888;
        }
    }
    ctx->pc = 0x347B14u;
label_347b14:
    // 0x347b14: 0x8fb64750  lw          $s6, 0x4750($sp)
    ctx->pc = 0x347b14u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18256)));
    // 0x347b18: 0x8fa7473c  lw          $a3, 0x473C($sp)
    ctx->pc = 0x347b18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18236)));
    // 0x347b1c: 0xf6102b  sltu        $v0, $a3, $s6
    ctx->pc = 0x347b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x347b20: 0x5040ff53  beql        $v0, $zero, . + 4 + (-0xAD << 2)
    ctx->pc = 0x347B20u;
    {
        const bool branch_taken_0x347b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x347b20) {
            ctx->pc = 0x347B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x347B20u;
            // 0x347b24: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347870;
        }
    }
    ctx->pc = 0x347B28u;
label_347b28:
    // 0x347b28: 0x8fa94758  lw          $t1, 0x4758($sp)
    ctx->pc = 0x347b28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18264)));
    // 0x347b2c: 0x8faa4738  lw          $t2, 0x4738($sp)
    ctx->pc = 0x347b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18232)));
    // 0x347b30: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x347b30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x347b34: 0x1040ff46  beqz        $v0, . + 4 + (-0xBA << 2)
    ctx->pc = 0x347B34u;
    {
        const bool branch_taken_0x347b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B34u;
        // 0x347b38: 0xafa94748  sw          $t1, 0x4748($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 18248), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b34) {
            ctx->pc = 0x347850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347850;
        }
    }
    ctx->pc = 0x347B3Cu;
label_347b3c:
    // 0x347b3c: 0x8fa24744  lw          $v0, 0x4744($sp)
    ctx->pc = 0x347b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18244)));
    // 0x347b40: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x347B40u;
    {
        const bool branch_taken_0x347b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347B40u;
        // 0x347b44: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347b40) {
            ctx->pc = 0x347BD4u;
            goto label_347bd4;
        }
    }
    ctx->pc = 0x347B48u;
    // 0x347b48: 0x27a445a0  addiu       $a0, $sp, 0x45A0
    ctx->pc = 0x347b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 17824));
    // 0x347b4c: 0xc0d1cc0  jal         func_347300
    ctx->pc = 0x347B4Cu;
    SET_GPR_U32(ctx, 31, 0x347B54u);
    ctx->pc = 0x347B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347B4Cu;
    // 0x347b50: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347300u, 0x347B4Cu, 0x347B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347B54u;
label_347b54:
    // 0x347b54: 0x8fa545a0  lw          $a1, 0x45A0($sp)
    ctx->pc = 0x347b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 17824)));
    // 0x347b58: 0x8fa34734  lw          $v1, 0x4734($sp)
    ctx->pc = 0x347b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 18228)));
    // 0x347b5c: 0x78a20090  lq          $v0, 0x90($a1)
    ctx->pc = 0x347b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x347b60: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x347b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x347b64: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x347b64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347b68: 0xc6e10010  lwc1        $f1, 0x10($s7)
    ctx->pc = 0x347b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347b6c: 0x7fa24510  sq          $v0, 0x4510($sp)
    ctx->pc = 0x347b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17680), GPR_VEC(ctx, 2));
    // 0x347b70: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x347b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x347b74: 0xafa04518  sw          $zero, 0x4518($sp)
    ctx->pc = 0x347b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 17688), GPR_U32(ctx, 0));
    // 0x347b78: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x347b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347b7c: 0x0  nop
    ctx->pc = 0x347b7cu;
    // NOP
    // 0x347b80: 0x0  nop
    ctx->pc = 0x347b80u;
    // NOP
    // 0x347b84: 0x46000004  c1          0x4
    ctx->pc = 0x347b84u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x347b88: 0x7ba24510  lq          $v0, 0x4510($sp)
    ctx->pc = 0x347b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 17680)));
    // 0x347b8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x347b8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x347b90: 0x78c30050  lq          $v1, 0x50($a2)
    ctx->pc = 0x347b90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x347b94: 0xacc40040  sw          $a0, 0x40($a2)
    ctx->pc = 0x347b94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 4));
    // 0x347b98: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x347b98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x347b9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x347b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x347ba0: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x347ba0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x347ba4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x347ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x347ba8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x347ba8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x347bac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x347bacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x347bb0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x347bb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x347bb4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x347bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x347bb8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x347bb8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x347bbc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x347bbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x347bc0: 0x7fa24530  sq          $v0, 0x4530($sp)
    ctx->pc = 0x347bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17712), GPR_VEC(ctx, 2));
    // 0x347bc4: 0x7cc30050  sq          $v1, 0x50($a2)
    ctx->pc = 0x347bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 3));
    // 0x347bc8: 0x7fa24540  sq          $v0, 0x4540($sp)
    ctx->pc = 0x347bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17728), GPR_VEC(ctx, 2));
    // 0x347bcc: 0x7fa24520  sq          $v0, 0x4520($sp)
    ctx->pc = 0x347bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17696), GPR_VEC(ctx, 2));
    // 0x347bd0: 0x7fa34530  sq          $v1, 0x4530($sp)
    ctx->pc = 0x347bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 17712), GPR_VEC(ctx, 3));
label_347bd4:
    // 0x347bd4: 0x7bb04800  lq          $s0, 0x4800($sp)
    ctx->pc = 0x347bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 18432)));
    // 0x347bd8: 0x7bb147f0  lq          $s1, 0x47F0($sp)
    ctx->pc = 0x347bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 18416)));
    // 0x347bdc: 0x7bb247e0  lq          $s2, 0x47E0($sp)
    ctx->pc = 0x347bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 18400)));
    // 0x347be0: 0x7bb347d0  lq          $s3, 0x47D0($sp)
    ctx->pc = 0x347be0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 18384)));
    // 0x347be4: 0x7bb447c0  lq          $s4, 0x47C0($sp)
    ctx->pc = 0x347be4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 18368)));
    // 0x347be8: 0x7bb547b0  lq          $s5, 0x47B0($sp)
    ctx->pc = 0x347be8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 18352)));
    // 0x347bec: 0x7bb647a0  lq          $s6, 0x47A0($sp)
    ctx->pc = 0x347becu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 18336)));
    // 0x347bf0: 0x7bb74790  lq          $s7, 0x4790($sp)
    ctx->pc = 0x347bf0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 18320)));
    // 0x347bf4: 0x7bbe4780  lq          $fp, 0x4780($sp)
    ctx->pc = 0x347bf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 18304)));
    // 0x347bf8: 0xdfbf4770  ld          $ra, 0x4770($sp)
    ctx->pc = 0x347bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 18288)));
    // 0x347bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x347BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347BFCu;
        // 0x347c00: 0x27bd4810  addiu       $sp, $sp, 0x4810 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 18448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347C04u;
    // 0x347c04: 0x0  nop
    ctx->pc = 0x347c04u;
    // NOP
    ctx->pc = 0x347c08u;
}

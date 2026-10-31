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

// Function: sub_00477858
// Address: 0x477858 - 0x477ef8
void sub_00477858_0x477858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477858_0x477858");
#endif

    switch (ctx->pc) {
        case 0x477884u: goto label_477884;
        case 0x4778e8u: goto label_4778e8;
        case 0x4779d0u: goto label_4779d0;
        case 0x477e90u: goto label_477e90;
        case 0x477ed8u: goto label_477ed8;
        default: break;
    }

    ctx->pc = 0x477858u;

    // 0x477858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x477858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47785c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x477860: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x477860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x477864: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x477864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477868: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x477868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x47786c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x477870: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x477870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x477874: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x477874u;
    {
        const bool branch_taken_0x477874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x477874) {
            ctx->pc = 0x477878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477874u;
            // 0x477878: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x477888u;
            goto label_477888;
        }
    }
    ctx->pc = 0x47787Cu;
    // 0x47787c: 0xc1291a4  jal         func_4A4690
    ctx->pc = 0x47787Cu;
    SET_GPR_U32(ctx, 31, 0x477884u);
    ctx->pc = 0x477880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47787Cu;
    // 0x477880: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4690u, 0x47787Cu, 0x477884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477884u;
label_477884:
    // 0x477884: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x477884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_477888:
    // 0x477888: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x477888u;
    {
        const bool branch_taken_0x477888 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477888u;
        // 0x47788c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477888) {
            ctx->pc = 0x477894u;
            goto label_477894;
        }
    }
    ctx->pc = 0x477890u;
    // 0x477890: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x477890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_477894:
    // 0x477894: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x477894u;
    {
        const bool branch_taken_0x477894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x477898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477894u;
        // 0x477898: 0xaf808a2c  sw          $zero, -0x75D4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477894) {
            ctx->pc = 0x4778BCu;
            goto label_4778bc;
        }
    }
    ctx->pc = 0x47789Cu;
    // 0x47789c: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x47789cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x4778a0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4778a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4778a4: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x4778a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x4778a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4778a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x4778ac: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4778acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4778b0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4778b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4778b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4778b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4778b8: 0xaf828a2c  sw          $v0, -0x75D4($gp)
    ctx->pc = 0x4778b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
label_4778bc:
    // 0x4778bc: 0x8f828a28  lw          $v0, -0x75D8($gp)
    ctx->pc = 0x4778bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
    // 0x4778c0: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x4778C0u;
    {
        const bool branch_taken_0x4778c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4778C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4778C0u;
        // 0x4778c4: 0x8f828a2c  lw          $v0, -0x75D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4778c0) {
            ctx->pc = 0x4779A4u;
            goto label_4779a4;
        }
    }
    ctx->pc = 0x4778C8u;
    // 0x4778c8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4778C8u;
    {
        const bool branch_taken_0x4778c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4778CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4778C8u;
        // 0x4778cc: 0xdf828730  ld          $v0, -0x78D0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4778c8) {
            ctx->pc = 0x4778F0u;
            goto label_4778f0;
        }
    }
    ctx->pc = 0x4778D0u;
    // 0x4778d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4778d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4778d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4778d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4778d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4778d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4778dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4778dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4778e0: 0xc128ed2  jal         func_4A3B48
    ctx->pc = 0x4778E0u;
    SET_GPR_U32(ctx, 31, 0x4778E8u);
    ctx->pc = 0x4778E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4778E0u;
    // 0x4778e4: 0xff828730  sd          $v0, -0x78D0($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3B48u, 0x4778E0u, 0x4778E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4778E8u;
label_4778e8:
    // 0x4778e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4778E8u;
    {
        const bool branch_taken_0x4778e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4778ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4778E8u;
        // 0x4778ec: 0xaf908a28  sw          $s0, -0x75D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4778e8) {
            ctx->pc = 0x477900u;
            goto label_477900;
        }
    }
    ctx->pc = 0x4778F0u;
label_4778f0:
    // 0x4778f0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x4778f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x4778f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4778f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4778f8: 0xff828730  sd          $v0, -0x78D0($gp)
    ctx->pc = 0x4778f8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
    // 0x4778fc: 0xaf908a28  sw          $s0, -0x75D8($gp)
    ctx->pc = 0x4778fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937128), GPR_U32(ctx, 16));
label_477900:
    // 0x477900: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x477900u;
    {
        const bool branch_taken_0x477900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x477904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477900u;
        // 0x477904: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477900) {
            ctx->pc = 0x4779A0u;
            goto label_4779a0;
        }
    }
    ctx->pc = 0x477908u;
    // 0x477908: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x477908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x47790c: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x47790cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x477910: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x477910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x477914: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x477914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x477918: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x477918u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x47791c: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x47791Cu;
    {
        const bool branch_taken_0x47791c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x47791c) {
            ctx->pc = 0x477920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47791Cu;
            // 0x477920: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x477958u;
            goto label_477958;
        }
    }
    ctx->pc = 0x477924u;
    // 0x477924: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x477924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x477928: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x477928u;
    {
        const bool branch_taken_0x477928 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x477928) {
            ctx->pc = 0x47792Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477928u;
            // 0x47792c: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x477958u;
            goto label_477958;
        }
    }
    ctx->pc = 0x477930u;
    // 0x477930: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x477930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x477934: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x477934u;
    {
        const bool branch_taken_0x477934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x477934) {
            ctx->pc = 0x477938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477934u;
            // 0x477938: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x477958u;
            goto label_477958;
        }
    }
    ctx->pc = 0x47793Cu;
    // 0x47793c: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x47793cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x477940: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x477940u;
    {
        const bool branch_taken_0x477940 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x477940) {
            ctx->pc = 0x477944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477940u;
            // 0x477944: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x477958u;
            goto label_477958;
        }
    }
    ctx->pc = 0x477948u;
    // 0x477948: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x477948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x47794c: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x47794Cu;
    {
        const bool branch_taken_0x47794c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x47794c) {
            ctx->pc = 0x477950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47794Cu;
            // 0x477950: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x477958u;
            goto label_477958;
        }
    }
    ctx->pc = 0x477954u;
    // 0x477954: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x477954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_477958:
    // 0x477958: 0x0  nop
    ctx->pc = 0x477958u;
    // NOP
    // 0x47795c: 0xff828718  sd          $v0, -0x78E8($gp)
    ctx->pc = 0x47795cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 2));
    // 0x477960: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x477960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x477964: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x477964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x477968: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x477968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x47796c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x47796Cu;
    {
        const bool branch_taken_0x47796c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x477970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47796Cu;
        // 0x477970: 0xff808710  sd          $zero, -0x78F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47796c) {
            ctx->pc = 0x477980u;
            goto label_477980;
        }
    }
    ctx->pc = 0x477974u;
    // 0x477974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x477974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x477978: 0xff828710  sd          $v0, -0x78F0($gp)
    ctx->pc = 0x477978u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 2));
    // 0x47797c: 0x0  nop
    ctx->pc = 0x47797cu;
    // NOP
label_477980:
    // 0x477980: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x477980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x477984: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x477984u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x477988: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x477988u;
    {
        const bool branch_taken_0x477988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x47798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477988u;
        // 0x47798c: 0x8f828a2c  lw          $v0, -0x75D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477988) {
            ctx->pc = 0x4779A4u;
            goto label_4779a4;
        }
    }
    ctx->pc = 0x477990u;
    // 0x477990: 0xdf828710  ld          $v0, -0x78F0($gp)
    ctx->pc = 0x477990u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x477994: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x477994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x477998: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x477998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x47799c: 0xff828710  sd          $v0, -0x78F0($gp)
    ctx->pc = 0x47799cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U64(ctx, 2));
label_4779a0:
    // 0x4779a0: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x4779a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
label_4779a4:
    // 0x4779a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4779A4u;
    {
        const bool branch_taken_0x4779a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4779A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4779A4u;
        // 0x4779a8: 0xdf8286f8  ld          $v0, -0x7908($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4779a4) {
            ctx->pc = 0x4779B8u;
            goto label_4779b8;
        }
    }
    ctx->pc = 0x4779ACu;
    // 0x4779ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4779acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4779b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4779B0u;
    {
        const bool branch_taken_0x4779b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4779B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4779B0u;
        // 0x4779b4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4779b0) {
            ctx->pc = 0x4779C0u;
            goto label_4779c0;
        }
    }
    ctx->pc = 0x4779B8u;
label_4779b8:
    // 0x4779b8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x4779b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4779bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4779bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4779c0:
    // 0x4779c0: 0xff8286f8  sd          $v0, -0x7908($gp)
    ctx->pc = 0x4779c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936312), GPR_U64(ctx, 2));
    // 0x4779c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4779c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4779c8: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x4779C8u;
    SET_GPR_U32(ctx, 31, 0x4779D0u);
    ctx->pc = 0x4779CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4779C8u;
    // 0x4779cc: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4779C8u, 0x4779D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4779D0u;
label_4779d0:
    // 0x4779d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4779d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4779d4: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x4779d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x4779d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4779d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4779dc: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x4779dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x4779e0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4779e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x4779e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4779e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x4779e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4779e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4779ec: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4779ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x4779f0: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x4779f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x4779f4: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x4779f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
    // 0x4779f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x4779f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x4779fc: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x4779fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x477a00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x477a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x477a04: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x477a04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x477a08: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x477a08u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x477a0c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x477a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x477a10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x477a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x477a14: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477a14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477a18: 0x92430047  lbu         $v1, 0x47($s2)
    ctx->pc = 0x477a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x477a1c: 0x8f828a2c  lw          $v0, -0x75D4($gp)
    ctx->pc = 0x477a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x477a20: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x477a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x477a24: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x477a24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x477a28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x477a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x477a2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x477A2Cu;
    {
        const bool branch_taken_0x477a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477A2Cu;
        // 0x477a30: 0xaf838a30  sw          $v1, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477a2c) {
            ctx->pc = 0x477A48u;
            goto label_477a48;
        }
    }
    ctx->pc = 0x477A34u;
    // 0x477a34: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x477a34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x477a38: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x477a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x477a3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x477A3Cu;
    {
        const bool branch_taken_0x477a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477A3Cu;
        // 0x477a40: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477a3c) {
            ctx->pc = 0x477A54u;
            goto label_477a54;
        }
    }
    ctx->pc = 0x477A44u;
    // 0x477a44: 0x0  nop
    ctx->pc = 0x477a44u;
    // NOP
label_477a48:
    // 0x477a48: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x477a48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x477a4c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x477a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x477a50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x477a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_477a54:
    // 0x477a54: 0xff828730  sd          $v0, -0x78D0($gp)
    ctx->pc = 0x477a54u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936368), GPR_U64(ctx, 2));
    // 0x477a58: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x477a58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x477a5c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x477a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x477a60: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x477a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x477a64: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x477a64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x477a68: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x477a68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x477a6c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x477a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x477a70: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x477a70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x477a74: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x477a74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x477a78: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x477a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x477a7c: 0xdc64f750  ld          $a0, -0x8B0($v1)
    ctx->pc = 0x477a7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294965072)));
    // 0x477a80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x477a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x477a84: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x477a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
    // 0x477a88: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x477a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x477a8c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x477a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x477a90: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x477a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x477a94: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x477a94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x477a98: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x477a98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x477a9c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x477a9cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x477aa0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x477aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x477aa4: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x477aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x477aa8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x477aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x477aac: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x477aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x477ab0: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x477ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x477ab4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x477ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x477ab8: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x477ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x477abc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x477abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x477ac0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x477ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x477ac4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x477ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x477ac8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x477ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x477acc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477ad0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x477ad0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x477ad4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x477ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x477ad8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x477ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x477adc: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x477adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x477ae0: 0xdf828730  ld          $v0, -0x78D0($gp)
    ctx->pc = 0x477ae0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936368)));
    // 0x477ae4: 0xc7858244  lwc1        $f5, -0x7DBC($gp)
    ctx->pc = 0x477ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x477ae8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x477ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x477aec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x477AECu;
    {
        const bool branch_taken_0x477aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477AECu;
        // 0x477af0: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477aec) {
            ctx->pc = 0x477AF8u;
            goto label_477af8;
        }
    }
    ctx->pc = 0x477AF4u;
    // 0x477af4: 0xc7858248  lwc1        $f5, -0x7DB8($gp)
    ctx->pc = 0x477af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_477af8:
    // 0x477af8: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x477af8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x477afc: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x477afcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x477b00: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x477b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x477b04: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x477b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x477b08: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x477b08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x477b0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x477b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x477b10: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x477b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x477b14: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x477b14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x477b18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x477b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x477b1c: 0xc781824c  lwc1        $f1, -0x7DB4($gp)
    ctx->pc = 0x477b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x477b20: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x477b20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x477b24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x477b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x477b28: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x477b28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x477b2c: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x477b2cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x477b30: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x477b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x477b34: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x477b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x477b38: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x477b38u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x477b3c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x477b3cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x477b40: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x477b40u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x477b44: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x477b44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x477b48: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x477b48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x477b4c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x477b4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x477b50: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x477b50u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x477b54: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x477b54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x477b58: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x477b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x477b5c: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x477b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x477b60: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x477b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x477b64: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x477b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x477b68: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x477b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x477b6c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x477b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x477b70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x477b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x477b74: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x477b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x477b78: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x477b78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x477b7c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x477b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x477b80: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x477b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x477b84: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x477b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x477b88: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x477b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x477b8c: 0xc7848250  lwc1        $f4, -0x7DB0($gp)
    ctx->pc = 0x477b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x477b90: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x477b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x477b94: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x477b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x477b98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x477b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x477b9c: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x477b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477ba0: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x477ba0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x477ba4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x477ba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x477ba8: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x477ba8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x477bac: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x477bacu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x477bb0: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x477bb0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x477bb4: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x477bb4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x477bb8: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x477bb8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x477bbc: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x477bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x477bc0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x477bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x477bc4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x477bc4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x477bc8: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x477bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x477bcc: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x477bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x477bd0: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x477bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x477bd4: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x477bd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x477bd8: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x477bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x477bdc: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x477bdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x477be0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x477be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x477be4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x477be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x477be8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x477be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x477bec: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x477becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x477bf0: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x477bf0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x477bf4: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x477bf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x477bf8: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x477bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x477bfc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x477bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x477c00: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477c00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477c04: 0x8f838790  lw          $v1, -0x7870($gp)
    ctx->pc = 0x477c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936464)));
    // 0x477c08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x477C08u;
    {
        const bool branch_taken_0x477c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x477C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477C08u;
        // 0x477c0c: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477c08) {
            ctx->pc = 0x477C18u;
            goto label_477c18;
        }
    }
    ctx->pc = 0x477C10u;
    // 0x477c10: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x477C10u;
    {
        const bool branch_taken_0x477c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x477c10) {
            ctx->pc = 0x477C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477C10u;
            // 0x477c14: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x477C30u;
            goto label_477c30;
        }
    }
    ctx->pc = 0x477C18u;
label_477c18:
    // 0x477c18: 0x8f828794  lw          $v0, -0x786C($gp)
    ctx->pc = 0x477c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936468)));
    // 0x477c1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x477C1Cu;
    {
        const bool branch_taken_0x477c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477C1Cu;
        // 0x477c20: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477c1c) {
            ctx->pc = 0x477C58u;
            goto label_477c58;
        }
    }
    ctx->pc = 0x477C24u;
    // 0x477c24: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x477C24u;
    {
        const bool branch_taken_0x477c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x477c24) {
            ctx->pc = 0x477C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477C24u;
            // 0x477c28: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x477C60u;
            goto label_477c60;
        }
    }
    ctx->pc = 0x477C2Cu;
    // 0x477c2c: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x477c2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_477c30:
    // 0x477c30: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x477c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x477c34: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x477c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x477c38: 0x2463f7f0  addiu       $v1, $v1, -0x810
    ctx->pc = 0x477c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965232));
    // 0x477c3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x477c3cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F7F0u));
    // 0x477c40: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x477c40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x477c44: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x477c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x477c48: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x477c48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x477c4c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x477c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x477c50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x477C50u;
    {
        const bool branch_taken_0x477c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477C50u;
        // 0x477c54: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477c50) {
            ctx->pc = 0x477C80u;
            goto label_477c80;
        }
    }
    ctx->pc = 0x477C58u;
label_477c58:
    // 0x477c58: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x477c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x477c5c: 0x0  nop
    ctx->pc = 0x477c5cu;
    // NOP
label_477c60:
    // 0x477c60: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x477c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x477c64: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x477c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x477c68: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x477c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x477c6c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x477c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x477c70: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x477c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x477c74: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x477c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x477c78: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x477c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x477c7c: 0x2463f7e0  addiu       $v1, $v1, -0x820
    ctx->pc = 0x477c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965216));
label_477c80:
    // 0x477c80: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x477c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x477c84: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x477c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x477c88: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x477c88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x477c8c: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x477c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x477c90: 0x8f838a34  lw          $v1, -0x75CC($gp)
    ctx->pc = 0x477c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937140)));
    // 0x477c94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x477c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x477c98: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x477C98u;
    {
        const bool branch_taken_0x477c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x477C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477C98u;
        // 0x477c9c: 0xaf808788  sw          $zero, -0x7878($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477c98) {
            ctx->pc = 0x477CA8u;
            goto label_477ca8;
        }
    }
    ctx->pc = 0x477CA0u;
    // 0x477ca0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x477ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x477ca4: 0xaf828788  sw          $v0, -0x7878($gp)
    ctx->pc = 0x477ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 2));
label_477ca8:
    // 0x477ca8: 0x9f82878c  lwu         $v0, -0x7874($gp)
    ctx->pc = 0x477ca8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936460)));
    // 0x477cac: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x477cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x477cb0: 0x9f848788  lwu         $a0, -0x7878($gp)
    ctx->pc = 0x477cb0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x477cb4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x477cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x477cb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x477cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x477cbc: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x477cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x477cc0: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x477cc0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x477cc4: 0x8f84898c  lw          $a0, -0x7674($gp)
    ctx->pc = 0x477cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x477cc8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x477cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x477ccc: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x477cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x477cd0: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x477cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x477cd4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x477cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x477cd8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x477CD8u;
    {
        const bool branch_taken_0x477cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477CD8u;
        // 0x477cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477cd8) {
            ctx->pc = 0x477D58u;
            goto label_477d58;
        }
    }
    ctx->pc = 0x477CE0u;
    // 0x477ce0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x477ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x477ce4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x477ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x477ce8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x477ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x477cec: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x477cecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x477cf0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x477cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x477cf4: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x477cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x477cf8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477cfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x477cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x477d00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x477d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x477d04: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x477d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x477d08: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x477d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x477d0c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x477d0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x477d10: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x477d10u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x477d14: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x477d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x477d18: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477d18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477d1c: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x477d1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x477d20: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x477d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x477d24: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x477d24u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x477d28: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x477d28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x477d2c: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x477d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x477d30: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477d30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477d34: 0xdf828718  ld          $v0, -0x78E8($gp)
    ctx->pc = 0x477d34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x477d38: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x477d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x477d3c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x477d3cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x477d40: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x477d40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x477d44: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x477d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x477d48: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477d48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477d4c: 0xdf828710  ld          $v0, -0x78F0($gp)
    ctx->pc = 0x477d4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936336)));
    // 0x477d50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x477D50u;
    {
        const bool branch_taken_0x477d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477D50u;
        // 0x477d54: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477d50) {
            ctx->pc = 0x477DC0u;
            goto label_477dc0;
        }
    }
    ctx->pc = 0x477D58u;
label_477d58:
    // 0x477d58: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x477d58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x477d5c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x477d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x477d60: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x477d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x477d64: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477d64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477d68: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x477d68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x477d6c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x477d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x477d70: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x477d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x477d74: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477d74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477d78: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x477d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x477d7c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x477d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x477d80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x477d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x477d84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x477d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477d88: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x477d88u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x477d8c: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x477d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x477d90: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x477d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x477d94: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477d94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477d98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x477d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x477d9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x477d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x477da0: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x477da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x477da4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x477da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x477da8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x477da8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x477dac: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x477dacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x477db0: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x477db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x477db4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477db8: 0xdf8286f8  ld          $v0, -0x7908($gp)
    ctx->pc = 0x477db8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x477dbc: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x477dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_477dc0:
    // 0x477dc0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x477dc0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x477dc4: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x477dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x477dc8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x477dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x477dcc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x477dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x477dd0: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x477dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x477dd4: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x477dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x477dd8: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x477dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x477ddc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x477ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x477de0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x477de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x477de4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x477de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x477de8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x477de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x477dec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x477decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x477df0: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x477df0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x477df4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x477df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x477df8: 0x8f858784  lw          $a1, -0x787C($gp)
    ctx->pc = 0x477df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x477dfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x477dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x477e00: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x477e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x477e04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x477e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x477e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x477e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x477e0c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x477e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477e10: 0x10a6000b  beq         $a1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x477E10u;
    {
        const bool branch_taken_0x477e10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x477E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477E10u;
        // 0x477e14: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477e10) {
            ctx->pc = 0x477E40u;
            goto label_477e40;
        }
    }
    ctx->pc = 0x477E18u;
    // 0x477e18: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x477e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x477e1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x477e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x477e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x477e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477e24: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x477e24u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x477e28: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x477e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x477e2c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x477e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x477e30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x477e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x477e34: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x477e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x477e38: 0xaf868784  sw          $a2, -0x787C($gp)
    ctx->pc = 0x477e38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 6));
    // 0x477e3c: 0x0  nop
    ctx->pc = 0x477e3cu;
    // NOP
label_477e40:
    // 0x477e40: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x477e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x477e44: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x477e44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x477e48: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x477e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x477e4c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x477e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x477e50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x477e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477e54: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x477e54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x477e58: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x477e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x477e5c: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x477e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x477e60: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x477e60u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x477e64: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x477e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x477e68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x477e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x477e6c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x477e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x477e70: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x477e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x477e74: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x477e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x477e78: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x477e78u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x477e7c: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x477e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x477e80: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x477e80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x477e84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x477e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x477e88: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x477e88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x477e8c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x477e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_477e90:
    // 0x477e90: 0x42000039  di
    ctx->pc = 0x477e90u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x477e94: 0x40f  sync.p
    ctx->pc = 0x477e94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x477e98: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x477e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x477e9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x477e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x477ea0: 0x0  nop
    ctx->pc = 0x477ea0u;
    // NOP
    // 0x477ea4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x477EA4u;
    {
        const bool branch_taken_0x477ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x477ea4) {
            ctx->pc = 0x477E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477e90;
        }
    }
    ctx->pc = 0x477EACu;
    // 0x477eac: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x477eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x477eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x477eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x477eb4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x477eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x477eb8: 0x42000038  ei
    ctx->pc = 0x477eb8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x477ebc: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x477ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x477ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x477ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x477ec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x477ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x477ec8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x477EC8u;
    {
        const bool branch_taken_0x477ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x477ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477EC8u;
        // 0x477ecc: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477ec8) {
            ctx->pc = 0x477ED8u;
            goto label_477ed8;
        }
    }
    ctx->pc = 0x477ED0u;
    // 0x477ed0: 0xc1237ea  jal         func_48DFA8
    ctx->pc = 0x477ED0u;
    SET_GPR_U32(ctx, 31, 0x477ED8u);
    ctx->pc = 0x477ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477ED0u;
    // 0x477ed4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA8u, 0x477ED0u, 0x477ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477ED8u;
label_477ed8:
    // 0x477ed8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x477ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x477edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x477edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x477ee0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x477ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x477ee4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x477ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x477ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x477ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x477eec: 0x3e00008  jr          $ra
    ctx->pc = 0x477EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x477EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477EECu;
        // 0x477ef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x477EF4u;
    // 0x477ef4: 0x0  nop
    ctx->pc = 0x477ef4u;
    // NOP
    ctx->pc = 0x477ef8u;
}

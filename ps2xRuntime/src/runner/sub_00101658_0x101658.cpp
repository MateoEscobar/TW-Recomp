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

// Function: sub_00101658
// Address: 0x101658 - 0x1017a0
void sub_00101658_0x101658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101658_0x101658");
#endif

    switch (ctx->pc) {
        case 0x10167cu: goto label_10167c;
        case 0x1016a4u: goto label_1016a4;
        case 0x1016e0u: goto label_1016e0;
        case 0x101754u: goto label_101754;
        case 0x101780u: goto label_101780;
        default: break;
    }

    ctx->pc = 0x101658u;

    // 0x101658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x101658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10165c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x101660: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x101660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x101664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101668: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x101668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10166c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x101670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101674: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101674u;
    SET_GPR_U32(ctx, 31, 0x10167Cu);
    ctx->pc = 0x101678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101674u;
    // 0x101678: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101674u, 0x10167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10167Cu;
label_10167c:
    // 0x10167c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10167cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101680: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101680u;
    {
        const bool branch_taken_0x101680 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x101680) {
            ctx->pc = 0x10169Cu;
            goto label_10169c;
        }
    }
    ctx->pc = 0x101688u;
    // 0x101688: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x101688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x10168c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10168cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x101690: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x101690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101694: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x101694u;
    {
        const bool branch_taken_0x101694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101694u;
        // 0x101698: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101694) {
            ctx->pc = 0x101784u;
            goto label_101784;
        }
    }
    ctx->pc = 0x10169Cu;
label_10169c:
    // 0x10169c: 0xc040494  jal         func_101250
    ctx->pc = 0x10169Cu;
    SET_GPR_U32(ctx, 31, 0x1016A4u);
    ctx->pc = 0x1016A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10169Cu;
    // 0x1016a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x10169Cu, 0x1016A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1016A4u;
label_1016a4:
    // 0x1016a4: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x1016a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1016a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1016a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016ac: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1016ACu;
    {
        const bool branch_taken_0x1016ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1016B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1016ACu;
        // 0x1016b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1016ac) {
            ctx->pc = 0x101774u;
            goto label_101774;
        }
    }
    ctx->pc = 0x1016B4u;
    // 0x1016b4: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x1016b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x1016b8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1016b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1016bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1016bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1016c0: 0x240c000f  addiu       $t4, $zero, 0xF
    ctx->pc = 0x1016c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1016c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1016c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1016c8: 0x240b0013  addiu       $t3, $zero, 0x13
    ctx->pc = 0x1016c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1016cc: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x1016ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1016d0: 0x24090036  addiu       $t1, $zero, 0x36
    ctx->pc = 0x1016d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1016d4: 0x24080034  addiu       $t0, $zero, 0x34
    ctx->pc = 0x1016d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1016d8: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x1016d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1016dc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x1016dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1016e0:
    // 0x1016e0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1016e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1016e4: 0x504c000e  beql        $v0, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x1016E4u;
    {
        const bool branch_taken_0x1016e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x1016e4) {
            ctx->pc = 0x1016E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1016E4u;
            // 0x1016e8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101720u;
            goto label_101720;
        }
    }
    ctx->pc = 0x1016ECu;
    // 0x1016ec: 0x504b000c  beql        $v0, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x1016ECu;
    {
        const bool branch_taken_0x1016ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x1016ec) {
            ctx->pc = 0x1016F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1016ECu;
            // 0x1016f0: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101720u;
            goto label_101720;
        }
    }
    ctx->pc = 0x1016F4u;
    // 0x1016f4: 0x504a000a  beql        $v0, $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x1016F4u;
    {
        const bool branch_taken_0x1016f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x1016f4) {
            ctx->pc = 0x1016F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1016F4u;
            // 0x1016f8: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101720u;
            goto label_101720;
        }
    }
    ctx->pc = 0x1016FCu;
    // 0x1016fc: 0x50490008  beql        $v0, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1016FCu;
    {
        const bool branch_taken_0x1016fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1016fc) {
            ctx->pc = 0x101700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1016FCu;
            // 0x101700: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101720u;
            goto label_101720;
        }
    }
    ctx->pc = 0x101704u;
    // 0x101704: 0x50480006  beql        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x101704u;
    {
        const bool branch_taken_0x101704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x101704) {
            ctx->pc = 0x101708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101704u;
            // 0x101708: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101720u;
            goto label_101720;
        }
    }
    ctx->pc = 0x10170Cu;
    // 0x10170c: 0x50470004  beql        $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x10170Cu;
    {
        const bool branch_taken_0x10170c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x10170c) {
            ctx->pc = 0x101710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10170Cu;
            // 0x101710: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101720u;
            goto label_101720;
        }
    }
    ctx->pc = 0x101714u;
    // 0x101714: 0x54460012  bnel        $v0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x101714u;
    {
        const bool branch_taken_0x101714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x101714) {
            ctx->pc = 0x101718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101714u;
            // 0x101718: 0x9603001a  lhu         $v1, 0x1A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101760u;
            goto label_101760;
        }
    }
    ctx->pc = 0x10171Cu;
    // 0x10171c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x10171cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_101720:
    // 0x101720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x101724: 0x0  nop
    ctx->pc = 0x101724u;
    // NOP
    // 0x101728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x101728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10172c: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x10172cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x101730: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x101730u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x101734: 0x0  nop
    ctx->pc = 0x101734u;
    // NOP
    // 0x101738: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x101738u;
    {
        const bool branch_taken_0x101738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101738u;
        // 0x10173c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101738) {
            ctx->pc = 0x10174Cu;
            goto label_10174c;
        }
    }
    ctx->pc = 0x101740u;
    // 0x101740: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x101740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x101744: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x101744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x101748: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x101748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10174c:
    // 0x10174c: 0xc04128e  jal         func_104A38
    ctx->pc = 0x10174Cu;
    SET_GPR_U32(ctx, 31, 0x101754u);
    ctx->pc = 0x101750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10174Cu;
    // 0x101750: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x10174Cu, 0x101754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101754u;
label_101754:
    // 0x101754: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x101754u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x101758: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x101758u;
    {
        const bool branch_taken_0x101758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101758u;
        // 0x10175c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101758) {
            ctx->pc = 0x101784u;
            goto label_101784;
        }
    }
    ctx->pc = 0x101760u;
label_101760:
    // 0x101760: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x101760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101764: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x101764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x101768: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x101768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x10176c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x10176Cu;
    {
        const bool branch_taken_0x10176c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10176Cu;
        // 0x101770: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10176c) {
            ctx->pc = 0x1016E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1016e0;
        }
    }
    ctx->pc = 0x101774u;
label_101774:
    // 0x101774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101778: 0xc040680  jal         func_101A00
    ctx->pc = 0x101778u;
    SET_GPR_U32(ctx, 31, 0x101780u);
    ctx->pc = 0x10177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101778u;
    // 0x10177c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x101778u, 0x101780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101780u;
label_101780:
    // 0x101780: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x101780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101784:
    // 0x101784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x101784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101788: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x101788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10178c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101790: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x101790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x101794: 0x3e00008  jr          $ra
    ctx->pc = 0x101794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101794u;
        // 0x101798: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10179Cu;
    // 0x10179c: 0x0  nop
    ctx->pc = 0x10179cu;
    // NOP
    ctx->pc = 0x1017a0u;
}

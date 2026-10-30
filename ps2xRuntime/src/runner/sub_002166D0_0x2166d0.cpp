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

// Function: sub_002166D0
// Address: 0x2166d0 - 0x216908
void sub_002166D0_0x2166d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002166D0_0x2166d0");
#endif

    switch (ctx->pc) {
        case 0x2166d0u: goto label_2166d0;
        case 0x2166d4u: goto label_2166d4;
        case 0x2166d8u: goto label_2166d8;
        case 0x2166dcu: goto label_2166dc;
        case 0x2166e0u: goto label_2166e0;
        case 0x2166e4u: goto label_2166e4;
        case 0x2166e8u: goto label_2166e8;
        case 0x2166ecu: goto label_2166ec;
        case 0x2166f0u: goto label_2166f0;
        case 0x2166f4u: goto label_2166f4;
        case 0x2166f8u: goto label_2166f8;
        case 0x2166fcu: goto label_2166fc;
        case 0x216700u: goto label_216700;
        case 0x216704u: goto label_216704;
        case 0x216708u: goto label_216708;
        case 0x21670cu: goto label_21670c;
        case 0x216710u: goto label_216710;
        case 0x216714u: goto label_216714;
        case 0x216718u: goto label_216718;
        case 0x21671cu: goto label_21671c;
        case 0x216720u: goto label_216720;
        case 0x216724u: goto label_216724;
        case 0x216728u: goto label_216728;
        case 0x21672cu: goto label_21672c;
        case 0x216730u: goto label_216730;
        case 0x216734u: goto label_216734;
        case 0x216738u: goto label_216738;
        case 0x21673cu: goto label_21673c;
        case 0x216740u: goto label_216740;
        case 0x216744u: goto label_216744;
        case 0x216748u: goto label_216748;
        case 0x21674cu: goto label_21674c;
        case 0x216750u: goto label_216750;
        case 0x216754u: goto label_216754;
        case 0x216758u: goto label_216758;
        case 0x21675cu: goto label_21675c;
        case 0x216760u: goto label_216760;
        case 0x216764u: goto label_216764;
        case 0x216768u: goto label_216768;
        case 0x21676cu: goto label_21676c;
        case 0x216770u: goto label_216770;
        case 0x216774u: goto label_216774;
        case 0x216778u: goto label_216778;
        case 0x21677cu: goto label_21677c;
        case 0x216780u: goto label_216780;
        case 0x216784u: goto label_216784;
        case 0x216788u: goto label_216788;
        case 0x21678cu: goto label_21678c;
        case 0x216790u: goto label_216790;
        case 0x216794u: goto label_216794;
        case 0x216798u: goto label_216798;
        case 0x21679cu: goto label_21679c;
        case 0x2167a0u: goto label_2167a0;
        case 0x2167a4u: goto label_2167a4;
        case 0x2167a8u: goto label_2167a8;
        case 0x2167acu: goto label_2167ac;
        case 0x2167b0u: goto label_2167b0;
        case 0x2167b4u: goto label_2167b4;
        case 0x2167b8u: goto label_2167b8;
        case 0x2167bcu: goto label_2167bc;
        case 0x2167c0u: goto label_2167c0;
        case 0x2167c4u: goto label_2167c4;
        case 0x2167c8u: goto label_2167c8;
        case 0x2167ccu: goto label_2167cc;
        case 0x2167d0u: goto label_2167d0;
        case 0x2167d4u: goto label_2167d4;
        case 0x2167d8u: goto label_2167d8;
        case 0x2167dcu: goto label_2167dc;
        case 0x2167e0u: goto label_2167e0;
        case 0x2167e4u: goto label_2167e4;
        case 0x2167e8u: goto label_2167e8;
        case 0x2167ecu: goto label_2167ec;
        case 0x2167f0u: goto label_2167f0;
        case 0x2167f4u: goto label_2167f4;
        case 0x2167f8u: goto label_2167f8;
        case 0x2167fcu: goto label_2167fc;
        case 0x216800u: goto label_216800;
        case 0x216804u: goto label_216804;
        case 0x216808u: goto label_216808;
        case 0x21680cu: goto label_21680c;
        case 0x216810u: goto label_216810;
        case 0x216814u: goto label_216814;
        case 0x216818u: goto label_216818;
        case 0x21681cu: goto label_21681c;
        case 0x216820u: goto label_216820;
        case 0x216824u: goto label_216824;
        case 0x216828u: goto label_216828;
        case 0x21682cu: goto label_21682c;
        case 0x216830u: goto label_216830;
        case 0x216834u: goto label_216834;
        case 0x216838u: goto label_216838;
        case 0x21683cu: goto label_21683c;
        case 0x216840u: goto label_216840;
        case 0x216844u: goto label_216844;
        case 0x216848u: goto label_216848;
        case 0x21684cu: goto label_21684c;
        case 0x216850u: goto label_216850;
        case 0x216854u: goto label_216854;
        case 0x216858u: goto label_216858;
        case 0x21685cu: goto label_21685c;
        case 0x216860u: goto label_216860;
        case 0x216864u: goto label_216864;
        case 0x216868u: goto label_216868;
        case 0x21686cu: goto label_21686c;
        case 0x216870u: goto label_216870;
        case 0x216874u: goto label_216874;
        case 0x216878u: goto label_216878;
        case 0x21687cu: goto label_21687c;
        case 0x216880u: goto label_216880;
        case 0x216884u: goto label_216884;
        case 0x216888u: goto label_216888;
        case 0x21688cu: goto label_21688c;
        case 0x216890u: goto label_216890;
        case 0x216894u: goto label_216894;
        case 0x216898u: goto label_216898;
        case 0x21689cu: goto label_21689c;
        case 0x2168a0u: goto label_2168a0;
        case 0x2168a4u: goto label_2168a4;
        case 0x2168a8u: goto label_2168a8;
        case 0x2168acu: goto label_2168ac;
        case 0x2168b0u: goto label_2168b0;
        case 0x2168b4u: goto label_2168b4;
        case 0x2168b8u: goto label_2168b8;
        case 0x2168bcu: goto label_2168bc;
        case 0x2168c0u: goto label_2168c0;
        case 0x2168c4u: goto label_2168c4;
        case 0x2168c8u: goto label_2168c8;
        case 0x2168ccu: goto label_2168cc;
        case 0x2168d0u: goto label_2168d0;
        case 0x2168d4u: goto label_2168d4;
        case 0x2168d8u: goto label_2168d8;
        case 0x2168dcu: goto label_2168dc;
        case 0x2168e0u: goto label_2168e0;
        case 0x2168e4u: goto label_2168e4;
        case 0x2168e8u: goto label_2168e8;
        case 0x2168ecu: goto label_2168ec;
        case 0x2168f0u: goto label_2168f0;
        case 0x2168f4u: goto label_2168f4;
        case 0x2168f8u: goto label_2168f8;
        case 0x2168fcu: goto label_2168fc;
        case 0x216900u: goto label_216900;
        case 0x216904u: goto label_216904;
        default: break;
    }

    ctx->pc = 0x2166d0u;

label_2166d0:
    // 0x2166d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2166d4:
    // 0x2166d4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2166d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2166d8:
    // 0x2166d8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2166d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2166dc:
    // 0x2166dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2166dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2166e0:
    // 0x2166e0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2166e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2166e4:
    // 0x2166e4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2166e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2166e8:
    // 0x2166e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2166e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2166ec:
    // 0x2166ec: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2166ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2166f0:
    // 0x2166f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2166f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2166f4:
    // 0x2166f4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2166f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2166f8:
    // 0x2166f8: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_2166fc:
    if (ctx->pc == 0x2166FCu) {
        ctx->pc = 0x2166FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166F8u;
        // 0x2166fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216700u;
        goto label_216700;
    }
    ctx->pc = 0x2166F8u;
    {
        const bool branch_taken_0x2166f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166F8u;
        // 0x2166fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166f8) {
            ctx->pc = 0x2168E4u;
            goto label_2168e4;
        }
    }
    ctx->pc = 0x216700u;
label_216700:
    // 0x216700: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x216700u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_216704:
    // 0x216704: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x216704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_216708:
    // 0x216708: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x216708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21670c:
    // 0x21670c: 0x26109f70  addiu       $s0, $s0, -0x6090
    ctx->pc = 0x21670cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942576));
label_216710:
    // 0x216710: 0x8e850090  lw          $a1, 0x90($s4)
    ctx->pc = 0x216710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_216714:
    // 0x216714: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x216714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_216718:
    // 0x216718: 0x2407027d  addiu       $a3, $zero, 0x27D
    ctx->pc = 0x216718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 637));
label_21671c:
    // 0x21671c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21671cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216720:
    // 0x216720: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x216720u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_216724:
    // 0x216724: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x216724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_216728:
    // 0x216728: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x216728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_21672c:
    // 0x21672c: 0x40f809  jalr        $v0
label_216730:
    if (ctx->pc == 0x216730u) {
        ctx->pc = 0x216730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21672Cu;
        // 0x216730: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216734u;
        goto label_216734;
    }
    ctx->pc = 0x21672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216734u);
        ctx->pc = 0x216730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21672Cu;
        // 0x216730: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21672Cu, 0x216734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216734u;
label_216734:
    // 0x216734: 0x8e850078  lw          $a1, 0x78($s4)
    ctx->pc = 0x216734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_216738:
    // 0x216738: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21673c:
    // 0x21673c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x21673cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_216740:
    // 0x216740: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x216740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_216744:
    // 0x216744: 0x60f809  jalr        $v1
label_216748:
    if (ctx->pc == 0x216748u) {
        ctx->pc = 0x216748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216744u;
        // 0x216748: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21674Cu;
        goto label_21674c;
    }
    ctx->pc = 0x216744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21674Cu);
        ctx->pc = 0x216748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216744u;
        // 0x216748: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216744u, 0x21674Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21674Cu;
label_21674c:
    // 0x21674c: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x21674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
label_216750:
    // 0x216750: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216754:
    // 0x216754: 0xc138e72  jal         func_4E39C8
label_216758:
    if (ctx->pc == 0x216758u) {
        ctx->pc = 0x216758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216754u;
        // 0x216758: 0x24060280  addiu       $a2, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21675Cu;
        goto label_21675c;
    }
    ctx->pc = 0x216754u;
    SET_GPR_U32(ctx, 31, 0x21675Cu);
    ctx->pc = 0x216758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216754u;
    // 0x216758: 0x24060280  addiu       $a2, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E39C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E39C8u, 0x216754u, 0x21675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21675Cu;
label_21675c:
    // 0x21675c: 0x8e850084  lw          $a1, 0x84($s4)
    ctx->pc = 0x21675cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_216760:
    // 0x216760: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216764:
    // 0x216764: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x216764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_216768:
    // 0x216768: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x216768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_21676c:
    // 0x21676c: 0x60f809  jalr        $v1
label_216770:
    if (ctx->pc == 0x216770u) {
        ctx->pc = 0x216770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21676Cu;
        // 0x216770: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216774u;
        goto label_216774;
    }
    ctx->pc = 0x21676Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216774u);
        ctx->pc = 0x216770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21676Cu;
        // 0x216770: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21676Cu, 0x216774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216774u;
label_216774:
    // 0x216774: 0x8e840084  lw          $a0, 0x84($s4)
    ctx->pc = 0x216774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 132)));
label_216778:
    // 0x216778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21677c:
    // 0x21677c: 0xc13abae  jal         func_4EAEB8
label_216780:
    if (ctx->pc == 0x216780u) {
        ctx->pc = 0x216780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21677Cu;
        // 0x216780: 0x24060283  addiu       $a2, $zero, 0x283 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216784u;
        goto label_216784;
    }
    ctx->pc = 0x21677Cu;
    SET_GPR_U32(ctx, 31, 0x216784u);
    ctx->pc = 0x216780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21677Cu;
    // 0x216780: 0x24060283  addiu       $a2, $zero, 0x283 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAEB8u, 0x21677Cu, 0x216784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216784u;
label_216784:
    // 0x216784: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x216784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_216788:
    // 0x216788: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x216788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21678c:
    // 0x21678c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x21678cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_216790:
    // 0x216790: 0x5203000c  beql        $s0, $v1, . + 4 + (0xC << 2)
label_216794:
    if (ctx->pc == 0x216794u) {
        ctx->pc = 0x216794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216790u;
        // 0x216794: 0x8e910060  lw          $s1, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216798u;
        goto label_216798;
    }
    ctx->pc = 0x216790u;
    {
        const bool branch_taken_0x216790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x216790) {
            ctx->pc = 0x216794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216790u;
            // 0x216794: 0x8e910060  lw          $s1, 0x60($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2167C4u;
            goto label_2167c4;
        }
    }
    ctx->pc = 0x216798u;
label_216798:
    // 0x216798: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x216798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21679c:
    // 0x21679c: 0x0  nop
    ctx->pc = 0x21679cu;
    // NOP
label_2167a0:
    // 0x2167a0: 0x26659f70  addiu       $a1, $s3, -0x6090
    ctx->pc = 0x2167a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942576));
label_2167a4:
    // 0x2167a4: 0x24060287  addiu       $a2, $zero, 0x287
    ctx->pc = 0x2167a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 647));
label_2167a8:
    // 0x2167a8: 0xc13b4fe  jal         func_4ED3F8
label_2167ac:
    if (ctx->pc == 0x2167ACu) {
        ctx->pc = 0x2167ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167A8u;
        // 0x2167ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167B0u;
        goto label_2167b0;
    }
    ctx->pc = 0x2167A8u;
    SET_GPR_U32(ctx, 31, 0x2167B0u);
    ctx->pc = 0x2167ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167A8u;
    // 0x2167ac: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED3F8u, 0x2167A8u, 0x2167B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167B0u;
label_2167b0:
    // 0x2167b0: 0x8e820060  lw          $v0, 0x60($s4)
    ctx->pc = 0x2167b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_2167b4:
    // 0x2167b4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2167b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2167b8:
    // 0x2167b8: 0x5603fff9  bnel        $s0, $v1, . + 4 + (-0x7 << 2)
label_2167bc:
    if (ctx->pc == 0x2167BCu) {
        ctx->pc = 0x2167BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167B8u;
        // 0x2167bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167C0u;
        goto label_2167c0;
    }
    ctx->pc = 0x2167B8u;
    {
        const bool branch_taken_0x2167b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2167b8) {
            ctx->pc = 0x2167BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2167B8u;
            // 0x2167bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2167A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2167a0;
        }
    }
    ctx->pc = 0x2167C0u;
label_2167c0:
    // 0x2167c0: 0x8e910060  lw          $s1, 0x60($s4)
    ctx->pc = 0x2167c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_2167c4:
    // 0x2167c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2167c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2167c8:
    // 0x2167c8: 0x26739f70  addiu       $s3, $s3, -0x6090
    ctx->pc = 0x2167c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294942576));
label_2167cc:
    // 0x2167cc: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2167ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2167d0:
    // 0x2167d0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2167d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2167d4:
    // 0x2167d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2167d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2167d8:
    // 0x2167d8: 0xc10c1bb  jal         func_4306EC
label_2167dc:
    if (ctx->pc == 0x2167DCu) {
        ctx->pc = 0x2167DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167D8u;
        // 0x2167dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2167E0u;
        goto label_2167e0;
    }
    ctx->pc = 0x2167D8u;
    SET_GPR_U32(ctx, 31, 0x2167E0u);
    ctx->pc = 0x2167DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167D8u;
    // 0x2167dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x2167D8u, 0x2167E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2167E0u;
label_2167e0:
    // 0x2167e0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2167e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2167e4:
    // 0x2167e4: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x2167e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2167e8:
    // 0x2167e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2167e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2167ec:
    // 0x2167ec: 0x2406028a  addiu       $a2, $zero, 0x28A
    ctx->pc = 0x2167ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
label_2167f0:
    // 0x2167f0: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2167f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2167f4:
    // 0x2167f4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2167f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2167f8:
    // 0x2167f8: 0xc13b510  jal         func_4ED440
label_2167fc:
    if (ctx->pc == 0x2167FCu) {
        ctx->pc = 0x2167FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2167F8u;
        // 0x2167fc: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216800u;
        goto label_216800;
    }
    ctx->pc = 0x2167F8u;
    SET_GPR_U32(ctx, 31, 0x216800u);
    ctx->pc = 0x2167FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2167F8u;
    // 0x2167fc: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED440u, 0x2167F8u, 0x216800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216800u;
label_216800:
    // 0x216800: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x216800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_216804:
    // 0x216804: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216808:
    // 0x216808: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x216808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_21680c:
    // 0x21680c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x21680cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_216810:
    // 0x216810: 0x60f809  jalr        $v1
label_216814:
    if (ctx->pc == 0x216814u) {
        ctx->pc = 0x216814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216810u;
        // 0x216814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216818u;
        goto label_216818;
    }
    ctx->pc = 0x216810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216818u);
        ctx->pc = 0x216814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216810u;
        // 0x216814: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216810u, 0x216818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216818u;
label_216818:
    // 0x216818: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x216818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_21681c:
    // 0x21681c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21681cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_216820:
    // 0x216820: 0xc13a4ae  jal         func_4E92B8
label_216824:
    if (ctx->pc == 0x216824u) {
        ctx->pc = 0x216824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216820u;
        // 0x216824: 0x2406028d  addiu       $a2, $zero, 0x28D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216828u;
        goto label_216828;
    }
    ctx->pc = 0x216820u;
    SET_GPR_U32(ctx, 31, 0x216828u);
    ctx->pc = 0x216824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216820u;
    // 0x216824: 0x2406028d  addiu       $a2, $zero, 0x28D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 653));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E92B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E92B8u, 0x216820u, 0x216828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216828u;
label_216828:
    // 0x216828: 0x8e85008c  lw          $a1, 0x8C($s4)
    ctx->pc = 0x216828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_21682c:
    // 0x21682c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_216830:
    // 0x216830: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x216830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_216834:
    // 0x216834: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x216834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_216838:
    // 0x216838: 0x60f809  jalr        $v1
label_21683c:
    if (ctx->pc == 0x21683Cu) {
        ctx->pc = 0x21683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216838u;
        // 0x21683c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216840u;
        goto label_216840;
    }
    ctx->pc = 0x216838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x216840u);
        ctx->pc = 0x21683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216838u;
        // 0x21683c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216838u, 0x216840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216840u;
label_216840:
    // 0x216840: 0x8e84008c  lw          $a0, 0x8C($s4)
    ctx->pc = 0x216840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_216844:
    // 0x216844: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x216844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_216848:
    // 0x216848: 0xc139fe8  jal         func_4E7FA0
label_21684c:
    if (ctx->pc == 0x21684Cu) {
        ctx->pc = 0x21684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216848u;
        // 0x21684c: 0x24060295  addiu       $a2, $zero, 0x295 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 661));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216850u;
        goto label_216850;
    }
    ctx->pc = 0x216848u;
    SET_GPR_U32(ctx, 31, 0x216850u);
    ctx->pc = 0x21684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216848u;
    // 0x21684c: 0x24060295  addiu       $a2, $zero, 0x295 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 661));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x216848u, 0x216850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216850u;
label_216850:
    // 0x216850: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x216850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_216854:
    // 0x216854: 0xc0616ac  jal         func_185AB0
label_216858:
    if (ctx->pc == 0x216858u) {
        ctx->pc = 0x216858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216854u;
        // 0x216858: 0x8e850064  lw          $a1, 0x64($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21685Cu;
        goto label_21685c;
    }
    ctx->pc = 0x216854u;
    SET_GPR_U32(ctx, 31, 0x21685Cu);
    ctx->pc = 0x216858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216854u;
    // 0x216858: 0x8e850064  lw          $a1, 0x64($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x216854u, 0x21685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21685Cu;
label_21685c:
    // 0x21685c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_216860:
    if (ctx->pc == 0x216860u) {
        ctx->pc = 0x216860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21685Cu;
        // 0x216860: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216864u;
        goto label_216864;
    }
    ctx->pc = 0x21685Cu;
    {
        const bool branch_taken_0x21685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21685Cu;
        // 0x216860: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21685c) {
            ctx->pc = 0x21686Cu;
            goto label_21686c;
        }
    }
    ctx->pc = 0x216864u;
label_216864:
    // 0x216864: 0xc062be2  jal         func_18AF88
label_216868:
    if (ctx->pc == 0x216868u) {
        ctx->pc = 0x216868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216864u;
        // 0x216868: 0x96850064  lhu         $a1, 0x64($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21686Cu;
        goto label_21686c;
    }
    ctx->pc = 0x216864u;
    SET_GPR_U32(ctx, 31, 0x21686Cu);
    ctx->pc = 0x216868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216864u;
    // 0x216868: 0x96850064  lhu         $a1, 0x64($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x216864u, 0x21686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21686Cu;
label_21686c:
    // 0x21686c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x21686cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_216870:
    // 0x216870: 0xc0616ac  jal         func_185AB0
label_216874:
    if (ctx->pc == 0x216874u) {
        ctx->pc = 0x216874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216870u;
        // 0x216874: 0x8e850068  lw          $a1, 0x68($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216878u;
        goto label_216878;
    }
    ctx->pc = 0x216870u;
    SET_GPR_U32(ctx, 31, 0x216878u);
    ctx->pc = 0x216874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216870u;
    // 0x216874: 0x8e850068  lw          $a1, 0x68($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x216870u, 0x216878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216878u;
label_216878:
    // 0x216878: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21687c:
    if (ctx->pc == 0x21687Cu) {
        ctx->pc = 0x21687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216878u;
        // 0x21687c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216880u;
        goto label_216880;
    }
    ctx->pc = 0x216878u;
    {
        const bool branch_taken_0x216878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216878u;
        // 0x21687c: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216878) {
            ctx->pc = 0x216888u;
            goto label_216888;
        }
    }
    ctx->pc = 0x216880u;
label_216880:
    // 0x216880: 0xc062be2  jal         func_18AF88
label_216884:
    if (ctx->pc == 0x216884u) {
        ctx->pc = 0x216884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216880u;
        // 0x216884: 0x96850068  lhu         $a1, 0x68($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216888u;
        goto label_216888;
    }
    ctx->pc = 0x216880u;
    SET_GPR_U32(ctx, 31, 0x216888u);
    ctx->pc = 0x216884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216880u;
    // 0x216884: 0x96850068  lhu         $a1, 0x68($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x216880u, 0x216888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216888u;
label_216888:
    // 0x216888: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x216888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_21688c:
    // 0x21688c: 0xc0616ac  jal         func_185AB0
label_216890:
    if (ctx->pc == 0x216890u) {
        ctx->pc = 0x216890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21688Cu;
        // 0x216890: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216894u;
        goto label_216894;
    }
    ctx->pc = 0x21688Cu;
    SET_GPR_U32(ctx, 31, 0x216894u);
    ctx->pc = 0x216890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21688Cu;
    // 0x216890: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x21688Cu, 0x216894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216894u;
label_216894:
    // 0x216894: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_216898:
    if (ctx->pc == 0x216898u) {
        ctx->pc = 0x216898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216894u;
        // 0x216898: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21689Cu;
        goto label_21689c;
    }
    ctx->pc = 0x216894u;
    {
        const bool branch_taken_0x216894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216894u;
        // 0x216898: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216894) {
            ctx->pc = 0x2168A4u;
            goto label_2168a4;
        }
    }
    ctx->pc = 0x21689Cu;
label_21689c:
    // 0x21689c: 0xc062be2  jal         func_18AF88
label_2168a0:
    if (ctx->pc == 0x2168A0u) {
        ctx->pc = 0x2168A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21689Cu;
        // 0x2168a0: 0x9685006c  lhu         $a1, 0x6C($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168A4u;
        goto label_2168a4;
    }
    ctx->pc = 0x21689Cu;
    SET_GPR_U32(ctx, 31, 0x2168A4u);
    ctx->pc = 0x2168A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21689Cu;
    // 0x2168a0: 0x9685006c  lhu         $a1, 0x6C($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x21689Cu, 0x2168A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168A4u;
label_2168a4:
    // 0x2168a4: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x2168a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_2168a8:
    // 0x2168a8: 0xc0616ac  jal         func_185AB0
label_2168ac:
    if (ctx->pc == 0x2168ACu) {
        ctx->pc = 0x2168ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168A8u;
        // 0x2168ac: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168B0u;
        goto label_2168b0;
    }
    ctx->pc = 0x2168A8u;
    SET_GPR_U32(ctx, 31, 0x2168B0u);
    ctx->pc = 0x2168ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168A8u;
    // 0x2168ac: 0x8e850070  lw          $a1, 0x70($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x2168A8u, 0x2168B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168B0u;
label_2168b0:
    // 0x2168b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2168b4:
    if (ctx->pc == 0x2168B4u) {
        ctx->pc = 0x2168B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168B0u;
        // 0x2168b4: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168B8u;
        goto label_2168b8;
    }
    ctx->pc = 0x2168B0u;
    {
        const bool branch_taken_0x2168b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168B0u;
        // 0x2168b4: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168b0) {
            ctx->pc = 0x2168C0u;
            goto label_2168c0;
        }
    }
    ctx->pc = 0x2168B8u;
label_2168b8:
    // 0x2168b8: 0xc062be2  jal         func_18AF88
label_2168bc:
    if (ctx->pc == 0x2168BCu) {
        ctx->pc = 0x2168BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168B8u;
        // 0x2168bc: 0x96850070  lhu         $a1, 0x70($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168C0u;
        goto label_2168c0;
    }
    ctx->pc = 0x2168B8u;
    SET_GPR_U32(ctx, 31, 0x2168C0u);
    ctx->pc = 0x2168BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168B8u;
    // 0x2168bc: 0x96850070  lhu         $a1, 0x70($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x2168B8u, 0x2168C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168C0u;
label_2168c0:
    // 0x2168c0: 0x8ea4cd4c  lw          $a0, -0x32B4($s5)
    ctx->pc = 0x2168c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
label_2168c4:
    // 0x2168c4: 0xc0616ac  jal         func_185AB0
label_2168c8:
    if (ctx->pc == 0x2168C8u) {
        ctx->pc = 0x2168C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168C4u;
        // 0x2168c8: 0x8e850074  lw          $a1, 0x74($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168CCu;
        goto label_2168cc;
    }
    ctx->pc = 0x2168C4u;
    SET_GPR_U32(ctx, 31, 0x2168CCu);
    ctx->pc = 0x2168C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168C4u;
    // 0x2168c8: 0x8e850074  lw          $a1, 0x74($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x2168C4u, 0x2168CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168CCu;
label_2168cc:
    // 0x2168cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2168d0:
    if (ctx->pc == 0x2168D0u) {
        ctx->pc = 0x2168D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168CCu;
        // 0x2168d0: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168D4u;
        goto label_2168d4;
    }
    ctx->pc = 0x2168CCu;
    {
        const bool branch_taken_0x2168cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2168D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168CCu;
        // 0x2168d0: 0x8ea4cd4c  lw          $a0, -0x32B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168cc) {
            ctx->pc = 0x2168DCu;
            goto label_2168dc;
        }
    }
    ctx->pc = 0x2168D4u;
label_2168d4:
    // 0x2168d4: 0xc062be2  jal         func_18AF88
label_2168d8:
    if (ctx->pc == 0x2168D8u) {
        ctx->pc = 0x2168D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168D4u;
        // 0x2168d8: 0x96850074  lhu         $a1, 0x74($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2168DCu;
        goto label_2168dc;
    }
    ctx->pc = 0x2168D4u;
    SET_GPR_U32(ctx, 31, 0x2168DCu);
    ctx->pc = 0x2168D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168D4u;
    // 0x2168d8: 0x96850074  lhu         $a1, 0x74($s4) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x2168D4u, 0x2168DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168DCu;
label_2168dc:
    // 0x2168dc: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x2168dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_2168e0:
    // 0x2168e0: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x2168e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_2168e4:
    // 0x2168e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2168e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2168e8:
    // 0x2168e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2168e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2168ec:
    // 0x2168ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2168ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2168f0:
    // 0x2168f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2168f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2168f4:
    // 0x2168f4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2168f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2168f8:
    // 0x2168f8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2168f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2168fc:
    // 0x2168fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2168fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_216900:
    // 0x216900: 0x3e00008  jr          $ra
label_216904:
    if (ctx->pc == 0x216904u) {
        ctx->pc = 0x216904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216900u;
        // 0x216904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216908u;
        goto label_fallthrough_0x216900;
    }
    ctx->pc = 0x216900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216900u;
        // 0x216904: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x216900:
    ctx->pc = 0x216908u;
}

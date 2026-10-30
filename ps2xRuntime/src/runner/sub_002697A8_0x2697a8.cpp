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

// Function: sub_002697A8
// Address: 0x2697a8 - 0x269908
void sub_002697A8_0x2697a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002697A8_0x2697a8");
#endif

    switch (ctx->pc) {
        case 0x2697a8u: goto label_2697a8;
        case 0x2697acu: goto label_2697ac;
        case 0x2697b0u: goto label_2697b0;
        case 0x2697b4u: goto label_2697b4;
        case 0x2697b8u: goto label_2697b8;
        case 0x2697bcu: goto label_2697bc;
        case 0x2697c0u: goto label_2697c0;
        case 0x2697c4u: goto label_2697c4;
        case 0x2697c8u: goto label_2697c8;
        case 0x2697ccu: goto label_2697cc;
        case 0x2697d0u: goto label_2697d0;
        case 0x2697d4u: goto label_2697d4;
        case 0x2697d8u: goto label_2697d8;
        case 0x2697dcu: goto label_2697dc;
        case 0x2697e0u: goto label_2697e0;
        case 0x2697e4u: goto label_2697e4;
        case 0x2697e8u: goto label_2697e8;
        case 0x2697ecu: goto label_2697ec;
        case 0x2697f0u: goto label_2697f0;
        case 0x2697f4u: goto label_2697f4;
        case 0x2697f8u: goto label_2697f8;
        case 0x2697fcu: goto label_2697fc;
        case 0x269800u: goto label_269800;
        case 0x269804u: goto label_269804;
        case 0x269808u: goto label_269808;
        case 0x26980cu: goto label_26980c;
        case 0x269810u: goto label_269810;
        case 0x269814u: goto label_269814;
        case 0x269818u: goto label_269818;
        case 0x26981cu: goto label_26981c;
        case 0x269820u: goto label_269820;
        case 0x269824u: goto label_269824;
        case 0x269828u: goto label_269828;
        case 0x26982cu: goto label_26982c;
        case 0x269830u: goto label_269830;
        case 0x269834u: goto label_269834;
        case 0x269838u: goto label_269838;
        case 0x26983cu: goto label_26983c;
        case 0x269840u: goto label_269840;
        case 0x269844u: goto label_269844;
        case 0x269848u: goto label_269848;
        case 0x26984cu: goto label_26984c;
        case 0x269850u: goto label_269850;
        case 0x269854u: goto label_269854;
        case 0x269858u: goto label_269858;
        case 0x26985cu: goto label_26985c;
        case 0x269860u: goto label_269860;
        case 0x269864u: goto label_269864;
        case 0x269868u: goto label_269868;
        case 0x26986cu: goto label_26986c;
        case 0x269870u: goto label_269870;
        case 0x269874u: goto label_269874;
        case 0x269878u: goto label_269878;
        case 0x26987cu: goto label_26987c;
        case 0x269880u: goto label_269880;
        case 0x269884u: goto label_269884;
        case 0x269888u: goto label_269888;
        case 0x26988cu: goto label_26988c;
        case 0x269890u: goto label_269890;
        case 0x269894u: goto label_269894;
        case 0x269898u: goto label_269898;
        case 0x26989cu: goto label_26989c;
        case 0x2698a0u: goto label_2698a0;
        case 0x2698a4u: goto label_2698a4;
        case 0x2698a8u: goto label_2698a8;
        case 0x2698acu: goto label_2698ac;
        case 0x2698b0u: goto label_2698b0;
        case 0x2698b4u: goto label_2698b4;
        case 0x2698b8u: goto label_2698b8;
        case 0x2698bcu: goto label_2698bc;
        case 0x2698c0u: goto label_2698c0;
        case 0x2698c4u: goto label_2698c4;
        case 0x2698c8u: goto label_2698c8;
        case 0x2698ccu: goto label_2698cc;
        case 0x2698d0u: goto label_2698d0;
        case 0x2698d4u: goto label_2698d4;
        case 0x2698d8u: goto label_2698d8;
        case 0x2698dcu: goto label_2698dc;
        case 0x2698e0u: goto label_2698e0;
        case 0x2698e4u: goto label_2698e4;
        case 0x2698e8u: goto label_2698e8;
        case 0x2698ecu: goto label_2698ec;
        case 0x2698f0u: goto label_2698f0;
        case 0x2698f4u: goto label_2698f4;
        case 0x2698f8u: goto label_2698f8;
        case 0x2698fcu: goto label_2698fc;
        case 0x269900u: goto label_269900;
        case 0x269904u: goto label_269904;
        default: break;
    }

    ctx->pc = 0x2697a8u;

label_2697a8:
    // 0x2697a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2697a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2697ac:
    // 0x2697ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2697acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2697b0:
    // 0x2697b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2697b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2697b4:
    // 0x2697b4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2697b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2697b8:
    // 0x2697b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2697b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2697bc:
    // 0x2697bc: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x2697bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_2697c0:
    // 0x2697c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2697c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2697c4:
    // 0x2697c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2697c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2697c8:
    // 0x2697c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2697c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2697cc:
    // 0x2697cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2697ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2697d0:
    // 0x2697d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2697d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2697d4:
    // 0x2697d4: 0xc041532  jal         func_1054C8
label_2697d8:
    if (ctx->pc == 0x2697D8u) {
        ctx->pc = 0x2697D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697D4u;
        // 0x2697d8: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697DCu;
        goto label_2697dc;
    }
    ctx->pc = 0x2697D4u;
    SET_GPR_U32(ctx, 31, 0x2697DCu);
    ctx->pc = 0x2697D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697D4u;
    // 0x2697d8: 0x8e3400d8  lw          $s4, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2697D4u, 0x2697DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697DCu;
label_2697dc:
    // 0x2697dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2697dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2697e0:
    // 0x2697e0: 0xc041532  jal         func_1054C8
label_2697e4:
    if (ctx->pc == 0x2697E4u) {
        ctx->pc = 0x2697E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697E0u;
        // 0x2697e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697E8u;
        goto label_2697e8;
    }
    ctx->pc = 0x2697E0u;
    SET_GPR_U32(ctx, 31, 0x2697E8u);
    ctx->pc = 0x2697E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697E0u;
    // 0x2697e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2697E0u, 0x2697E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697E8u;
label_2697e8:
    // 0x2697e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2697e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2697ec:
    // 0x2697ec: 0xc041532  jal         func_1054C8
label_2697f0:
    if (ctx->pc == 0x2697F0u) {
        ctx->pc = 0x2697F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697ECu;
        // 0x2697f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697F4u;
        goto label_2697f4;
    }
    ctx->pc = 0x2697ECu;
    SET_GPR_U32(ctx, 31, 0x2697F4u);
    ctx->pc = 0x2697F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697ECu;
    // 0x2697f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2697ECu, 0x2697F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697F4u;
label_2697f4:
    // 0x2697f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2697f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2697f8:
    // 0x2697f8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2697fc:
    if (ctx->pc == 0x2697FCu) {
        ctx->pc = 0x2697FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697F8u;
        // 0x2697fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269800u;
        goto label_269800;
    }
    ctx->pc = 0x2697F8u;
    {
        const bool branch_taken_0x2697f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697F8u;
        // 0x2697fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697f8) {
            ctx->pc = 0x269820u;
            goto label_269820;
        }
    }
    ctx->pc = 0x269800u;
label_269800:
    // 0x269800: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_269804:
    // 0x269804: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269804u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269808:
    // 0x269808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26980c:
    // 0x26980c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26980cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_269810:
    // 0x269810: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x269810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_269814:
    // 0x269814: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269818:
    // 0x269818: 0xc041b20  jal         func_106C80
label_26981c:
    if (ctx->pc == 0x26981Cu) {
        ctx->pc = 0x26981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269818u;
        // 0x26981c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269820u;
        goto label_269820;
    }
    ctx->pc = 0x269818u;
    SET_GPR_U32(ctx, 31, 0x269820u);
    ctx->pc = 0x26981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269818u;
    // 0x26981c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x269818u, 0x269820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269820u;
label_269820:
    // 0x269820: 0xc05d484  jal         func_175210
label_269824:
    if (ctx->pc == 0x269824u) {
        ctx->pc = 0x269824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269820u;
        // 0x269824: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269828u;
        goto label_269828;
    }
    ctx->pc = 0x269820u;
    SET_GPR_U32(ctx, 31, 0x269828u);
    ctx->pc = 0x269824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269820u;
    // 0x269824: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x269820u, 0x269828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269828u;
label_269828:
    // 0x269828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x269828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26982c:
    // 0x26982c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26982cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_269830:
    // 0x269830: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x269830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_269834:
    // 0x269834: 0xa0f809  jalr        $a1
label_269838:
    if (ctx->pc == 0x269838u) {
        ctx->pc = 0x269838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269834u;
        // 0x269838: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26983Cu;
        goto label_26983c;
    }
    ctx->pc = 0x269834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26983Cu);
        ctx->pc = 0x269838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269834u;
        // 0x269838: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269834u, 0x26983Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26983Cu;
label_26983c:
    // 0x26983c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269840:
    // 0x269840: 0xc087016  jal         func_21C058
label_269844:
    if (ctx->pc == 0x269844u) {
        ctx->pc = 0x269844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269840u;
        // 0x269844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269848u;
        goto label_269848;
    }
    ctx->pc = 0x269840u;
    SET_GPR_U32(ctx, 31, 0x269848u);
    ctx->pc = 0x269844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269840u;
    // 0x269844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x269840u, 0x269848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269848u;
label_269848:
    // 0x269848: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_26984c:
    if (ctx->pc == 0x26984Cu) {
        ctx->pc = 0x26984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269848u;
        // 0x26984c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269850u;
        goto label_269850;
    }
    ctx->pc = 0x269848u;
    {
        const bool branch_taken_0x269848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269848u;
        // 0x26984c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269848) {
            ctx->pc = 0x269870u;
            goto label_269870;
        }
    }
    ctx->pc = 0x269850u;
label_269850:
    // 0x269850: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_269854:
    // 0x269854: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269858:
    // 0x269858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26985c:
    // 0x26985c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26985cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_269860:
    // 0x269860: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x269860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269864:
    // 0x269864: 0xc04159e  jal         func_105678
label_269868:
    if (ctx->pc == 0x269868u) {
        ctx->pc = 0x269868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269864u;
        // 0x269868: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26986Cu;
        goto label_26986c;
    }
    ctx->pc = 0x269864u;
    SET_GPR_U32(ctx, 31, 0x26986Cu);
    ctx->pc = 0x269868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269864u;
    // 0x269868: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x269864u, 0x26986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26986Cu;
label_26986c:
    // 0x26986c: 0x0  nop
    ctx->pc = 0x26986cu;
    // NOP
label_269870:
    // 0x269870: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_269874:
    // 0x269874: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x269874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_269878:
    // 0x269878: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_26987c:
    if (ctx->pc == 0x26987Cu) {
        ctx->pc = 0x26987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269878u;
        // 0x26987c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269880u;
        goto label_269880;
    }
    ctx->pc = 0x269878u;
    {
        const bool branch_taken_0x269878 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269878u;
        // 0x26987c: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269878) {
            ctx->pc = 0x2698C4u;
            goto label_2698c4;
        }
    }
    ctx->pc = 0x269880u;
label_269880:
    // 0x269880: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_269884:
    // 0x269884: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x269884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_269888:
    // 0x269888: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x269888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26988c:
    // 0x26988c: 0x40f809  jalr        $v0
label_269890:
    if (ctx->pc == 0x269890u) {
        ctx->pc = 0x269890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26988Cu;
        // 0x269890: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269894u;
        goto label_269894;
    }
    ctx->pc = 0x26988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x269894u);
        ctx->pc = 0x269890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26988Cu;
        // 0x269890: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26988Cu, 0x269894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269894u;
label_269894:
    // 0x269894: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x269894u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_269898:
    // 0x269898: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x269898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26989c:
    // 0x26989c: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26989cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2698a0:
    // 0x2698a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2698a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2698a4:
    // 0x2698a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2698a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2698a8:
    // 0x2698a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2698a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2698ac:
    // 0x2698ac: 0x254a7870  addiu       $t2, $t2, 0x7870
    ctx->pc = 0x2698acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30832));
label_2698b0:
    // 0x2698b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2698b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2698b4:
    // 0x2698b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2698b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2698b8:
    // 0x2698b8: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x2698b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
label_2698bc:
    // 0x2698bc: 0xc041664  jal         func_105990
label_2698c0:
    if (ctx->pc == 0x2698C0u) {
        ctx->pc = 0x2698C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698BCu;
        // 0x2698c0: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698C4u;
        goto label_2698c4;
    }
    ctx->pc = 0x2698BCu;
    SET_GPR_U32(ctx, 31, 0x2698C4u);
    ctx->pc = 0x2698C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698BCu;
    // 0x2698c0: 0x34088000  ori         $t0, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2698BCu, 0x2698C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698C4u;
label_2698c4:
    // 0x2698c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2698c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2698c8:
    // 0x2698c8: 0xc089990  jal         func_226640
label_2698cc:
    if (ctx->pc == 0x2698CCu) {
        ctx->pc = 0x2698CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698C8u;
        // 0x2698cc: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698D0u;
        goto label_2698d0;
    }
    ctx->pc = 0x2698C8u;
    SET_GPR_U32(ctx, 31, 0x2698D0u);
    ctx->pc = 0x2698CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698C8u;
    // 0x2698cc: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2698C8u, 0x2698D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698D0u;
label_2698d0:
    // 0x2698d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2698d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2698d4:
    // 0x2698d4: 0xc05d4f6  jal         func_1753D8
label_2698d8:
    if (ctx->pc == 0x2698D8u) {
        ctx->pc = 0x2698D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698D4u;
        // 0x2698d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698DCu;
        goto label_2698dc;
    }
    ctx->pc = 0x2698D4u;
    SET_GPR_U32(ctx, 31, 0x2698DCu);
    ctx->pc = 0x2698D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698D4u;
    // 0x2698d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2698D4u, 0x2698DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698DCu;
label_2698dc:
    // 0x2698dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2698dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2698e0:
    // 0x2698e0: 0xc05d53a  jal         func_1754E8
label_2698e4:
    if (ctx->pc == 0x2698E4u) {
        ctx->pc = 0x2698E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698E0u;
        // 0x2698e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698E8u;
        goto label_2698e8;
    }
    ctx->pc = 0x2698E0u;
    SET_GPR_U32(ctx, 31, 0x2698E8u);
    ctx->pc = 0x2698E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698E0u;
    // 0x2698e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2698E0u, 0x2698E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698E8u;
label_2698e8:
    // 0x2698e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2698e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2698ec:
    // 0x2698ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2698ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2698f0:
    // 0x2698f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2698f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2698f4:
    // 0x2698f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2698f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2698f8:
    // 0x2698f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2698f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2698fc:
    // 0x2698fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2698fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269900:
    // 0x269900: 0x3e00008  jr          $ra
label_269904:
    if (ctx->pc == 0x269904u) {
        ctx->pc = 0x269904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269900u;
        // 0x269904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269908u;
        goto label_fallthrough_0x269900;
    }
    ctx->pc = 0x269900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269900u;
        // 0x269904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x269900:
    ctx->pc = 0x269908u;
}

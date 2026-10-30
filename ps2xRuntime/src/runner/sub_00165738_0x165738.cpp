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

// Function: sub_00165738
// Address: 0x165738 - 0x165918
void sub_00165738_0x165738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165738_0x165738");
#endif

    switch (ctx->pc) {
        case 0x165788u: goto label_165788;
        case 0x1657a0u: goto label_1657a0;
        case 0x1657a8u: goto label_1657a8;
        case 0x1657b0u: goto label_1657b0;
        case 0x1657e0u: goto label_1657e0;
        case 0x1657f8u: goto label_1657f8;
        case 0x165814u: goto label_165814;
        case 0x16582cu: goto label_16582c;
        case 0x165860u: goto label_165860;
        case 0x165868u: goto label_165868;
        case 0x165870u: goto label_165870;
        case 0x165884u: goto label_165884;
        case 0x165894u: goto label_165894;
        case 0x1658a4u: goto label_1658a4;
        case 0x1658d8u: goto label_1658d8;
        case 0x1658e4u: goto label_1658e4;
        default: break;
    }

    ctx->pc = 0x165738u;

    // 0x165738: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x165738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16573c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x165740: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x165740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x165744: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x165744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165748: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x165748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x16574c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x16574cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x165750: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165754: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x165754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x165758: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x165758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x16575c: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x16575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x165760: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x165760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x165764: 0x26740048  addiu       $s4, $s3, 0x48
    ctx->pc = 0x165764u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x165768: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x165768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x16576c: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x16576cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165770: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x165770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x165774: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x165774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x165778: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x165778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x16577c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165780: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165780u;
    SET_GPR_U32(ctx, 31, 0x165788u);
    ctx->pc = 0x165784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165780u;
    // 0x165784: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165780u, 0x165788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165788u;
label_165788:
    // 0x165788: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x165788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x16578c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16578cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165790: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x165790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x165794: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x165794u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165798: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x165798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x16579c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16579cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1657a0:
    // 0x1657a0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x1657A0u;
    SET_GPR_U32(ctx, 31, 0x1657A8u);
    ctx->pc = 0x1657A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657A0u;
    // 0x1657a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x1657A0u, 0x1657A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657A8u;
label_1657a8:
    // 0x1657a8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1657A8u;
    SET_GPR_U32(ctx, 31, 0x1657B0u);
    ctx->pc = 0x1657ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657A8u;
    // 0x1657ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1657A8u, 0x1657B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657B0u;
label_1657b0:
    // 0x1657b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1657b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657b4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1657B4u;
    {
        const bool branch_taken_0x1657b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657b4) {
            ctx->pc = 0x1657B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1657B4u;
            // 0x1657b8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x1657BCu;
    // 0x1657bc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x1657bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x1657c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1657c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1657c4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1657c4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1657c8: 0x16370009  bne         $s1, $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1657C8u;
    {
        const bool branch_taken_0x1657c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x1657c8) {
            ctx->pc = 0x1657F0u;
            goto label_1657f0;
        }
    }
    ctx->pc = 0x1657D0u;
    // 0x1657d0: 0x12150005  beq         $s0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1657D0u;
    {
        const bool branch_taken_0x1657d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x1657D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657D0u;
        // 0x1657d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657d0) {
            ctx->pc = 0x1657E8u;
            goto label_1657e8;
        }
    }
    ctx->pc = 0x1657D8u;
    // 0x1657d8: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x1657D8u;
    SET_GPR_U32(ctx, 31, 0x1657E0u);
    ctx->pc = 0x1657DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657D8u;
    // 0x1657dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x1657D8u, 0x1657E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657E0u;
label_1657e0:
    // 0x1657e0: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1657E0u;
    {
        const bool branch_taken_0x1657e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1657E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657E0u;
        // 0x1657e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657e0) {
            ctx->pc = 0x1657F0u;
            goto label_1657f0;
        }
    }
    ctx->pc = 0x1657E8u;
label_1657e8:
    // 0x1657e8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1657E8u;
    {
        const bool branch_taken_0x1657e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1657ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657E8u;
        // 0x1657ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657e8) {
            ctx->pc = 0x165824u;
            goto label_165824;
        }
    }
    ctx->pc = 0x1657F0u;
label_1657f0:
    // 0x1657f0: 0xc08a200  jal         func_228800
    ctx->pc = 0x1657F0u;
    SET_GPR_U32(ctx, 31, 0x1657F8u);
    ctx->pc = 0x1657F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657F0u;
    // 0x1657f4: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x1657F0u, 0x1657F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657F8u;
label_1657f8:
    // 0x1657f8: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x1657f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x1657fc: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x1657fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x165800: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x165800u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x165804: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x165804u;
    {
        const bool branch_taken_0x165804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165804) {
            ctx->pc = 0x165808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165804u;
            // 0x165808: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x16580Cu;
    // 0x16580c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x16580Cu;
    SET_GPR_U32(ctx, 31, 0x165814u);
    ctx->pc = 0x165810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16580Cu;
    // 0x165810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x16580Cu, 0x165814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165814u;
label_165814:
    // 0x165814: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165814u;
    {
        const bool branch_taken_0x165814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165814) {
            ctx->pc = 0x165818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165814u;
            // 0x165818: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165838u;
            goto label_165838;
        }
    }
    ctx->pc = 0x16581Cu;
    // 0x16581c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16581cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165820: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x165820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_165824:
    // 0x165824: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165824u;
    SET_GPR_U32(ctx, 31, 0x16582Cu);
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165824u, 0x16582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16582Cu;
label_16582c:
    // 0x16582c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x165830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x165830u;
    {
        const bool branch_taken_0x165830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165830u;
        // 0x165834: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165830) {
            ctx->pc = 0x165844u;
            goto label_165844;
        }
    }
    ctx->pc = 0x165838u;
label_165838:
    // 0x165838: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x165838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16583c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x16583Cu;
    {
        const bool branch_taken_0x16583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16583Cu;
        // 0x165840: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16583c) {
            ctx->pc = 0x1657A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1657a0;
        }
    }
    ctx->pc = 0x165844u;
label_165844:
    // 0x165844: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x165844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x165848: 0x8fc2bd30  lw          $v0, -0x42D0($fp)
    ctx->pc = 0x165848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    // 0x16584c: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x16584Cu;
    {
        const bool branch_taken_0x16584c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16584Cu;
        // 0x165850: 0x26750044  addiu       $s5, $s3, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16584c) {
            ctx->pc = 0x1658C0u;
            goto label_1658c0;
        }
    }
    ctx->pc = 0x165854u;
    // 0x165854: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x165854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165858: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x165858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16585c: 0x0  nop
    ctx->pc = 0x16585cu;
    // NOP
label_165860:
    // 0x165860: 0xc137826  jal         func_4DE098
    ctx->pc = 0x165860u;
    SET_GPR_U32(ctx, 31, 0x165868u);
    ctx->pc = 0x165864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165860u;
    // 0x165864: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x165860u, 0x165868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165868u;
label_165868:
    // 0x165868: 0xc0e409a  jal         func_390268
    ctx->pc = 0x165868u;
    SET_GPR_U32(ctx, 31, 0x165870u);
    ctx->pc = 0x16586Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165868u;
    // 0x16586c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x165868u, 0x165870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165870u;
label_165870:
    // 0x165870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165874: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x165874u;
    {
        const bool branch_taken_0x165874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x165878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165874u;
        // 0x165878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165874) {
            ctx->pc = 0x1658B0u;
            goto label_1658b0;
        }
    }
    ctx->pc = 0x16587Cu;
    // 0x16587c: 0xc089f98  jal         func_227E60
    ctx->pc = 0x16587Cu;
    SET_GPR_U32(ctx, 31, 0x165884u);
    ctx->pc = 0x165880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16587Cu;
    // 0x165880: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x16587Cu, 0x165884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165884u;
label_165884:
    // 0x165884: 0x5051000b  beql        $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x165884u;
    {
        const bool branch_taken_0x165884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x165884) {
            ctx->pc = 0x165888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165884u;
            // 0x165888: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1658B4u;
            goto label_1658b4;
        }
    }
    ctx->pc = 0x16588Cu;
    // 0x16588c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x16588Cu;
    SET_GPR_U32(ctx, 31, 0x165894u);
    ctx->pc = 0x165890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16588Cu;
    // 0x165890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x16588Cu, 0x165894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165894u;
label_165894:
    // 0x165894: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165894u;
    {
        const bool branch_taken_0x165894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x165898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165894u;
        // 0x165898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165894) {
            ctx->pc = 0x1658B0u;
            goto label_1658b0;
        }
    }
    ctx->pc = 0x16589Cu;
    // 0x16589c: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16589Cu;
    SET_GPR_U32(ctx, 31, 0x1658A4u);
    ctx->pc = 0x1658A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16589Cu;
    // 0x1658a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16589Cu, 0x1658A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658A4u;
label_1658a4:
    // 0x1658a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1658a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1658a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1658A8u;
    {
        const bool branch_taken_0x1658a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1658ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658A8u;
        // 0x1658ac: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658a8) {
            ctx->pc = 0x1658C0u;
            goto label_1658c0;
        }
    }
    ctx->pc = 0x1658B0u;
label_1658b0:
    // 0x1658b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1658b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1658b4:
    // 0x1658b4: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x1658b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1658b8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1658B8u;
    {
        const bool branch_taken_0x1658b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1658BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658B8u;
        // 0x1658bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1658b8) {
            ctx->pc = 0x165860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165860;
        }
    }
    ctx->pc = 0x1658C0u;
label_1658c0:
    // 0x1658c0: 0x8fc3bd30  lw          $v1, -0x42D0($fp)
    ctx->pc = 0x1658c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    // 0x1658c4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1658c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1658c8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1658C8u;
    {
        const bool branch_taken_0x1658c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1658c8) {
            ctx->pc = 0x1658DCu;
            goto label_1658dc;
        }
    }
    ctx->pc = 0x1658D0u;
    // 0x1658d0: 0xc13784c  jal         func_4DE130
    ctx->pc = 0x1658D0u;
    SET_GPR_U32(ctx, 31, 0x1658D8u);
    ctx->pc = 0x1658D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658D0u;
    // 0x1658d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE130u, 0x1658D0u, 0x1658D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658D8u;
label_1658d8:
    // 0x1658d8: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1658d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
label_1658dc:
    // 0x1658dc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1658DCu;
    SET_GPR_U32(ctx, 31, 0x1658E4u);
    ctx->pc = 0x1658E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658DCu;
    // 0x1658e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1658DCu, 0x1658E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658E4u;
label_1658e4:
    // 0x1658e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1658e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1658e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1658e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1658ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1658ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1658f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1658f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1658f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1658f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1658f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1658f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1658fc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1658fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165900: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x165900u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165904: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x165904u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16590c: 0x3e00008  jr          $ra
    ctx->pc = 0x16590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16590Cu;
        // 0x165910: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16590Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165914u;
    // 0x165914: 0x0  nop
    ctx->pc = 0x165914u;
    // NOP
    ctx->pc = 0x165918u;
}

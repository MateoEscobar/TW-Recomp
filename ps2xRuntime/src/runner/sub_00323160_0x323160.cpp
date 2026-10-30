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

// Function: sub_00323160
// Address: 0x323160 - 0x323298
void sub_00323160_0x323160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323160_0x323160");
#endif

    switch (ctx->pc) {
        case 0x323180u: goto label_323180;
        case 0x323198u: goto label_323198;
        case 0x3231a8u: goto label_3231a8;
        case 0x3231b8u: goto label_3231b8;
        case 0x3231dcu: goto label_3231dc;
        case 0x3231f0u: goto label_3231f0;
        case 0x323220u: goto label_323220;
        case 0x323228u: goto label_323228;
        case 0x323248u: goto label_323248;
        case 0x323258u: goto label_323258;
        case 0x323278u: goto label_323278;
        default: break;
    }

    ctx->pc = 0x323160u;

    // 0x323160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x323160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x323164: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x323164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x323168: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x323168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32316c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323178: 0xc05959e  jal         func_165678
    ctx->pc = 0x323178u;
    SET_GPR_U32(ctx, 31, 0x323180u);
    ctx->pc = 0x32317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323178u;
    // 0x32317c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x323178u, 0x323180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323180u;
label_323180:
    // 0x323180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x323180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323184: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x323184u;
    {
        const bool branch_taken_0x323184 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x323188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323184u;
        // 0x323188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323184) {
            ctx->pc = 0x32327Cu;
            goto label_32327c;
        }
    }
    ctx->pc = 0x32318Cu;
    // 0x32318c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32318cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323190: 0xc088edc  jal         func_223B70
    ctx->pc = 0x323190u;
    SET_GPR_U32(ctx, 31, 0x323198u);
    ctx->pc = 0x323194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323190u;
    // 0x323194: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x323190u, 0x323198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323198u;
label_323198:
    // 0x323198: 0x10520038  beq         $v0, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x323198u;
    {
        const bool branch_taken_0x323198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x32319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323198u;
        // 0x32319c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323198) {
            ctx->pc = 0x32327Cu;
            goto label_32327c;
        }
    }
    ctx->pc = 0x3231A0u;
    // 0x3231a0: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x3231A0u;
    SET_GPR_U32(ctx, 31, 0x3231A8u);
    ctx->pc = 0x3231A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231A0u;
    // 0x3231a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x3231A0u, 0x3231A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231A8u;
label_3231a8:
    // 0x3231a8: 0x10520034  beq         $v0, $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x3231A8u;
    {
        const bool branch_taken_0x3231a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3231ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231A8u;
        // 0x3231ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231a8) {
            ctx->pc = 0x32327Cu;
            goto label_32327c;
        }
    }
    ctx->pc = 0x3231B0u;
    // 0x3231b0: 0xc08a08a  jal         func_228228
    ctx->pc = 0x3231B0u;
    SET_GPR_U32(ctx, 31, 0x3231B8u);
    ctx->pc = 0x3231B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231B0u;
    // 0x3231b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x3231B0u, 0x3231B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231B8u;
label_3231b8:
    // 0x3231b8: 0x10520030  beq         $v0, $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x3231B8u;
    {
        const bool branch_taken_0x3231b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3231BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231B8u;
        // 0x3231bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231b8) {
            ctx->pc = 0x32327Cu;
            goto label_32327c;
        }
    }
    ctx->pc = 0x3231C0u;
    // 0x3231c0: 0x92220014  lbu         $v0, 0x14($s1)
    ctx->pc = 0x3231c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3231c4: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3231C4u;
    {
        const bool branch_taken_0x3231c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3231c4) {
            ctx->pc = 0x3231C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3231C4u;
            // 0x3231c8: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32324Cu;
            goto label_32324c;
        }
    }
    ctx->pc = 0x3231CCu;
    // 0x3231cc: 0xa2320014  sb          $s2, 0x14($s1)
    ctx->pc = 0x3231ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 20), (uint8_t)GPR_U32(ctx, 18));
    // 0x3231d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3231d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3231d4: 0xc059856  jal         func_166158
    ctx->pc = 0x3231D4u;
    SET_GPR_U32(ctx, 31, 0x3231DCu);
    ctx->pc = 0x3231D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231D4u;
    // 0x3231d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x3231D4u, 0x3231DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231DCu;
label_3231dc:
    // 0x3231dc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3231dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3231e0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3231E0u;
    {
        const bool branch_taken_0x3231e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3231e0) {
            ctx->pc = 0x3231E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3231E0u;
            // 0x3231e4: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32324Cu;
            goto label_32324c;
        }
    }
    ctx->pc = 0x3231E8u;
    // 0x3231e8: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x3231E8u;
    SET_GPR_U32(ctx, 31, 0x3231F0u);
    ctx->pc = 0x3231ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231E8u;
    // 0x3231ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x3231E8u, 0x3231F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3231F0u;
label_3231f0:
    // 0x3231f0: 0x1452000b  bne         $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x3231F0u;
    {
        const bool branch_taken_0x3231f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3231F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231F0u;
        // 0x3231f4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231f0) {
            ctx->pc = 0x323220u;
            goto label_323220;
        }
    }
    ctx->pc = 0x3231F8u;
    // 0x3231f8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3231f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3231fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3231fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x323200: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x323200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x323204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323208: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x323208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x32320c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32320cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323210: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x323210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323214: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x323214u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323218: 0xc088178  jal         func_2205E0
    ctx->pc = 0x323218u;
    SET_GPR_U32(ctx, 31, 0x323220u);
    ctx->pc = 0x32321Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323218u;
    // 0x32321c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x323218u, 0x323220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323220u;
label_323220:
    // 0x323220: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x323220u;
    SET_GPR_U32(ctx, 31, 0x323228u);
    ctx->pc = 0x323224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323220u;
    // 0x323224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x323220u, 0x323228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323228u;
label_323228:
    // 0x323228: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x323228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x32322c: 0x240302a8  addiu       $v1, $zero, 0x2A8
    ctx->pc = 0x32322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 680));
    // 0x323230: 0x240602a4  addiu       $a2, $zero, 0x2A4
    ctx->pc = 0x323230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 676));
    // 0x323234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323238: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x323238u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x32323c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32323cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323240: 0xc0c8636  jal         func_3218D8
    ctx->pc = 0x323240u;
    SET_GPR_U32(ctx, 31, 0x323248u);
    ctx->pc = 0x323244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323240u;
    // 0x323244: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3218D8u, 0x323240u, 0x323248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323248u;
label_323248:
    // 0x323248: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x323248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_32324c:
    // 0x32324c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32324cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323250: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x323250u;
    SET_GPR_U32(ctx, 31, 0x323258u);
    ctx->pc = 0x323254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323250u;
    // 0x323254: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x323250u, 0x323258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323258u;
label_323258:
    // 0x323258: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x323258u;
    {
        const bool branch_taken_0x323258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323258u;
        // 0x32325c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323258) {
            ctx->pc = 0x323278u;
            goto label_323278;
        }
    }
    ctx->pc = 0x323260u;
    // 0x323260: 0x92220015  lbu         $v0, 0x15($s1)
    ctx->pc = 0x323260u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x323264: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323264u;
    {
        const bool branch_taken_0x323264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323264u;
        // 0x323268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323264) {
            ctx->pc = 0x32327Cu;
            goto label_32327c;
        }
    }
    ctx->pc = 0x32326Cu;
    // 0x32326c: 0xa2230015  sb          $v1, 0x15($s1)
    ctx->pc = 0x32326cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x323270: 0xc0c8aea  jal         func_322BA8
    ctx->pc = 0x323270u;
    SET_GPR_U32(ctx, 31, 0x323278u);
    ctx->pc = 0x323274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323270u;
    // 0x323274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322BA8u, 0x323270u, 0x323278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323278u;
label_323278:
    // 0x323278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x323278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32327c:
    // 0x32327c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32327cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323280: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x323280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32328c: 0x3e00008  jr          $ra
    ctx->pc = 0x32328Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32328Cu;
        // 0x323290: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32328Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323294u;
    // 0x323294: 0x0  nop
    ctx->pc = 0x323294u;
    // NOP
    ctx->pc = 0x323298u;
}

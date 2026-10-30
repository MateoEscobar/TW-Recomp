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

// Function: sub_00311638
// Address: 0x311638 - 0x311928
void sub_00311638_0x311638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311638_0x311638");
#endif

    switch (ctx->pc) {
        case 0x31166cu: goto label_31166c;
        case 0x3116a4u: goto label_3116a4;
        case 0x3116b8u: goto label_3116b8;
        case 0x3116f0u: goto label_3116f0;
        case 0x311700u: goto label_311700;
        case 0x31170cu: goto label_31170c;
        case 0x31172cu: goto label_31172c;
        case 0x311744u: goto label_311744;
        case 0x311768u: goto label_311768;
        case 0x3117a0u: goto label_3117a0;
        case 0x3117a4u: goto label_3117a4;
        case 0x3117bcu: goto label_3117bc;
        case 0x3117c4u: goto label_3117c4;
        case 0x3117d8u: goto label_3117d8;
        case 0x311838u: goto label_311838;
        case 0x311840u: goto label_311840;
        case 0x311848u: goto label_311848;
        case 0x311864u: goto label_311864;
        case 0x311880u: goto label_311880;
        case 0x311894u: goto label_311894;
        case 0x3118a8u: goto label_3118a8;
        case 0x3118d0u: goto label_3118d0;
        case 0x3118ecu: goto label_3118ec;
        default: break;
    }

    ctx->pc = 0x311638u;

    // 0x311638: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x311638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31163c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x311640: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x311640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x311644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x311644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311648: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x311648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31164c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x311650: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x311650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x311654: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x311654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x311658: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x311658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x31165c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31165cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x311660: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311664: 0xc05959e  jal         func_165678
    ctx->pc = 0x311664u;
    SET_GPR_U32(ctx, 31, 0x31166Cu);
    ctx->pc = 0x311668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311664u;
    // 0x311668: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x311664u, 0x31166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31166Cu;
label_31166c:
    // 0x31166c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31166cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311670: 0x126000a1  beqz        $s3, . + 4 + (0xA1 << 2)
    ctx->pc = 0x311670u;
    {
        const bool branch_taken_0x311670 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x311674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311670u;
        // 0x311674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311670) {
            ctx->pc = 0x3118F8u;
            goto label_3118f8;
        }
    }
    ctx->pc = 0x311678u;
    // 0x311678: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x311678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x31167c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31167Cu;
    {
        const bool branch_taken_0x31167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31167Cu;
        // 0x311680: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31167c) {
            ctx->pc = 0x3116C4u;
            goto label_3116c4;
        }
    }
    ctx->pc = 0x311684u;
    // 0x311684: 0x92300030  lbu         $s0, 0x30($s1)
    ctx->pc = 0x311684u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x311688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x311688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31168c: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31168Cu;
    {
        const bool branch_taken_0x31168c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x311690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31168Cu;
        // 0x311690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31168c) {
            ctx->pc = 0x3116BCu;
            goto label_3116bc;
        }
    }
    ctx->pc = 0x311694u;
    // 0x311694: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x311694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x311698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x311698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31169c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x31169Cu;
    SET_GPR_U32(ctx, 31, 0x3116A4u);
    ctx->pc = 0x3116A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31169Cu;
    // 0x3116a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x31169Cu, 0x3116A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116A4u;
label_3116a4:
    // 0x3116a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3116a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3116a8: 0x10500092  beq         $v0, $s0, . + 4 + (0x92 << 2)
    ctx->pc = 0x3116A8u;
    {
        const bool branch_taken_0x3116a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3116ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116A8u;
        // 0x3116ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116a8) {
            ctx->pc = 0x3118F4u;
            goto label_3118f4;
        }
    }
    ctx->pc = 0x3116B0u;
    // 0x3116b0: 0xc0c1a7c  jal         func_3069F0
    ctx->pc = 0x3116B0u;
    SET_GPR_U32(ctx, 31, 0x3116B8u);
    ctx->pc = 0x3116B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116B0u;
    // 0x3116b4: 0x24050083  addiu       $a1, $zero, 0x83 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3069F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069F0u, 0x3116B0u, 0x3116B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116B8u;
label_3116b8:
    // 0x3116b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3116b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3116bc:
    // 0x3116bc: 0xa2220031  sb          $v0, 0x31($s1)
    ctx->pc = 0x3116bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x3116c0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3116c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3116c4:
    // 0x3116c4: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3116c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3116c8: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x3116c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x3116cc: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x3116ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x3116d0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3116d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3116d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3116D4u;
    {
        const bool branch_taken_0x3116d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3116D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3116D4u;
        // 0x3116d8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3116d4) {
            ctx->pc = 0x31170Cu;
            goto label_31170c;
        }
    }
    ctx->pc = 0x3116DCu;
    // 0x3116dc: 0x24421f40  addiu       $v0, $v0, 0x1F40
    ctx->pc = 0x3116dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
    // 0x3116e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3116e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3116e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116e8: 0xc08750a  jal         func_21D428
    ctx->pc = 0x3116E8u;
    SET_GPR_U32(ctx, 31, 0x3116F0u);
    ctx->pc = 0x3116ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116E8u;
    // 0x3116ec: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x3116E8u, 0x3116F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3116F0u;
label_3116f0:
    // 0x3116f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3116f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3116f4: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x3116f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3116f8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3116F8u;
    SET_GPR_U32(ctx, 31, 0x311700u);
    ctx->pc = 0x3116FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3116F8u;
    // 0x3116fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3116F8u, 0x311700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311700u;
label_311700:
    // 0x311700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311704: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x311704u;
    SET_GPR_U32(ctx, 31, 0x31170Cu);
    ctx->pc = 0x311708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311704u;
    // 0x311708: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x311704u, 0x31170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31170Cu;
label_31170c:
    // 0x31170c: 0x8ee2b734  lw          $v0, -0x48CC($s7)
    ctx->pc = 0x31170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
    // 0x311710: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x311710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x311714: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x311714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x311718: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x311718u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31171c: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x31171Cu;
    {
        const bool branch_taken_0x31171c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x311720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31171Cu;
        // 0x311720: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31171c) {
            ctx->pc = 0x3118F4u;
            goto label_3118f4;
        }
    }
    ctx->pc = 0x311724u;
    // 0x311724: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x311724u;
    SET_GPR_U32(ctx, 31, 0x31172Cu);
    ctx->pc = 0x311728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311724u;
    // 0x311728: 0x241003e8  addiu       $s0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x311724u, 0x31172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31172Cu;
label_31172c:
    // 0x31172c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x31172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x311730: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x311730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x311734: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x311734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x311738: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x311738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31173c: 0xc0a50b2  jal         func_2942C8
    ctx->pc = 0x31173Cu;
    SET_GPR_U32(ctx, 31, 0x311744u);
    ctx->pc = 0x311740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31173Cu;
    // 0x311740: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2942C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2942C8u, 0x31173Cu, 0x311744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311744u;
label_311744:
    // 0x311744: 0x8ee6b734  lw          $a2, -0x48CC($s7)
    ctx->pc = 0x311744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
    // 0x311748: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x311748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31174c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x31174cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x311750: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x311750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x311754: 0x8cc30048  lw          $v1, 0x48($a2)
    ctx->pc = 0x311754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x311758: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x311758u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x31175c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x31175cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x311760: 0xc05a596  jal         func_169658
    ctx->pc = 0x311760u;
    SET_GPR_U32(ctx, 31, 0x311768u);
    ctx->pc = 0x311764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311760u;
    // 0x311764: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169658u, 0x311760u, 0x311768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311768u;
label_311768:
    // 0x311768: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x311768u;
    {
        const bool branch_taken_0x311768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311768) {
            ctx->pc = 0x31176Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311768u;
            // 0x31176c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118F4u;
            goto label_3118f4;
        }
    }
    ctx->pc = 0x311770u;
    // 0x311770: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x311770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x311774: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x311774u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x311778: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x311778u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
    // 0x31177c: 0x5480005d  bnel        $a0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x31177Cu;
    {
        const bool branch_taken_0x31177c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31177c) {
            ctx->pc = 0x311780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31177Cu;
            // 0x311780: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118F4u;
            goto label_3118f4;
        }
    }
    ctx->pc = 0x311784u;
    // 0x311784: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x311784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x311788: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x311788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31178c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31178cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311790: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x311790u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311794: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x311794u;
    {
        const bool branch_taken_0x311794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311794u;
        // 0x311798: 0x24550048  addiu       $s5, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311794) {
            ctx->pc = 0x3117A4u;
            goto label_3117a4;
        }
    }
    ctx->pc = 0x31179Cu;
    // 0x31179c: 0x0  nop
    ctx->pc = 0x31179cu;
    // NOP
label_3117a0:
    // 0x3117a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3117a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3117a4:
    // 0x3117a4: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x3117a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3117a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3117A8u;
    {
        const bool branch_taken_0x3117a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3117ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117A8u;
        // 0x3117ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117a8) {
            ctx->pc = 0x3117F0u;
            goto label_3117f0;
        }
    }
    ctx->pc = 0x3117B0u;
    // 0x3117b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3117b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3117b4: 0xc137826  jal         func_4DE098
    ctx->pc = 0x3117B4u;
    SET_GPR_U32(ctx, 31, 0x3117BCu);
    ctx->pc = 0x3117B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117B4u;
    // 0x3117b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3117B4u, 0x3117BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117BCu;
label_3117bc:
    // 0x3117bc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x3117BCu;
    SET_GPR_U32(ctx, 31, 0x3117C4u);
    ctx->pc = 0x3117C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117BCu;
    // 0x3117c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3117BCu, 0x3117C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117C4u;
label_3117c4:
    // 0x3117c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3117c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3117c8: 0x5200fff6  beql        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3117C8u;
    {
        const bool branch_taken_0x3117c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3117c8) {
            ctx->pc = 0x3117CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3117C8u;
            // 0x3117cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3117a4;
        }
    }
    ctx->pc = 0x3117D0u;
    // 0x3117d0: 0xc08a096  jal         func_228258
    ctx->pc = 0x3117D0u;
    SET_GPR_U32(ctx, 31, 0x3117D8u);
    ctx->pc = 0x3117D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3117D0u;
    // 0x3117d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x3117D0u, 0x3117D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3117D8u;
label_3117d8:
    // 0x3117d8: 0x5056fff2  beql        $v0, $s6, . + 4 + (-0xE << 2)
    ctx->pc = 0x3117D8u;
    {
        const bool branch_taken_0x3117d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x3117d8) {
            ctx->pc = 0x3117DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3117D8u;
            // 0x3117dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3117A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3117a4;
        }
    }
    ctx->pc = 0x3117E0u;
    // 0x3117e0: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x3117e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x3117e4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3117E4u;
    {
        const bool branch_taken_0x3117e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3117E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117E4u;
        // 0x3117e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117e4) {
            ctx->pc = 0x3117A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3117a0;
        }
    }
    ctx->pc = 0x3117ECu;
    // 0x3117ec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3117ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3117f0:
    // 0x3117f0: 0x56820040  bnel        $s4, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3117F0u;
    {
        const bool branch_taken_0x3117f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3117f0) {
            ctx->pc = 0x3117F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3117F0u;
            // 0x3117f4: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118F4u;
            goto label_3118f4;
        }
    }
    ctx->pc = 0x3117F8u;
    // 0x3117f8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x3117f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x3117fc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3117FCu;
    {
        const bool branch_taken_0x3117fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x311800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3117FCu;
        // 0x311800: 0x8ee3b734  lw          $v1, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3117fc) {
            ctx->pc = 0x311814u;
            goto label_311814;
        }
    }
    ctx->pc = 0x311804u;
    // 0x311804: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x311804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x311808: 0x244261a8  addiu       $v0, $v0, 0x61A8
    ctx->pc = 0x311808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25000));
    // 0x31180c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x31180Cu;
    {
        const bool branch_taken_0x31180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31180Cu;
        // 0x311810: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31180c) {
            ctx->pc = 0x3118F4u;
            goto label_3118f4;
        }
    }
    ctx->pc = 0x311814u;
label_311814:
    // 0x311814: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x311814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x311818: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x311818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x31181c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31181Cu;
    {
        const bool branch_taken_0x31181c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31181Cu;
        // 0x311820: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31181c) {
            ctx->pc = 0x3118F4u;
            goto label_3118f4;
        }
    }
    ctx->pc = 0x311824u;
    // 0x311824: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x311824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x311828: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x311828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31182c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x31182cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x311830: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x311830u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x311834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x311834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_311838:
    // 0x311838: 0xc137826  jal         func_4DE098
    ctx->pc = 0x311838u;
    SET_GPR_U32(ctx, 31, 0x311840u);
    ctx->pc = 0x31183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311838u;
    // 0x31183c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x311838u, 0x311840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311840u;
label_311840:
    // 0x311840: 0xc0e409a  jal         func_390268
    ctx->pc = 0x311840u;
    SET_GPR_U32(ctx, 31, 0x311848u);
    ctx->pc = 0x311844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311840u;
    // 0x311844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x311840u, 0x311848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311848u;
label_311848:
    // 0x311848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31184c: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x31184Cu;
    {
        const bool branch_taken_0x31184c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31184c) {
            ctx->pc = 0x311850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31184Cu;
            // 0x311850: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118B4u;
            goto label_3118b4;
        }
    }
    ctx->pc = 0x311854u;
    // 0x311854: 0x52130017  beql        $s0, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x311854u;
    {
        const bool branch_taken_0x311854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x311854) {
            ctx->pc = 0x311858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311854u;
            // 0x311858: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118B4u;
            goto label_3118b4;
        }
    }
    ctx->pc = 0x31185Cu;
    // 0x31185c: 0xc08a096  jal         func_228258
    ctx->pc = 0x31185Cu;
    SET_GPR_U32(ctx, 31, 0x311864u);
    ctx->pc = 0x311860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31185Cu;
    // 0x311860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x31185Cu, 0x311864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311864u;
label_311864:
    // 0x311864: 0x50560013  beql        $v0, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x311864u;
    {
        const bool branch_taken_0x311864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x311864) {
            ctx->pc = 0x311868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311864u;
            // 0x311868: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118B4u;
            goto label_3118b4;
        }
    }
    ctx->pc = 0x31186Cu;
    // 0x31186c: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31186Cu;
    {
        const bool branch_taken_0x31186c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x311870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31186Cu;
        // 0x311870: 0x2684b8a0  addiu       $a0, $s4, -0x4760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31186c) {
            ctx->pc = 0x31188Cu;
            goto label_31188c;
        }
    }
    ctx->pc = 0x311874u;
    // 0x311874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311878: 0xc0880d8  jal         func_220360
    ctx->pc = 0x311878u;
    SET_GPR_U32(ctx, 31, 0x311880u);
    ctx->pc = 0x31187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311878u;
    // 0x31187c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220360u, 0x311878u, 0x311880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311880u;
label_311880:
    // 0x311880: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x311880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x311884: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x311884u;
    {
        const bool branch_taken_0x311884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x311888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311884u;
        // 0x311888: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311884) {
            ctx->pc = 0x3118B0u;
            goto label_3118b0;
        }
    }
    ctx->pc = 0x31188Cu;
label_31188c:
    // 0x31188c: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x31188Cu;
    SET_GPR_U32(ctx, 31, 0x311894u);
    ctx->pc = 0x311890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31188Cu;
    // 0x311890: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31188Cu, 0x311894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311894u;
label_311894:
    // 0x311894: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x311894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x311898: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x311898u;
    {
        const bool branch_taken_0x311898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x311898) {
            ctx->pc = 0x31189Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311898u;
            // 0x31189c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3118B4u;
            goto label_3118b4;
        }
    }
    ctx->pc = 0x3118A0u;
    // 0x3118a0: 0xc0880d8  jal         func_220360
    ctx->pc = 0x3118A0u;
    SET_GPR_U32(ctx, 31, 0x3118A8u);
    ctx->pc = 0x3118A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118A0u;
    // 0x3118a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220360u, 0x3118A0u, 0x3118A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118A8u;
label_3118a8:
    // 0x3118a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3118a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3118ac: 0x202880a  movz        $s1, $s0, $v0
    ctx->pc = 0x3118acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 16));
label_3118b0:
    // 0x3118b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3118b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3118b4:
    // 0x3118b4: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x3118b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3118b8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3118B8u;
    {
        const bool branch_taken_0x3118b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3118b8) {
            ctx->pc = 0x3118BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3118B8u;
            // 0x3118bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311838;
        }
    }
    ctx->pc = 0x3118C0u;
    // 0x3118c0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3118C0u;
    {
        const bool branch_taken_0x3118c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3118C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118C0u;
        // 0x3118c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118c0) {
            ctx->pc = 0x3118F8u;
            goto label_3118f8;
        }
    }
    ctx->pc = 0x3118C8u;
    // 0x3118c8: 0xc08810c  jal         func_220430
    ctx->pc = 0x3118C8u;
    SET_GPR_U32(ctx, 31, 0x3118D0u);
    ctx->pc = 0x3118CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118C8u;
    // 0x3118cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220430u, 0x3118C8u, 0x3118D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118D0u;
label_3118d0:
    // 0x3118d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3118d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3118d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3118d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3118d8: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x3118d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x3118dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3118dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3118e0: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x3118e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
    // 0x3118e4: 0xc0a6800  jal         func_29A000
    ctx->pc = 0x3118E4u;
    SET_GPR_U32(ctx, 31, 0x3118ECu);
    ctx->pc = 0x3118E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3118E4u;
    // 0x3118e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x3118E4u, 0x3118ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3118ECu;
label_3118ec:
    // 0x3118ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3118ECu;
    {
        const bool branch_taken_0x3118ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3118F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3118ECu;
        // 0x3118f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3118ec) {
            ctx->pc = 0x3118F8u;
            goto label_3118f8;
        }
    }
    ctx->pc = 0x3118F4u;
label_3118f4:
    // 0x3118f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3118f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3118f8:
    // 0x3118f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3118f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3118fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3118fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311900: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x311900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x311904: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x311904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x311908: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x311908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31190c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31190cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311910: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x311910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311914: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x311914u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31191c: 0x3e00008  jr          $ra
    ctx->pc = 0x31191Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31191Cu;
        // 0x311920: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31191Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311924u;
    // 0x311924: 0x0  nop
    ctx->pc = 0x311924u;
    // NOP
    ctx->pc = 0x311928u;
}

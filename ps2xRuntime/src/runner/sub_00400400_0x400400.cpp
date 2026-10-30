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

// Function: sub_00400400
// Address: 0x400400 - 0x400800
void sub_00400400_0x400400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00400400_0x400400");
#endif

    switch (ctx->pc) {
        case 0x400440u: goto label_400440;
        case 0x400448u: goto label_400448;
        case 0x400468u: goto label_400468;
        case 0x400484u: goto label_400484;
        case 0x4004a4u: goto label_4004a4;
        case 0x4004ecu: goto label_4004ec;
        case 0x400528u: goto label_400528;
        case 0x40053cu: goto label_40053c;
        case 0x40057cu: goto label_40057c;
        case 0x40058cu: goto label_40058c;
        case 0x4005a8u: goto label_4005a8;
        case 0x4005d0u: goto label_4005d0;
        case 0x4005f8u: goto label_4005f8;
        case 0x400640u: goto label_400640;
        case 0x400650u: goto label_400650;
        case 0x40066cu: goto label_40066c;
        case 0x4006b0u: goto label_4006b0;
        case 0x400724u: goto label_400724;
        case 0x400748u: goto label_400748;
        case 0x400774u: goto label_400774;
        case 0x400788u: goto label_400788;
        case 0x4007acu: goto label_4007ac;
        case 0x4007bcu: goto label_4007bc;
        case 0x4007dcu: goto label_4007dc;
        default: break;
    }

    ctx->pc = 0x400400u;

    // 0x400400: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x400400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x400404: 0xafa40544  sw          $a0, 0x544($sp)
    ctx->pc = 0x400404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1348), GPR_U32(ctx, 4));
    // 0x400408: 0xafa50548  sw          $a1, 0x548($sp)
    ctx->pc = 0x400408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1352), GPR_U32(ctx, 5));
    // 0x40040c: 0x27b004c0  addiu       $s0, $sp, 0x4C0
    ctx->pc = 0x40040cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x400410: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x400410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x400414: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x400414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x400418: 0x27b704d0  addiu       $s7, $sp, 0x4D0
    ctx->pc = 0x400418u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x40041c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x40041cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x400420: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x400420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x400424: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x400424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x400428: 0x27b604e0  addiu       $s6, $sp, 0x4E0
    ctx->pc = 0x400428u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
    // 0x40042c: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x40042cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
    // 0x400430: 0x27b504f0  addiu       $s5, $sp, 0x4F0
    ctx->pc = 0x400430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
    // 0x400434: 0x27b40500  addiu       $s4, $sp, 0x500
    ctx->pc = 0x400434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x400438: 0x365210ff  ori         $s2, $s2, 0x10FF
    ctx->pc = 0x400438u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4351);
    // 0x40043c: 0x0  nop
    ctx->pc = 0x40043cu;
    // NOP
label_400440:
    // 0x400440: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x400440u;
    SET_GPR_U32(ctx, 31, 0x400448u);
    ctx->pc = 0x400444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400440u;
    // 0x400444: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x400440u, 0x400448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400448u;
label_400448:
    // 0x400448: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x400448u;
    {
        const bool branch_taken_0x400448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400448u;
        // 0x40044c: 0x8fa30540  lw          $v1, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400448) {
            ctx->pc = 0x400590u;
            goto label_400590;
        }
    }
    ctx->pc = 0x400450u;
    // 0x400450: 0x3c01bfa0  lui         $at, 0xBFA0
    ctx->pc = 0x400450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49056 << 16));
    // 0x400454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x400458: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x400458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x40045c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40045cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x400460: 0xc0cd518  jal         func_335460
    ctx->pc = 0x400460u;
    SET_GPR_U32(ctx, 31, 0x400468u);
    ctx->pc = 0x400464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400460u;
    // 0x400464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400460u, 0x400468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400468u;
label_400468:
    // 0x400468: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x400468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
    // 0x40046c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40046cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x400470: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x400470u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x400474: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x400474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x400478: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x40047c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x40047Cu;
    SET_GPR_U32(ctx, 31, 0x400484u);
    ctx->pc = 0x400480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40047Cu;
    // 0x400480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40047Cu, 0x400484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400484u;
label_400484:
    // 0x400484: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x400484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x400488: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x40048c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x40048cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x400490: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x400490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x400494: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x400494u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x400498: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x400498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x40049c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x40049Cu;
    SET_GPR_U32(ctx, 31, 0x4004A4u);
    ctx->pc = 0x4004A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40049Cu;
    // 0x4004a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40049Cu, 0x4004A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4004A4u;
label_4004a4:
    // 0x4004a4: 0x8fa30544  lw          $v1, 0x544($sp)
    ctx->pc = 0x4004a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
    // 0x4004a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4004a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4004ac: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x4004acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x4004b0: 0x27a604b0  addiu       $a2, $sp, 0x4B0
    ctx->pc = 0x4004b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
    // 0x4004b4: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x4004b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x4004b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4004b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4004bc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x4004bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x4004c0: 0xe476000c  swc1        $f22, 0xC($v1)
    ctx->pc = 0x4004c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x4004c4: 0xafa004c0  sw          $zero, 0x4C0($sp)
    ctx->pc = 0x4004c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1216), GPR_U32(ctx, 0));
    // 0x4004c8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x4004c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4004cc: 0xafa004c4  sw          $zero, 0x4C4($sp)
    ctx->pc = 0x4004ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1220), GPR_U32(ctx, 0));
    // 0x4004d0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x4004d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x4004d4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x4004d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x4004d8: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x4004d8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x4004dc: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x4004dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x4004e0: 0x7ba204c0  lq          $v0, 0x4C0($sp)
    ctx->pc = 0x4004e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x4004e4: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x4004E4u;
    SET_GPR_U32(ctx, 31, 0x4004ECu);
    ctx->pc = 0x4004E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4004E4u;
    // 0x4004e8: 0x7fa204b0  sq          $v0, 0x4B0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4004E4u, 0x4004ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4004ECu;
label_4004ec:
    // 0x4004ec: 0x7ba304c0  lq          $v1, 0x4C0($sp)
    ctx->pc = 0x4004ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x4004f0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x4004f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4004f4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4004f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4004f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4004f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4004fc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x4004fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x400500: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x400504: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x400504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x400508: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x400508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x40050c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x40050cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x400510: 0x7fa30490  sq          $v1, 0x490($sp)
    ctx->pc = 0x400510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
    // 0x400514: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x400514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
    // 0x400518: 0xafa504e0  sw          $a1, 0x4E0($sp)
    ctx->pc = 0x400518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1248), GPR_U32(ctx, 5));
    // 0x40051c: 0x7fa204c0  sq          $v0, 0x4C0($sp)
    ctx->pc = 0x40051cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 2));
    // 0x400520: 0xc0cd518  jal         func_335460
    ctx->pc = 0x400520u;
    SET_GPR_U32(ctx, 31, 0x400528u);
    ctx->pc = 0x400524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400520u;
    // 0x400524: 0xe7b704d0  swc1        $f23, 0x4D0($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x400520u, 0x400528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400528u;
label_400528:
    // 0x400528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x400528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40052c: 0xe7a004f0  swc1        $f0, 0x4F0($sp)
    ctx->pc = 0x40052cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1264), bits); }
    // 0x400530: 0xafb20500  sw          $s2, 0x500($sp)
    ctx->pc = 0x400530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 18));
    // 0x400534: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x400534u;
    SET_GPR_U32(ctx, 31, 0x40053Cu);
    ctx->pc = 0x400538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400534u;
    // 0x400538: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x400534u, 0x40053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40053Cu;
label_40053c:
    // 0x40053c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x40053cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x400540: 0x27a40520  addiu       $a0, $sp, 0x520
    ctx->pc = 0x400540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x400544: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x400544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x400548: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x400548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x40054c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x40054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x400550: 0x8fa50548  lw          $a1, 0x548($sp)
    ctx->pc = 0x400550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x400554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x400554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400558: 0xafa20510  sw          $v0, 0x510($sp)
    ctx->pc = 0x400558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 2));
    // 0x40055c: 0xafa00520  sw          $zero, 0x520($sp)
    ctx->pc = 0x40055cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1312), GPR_U32(ctx, 0));
    // 0x400560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x400560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400564: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x400564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400568: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x400568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40056c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x40056cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400570: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x400570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400574: 0xc0ea0d0  jal         func_3A8340
    ctx->pc = 0x400574u;
    SET_GPR_U32(ctx, 31, 0x40057Cu);
    ctx->pc = 0x400578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400574u;
    // 0x400578: 0x27ab0510  addiu       $t3, $sp, 0x510 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8340u, 0x400574u, 0x40057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40057Cu;
label_40057c:
    // 0x40057c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x40057cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x400580: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x400580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400584: 0xc0f15bc  jal         func_3C56F0
    ctx->pc = 0x400584u;
    SET_GPR_U32(ctx, 31, 0x40058Cu);
    ctx->pc = 0x400588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400584u;
    // 0x400588: 0x24447620  addiu       $a0, $v0, 0x7620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x400584u, 0x40058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40058Cu;
label_40058c:
    // 0x40058c: 0x8fa30540  lw          $v1, 0x540($sp)
    ctx->pc = 0x40058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_400590:
    // 0x400590: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x400590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x400594: 0x461ffaa  bgez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x400594u;
    {
        const bool branch_taken_0x400594 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x400598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400594u;
        // 0x400598: 0xafa30540  sw          $v1, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400594) {
            ctx->pc = 0x400440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_400440;
        }
    }
    ctx->pc = 0x40059Cu;
    // 0x40059c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x40059cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4005a0: 0xafa40540  sw          $a0, 0x540($sp)
    ctx->pc = 0x4005a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 4));
    // 0x4005a4: 0x3c020d77  lui         $v0, 0xD77
    ctx->pc = 0x4005a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3447 << 16));
label_4005a8:
    // 0x4005a8: 0x3442a0de  ori         $v0, $v0, 0xA0DE
    ctx->pc = 0x4005a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41182);
    // 0x4005ac: 0x17c20041  bne         $fp, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4005ACu;
    {
        const bool branch_taken_0x4005ac = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4005B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4005ACu;
        // 0x4005b0: 0x3c0257f8  lui         $v0, 0x57F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4005ac) {
            ctx->pc = 0x4006B4u;
            goto label_4006b4;
        }
    }
    ctx->pc = 0x4005B4u;
    // 0x4005b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4005b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4005b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4005b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4005bc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x4005bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x4005c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x4005c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x4005c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x4005c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x4005c8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x4005C8u;
    SET_GPR_U32(ctx, 31, 0x4005D0u);
    ctx->pc = 0x4005CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4005C8u;
    // 0x4005cc: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4005C8u, 0x4005D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4005D0u;
label_4005d0:
    // 0x4005d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4005d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4005d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x4005d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x4005d8: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x4005d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4005dc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x4005dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4005e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x4005e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x4005e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4005e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4005e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4005e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4005ec: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x4005ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x4005f0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x4005F0u;
    SET_GPR_U32(ctx, 31, 0x4005F8u);
    ctx->pc = 0x4005F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4005F0u;
    // 0x4005f4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4005F0u, 0x4005F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4005F8u;
label_4005f8:
    // 0x4005f8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4005f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4005fc: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x4005fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x400600: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x400600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x400604: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x400604u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x400608: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x400608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x40060c: 0x3c07ae8c  lui         $a3, 0xAE8C
    ctx->pc = 0x40060cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44684 << 16));
    // 0x400610: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x400610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x400614: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x400614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x400618: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x400618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x40061c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40061cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x400620: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x400620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x400624: 0x34e73cff  ori         $a3, $a3, 0x3CFF
    ctx->pc = 0x400624u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15615);
    // 0x400628: 0x24080085  addiu       $t0, $zero, 0x85
    ctx->pc = 0x400628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x40062c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x40062cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x400630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x400630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x400634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400638: 0xc0f16c0  jal         func_3C5B00
    ctx->pc = 0x400638u;
    SET_GPR_U32(ctx, 31, 0x400640u);
    ctx->pc = 0x40063Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400638u;
    // 0x40063c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x400638u, 0x400640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400640u;
label_400640:
    // 0x400640: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x400640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x400644: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x400644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x400648: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x400648u;
    SET_GPR_U32(ctx, 31, 0x400650u);
    ctx->pc = 0x40064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400648u;
    // 0x40064c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x400648u, 0x400650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400650u;
label_400650:
    // 0x400650: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x400650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x400654: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x400654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x400658: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x400658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x40065c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40065cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x400660: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x400660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x400664: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x400664u;
    SET_GPR_U32(ctx, 31, 0x40066Cu);
    ctx->pc = 0x400668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400664u;
    // 0x400668: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x400664u, 0x40066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40066Cu;
label_40066c:
    // 0x40066c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x40066cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x400670: 0x3c07ddb3  lui         $a3, 0xDDB3
    ctx->pc = 0x400670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56755 << 16));
    // 0x400674: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x400674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x400678: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x400678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x40067c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x40067cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x400680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x400680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400684: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x400684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x400688: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x400688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x40068c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x40068cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x400690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x400690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400694: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x400694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x400698: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x400698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x40069c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x40069cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x4006a0: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x4006a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x4006a4: 0x34e74dff  ori         $a3, $a3, 0x4DFF
    ctx->pc = 0x4006a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)19967);
    // 0x4006a8: 0xc0f16c0  jal         func_3C5B00
    ctx->pc = 0x4006A8u;
    SET_GPR_U32(ctx, 31, 0x4006B0u);
    ctx->pc = 0x4006ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4006A8u;
    // 0x4006ac: 0x24080094  addiu       $t0, $zero, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x4006A8u, 0x4006B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4006B0u;
label_4006b0:
    // 0x4006b0: 0x3c0257f8  lui         $v0, 0x57F8
    ctx->pc = 0x4006b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22520 << 16));
label_4006b4:
    // 0x4006b4: 0x34427129  ori         $v0, $v0, 0x7129
    ctx->pc = 0x4006b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28969);
    // 0x4006b8: 0x13c20004  beq         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4006B8u;
    {
        const bool branch_taken_0x4006b8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x4006BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4006B8u;
        // 0x4006bc: 0x3c023792  lui         $v0, 0x3792 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14226 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4006b8) {
            ctx->pc = 0x4006CCu;
            goto label_4006cc;
        }
    }
    ctx->pc = 0x4006C0u;
    // 0x4006c0: 0x3442e23d  ori         $v0, $v0, 0xE23D
    ctx->pc = 0x4006c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57917);
    // 0x4006c4: 0x17c20004  bne         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4006C4u;
    {
        const bool branch_taken_0x4006c4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4006C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4006C4u;
        // 0x4006c8: 0x3c027f48  lui         $v0, 0x7F48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32584 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4006c4) {
            ctx->pc = 0x4006D8u;
            goto label_4006d8;
        }
    }
    ctx->pc = 0x4006CCu;
label_4006cc:
    // 0x4006cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4006ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4006d0: 0xafa5053c  sw          $a1, 0x53C($sp)
    ctx->pc = 0x4006d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
    // 0x4006d4: 0x3c027f48  lui         $v0, 0x7F48
    ctx->pc = 0x4006d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32584 << 16));
label_4006d8:
    // 0x4006d8: 0x8fa5053c  lw          $a1, 0x53C($sp)
    ctx->pc = 0x4006d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1340)));
    // 0x4006dc: 0x3442b418  ori         $v0, $v0, 0xB418
    ctx->pc = 0x4006dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46104);
    // 0x4006e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4006e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4006e4: 0x3c21026  xor         $v0, $fp, $v0
    ctx->pc = 0x4006e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ GPR_U64(ctx, 2));
    // 0x4006e8: 0x3c03387c  lui         $v1, 0x387C
    ctx->pc = 0x4006e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14460 << 16));
    // 0x4006ec: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x4006ecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x4006f0: 0x34639a85  ori         $v1, $v1, 0x9A85
    ctx->pc = 0x4006f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39557);
    // 0x4006f4: 0x17c30014  bne         $fp, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x4006F4u;
    {
        const bool branch_taken_0x4006f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        ctx->pc = 0x4006F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4006F4u;
        // 0x4006f8: 0xafa5053c  sw          $a1, 0x53C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4006f4) {
            ctx->pc = 0x400748u;
            goto label_400748;
        }
    }
    ctx->pc = 0x4006FCu;
    // 0x4006fc: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x4006fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x400700: 0x3c067f88  lui         $a2, 0x7F88
    ctx->pc = 0x400700u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32648 << 16));
    // 0x400704: 0x3c07c7c6  lui         $a3, 0xC7C6
    ctx->pc = 0x400704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51142 << 16));
    // 0x400708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x400708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40070c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x40070cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x400710: 0x34c66cb0  ori         $a2, $a2, 0x6CB0
    ctx->pc = 0x400710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)27824);
    // 0x400714: 0x34e7c590  ori         $a3, $a3, 0xC590
    ctx->pc = 0x400714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)50576);
    // 0x400718: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x400718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40071c: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x40071Cu;
    SET_GPR_U32(ctx, 31, 0x400724u);
    ctx->pc = 0x400720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40071Cu;
    // 0x400720: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x40071Cu, 0x400724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400724u;
label_400724:
    // 0x400724: 0x3c06a38d  lui         $a2, 0xA38D
    ctx->pc = 0x400724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41869 << 16));
    // 0x400728: 0x3c075128  lui         $a3, 0x5128
    ctx->pc = 0x400728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20776 << 16));
    // 0x40072c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400730: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x400730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x400734: 0x34c67eb0  ori         $a2, $a2, 0x7EB0
    ctx->pc = 0x400734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32432);
    // 0x400738: 0x34e718c0  ori         $a3, $a3, 0x18C0
    ctx->pc = 0x400738u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6336);
    // 0x40073c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40073cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x400740: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x400740u;
    SET_GPR_U32(ctx, 31, 0x400748u);
    ctx->pc = 0x400744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400740u;
    // 0x400744: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x400740u, 0x400748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400748u;
label_400748:
    // 0x400748: 0x3c022c13  lui         $v0, 0x2C13
    ctx->pc = 0x400748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11283 << 16));
    // 0x40074c: 0x3442bfa0  ori         $v0, $v0, 0xBFA0
    ctx->pc = 0x40074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49056);
    // 0x400750: 0x13c20006  beq         $fp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x400750u;
    {
        const bool branch_taken_0x400750 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x400754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400750u;
        // 0x400754: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400750) {
            ctx->pc = 0x40076Cu;
            goto label_40076c;
        }
    }
    ctx->pc = 0x400758u;
    // 0x400758: 0x3c02f48b  lui         $v0, 0xF48B
    ctx->pc = 0x400758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62603 << 16));
    // 0x40075c: 0x34426c6e  ori         $v0, $v0, 0x6C6E
    ctx->pc = 0x40075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27758);
    // 0x400760: 0x17c20006  bne         $fp, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x400760u;
    {
        const bool branch_taken_0x400760 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x400764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x400760u;
        // 0x400764: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x400760) {
            ctx->pc = 0x40077Cu;
            goto label_40077c;
        }
    }
    ctx->pc = 0x400768u;
    // 0x400768: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x400768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_40076c:
    // 0x40076c: 0xc0f175c  jal         func_3C5D70
    ctx->pc = 0x40076Cu;
    SET_GPR_U32(ctx, 31, 0x400774u);
    ctx->pc = 0x400770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40076Cu;
    // 0x400770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5D70u, 0x40076Cu, 0x400774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400774u;
label_400774:
    // 0x400774: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x400774u;
    {
        const bool branch_taken_0x400774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x400774) {
            ctx->pc = 0x4007DCu;
            goto label_4007dc;
        }
    }
    ctx->pc = 0x40077Cu;
label_40077c:
    // 0x40077c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x40077cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x400780: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x400780u;
    SET_GPR_U32(ctx, 31, 0x400788u);
    ctx->pc = 0x400784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x400780u;
    // 0x400784: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x400780u, 0x400788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x400788u;
label_400788:
    // 0x400788: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x400788u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x40078c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x40078cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x400790: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x400790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
    // 0x400794: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x400794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x400798: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x400798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x40079c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x40079cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x4007a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4007a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4007a4: 0xc0f15f6  jal         func_3C57D8
    ctx->pc = 0x4007A4u;
    SET_GPR_U32(ctx, 31, 0x4007ACu);
    ctx->pc = 0x4007A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4007A4u;
    // 0x4007a8: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x4007A4u, 0x4007ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4007ACu;
label_4007ac:
    // 0x4007ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4007acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x4007b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4007b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4007b4: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x4007B4u;
    SET_GPR_U32(ctx, 31, 0x4007BCu);
    ctx->pc = 0x4007B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4007B4u;
    // 0x4007b8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x4007B4u, 0x4007BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4007BCu;
label_4007bc:
    // 0x4007bc: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x4007bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4007c0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x4007c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x4007c4: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x4007c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
    // 0x4007c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4007c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4007cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4007ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4007d0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x4007d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x4007d4: 0xc0f15f6  jal         func_3C57D8
    ctx->pc = 0x4007D4u;
    SET_GPR_U32(ctx, 31, 0x4007DCu);
    ctx->pc = 0x4007D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4007D4u;
    // 0x4007d8: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x4007D4u, 0x4007DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4007DCu;
label_4007dc:
    // 0x4007dc: 0x3c0291b2  lui         $v0, 0x91B2
    ctx->pc = 0x4007dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37298 << 16));
    // 0x4007e0: 0x3442fd3a  ori         $v0, $v0, 0xFD3A
    ctx->pc = 0x4007e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64826);
    // 0x4007e4: 0x17c20019  bne         $fp, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4007E4u;
    {
        const bool branch_taken_0x4007e4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x4007E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4007E4u;
        // 0x4007e8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4007e4) {
            ctx->pc = 0x40084Cu;
            return;
        }
    }
    ctx->pc = 0x4007ECu;
    // 0x4007ec: 0x3c06a999  lui         $a2, 0xA999
    ctx->pc = 0x4007ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43417 << 16));
    // 0x4007f0: 0x3c07aa9b  lui         $a3, 0xAA9B
    ctx->pc = 0x4007f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43675 << 16));
    // 0x4007f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4007f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4007f8: 0x34c68cff  ori         $a2, $a2, 0x8CFF
    ctx->pc = 0x4007f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36095);
    // 0x4007fc: 0x34e783ff  ori         $a3, $a3, 0x83FF
    ctx->pc = 0x4007fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33791);
    ctx->pc = 0x400800u;
}

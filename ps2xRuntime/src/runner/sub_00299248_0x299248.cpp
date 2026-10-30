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

// Function: sub_00299248
// Address: 0x299248 - 0x299470
void sub_00299248_0x299248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299248_0x299248");
#endif

    switch (ctx->pc) {
        case 0x299290u: goto label_299290;
        case 0x299298u: goto label_299298;
        case 0x2992acu: goto label_2992ac;
        case 0x2992b4u: goto label_2992b4;
        case 0x2992c8u: goto label_2992c8;
        case 0x2992f0u: goto label_2992f0;
        case 0x299314u: goto label_299314;
        case 0x299348u: goto label_299348;
        case 0x299368u: goto label_299368;
        case 0x299384u: goto label_299384;
        case 0x29939cu: goto label_29939c;
        case 0x2993b4u: goto label_2993b4;
        case 0x2993bcu: goto label_2993bc;
        case 0x2993d0u: goto label_2993d0;
        case 0x2993dcu: goto label_2993dc;
        case 0x2993e8u: goto label_2993e8;
        case 0x2993f4u: goto label_2993f4;
        case 0x299400u: goto label_299400;
        case 0x299418u: goto label_299418;
        case 0x299430u: goto label_299430;
        case 0x29943cu: goto label_29943c;
        default: break;
    }

    ctx->pc = 0x299248u;

    // 0x299248: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x299248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29924c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x299250: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x299250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x299254: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x299254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299258: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x299258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x29925c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x29925cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299260: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x299260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x299264: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x299264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299268: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x299268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x29926c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x29926cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299270: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x299270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x299274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299278: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x299278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x29927c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x29927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x299280: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x299280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x299284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299288: 0xc0e4060  jal         func_390180
    ctx->pc = 0x299288u;
    SET_GPR_U32(ctx, 31, 0x299290u);
    ctx->pc = 0x29928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299288u;
    // 0x29928c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x299288u, 0x299290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299290u;
label_299290:
    // 0x299290: 0xc08a61a  jal         func_229868
    ctx->pc = 0x299290u;
    SET_GPR_U32(ctx, 31, 0x299298u);
    ctx->pc = 0x299294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299290u;
    // 0x299294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x299290u, 0x299298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299298u;
label_299298:
    // 0x299298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29929c: 0x12000068  beqz        $s0, . + 4 + (0x68 << 2)
    ctx->pc = 0x29929Cu;
    {
        const bool branch_taken_0x29929c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29929Cu;
        // 0x2992a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29929c) {
            ctx->pc = 0x299440u;
            goto label_299440;
        }
    }
    ctx->pc = 0x2992A4u;
    // 0x2992a4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2992A4u;
    SET_GPR_U32(ctx, 31, 0x2992ACu);
    ctx->pc = 0x2992A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992A4u;
    // 0x2992a8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2992A4u, 0x2992ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992ACu;
label_2992ac:
    // 0x2992ac: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2992ACu;
    SET_GPR_U32(ctx, 31, 0x2992B4u);
    ctx->pc = 0x2992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992ACu;
    // 0x2992b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2992ACu, 0x2992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992B4u;
label_2992b4:
    // 0x2992b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2992b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992b8: 0x12c00061  beqz        $s6, . + 4 + (0x61 << 2)
    ctx->pc = 0x2992B8u;
    {
        const bool branch_taken_0x2992b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992B8u;
        // 0x2992bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992b8) {
            ctx->pc = 0x299440u;
            goto label_299440;
        }
    }
    ctx->pc = 0x2992C0u;
    // 0x2992c0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2992C0u;
    SET_GPR_U32(ctx, 31, 0x2992C8u);
    ctx->pc = 0x2992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992C0u;
    // 0x2992c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2992C0u, 0x2992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992C8u;
label_2992c8:
    // 0x2992c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2992c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2992d0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x2992d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2992d4: 0x90640291  lbu         $a0, 0x291($v1)
    ctx->pc = 0x2992d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 657)));
    // 0x2992d8: 0x14800059  bnez        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2992D8u;
    {
        const bool branch_taken_0x2992d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2992DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992D8u;
        // 0x2992dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992d8) {
            ctx->pc = 0x299440u;
            goto label_299440;
        }
    }
    ctx->pc = 0x2992E0u;
    // 0x2992e0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2992e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2992e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2992e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992e8: 0xc0e18a6  jal         func_386298
    ctx->pc = 0x2992E8u;
    SET_GPR_U32(ctx, 31, 0x2992F0u);
    ctx->pc = 0x2992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992E8u;
    // 0x2992ec: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386298u, 0x2992E8u, 0x2992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992F0u;
label_2992f0:
    // 0x2992f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2992f4: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2992f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x2992f8: 0x24509f48  addiu       $s0, $v0, -0x60B8
    ctx->pc = 0x2992f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942536));
    // 0x2992fc: 0x24c61758  addiu       $a2, $a2, 0x1758
    ctx->pc = 0x2992fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5976));
    // 0x299300: 0xae150114  sw          $s5, 0x114($s0)
    ctx->pc = 0x299300u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x6EA05Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EA05Cu, _value); } while (0);
    // 0x299304: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x299304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x299308: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x299308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29930c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x29930Cu;
    SET_GPR_U32(ctx, 31, 0x299314u);
    ctx->pc = 0x299310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29930Cu;
    // 0x299310: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x29930Cu, 0x299314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299314u;
label_299314:
    // 0x299314: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x299314u;
    {
        const bool branch_taken_0x299314 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x299314) {
            ctx->pc = 0x299318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299314u;
            // 0x299318: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299324u;
            goto label_299324;
        }
    }
    ctx->pc = 0x29931Cu;
    // 0x29931c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299320: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x299320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_299324:
    // 0x299324: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x299324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x299328: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x299328u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x29932c: 0x24509f78  addiu       $s0, $v0, -0x6088
    ctx->pc = 0x29932cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942584));
    // 0x299330: 0x24c61760  addiu       $a2, $a2, 0x1760
    ctx->pc = 0x299330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5984));
    // 0x299334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299338: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x299338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29933c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29933cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299340: 0xc10ca04  jal         func_432810
    ctx->pc = 0x299340u;
    SET_GPR_U32(ctx, 31, 0x299348u);
    ctx->pc = 0x299344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299340u;
    // 0x299344: 0x26130020  addiu       $s3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x299340u, 0x299348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299348u;
label_299348:
    // 0x299348: 0x26140060  addiu       $s4, $s0, 0x60
    ctx->pc = 0x299348u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x29934c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29934cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x299350: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x299350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299354: 0x24c61768  addiu       $a2, $a2, 0x1768
    ctx->pc = 0x299354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5992));
    // 0x299358: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x299358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29935c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29935cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299360: 0xc10ca04  jal         func_432810
    ctx->pc = 0x299360u;
    SET_GPR_U32(ctx, 31, 0x299368u);
    ctx->pc = 0x299364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299360u;
    // 0x299364: 0x26150040  addiu       $s5, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x299360u, 0x299368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299368u;
label_299368:
    // 0x299368: 0x26170080  addiu       $s7, $s0, 0x80
    ctx->pc = 0x299368u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x29936c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29936cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x299370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299374: 0x24c61770  addiu       $a2, $a2, 0x1770
    ctx->pc = 0x299374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6000));
    // 0x299378: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x299378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29937c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x29937Cu;
    SET_GPR_U32(ctx, 31, 0x299384u);
    ctx->pc = 0x299380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29937Cu;
    // 0x299380: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x29937Cu, 0x299384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299384u;
label_299384:
    // 0x299384: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x299384u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x299388: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x299388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29938c: 0x24c61778  addiu       $a2, $a2, 0x1778
    ctx->pc = 0x29938cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6008));
    // 0x299390: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x299390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x299394: 0xc10ca04  jal         func_432810
    ctx->pc = 0x299394u;
    SET_GPR_U32(ctx, 31, 0x29939Cu);
    ctx->pc = 0x299398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299394u;
    // 0x299398: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x299394u, 0x29939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29939Cu;
label_29939c:
    // 0x29939c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x29939cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x2993a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2993a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2993a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993a8: 0x24c61780  addiu       $a2, $a2, 0x1780
    ctx->pc = 0x2993a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6016));
    // 0x2993ac: 0xc10ca04  jal         func_432810
    ctx->pc = 0x2993ACu;
    SET_GPR_U32(ctx, 31, 0x2993B4u);
    ctx->pc = 0x2993B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993ACu;
    // 0x2993b0: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2993ACu, 0x2993B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993B4u;
label_2993b4:
    // 0x2993b4: 0xc0d52ce  jal         func_354B38
    ctx->pc = 0x2993B4u;
    SET_GPR_U32(ctx, 31, 0x2993BCu);
    ctx->pc = 0x2993B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993B4u;
    // 0x2993b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354B38u, 0x2993B4u, 0x2993BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993BCu;
label_2993bc:
    // 0x2993bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2993BCu;
    {
        const bool branch_taken_0x2993bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2993C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993BCu;
        // 0x2993c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993bc) {
            ctx->pc = 0x2993D4u;
            goto label_2993d4;
        }
    }
    ctx->pc = 0x2993C4u;
    // 0x2993c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2993c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993c8: 0xc0d4fe2  jal         func_353F88
    ctx->pc = 0x2993C8u;
    SET_GPR_U32(ctx, 31, 0x2993D0u);
    ctx->pc = 0x2993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993C8u;
    // 0x2993cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F88u, 0x2993C8u, 0x2993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993D0u;
label_2993d0:
    // 0x2993d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2993d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2993d4:
    // 0x2993d4: 0xc0d4fe2  jal         func_353F88
    ctx->pc = 0x2993D4u;
    SET_GPR_U32(ctx, 31, 0x2993DCu);
    ctx->pc = 0x2993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993D4u;
    // 0x2993d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F88u, 0x2993D4u, 0x2993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993DCu;
label_2993dc:
    // 0x2993dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2993dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993e0: 0xc0d4fe2  jal         func_353F88
    ctx->pc = 0x2993E0u;
    SET_GPR_U32(ctx, 31, 0x2993E8u);
    ctx->pc = 0x2993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993E0u;
    // 0x2993e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F88u, 0x2993E0u, 0x2993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993E8u;
label_2993e8:
    // 0x2993e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2993e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993ec: 0xc0d4fe2  jal         func_353F88
    ctx->pc = 0x2993ECu;
    SET_GPR_U32(ctx, 31, 0x2993F4u);
    ctx->pc = 0x2993F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993ECu;
    // 0x2993f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F88u, 0x2993ECu, 0x2993F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993F4u;
label_2993f4:
    // 0x2993f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2993f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993f8: 0xc0d4fe2  jal         func_353F88
    ctx->pc = 0x2993F8u;
    SET_GPR_U32(ctx, 31, 0x299400u);
    ctx->pc = 0x2993FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993F8u;
    // 0x2993fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F88u, 0x2993F8u, 0x299400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299400u;
label_299400:
    // 0x299400: 0x8e43021c  lw          $v1, 0x21C($s2)
    ctx->pc = 0x299400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 540)));
    // 0x299404: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x299404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x299408: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x299408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29940c: 0xa4438310  sh          $v1, -0x7CF0($v0)
    ctx->pc = 0x29940cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6E8310u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6E8310u, _value); } while (0);
    // 0x299410: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x299410u;
    SET_GPR_U32(ctx, 31, 0x299418u);
    ctx->pc = 0x299414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299410u;
    // 0x299414: 0xae44021c  sw          $a0, 0x21C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x299410u, 0x299418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299418u;
label_299418:
    // 0x299418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29941c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29941Cu;
    {
        const bool branch_taken_0x29941c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x299420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29941Cu;
        // 0x299420: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29941c) {
            ctx->pc = 0x299430u;
            goto label_299430;
        }
    }
    ctx->pc = 0x299424u;
    // 0x299424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299428: 0xc0b2cd2  jal         func_2CB348
    ctx->pc = 0x299428u;
    SET_GPR_U32(ctx, 31, 0x299430u);
    ctx->pc = 0x29942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299428u;
    // 0x29942c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB348u, 0x299428u, 0x299430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299430u;
label_299430:
    // 0x299430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x299430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299434: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x299434u;
    SET_GPR_U32(ctx, 31, 0x29943Cu);
    ctx->pc = 0x299438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299434u;
    // 0x299438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x299434u, 0x29943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29943Cu;
label_29943c:
    // 0x29943c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299440:
    // 0x299440: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x299440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x299444: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x299444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x299448: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x299448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29944c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x29944cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299450: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x299450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299454: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x299454u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299458: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x299458u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29945c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x29945cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299464: 0x3e00008  jr          $ra
    ctx->pc = 0x299464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299464u;
        // 0x299468: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29946Cu;
    // 0x29946c: 0x0  nop
    ctx->pc = 0x29946cu;
    // NOP
    ctx->pc = 0x299470u;
}

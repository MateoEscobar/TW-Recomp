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

// Function: sub_003A31A8
// Address: 0x3a31a8 - 0x3a32f0
void sub_003A31A8_0x3a31a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A31A8_0x3a31a8");
#endif

    switch (ctx->pc) {
        case 0x3a31fcu: goto label_3a31fc;
        case 0x3a3204u: goto label_3a3204;
        case 0x3a320cu: goto label_3a320c;
        case 0x3a3214u: goto label_3a3214;
        case 0x3a321cu: goto label_3a321c;
        case 0x3a3228u: goto label_3a3228;
        case 0x3a3230u: goto label_3a3230;
        case 0x3a3238u: goto label_3a3238;
        case 0x3a3240u: goto label_3a3240;
        case 0x3a3260u: goto label_3a3260;
        case 0x3a326cu: goto label_3a326c;
        case 0x3a3290u: goto label_3a3290;
        case 0x3a3298u: goto label_3a3298;
        case 0x3a32a4u: goto label_3a32a4;
        case 0x3a32acu: goto label_3a32ac;
        case 0x3a32b4u: goto label_3a32b4;
        case 0x3a32c0u: goto label_3a32c0;
        case 0x3a32c8u: goto label_3a32c8;
        case 0x3a32d0u: goto label_3a32d0;
        default: break;
    }

    ctx->pc = 0x3a31a8u;

    // 0x3a31a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a31a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a31ac: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3a31acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3a31b0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a31b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3a31b4: 0x8c43536c  lw          $v1, 0x536C($v0)
    ctx->pc = 0x3a31b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E536Cu));
    // 0x3a31b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a31b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a31bc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a31bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3a31c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a31c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3a31c4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a31c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3a31c8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3A31C8u;
    {
        const bool branch_taken_0x3a31c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31C8u;
        // 0x3a31cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31c8) {
            ctx->pc = 0x3A32D0u;
            goto label_3a32d0;
        }
    }
    ctx->pc = 0x3A31D0u;
    // 0x3a31d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a31d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a31d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a31d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a31d8: 0x10a3002b  beq         $a1, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A31D8u;
    {
        const bool branch_taken_0x3a31d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31D8u;
        // 0x3a31dc: 0x8c532c60  lw          $s3, 0x2C60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31d8) {
            ctx->pc = 0x3A3288u;
            goto label_3a3288;
        }
    }
    ctx->pc = 0x3A31E0u;
    // 0x3a31e0: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x3a31e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a31e4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A31E4u;
    {
        const bool branch_taken_0x3a31e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a31e4) {
            ctx->pc = 0x3A32C8u;
            goto label_3a32c8;
        }
    }
    ctx->pc = 0x3A31ECu;
    // 0x3a31ec: 0x14a00036  bnez        $a1, . + 4 + (0x36 << 2)
    ctx->pc = 0x3A31ECu;
    {
        const bool branch_taken_0x3a31ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A31F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A31ECu;
        // 0x3a31f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a31ec) {
            ctx->pc = 0x3A32C8u;
            goto label_3a32c8;
        }
    }
    ctx->pc = 0x3A31F4u;
    // 0x3a31f4: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3A31F4u;
    SET_GPR_U32(ctx, 31, 0x3A31FCu);
    ctx->pc = 0x3A31F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A31F4u;
    // 0x3a31f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3A31F4u, 0x3A31FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A31FCu;
label_3a31fc:
    // 0x3a31fc: 0xc0e6032  jal         func_3980C8
    ctx->pc = 0x3A31FCu;
    SET_GPR_U32(ctx, 31, 0x3A3204u);
    ctx->pc = 0x3A3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A31FCu;
    // 0x3a3200: 0x8e040840  lw          $a0, 0x840($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3980C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3980C8u, 0x3A31FCu, 0x3A3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3204u;
label_3a3204:
    // 0x3a3204: 0xc0e3964  jal         func_38E590
    ctx->pc = 0x3A3204u;
    SET_GPR_U32(ctx, 31, 0x3A320Cu);
    ctx->pc = 0x3A3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3204u;
    // 0x3a3208: 0x8e040844  lw          $a0, 0x844($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E590u, 0x3A3204u, 0x3A320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A320Cu;
label_3a320c:
    // 0x3a320c: 0xc123508  jal         func_48D420
    ctx->pc = 0x3A320Cu;
    SET_GPR_U32(ctx, 31, 0x3A3214u);
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x3A320Cu, 0x3A3214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3214u;
label_3a3214:
    // 0x3a3214: 0xc0e4388  jal         func_390E20
    ctx->pc = 0x3A3214u;
    SET_GPR_U32(ctx, 31, 0x3A321Cu);
    ctx->pc = 0x3A3218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3214u;
    // 0x3a3218: 0x8e040848  lw          $a0, 0x848($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390E20u, 0x3A3214u, 0x3A321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A321Cu;
label_3a321c:
    // 0x3a321c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a321cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3220: 0xc0e8b36  jal         func_3A2CD8
    ctx->pc = 0x3A3220u;
    SET_GPR_U32(ctx, 31, 0x3A3228u);
    ctx->pc = 0x3A3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3220u;
    // 0x3a3224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3A3220u, 0x3A3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3228u;
label_3a3228:
    // 0x3a3228: 0xc0e71dc  jal         func_39C770
    ctx->pc = 0x3A3228u;
    SET_GPR_U32(ctx, 31, 0x3A3230u);
    ctx->pc = 0x3A322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3228u;
    // 0x3a322c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C770u, 0x3A3228u, 0x3A3230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3230u;
label_3a3230:
    // 0x3a3230: 0xc0e3e94  jal         func_38FA50
    ctx->pc = 0x3A3230u;
    SET_GPR_U32(ctx, 31, 0x3A3238u);
    ctx->pc = 0x3A3234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3230u;
    // 0x3a3234: 0x8e04084c  lw          $a0, 0x84C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FA50u, 0x3A3230u, 0x3A3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3238u;
label_3a3238:
    // 0x3a3238: 0xc092de0  jal         func_24B780
    ctx->pc = 0x3A3238u;
    SET_GPR_U32(ctx, 31, 0x3A3240u);
    ctx->pc = 0x24B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B780u, 0x3A3238u, 0x3A3240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3240u;
label_3a3240:
    // 0x3a3240: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a3240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a3244: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3a3244u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x3a3248: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x3a3248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x3a324c: 0x1880001e  blez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A324Cu;
    {
        const bool branch_taken_0x3a324c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3A3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A324Cu;
        // 0x3a3250: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a324c) {
            ctx->pc = 0x3A32C8u;
            goto label_3a32c8;
        }
    }
    ctx->pc = 0x3A3254u;
    // 0x3a3254: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3a3254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3a3258: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x3a3258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x3a325c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a325cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
label_3a3260:
    // 0x3a3260: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a3260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a3264: 0xc062fda  jal         func_18BF68
    ctx->pc = 0x3A3264u;
    SET_GPR_U32(ctx, 31, 0x3A326Cu);
    ctx->pc = 0x3A3268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3264u;
    // 0x3a3268: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BF68u, 0x3A3264u, 0x3A326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A326Cu;
label_3a326c:
    // 0x3a326c: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x3a326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x3a3270: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x3a3270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x3a3274: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3a3274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a3278: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A3278u;
    {
        const bool branch_taken_0x3a3278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a3278) {
            ctx->pc = 0x3A327Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3278u;
            // 0x3a327c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3260;
        }
    }
    ctx->pc = 0x3A3280u;
    // 0x3a3280: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A3280u;
    {
        const bool branch_taken_0x3a3280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3280) {
            ctx->pc = 0x3A32C8u;
            goto label_3a32c8;
        }
    }
    ctx->pc = 0x3A3288u;
label_3a3288:
    // 0x3a3288: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3A3288u;
    SET_GPR_U32(ctx, 31, 0x3A3290u);
    ctx->pc = 0x3A328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3288u;
    // 0x3a328c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3A3288u, 0x3A3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3290u;
label_3a3290:
    // 0x3a3290: 0xc123508  jal         func_48D420
    ctx->pc = 0x3A3290u;
    SET_GPR_U32(ctx, 31, 0x3A3298u);
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x3A3290u, 0x3A3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3298u;
label_3a3298:
    // 0x3a3298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a3298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a329c: 0xc0e8b36  jal         func_3A2CD8
    ctx->pc = 0x3A329Cu;
    SET_GPR_U32(ctx, 31, 0x3A32A4u);
    ctx->pc = 0x3A32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A329Cu;
    // 0x3a32a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3A329Cu, 0x3A32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32A4u;
label_3a32a4:
    // 0x3a32a4: 0xc0e71dc  jal         func_39C770
    ctx->pc = 0x3A32A4u;
    SET_GPR_U32(ctx, 31, 0x3A32ACu);
    ctx->pc = 0x3A32A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32A4u;
    // 0x3a32a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C770u, 0x3A32A4u, 0x3A32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32ACu;
label_3a32ac:
    // 0x3a32ac: 0xc0e3e94  jal         func_38FA50
    ctx->pc = 0x3A32ACu;
    SET_GPR_U32(ctx, 31, 0x3A32B4u);
    ctx->pc = 0x3A32B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32ACu;
    // 0x3a32b0: 0x8e04084c  lw          $a0, 0x84C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FA50u, 0x3A32ACu, 0x3A32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32B4u;
label_3a32b4:
    // 0x3a32b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a32b8: 0xc0e8b36  jal         func_3A2CD8
    ctx->pc = 0x3A32B8u;
    SET_GPR_U32(ctx, 31, 0x3A32C0u);
    ctx->pc = 0x3A32BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32B8u;
    // 0x3a32bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2CD8u, 0x3A32B8u, 0x3A32C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32C0u;
label_3a32c0:
    // 0x3a32c0: 0xc0e71dc  jal         func_39C770
    ctx->pc = 0x3A32C0u;
    SET_GPR_U32(ctx, 31, 0x3A32C8u);
    ctx->pc = 0x3A32C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32C0u;
    // 0x3a32c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C770u, 0x3A32C0u, 0x3A32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32C8u;
label_3a32c8:
    // 0x3a32c8: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3A32C8u;
    SET_GPR_U32(ctx, 31, 0x3A32D0u);
    ctx->pc = 0x3A32CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A32C8u;
    // 0x3a32cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3A32C8u, 0x3A32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A32D0u;
label_3a32d0:
    // 0x3a32d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a32d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a32d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a32d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a32d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a32d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a32dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a32dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a32e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a32e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a32e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A32E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A32E4u;
        // 0x3a32e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A32E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A32ECu;
    // 0x3a32ec: 0x0  nop
    ctx->pc = 0x3a32ecu;
    // NOP
    ctx->pc = 0x3a32f0u;
}

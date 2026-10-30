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

// Function: sub_0040C280
// Address: 0x40c280 - 0x40c3a8
void sub_0040C280_0x40c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C280_0x40c280");
#endif

    switch (ctx->pc) {
        case 0x40c2b0u: goto label_40c2b0;
        case 0x40c2bcu: goto label_40c2bc;
        case 0x40c2c8u: goto label_40c2c8;
        case 0x40c2d4u: goto label_40c2d4;
        case 0x40c2f0u: goto label_40c2f0;
        case 0x40c2fcu: goto label_40c2fc;
        case 0x40c308u: goto label_40c308;
        case 0x40c31cu: goto label_40c31c;
        case 0x40c32cu: goto label_40c32c;
        case 0x40c33cu: goto label_40c33c;
        case 0x40c344u: goto label_40c344;
        case 0x40c350u: goto label_40c350;
        case 0x40c358u: goto label_40c358;
        case 0x40c364u: goto label_40c364;
        case 0x40c370u: goto label_40c370;
        case 0x40c37cu: goto label_40c37c;
        case 0x40c388u: goto label_40c388;
        default: break;
    }

    ctx->pc = 0x40c280u;

    // 0x40c280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40c284: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x40c284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x40c288: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x40c288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x40c28c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x40c28cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c290: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x40c290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c294: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c294u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c298: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x40c298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x40c29c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x40c29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x40c2a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40c2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x40c2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c2a8: 0xc102866  jal         func_40A198
    ctx->pc = 0x40C2A8u;
    SET_GPR_U32(ctx, 31, 0x40C2B0u);
    ctx->pc = 0x40C2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C2A8u;
    // 0x40c2ac: 0x24a58410  addiu       $a1, $a1, -0x7BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40C2A8u, 0x40C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C2B0u;
label_40c2b0:
    // 0x40c2b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c2b4: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40C2B4u;
    SET_GPR_U32(ctx, 31, 0x40C2BCu);
    ctx->pc = 0x40C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C2B4u;
    // 0x40c2b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40C2B4u, 0x40C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C2BCu;
label_40c2bc:
    // 0x40c2bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c2c0: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40C2C0u;
    SET_GPR_U32(ctx, 31, 0x40C2C8u);
    ctx->pc = 0x40C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C2C0u;
    // 0x40c2c4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40C2C0u, 0x40C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C2C8u;
label_40c2c8:
    // 0x40c2c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c2cc: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40C2CCu;
    SET_GPR_U32(ctx, 31, 0x40C2D4u);
    ctx->pc = 0x40C2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C2CCu;
    // 0x40c2d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40C2CCu, 0x40C2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C2D4u;
label_40c2d4:
    // 0x40c2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40c2d8: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x40C2D8u;
    {
        const bool branch_taken_0x40c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x40c2d8) {
            ctx->pc = 0x40C2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C2D8u;
            // 0x40c2dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C380u;
            goto label_40c380;
        }
    }
    ctx->pc = 0x40C2E0u;
    // 0x40c2e0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x40c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x40c2e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40c2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c2e8: 0xc103090  jal         func_40C240
    ctx->pc = 0x40C2E8u;
    SET_GPR_U32(ctx, 31, 0x40C2F0u);
    ctx->pc = 0x40C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C2E8u;
    // 0x40c2ec: 0x24848490  addiu       $a0, $a0, -0x7B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C240u, 0x40C2E8u, 0x40C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C2F0u;
label_40c2f0:
    // 0x40c2f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40c2f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c2f4: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40C2F4u;
    SET_GPR_U32(ctx, 31, 0x40C2FCu);
    ctx->pc = 0x40C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C2F4u;
    // 0x40c2f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40C2F4u, 0x40C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C2FCu;
label_40c2fc:
    // 0x40c2fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40c2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c300: 0xc0cc97e  jal         func_3325F8
    ctx->pc = 0x40C300u;
    SET_GPR_U32(ctx, 31, 0x40C308u);
    ctx->pc = 0x40C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C300u;
    // 0x40c304: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3325F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3325F8u, 0x40C300u, 0x40C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C308u;
label_40c308:
    // 0x40c308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c30c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x40c30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c310: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c314: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40C314u;
    SET_GPR_U32(ctx, 31, 0x40C31Cu);
    ctx->pc = 0x40C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C314u;
    // 0x40c318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40C314u, 0x40C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C31Cu;
label_40c31c:
    // 0x40c31c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40c31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c320: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40c320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c324: 0xc102ffa  jal         func_40BFE8
    ctx->pc = 0x40C324u;
    SET_GPR_U32(ctx, 31, 0x40C32Cu);
    ctx->pc = 0x40C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C324u;
    // 0x40c328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BFE8u, 0x40C324u, 0x40C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C32Cu;
label_40c32c:
    // 0x40c32c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c32cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c334: 0xc102866  jal         func_40A198
    ctx->pc = 0x40C334u;
    SET_GPR_U32(ctx, 31, 0x40C33Cu);
    ctx->pc = 0x40C338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C334u;
    // 0x40c338: 0x24a58428  addiu       $a1, $a1, -0x7BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40C334u, 0x40C33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C33Cu;
label_40c33c:
    // 0x40c33c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40C33Cu;
    SET_GPR_U32(ctx, 31, 0x40C344u);
    ctx->pc = 0x40C340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C33Cu;
    // 0x40c340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40C33Cu, 0x40C344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C344u;
label_40c344:
    // 0x40c344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c348: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40C348u;
    SET_GPR_U32(ctx, 31, 0x40C350u);
    ctx->pc = 0x40C34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C348u;
    // 0x40c34c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40C348u, 0x40C350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C350u;
label_40c350:
    // 0x40c350: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40C350u;
    SET_GPR_U32(ctx, 31, 0x40C358u);
    ctx->pc = 0x40C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C350u;
    // 0x40c354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40C350u, 0x40C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C358u;
label_40c358:
    // 0x40c358: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40c358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c35c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40C35Cu;
    SET_GPR_U32(ctx, 31, 0x40C364u);
    ctx->pc = 0x40C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C35Cu;
    // 0x40c360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40C35Cu, 0x40C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C364u;
label_40c364:
    // 0x40c364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c368: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40C368u;
    SET_GPR_U32(ctx, 31, 0x40C370u);
    ctx->pc = 0x40C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C368u;
    // 0x40c36c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40C368u, 0x40C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C370u;
label_40c370:
    // 0x40c370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c374: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40C374u;
    SET_GPR_U32(ctx, 31, 0x40C37Cu);
    ctx->pc = 0x40C378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C374u;
    // 0x40c378: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40C374u, 0x40C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C37Cu;
label_40c37c:
    // 0x40c37c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40c380:
    // 0x40c380: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40C380u;
    SET_GPR_U32(ctx, 31, 0x40C388u);
    ctx->pc = 0x40C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C380u;
    // 0x40c384: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40C380u, 0x40C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C388u;
label_40c388:
    // 0x40c388: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x40c388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40c38c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40c38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40c390: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40c390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40c394: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x40c394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40c398: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x40c398u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c39c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x40C3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C3A0u;
        // 0x40c3a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C3A8u;
}

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

// Function: sub_0038A830
// Address: 0x38a830 - 0x38ab18
void sub_0038A830_0x38a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A830_0x38a830");
#endif

    switch (ctx->pc) {
        case 0x38a940u: goto label_38a940;
        case 0x38a970u: goto label_38a970;
        case 0x38a980u: goto label_38a980;
        case 0x38a9b4u: goto label_38a9b4;
        case 0x38a9c0u: goto label_38a9c0;
        case 0x38aa50u: goto label_38aa50;
        case 0x38aa68u: goto label_38aa68;
        case 0x38aa80u: goto label_38aa80;
        case 0x38aa8cu: goto label_38aa8c;
        case 0x38aa9cu: goto label_38aa9c;
        case 0x38aab4u: goto label_38aab4;
        case 0x38aabcu: goto label_38aabc;
        case 0x38aad4u: goto label_38aad4;
        case 0x38aae4u: goto label_38aae4;
        case 0x38aaecu: goto label_38aaec;
        default: break;
    }

    ctx->pc = 0x38a830u;

    // 0x38a830: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x38a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x38a834: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x38a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x38a838: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38a838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a83c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x38a83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x38a840: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x38a840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x38a844: 0x2643fffc  addiu       $v1, $s2, -0x4
    ctx->pc = 0x38a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x38a848: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x38a848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x38a84c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x38a84cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a850: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x38a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x38a854: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x38a854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a858: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x38a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x38a85c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x38a85cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a860: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x38a860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x38a864: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38a864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a868: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x38a868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x38a86c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x38A86Cu;
    {
        const bool branch_taken_0x38a86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A86Cu;
        // 0x38a870: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a86c) {
            ctx->pc = 0x38A92Cu;
            goto label_38a92c;
        }
    }
    ctx->pc = 0x38A874u;
    // 0x38a874: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x38a874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x38a878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x38a878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38a87c: 0x2442e290  addiu       $v0, $v0, -0x1D70
    ctx->pc = 0x38a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959760));
    // 0x38a880: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38a884: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38a884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38a888: 0x800008  jr          $a0
    ctx->pc = 0x38A888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x38A890u: goto label_38a890;
            case 0x38A8A0u: goto label_38a8a0;
            case 0x38A8B0u: goto label_38a8b0;
            case 0x38A8ECu: goto label_38a8ec;
            case 0x38A8FCu: goto label_38a8fc;
            case 0x38A90Cu: goto label_38a90c;
            case 0x38A91Cu: goto label_38a91c;
            case 0x38A92Cu: goto label_38a92c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A888u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x38A890u;
label_38a890:
    // 0x38a890: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x38a890u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a894: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38a894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a898: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x38A898u;
    {
        const bool branch_taken_0x38a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A898u;
        // 0x38a89c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a898) {
            ctx->pc = 0x38A930u;
            goto label_38a930;
        }
    }
    ctx->pc = 0x38A8A0u;
label_38a8a0:
    // 0x38a8a0: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x38a8a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a8a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38a8a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a8a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x38A8A8u;
    {
        const bool branch_taken_0x38a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8A8u;
        // 0x38a8ac: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8a8) {
            ctx->pc = 0x38A930u;
            goto label_38a930;
        }
    }
    ctx->pc = 0x38A8B0u;
label_38a8b0:
    // 0x38a8b0: 0x3c01402f  lui         $at, 0x402F
    ctx->pc = 0x38a8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16431 << 16));
    // 0x38a8b4: 0x34216c8b  ori         $at, $at, 0x6C8B
    ctx->pc = 0x38a8b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27787);
    // 0x38a8b8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x38a8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38a8bc: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x38a8bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38a8c0: 0x3c013cbc  lui         $at, 0x3CBC
    ctx->pc = 0x38a8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15548 << 16));
    // 0x38a8c4: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x38a8c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x38a8c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x38a8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x38a8cc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x38a8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a8d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38a8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38a8d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38a8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38a8d8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x38a8d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x38a8dc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x38a8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x38a8e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x38a8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x38a8e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x38A8E4u;
    {
        const bool branch_taken_0x38a8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8E4u;
        // 0x38a8e8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8e4) {
            ctx->pc = 0x38A930u;
            goto label_38a930;
        }
    }
    ctx->pc = 0x38A8ECu;
label_38a8ec:
    // 0x38a8ec: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x38a8ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38a8f0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x38a8f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a8f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x38A8F4u;
    {
        const bool branch_taken_0x38a8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8F4u;
        // 0x38a8f8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8f4) {
            ctx->pc = 0x38A930u;
            goto label_38a930;
        }
    }
    ctx->pc = 0x38A8FCu;
label_38a8fc:
    // 0x38a8fc: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x38a8fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38a900: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x38a900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a904: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x38A904u;
    {
        const bool branch_taken_0x38a904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A904u;
        // 0x38a908: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a904) {
            ctx->pc = 0x38A930u;
            goto label_38a930;
        }
    }
    ctx->pc = 0x38A90Cu;
label_38a90c:
    // 0x38a90c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x38a90cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38a910: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x38a910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a914: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38A914u;
    {
        const bool branch_taken_0x38a914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A914u;
        // 0x38a918: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a914) {
            ctx->pc = 0x38A930u;
            goto label_38a930;
        }
    }
    ctx->pc = 0x38A91Cu;
label_38a91c:
    // 0x38a91c: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x38a91cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38a920: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x38a920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A924u;
    {
        const bool branch_taken_0x38a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A924u;
        // 0x38a928: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a924) {
            ctx->pc = 0x38A930u;
            goto label_38a930;
        }
    }
    ctx->pc = 0x38A92Cu;
label_38a92c:
    // 0x38a92c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38a92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a930:
    // 0x38a930: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x38a934: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x38a934u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x38a938: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x38A938u;
    SET_GPR_U32(ctx, 31, 0x38A940u);
    ctx->pc = 0x38A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A938u;
    // 0x38a93c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x38A938u, 0x38A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A940u;
label_38a940:
    // 0x38a940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a944: 0x52220010  beql        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38A944u;
    {
        const bool branch_taken_0x38a944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x38a944) {
            ctx->pc = 0x38A948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A944u;
            // 0x38a948: 0x8e841300  lw          $a0, 0x1300($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4864)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A988u;
            goto label_38a988;
        }
    }
    ctx->pc = 0x38A94Cu;
    // 0x38a94c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A94Cu;
    {
        const bool branch_taken_0x38a94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A94Cu;
        // 0x38a950: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a94c) {
            ctx->pc = 0x38A964u;
            goto label_38a964;
        }
    }
    ctx->pc = 0x38A954u;
    // 0x38a954: 0x12220040  beq         $s1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x38A954u;
    {
        const bool branch_taken_0x38a954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x38A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A954u;
        // 0x38a958: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a954) {
            ctx->pc = 0x38AA58u;
            goto label_38aa58;
        }
    }
    ctx->pc = 0x38A95Cu;
    // 0x38a95c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x38A95Cu;
    {
        const bool branch_taken_0x38a95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A95Cu;
        // 0x38a960: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a95c) {
            ctx->pc = 0x38AAA4u;
            goto label_38aaa4;
        }
    }
    ctx->pc = 0x38A964u;
label_38a964:
    // 0x38a964: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38a964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x38a968: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x38A968u;
    SET_GPR_U32(ctx, 31, 0x38A970u);
    ctx->pc = 0x38A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A968u;
    // 0x38a96c: 0x26c50090  addiu       $a1, $s6, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38A968u, 0x38A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A970u;
label_38a970:
    // 0x38a970: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x38a970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x38a974: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38a974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x38a978: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x38A978u;
    SET_GPR_U32(ctx, 31, 0x38A980u);
    ctx->pc = 0x38A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A978u;
    // 0x38a97c: 0x24a51730  addiu       $a1, $a1, 0x1730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38A978u, 0x38A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A980u;
label_38a980:
    // 0x38a980: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x38A980u;
    {
        const bool branch_taken_0x38a980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A980u;
        // 0x38a984: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a980) {
            ctx->pc = 0x38AAA0u;
            goto label_38aaa0;
        }
    }
    ctx->pc = 0x38A988u;
label_38a988:
    // 0x38a988: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x38A988u;
    {
        const bool branch_taken_0x38a988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a988) {
            ctx->pc = 0x38A98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A988u;
            // 0x38a98c: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A9B8u;
            goto label_38a9b8;
        }
    }
    ctx->pc = 0x38A990u;
    // 0x38a990: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x38a990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x38a994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A994u;
    {
        const bool branch_taken_0x38a994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A994u;
        // 0x38a998: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a994) {
            ctx->pc = 0x38A9B4u;
            goto label_38a9b4;
        }
    }
    ctx->pc = 0x38A99Cu;
    // 0x38a99c: 0x26460019  addiu       $a2, $s2, 0x19
    ctx->pc = 0x38a99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x38a9a0: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x38a9a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x38a9a4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x38a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38a9a8: 0x242300b  movn        $a2, $s2, $v0
    ctx->pc = 0x38a9a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    // 0x38a9ac: 0xc05c976  jal         func_1725D8
    ctx->pc = 0x38A9ACu;
    SET_GPR_U32(ctx, 31, 0x38A9B4u);
    ctx->pc = 0x38A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A9ACu;
    // 0x38a9b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1725D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725D8u, 0x38A9ACu, 0x38A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A9B4u;
label_38a9b4:
    // 0x38a9b4: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_38a9b8:
    // 0x38a9b8: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x38A9B8u;
    SET_GPR_U32(ctx, 31, 0x38A9C0u);
    ctx->pc = 0x38A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A9B8u;
    // 0x38a9bc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38A9B8u, 0x38A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A9C0u;
label_38a9c0:
    // 0x38a9c0: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38A9C0u;
    {
        const bool branch_taken_0x38a9c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x38A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9C0u;
        // 0x38a9c4: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9c0) {
            ctx->pc = 0x38A9CCu;
            goto label_38a9cc;
        }
    }
    ctx->pc = 0x38A9C8u;
    // 0x38a9c8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x38a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_38a9cc:
    // 0x38a9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a9d0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38A9D0u;
    {
        const bool branch_taken_0x38a9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x38a9d0) {
            ctx->pc = 0x38A9FCu;
            goto label_38a9fc;
        }
    }
    ctx->pc = 0x38A9D8u;
    // 0x38a9d8: 0x6010019  bgez        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38A9D8u;
    {
        const bool branch_taken_0x38a9d8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x38A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9D8u;
        // 0x38a9dc: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9d8) {
            ctx->pc = 0x38AA40u;
            goto label_38aa40;
        }
    }
    ctx->pc = 0x38A9E0u;
    // 0x38a9e0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x38a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38a9e4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x38a9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38a9e8: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x38a9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38a9ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38a9ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x38a9f0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x38a9f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x38a9f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x38A9F4u;
    {
        const bool branch_taken_0x38a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9F4u;
        // 0x38a9f8: 0xc7a3001c  lwc1        $f3, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9f4) {
            ctx->pc = 0x38AA1Cu;
            goto label_38aa1c;
        }
    }
    ctx->pc = 0x38A9FCu;
label_38a9fc:
    // 0x38a9fc: 0x6010010  bgez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38A9FCu;
    {
        const bool branch_taken_0x38a9fc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x38AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9FCu;
        // 0x38aa00: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9fc) {
            ctx->pc = 0x38AA40u;
            goto label_38aa40;
        }
    }
    ctx->pc = 0x38AA04u;
    // 0x38aa04: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x38aa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38aa08: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x38aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38aa0c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x38aa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38aa10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38aa10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x38aa14: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x38aa14u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x38aa18: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x38aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_38aa1c:
    // 0x38aa1c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x38aa1cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x38aa20: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x38aa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x38aa24: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x38aa24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x38aa28: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x38aa28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x38aa2c: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x38aa2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x38aa30: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x38aa30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38aa34: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x38aa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x38aa38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38AA38u;
    {
        const bool branch_taken_0x38aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA38u;
        // 0x38aa3c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa38) {
            ctx->pc = 0x38AA44u;
            goto label_38aa44;
        }
    }
    ctx->pc = 0x38AA40u;
label_38aa40:
    // 0x38aa40: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x38aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_38aa44:
    // 0x38aa44: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x38aa48: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x38AA48u;
    SET_GPR_U32(ctx, 31, 0x38AA50u);
    ctx->pc = 0x38AA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA48u;
    // 0x38aa4c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38AA48u, 0x38AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA50u;
label_38aa50:
    // 0x38aa50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x38AA50u;
    {
        const bool branch_taken_0x38aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA50u;
        // 0x38aa54: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa50) {
            ctx->pc = 0x38AAA0u;
            goto label_38aaa0;
        }
    }
    ctx->pc = 0x38AA58u;
label_38aa58:
    // 0x38aa58: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x38aa58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38aa5c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x38aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x38aa60: 0xc0cd940  jal         func_336500
    ctx->pc = 0x38AA60u;
    SET_GPR_U32(ctx, 31, 0x38AA68u);
    ctx->pc = 0x38AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA60u;
    // 0x38aa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x38AA60u, 0x38AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA68u;
label_38aa68:
    // 0x38aa68: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x38aa68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x38aa6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38aa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38aa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x38aa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa78: 0xc0e1c74  jal         func_3871D0
    ctx->pc = 0x38AA78u;
    SET_GPR_U32(ctx, 31, 0x38AA80u);
    ctx->pc = 0x38AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA78u;
    // 0x38aa7c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3871D0u, 0x38AA78u, 0x38AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA80u;
label_38aa80:
    // 0x38aa80: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x38aa84: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x38AA84u;
    SET_GPR_U32(ctx, 31, 0x38AA8Cu);
    ctx->pc = 0x38AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA84u;
    // 0x38aa88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38AA84u, 0x38AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA8Cu;
label_38aa8c:
    // 0x38aa8c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x38aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x38aa90: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x38aa94: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x38AA94u;
    SET_GPR_U32(ctx, 31, 0x38AA9Cu);
    ctx->pc = 0x38AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA94u;
    // 0x38aa98: 0x24a51740  addiu       $a1, $a1, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x38AA94u, 0x38AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA9Cu;
label_38aa9c:
    // 0x38aa9c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x38aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_38aaa0:
    // 0x38aaa0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38aaa4:
    // 0x38aaa4: 0x8c4371b4  lw          $v1, 0x71B4($v0)
    ctx->pc = 0x38aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29108)));
    // 0x38aaa8: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x38aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x38aaac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x38AAACu;
    SET_GPR_U32(ctx, 31, 0x38AAB4u);
    ctx->pc = 0x38AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAACu;
    // 0x38aab0: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38AAACu, 0x38AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAB4u;
label_38aab4:
    // 0x38aab4: 0xc0e6ee8  jal         func_39BBA0
    ctx->pc = 0x38AAB4u;
    SET_GPR_U32(ctx, 31, 0x38AABCu);
    ctx->pc = 0x38AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAB4u;
    // 0x38aab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x38AAB4u, 0x38AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AABCu;
label_38aabc:
    // 0x38aabc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38aabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aac0: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x38AAC0u;
    {
        const bool branch_taken_0x38aac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38aac0) {
            ctx->pc = 0x38AAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AAC0u;
            // 0x38aac4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AAF0u;
            goto label_38aaf0;
        }
    }
    ctx->pc = 0x38AAC8u;
    // 0x38aac8: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x38aacc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x38AACCu;
    SET_GPR_U32(ctx, 31, 0x38AAD4u);
    ctx->pc = 0x38AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AACCu;
    // 0x38aad0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x38AACCu, 0x38AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAD4u;
label_38aad4:
    // 0x38aad4: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x38aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x38aad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38aad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aadc: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x38AADCu;
    SET_GPR_U32(ctx, 31, 0x38AAE4u);
    ctx->pc = 0x38AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AADCu;
    // 0x38aae0: 0x2406003f  addiu       $a2, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x38AADCu, 0x38AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAE4u;
label_38aae4:
    // 0x38aae4: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x38AAE4u;
    SET_GPR_U32(ctx, 31, 0x38AAECu);
    ctx->pc = 0x38AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAE4u;
    // 0x38aae8: 0x8e642c7c  lw          $a0, 0x2C7C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x38AAE4u, 0x38AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAECu;
label_38aaec:
    // 0x38aaec: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x38aaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_38aaf0:
    // 0x38aaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38aaf4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x38aaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x38aaf8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x38aaf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x38aafc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x38aafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x38ab00: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x38ab00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38ab04: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x38ab04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38ab08: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x38ab08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38ab0c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38ab0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38ab10: 0x3e00008  jr          $ra
    ctx->pc = 0x38AB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB10u;
        // 0x38ab14: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AB18u;
}

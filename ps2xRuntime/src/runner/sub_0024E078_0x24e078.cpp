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

// Function: sub_0024E078
// Address: 0x24e078 - 0x24e1f8
void sub_0024E078_0x24e078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E078_0x24e078");
#endif

    switch (ctx->pc) {
        case 0x24e0c0u: goto label_24e0c0;
        case 0x24e0dcu: goto label_24e0dc;
        case 0x24e118u: goto label_24e118;
        case 0x24e138u: goto label_24e138;
        case 0x24e150u: goto label_24e150;
        case 0x24e174u: goto label_24e174;
        case 0x24e198u: goto label_24e198;
        case 0x24e1b4u: goto label_24e1b4;
        case 0x24e1c8u: goto label_24e1c8;
        default: break;
    }

    ctx->pc = 0x24e078u;

    // 0x24e078: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24e078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24e07c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x24e07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x24e080: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x24e080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x24e084: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24e084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e088: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x24e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x24e08c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x24e08cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e090: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x24e094: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24e094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e098: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x24e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x24e09c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24e09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0a0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x24e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x24e0a4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x24e0a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0a8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x24e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x24e0ac: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x24e0acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0b0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E0B0u;
    {
        const bool branch_taken_0x24e0b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0B0u;
        // 0x24e0b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0b0) {
            ctx->pc = 0x24E0CCu;
            goto label_24e0cc;
        }
    }
    ctx->pc = 0x24E0B8u;
    // 0x24e0b8: 0xc0941c2  jal         func_250708
    ctx->pc = 0x24E0B8u;
    SET_GPR_U32(ctx, 31, 0x24E0C0u);
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24E0B8u, 0x24E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0C0u;
label_24e0c0:
    // 0x24e0c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0c4: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x24E0C4u;
    {
        const bool branch_taken_0x24e0c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0C4u;
        // 0x24e0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0c4) {
            ctx->pc = 0x24E1CCu;
            goto label_24e1cc;
        }
    }
    ctx->pc = 0x24E0CCu;
label_24e0cc:
    // 0x24e0cc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E0CCu;
    {
        const bool branch_taken_0x24e0cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e0cc) {
            ctx->pc = 0x24E0E8u;
            goto label_24e0e8;
        }
    }
    ctx->pc = 0x24E0D4u;
    // 0x24e0d4: 0xc0941c2  jal         func_250708
    ctx->pc = 0x24E0D4u;
    SET_GPR_U32(ctx, 31, 0x24E0DCu);
    ctx->pc = 0x24E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0D4u;
    // 0x24e0d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x24E0D4u, 0x24E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0DCu;
label_24e0dc:
    // 0x24e0dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e0e0: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x24E0E0u;
    {
        const bool branch_taken_0x24e0e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0E0u;
        // 0x24e0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0e0) {
            ctx->pc = 0x24E1CCu;
            goto label_24e1cc;
        }
    }
    ctx->pc = 0x24E0E8u;
label_24e0e8:
    // 0x24e0e8: 0x52300007  beql        $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24E0E8u;
    {
        const bool branch_taken_0x24e0e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x24e0e8) {
            ctx->pc = 0x24E0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E0E8u;
            // 0x24e0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E108u;
            goto label_24e108;
        }
    }
    ctx->pc = 0x24E0F0u;
    // 0x24e0f0: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x24e0f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x24e0f4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24E0F4u;
    {
        const bool branch_taken_0x24e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0F4u;
        // 0x24e0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0f4) {
            ctx->pc = 0x24E1CCu;
            goto label_24e1cc;
        }
    }
    ctx->pc = 0x24E0FCu;
    // 0x24e0fc: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x24e0fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x24e100: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x24E100u;
    {
        const bool branch_taken_0x24e100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E100u;
        // 0x24e104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e100) {
            ctx->pc = 0x24E180u;
            goto label_24e180;
        }
    }
    ctx->pc = 0x24E108u;
label_24e108:
    // 0x24e108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24e108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e10c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24e10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e110: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x24E110u;
    SET_GPR_U32(ctx, 31, 0x24E118u);
    ctx->pc = 0x24E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E110u;
    // 0x24e114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x24E110u, 0x24E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E118u;
label_24e118:
    // 0x24e118: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e11c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E11Cu;
    {
        const bool branch_taken_0x24e11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E11Cu;
        // 0x24e120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e11c) {
            ctx->pc = 0x24E12Cu;
            goto label_24e12c;
        }
    }
    ctx->pc = 0x24E124u;
    // 0x24e124: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x24E124u;
    {
        const bool branch_taken_0x24e124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E124u;
        // 0x24e128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e124) {
            ctx->pc = 0x24E1CCu;
            goto label_24e1cc;
        }
    }
    ctx->pc = 0x24E12Cu;
label_24e12c:
    // 0x24e12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24e12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e130: 0xc094454  jal         func_251150
    ctx->pc = 0x24E130u;
    SET_GPR_U32(ctx, 31, 0x24E138u);
    ctx->pc = 0x24E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E130u;
    // 0x24e134: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x24E130u, 0x24E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E138u;
label_24e138:
    // 0x24e138: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24e138u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e13c: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x24E13Cu;
    {
        const bool branch_taken_0x24e13c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E13Cu;
        // 0x24e140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e13c) {
            ctx->pc = 0x24E180u;
            goto label_24e180;
        }
    }
    ctx->pc = 0x24E144u;
    // 0x24e144: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e148: 0xc094454  jal         func_251150
    ctx->pc = 0x24E148u;
    SET_GPR_U32(ctx, 31, 0x24E150u);
    ctx->pc = 0x24E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E148u;
    // 0x24e14c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x24E148u, 0x24E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E150u;
label_24e150:
    // 0x24e150: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24E150u;
    {
        const bool branch_taken_0x24e150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E150u;
        // 0x24e154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e150) {
            ctx->pc = 0x24E180u;
            goto label_24e180;
        }
    }
    ctx->pc = 0x24E158u;
    // 0x24e158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e15c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24e15cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e160: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x24e160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e164: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x24e164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e168: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x24e168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e16c: 0xc094472  jal         func_2511C8
    ctx->pc = 0x24E16Cu;
    SET_GPR_U32(ctx, 31, 0x24E174u);
    ctx->pc = 0x24E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E16Cu;
    // 0x24e170: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2511C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2511C8u, 0x24E16Cu, 0x24E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E174u;
label_24e174:
    // 0x24e174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24e174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e178: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E178u;
    {
        const bool branch_taken_0x24e178 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E178u;
        // 0x24e17c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e178) {
            ctx->pc = 0x24E188u;
            goto label_24e188;
        }
    }
    ctx->pc = 0x24E180u;
label_24e180:
    // 0x24e180: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24E180u;
    {
        const bool branch_taken_0x24e180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E180u;
        // 0x24e184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e180) {
            ctx->pc = 0x24E1CCu;
            goto label_24e1cc;
        }
    }
    ctx->pc = 0x24E188u;
label_24e188:
    // 0x24e188: 0x16d2000d  bne         $s6, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x24E188u;
    {
        const bool branch_taken_0x24e188 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 18));
        ctx->pc = 0x24E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E188u;
        // 0x24e18c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e188) {
            ctx->pc = 0x24E1C0u;
            goto label_24e1c0;
        }
    }
    ctx->pc = 0x24E190u;
    // 0x24e190: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24e190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e194: 0x0  nop
    ctx->pc = 0x24e194u;
    // NOP
label_24e198:
    // 0x24e198: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24e198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24e19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24e1a0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24e1a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24e1a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E1A4u;
    {
        const bool branch_taken_0x24e1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1A4u;
        // 0x24e1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1a4) {
            ctx->pc = 0x24E1C0u;
            goto label_24e1c0;
        }
    }
    ctx->pc = 0x24E1ACu;
    // 0x24e1ac: 0xc0945c6  jal         func_251718
    ctx->pc = 0x24E1ACu;
    SET_GPR_U32(ctx, 31, 0x24E1B4u);
    ctx->pc = 0x24E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1ACu;
    // 0x24e1b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251718u, 0x24E1ACu, 0x24E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1B4u;
label_24e1b4:
    // 0x24e1b4: 0x1453fff8  bne         $v0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24E1B4u;
    {
        const bool branch_taken_0x24e1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x24E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1B4u;
        // 0x24e1b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1b4) {
            ctx->pc = 0x24E198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e198;
        }
    }
    ctx->pc = 0x24E1BCu;
    // 0x24e1bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24e1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e1c0:
    // 0x24e1c0: 0xc0945a0  jal         func_251680
    ctx->pc = 0x24E1C0u;
    SET_GPR_U32(ctx, 31, 0x24E1C8u);
    ctx->pc = 0x24E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1C0u;
    // 0x24e1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251680u, 0x24E1C0u, 0x24E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1C8u;
label_24e1c8:
    // 0x24e1c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x24e1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24e1cc:
    // 0x24e1cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x24e1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24e1d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x24e1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e1d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x24e1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e1d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x24e1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24e1dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x24e1dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24e1e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x24e1e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24e1e4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x24e1e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24e1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24e1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24e1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x24E1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1ECu;
        // 0x24e1f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E1F4u;
    // 0x24e1f4: 0x0  nop
    ctx->pc = 0x24e1f4u;
    // NOP
    ctx->pc = 0x24e1f8u;
}

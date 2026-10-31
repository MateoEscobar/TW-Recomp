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

// Function: sub_003848C8
// Address: 0x3848c8 - 0x384968
void sub_003848C8_0x3848c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003848C8_0x3848c8");
#endif

    switch (ctx->pc) {
        case 0x3848c8u: goto label_3848c8;
        case 0x3848ccu: goto label_3848cc;
        case 0x3848d0u: goto label_3848d0;
        case 0x3848d4u: goto label_3848d4;
        case 0x3848d8u: goto label_3848d8;
        case 0x3848dcu: goto label_3848dc;
        case 0x3848e0u: goto label_3848e0;
        case 0x3848e4u: goto label_3848e4;
        case 0x3848e8u: goto label_3848e8;
        case 0x3848ecu: goto label_3848ec;
        case 0x3848f0u: goto label_3848f0;
        case 0x3848f4u: goto label_3848f4;
        case 0x3848f8u: goto label_3848f8;
        case 0x3848fcu: goto label_3848fc;
        case 0x384900u: goto label_384900;
        case 0x384904u: goto label_384904;
        case 0x384908u: goto label_384908;
        case 0x38490cu: goto label_38490c;
        case 0x384910u: goto label_384910;
        case 0x384914u: goto label_384914;
        case 0x384918u: goto label_384918;
        case 0x38491cu: goto label_38491c;
        case 0x384920u: goto label_384920;
        case 0x384924u: goto label_384924;
        case 0x384928u: goto label_384928;
        case 0x38492cu: goto label_38492c;
        case 0x384930u: goto label_384930;
        case 0x384934u: goto label_384934;
        case 0x384938u: goto label_384938;
        case 0x38493cu: goto label_38493c;
        case 0x384940u: goto label_384940;
        case 0x384944u: goto label_384944;
        case 0x384948u: goto label_384948;
        case 0x38494cu: goto label_38494c;
        case 0x384950u: goto label_384950;
        case 0x384954u: goto label_384954;
        case 0x384958u: goto label_384958;
        case 0x38495cu: goto label_38495c;
        case 0x384960u: goto label_384960;
        case 0x384964u: goto label_384964;
        default: break;
    }

    ctx->pc = 0x3848c8u;

label_3848c8:
    // 0x3848c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3848c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3848cc:
    // 0x3848cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3848ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3848d0:
    // 0x3848d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3848d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3848d4:
    // 0x3848d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3848d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3848d8:
    // 0x3848d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3848d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3848dc:
    // 0x3848dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3848dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3848e0:
    // 0x3848e0: 0x8c462b24  lw          $a2, 0x2B24($v0)
    ctx->pc = 0x3848e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11044)));
label_3848e4:
    // 0x3848e4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x3848e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3848e8:
    // 0x3848e8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3848e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3848ec:
    // 0x3848ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3848ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3848f0:
    // 0x3848f0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_3848f4:
    if (ctx->pc == 0x3848F4u) {
        ctx->pc = 0x3848F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848F0u;
        // 0x3848f4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3848F8u;
        goto label_3848f8;
    }
    ctx->pc = 0x3848F0u;
    {
        const bool branch_taken_0x3848f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3848F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848F0u;
        // 0x3848f4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3848f0) {
            ctx->pc = 0x384924u;
            goto label_384924;
        }
    }
    ctx->pc = 0x3848F8u;
label_3848f8:
    // 0x3848f8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3848f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3848fc:
    // 0x3848fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3848fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_384900:
    // 0x384900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x384900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_384904:
    // 0x384904: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x384904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_384908:
    // 0x384908: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_38490c:
    if (ctx->pc == 0x38490Cu) {
        ctx->pc = 0x38490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384908u;
        // 0x38490c: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384910u;
        goto label_384910;
    }
    ctx->pc = 0x384908u;
    {
        const bool branch_taken_0x384908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384908u;
        // 0x38490c: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384908) {
            ctx->pc = 0x38491Cu;
            goto label_38491c;
        }
    }
    ctx->pc = 0x384910u;
label_384910:
    // 0x384910: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x384910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_384914:
    // 0x384914: 0x24424b98  addiu       $v0, $v0, 0x4B98
    ctx->pc = 0x384914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19352));
label_384918:
    // 0x384918: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x384918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_38491c:
    // 0x38491c: 0x10000002  b           . + 4 + (0x2 << 2)
label_384920:
    if (ctx->pc == 0x384920u) {
        ctx->pc = 0x384920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38491Cu;
        // 0x384920: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384924u;
        goto label_384924;
    }
    ctx->pc = 0x38491Cu;
    {
        const bool branch_taken_0x38491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38491Cu;
        // 0x384920: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38491c) {
            ctx->pc = 0x384928u;
            goto label_384928;
        }
    }
    ctx->pc = 0x384924u;
label_384924:
    // 0x384924: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384928:
    // 0x384928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x384928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38492c:
    // 0x38492c: 0xc0e1284  jal         func_384A10
label_384930:
    if (ctx->pc == 0x384930u) {
        ctx->pc = 0x384930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38492Cu;
        // 0x384930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384934u;
        goto label_384934;
    }
    ctx->pc = 0x38492Cu;
    SET_GPR_U32(ctx, 31, 0x384934u);
    ctx->pc = 0x384930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38492Cu;
    // 0x384930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A10u, 0x38492Cu, 0x384934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384934u;
label_384934:
    // 0x384934: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x384934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_384938:
    // 0x384938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38493c:
    // 0x38493c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x38493cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_384940:
    // 0x384940: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x384940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_384944:
    // 0x384944: 0x60f809  jalr        $v1
label_384948:
    if (ctx->pc == 0x384948u) {
        ctx->pc = 0x384948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384944u;
        // 0x384948: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38494Cu;
        goto label_38494c;
    }
    ctx->pc = 0x384944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38494Cu);
        ctx->pc = 0x384948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384944u;
        // 0x384948: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384944u, 0x38494Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38494Cu;
label_38494c:
    // 0x38494c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38494cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384950:
    // 0x384950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x384950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384954:
    // 0x384954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x384954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384958:
    // 0x384958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38495c:
    // 0x38495c: 0x3e00008  jr          $ra
label_384960:
    if (ctx->pc == 0x384960u) {
        ctx->pc = 0x384960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38495Cu;
        // 0x384960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384964u;
        goto label_384964;
    }
    ctx->pc = 0x38495Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38495Cu;
        // 0x384960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38495Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384964u;
label_384964:
    // 0x384964: 0x0  nop
    ctx->pc = 0x384964u;
    // NOP
    ctx->pc = 0x384968u;
}

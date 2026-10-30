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

// Function: sub_0033A8A8
// Address: 0x33a8a8 - 0x33a948
void sub_0033A8A8_0x33a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A8A8_0x33a8a8");
#endif

    switch (ctx->pc) {
        case 0x33a8a8u: goto label_33a8a8;
        case 0x33a8acu: goto label_33a8ac;
        case 0x33a8b0u: goto label_33a8b0;
        case 0x33a8b4u: goto label_33a8b4;
        case 0x33a8b8u: goto label_33a8b8;
        case 0x33a8bcu: goto label_33a8bc;
        case 0x33a8c0u: goto label_33a8c0;
        case 0x33a8c4u: goto label_33a8c4;
        case 0x33a8c8u: goto label_33a8c8;
        case 0x33a8ccu: goto label_33a8cc;
        case 0x33a8d0u: goto label_33a8d0;
        case 0x33a8d4u: goto label_33a8d4;
        case 0x33a8d8u: goto label_33a8d8;
        case 0x33a8dcu: goto label_33a8dc;
        case 0x33a8e0u: goto label_33a8e0;
        case 0x33a8e4u: goto label_33a8e4;
        case 0x33a8e8u: goto label_33a8e8;
        case 0x33a8ecu: goto label_33a8ec;
        case 0x33a8f0u: goto label_33a8f0;
        case 0x33a8f4u: goto label_33a8f4;
        case 0x33a8f8u: goto label_33a8f8;
        case 0x33a8fcu: goto label_33a8fc;
        case 0x33a900u: goto label_33a900;
        case 0x33a904u: goto label_33a904;
        case 0x33a908u: goto label_33a908;
        case 0x33a90cu: goto label_33a90c;
        case 0x33a910u: goto label_33a910;
        case 0x33a914u: goto label_33a914;
        case 0x33a918u: goto label_33a918;
        case 0x33a91cu: goto label_33a91c;
        case 0x33a920u: goto label_33a920;
        case 0x33a924u: goto label_33a924;
        case 0x33a928u: goto label_33a928;
        case 0x33a92cu: goto label_33a92c;
        case 0x33a930u: goto label_33a930;
        case 0x33a934u: goto label_33a934;
        case 0x33a938u: goto label_33a938;
        case 0x33a93cu: goto label_33a93c;
        case 0x33a940u: goto label_33a940;
        case 0x33a944u: goto label_33a944;
        default: break;
    }

    ctx->pc = 0x33a8a8u;

label_33a8a8:
    // 0x33a8a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33a8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_33a8ac:
    // 0x33a8ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x33a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_33a8b0:
    // 0x33a8b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x33a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_33a8b4:
    // 0x33a8b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33a8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33a8b8:
    // 0x33a8b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_33a8bc:
    // 0x33a8bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33a8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33a8c0:
    // 0x33a8c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x33a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_33a8c4:
    // 0x33a8c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33a8c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33a8c8:
    // 0x33a8c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33a8cc:
    // 0x33a8cc: 0xc0ce814  jal         func_33A050
label_33a8d0:
    if (ctx->pc == 0x33A8D0u) {
        ctx->pc = 0x33A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8CCu;
        // 0x33a8d0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8D4u;
        goto label_33a8d4;
    }
    ctx->pc = 0x33A8CCu;
    SET_GPR_U32(ctx, 31, 0x33A8D4u);
    ctx->pc = 0x33A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A8CCu;
    // 0x33a8d0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A050u, 0x33A8CCu, 0x33A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A8D4u;
label_33a8d4:
    // 0x33a8d4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_33a8d8:
    if (ctx->pc == 0x33A8D8u) {
        ctx->pc = 0x33A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8D4u;
        // 0x33a8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8DCu;
        goto label_33a8dc;
    }
    ctx->pc = 0x33A8D4u;
    {
        const bool branch_taken_0x33a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a8d4) {
            ctx->pc = 0x33A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A8D4u;
            // 0x33a8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A918u;
            goto label_33a918;
        }
    }
    ctx->pc = 0x33A8DCu;
label_33a8dc:
    // 0x33a8dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33a8e0:
    // 0x33a8e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33a8e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33a8e4:
    // 0x33a8e4: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x33a8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_33a8e8:
    // 0x33a8e8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x33a8e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_33a8ec:
    // 0x33a8ec: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x33a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_33a8f0:
    // 0x33a8f0: 0x40f809  jalr        $v0
label_33a8f4:
    if (ctx->pc == 0x33A8F4u) {
        ctx->pc = 0x33A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8F0u;
        // 0x33a8f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A8F8u;
        goto label_33a8f8;
    }
    ctx->pc = 0x33A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33A8F8u);
        ctx->pc = 0x33A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8F0u;
        // 0x33a8f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A8F0u, 0x33A8F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A8F8u;
label_33a8f8:
    // 0x33a8f8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x33a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_33a8fc:
    // 0x33a8fc: 0x8c6527e4  lw          $a1, 0x27E4($v1)
    ctx->pc = 0x33a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_33a900:
    // 0x33a900: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33a900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_33a904:
    // 0x33a904: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x33a904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_33a908:
    // 0x33a908: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x33a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_33a90c:
    // 0x33a90c: 0x60f809  jalr        $v1
label_33a910:
    if (ctx->pc == 0x33A910u) {
        ctx->pc = 0x33A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A90Cu;
        // 0x33a910: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A914u;
        goto label_33a914;
    }
    ctx->pc = 0x33A90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33A914u);
        ctx->pc = 0x33A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A90Cu;
        // 0x33a910: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A90Cu, 0x33A914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33A914u;
label_33a914:
    // 0x33a914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33a918:
    // 0x33a918: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33a918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33a91c:
    // 0x33a91c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33a91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33a920:
    // 0x33a920: 0xc0ce1ce  jal         func_338738
label_33a924:
    if (ctx->pc == 0x33A924u) {
        ctx->pc = 0x33A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A920u;
        // 0x33a924: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A928u;
        goto label_33a928;
    }
    ctx->pc = 0x33A920u;
    SET_GPR_U32(ctx, 31, 0x33A928u);
    ctx->pc = 0x33A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A920u;
    // 0x33a924: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338738u, 0x33A920u, 0x33A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A928u;
label_33a928:
    // 0x33a928: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x33a928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_33a92c:
    // 0x33a92c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x33a92cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_33a930:
    // 0x33a930: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33a930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_33a934:
    // 0x33a934: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x33a934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_33a938:
    // 0x33a938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33a938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33a93c:
    // 0x33a93c: 0x3e00008  jr          $ra
label_33a940:
    if (ctx->pc == 0x33A940u) {
        ctx->pc = 0x33A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A93Cu;
        // 0x33a940: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33A944u;
        goto label_33a944;
    }
    ctx->pc = 0x33A93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A93Cu;
        // 0x33a940: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A944u;
label_33a944:
    // 0x33a944: 0x0  nop
    ctx->pc = 0x33a944u;
    // NOP
    ctx->pc = 0x33a948u;
}

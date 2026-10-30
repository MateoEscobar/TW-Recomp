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

// Function: sub_003860B8
// Address: 0x3860b8 - 0x386168
void sub_003860B8_0x3860b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003860B8_0x3860b8");
#endif

    switch (ctx->pc) {
        case 0x3860b8u: goto label_3860b8;
        case 0x3860bcu: goto label_3860bc;
        case 0x3860c0u: goto label_3860c0;
        case 0x3860c4u: goto label_3860c4;
        case 0x3860c8u: goto label_3860c8;
        case 0x3860ccu: goto label_3860cc;
        case 0x3860d0u: goto label_3860d0;
        case 0x3860d4u: goto label_3860d4;
        case 0x3860d8u: goto label_3860d8;
        case 0x3860dcu: goto label_3860dc;
        case 0x3860e0u: goto label_3860e0;
        case 0x3860e4u: goto label_3860e4;
        case 0x3860e8u: goto label_3860e8;
        case 0x3860ecu: goto label_3860ec;
        case 0x3860f0u: goto label_3860f0;
        case 0x3860f4u: goto label_3860f4;
        case 0x3860f8u: goto label_3860f8;
        case 0x3860fcu: goto label_3860fc;
        case 0x386100u: goto label_386100;
        case 0x386104u: goto label_386104;
        case 0x386108u: goto label_386108;
        case 0x38610cu: goto label_38610c;
        case 0x386110u: goto label_386110;
        case 0x386114u: goto label_386114;
        case 0x386118u: goto label_386118;
        case 0x38611cu: goto label_38611c;
        case 0x386120u: goto label_386120;
        case 0x386124u: goto label_386124;
        case 0x386128u: goto label_386128;
        case 0x38612cu: goto label_38612c;
        case 0x386130u: goto label_386130;
        case 0x386134u: goto label_386134;
        case 0x386138u: goto label_386138;
        case 0x38613cu: goto label_38613c;
        case 0x386140u: goto label_386140;
        case 0x386144u: goto label_386144;
        case 0x386148u: goto label_386148;
        case 0x38614cu: goto label_38614c;
        case 0x386150u: goto label_386150;
        case 0x386154u: goto label_386154;
        case 0x386158u: goto label_386158;
        case 0x38615cu: goto label_38615c;
        case 0x386160u: goto label_386160;
        case 0x386164u: goto label_386164;
        default: break;
    }

    ctx->pc = 0x3860b8u;

label_3860b8:
    // 0x3860b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3860b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3860bc:
    // 0x3860bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3860bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3860c0:
    // 0x3860c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3860c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3860c4:
    // 0x3860c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3860c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3860c8:
    // 0x3860c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3860c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3860cc:
    // 0x3860cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3860ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3860d0:
    // 0x3860d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3860d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3860d4:
    // 0x3860d4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3860d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3860d8:
    // 0x3860d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3860d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3860dc:
    // 0x3860dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3860dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3860e0:
    // 0x3860e0: 0xc0e4060  jal         func_390180
label_3860e4:
    if (ctx->pc == 0x3860E4u) {
        ctx->pc = 0x3860E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860E0u;
        // 0x3860e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860E8u;
        goto label_3860e8;
    }
    ctx->pc = 0x3860E0u;
    SET_GPR_U32(ctx, 31, 0x3860E8u);
    ctx->pc = 0x3860E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3860E0u;
    // 0x3860e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3860E0u, 0x3860E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3860E8u;
label_3860e8:
    // 0x3860e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3860e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3860ec:
    // 0x3860ec: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_3860f0:
    if (ctx->pc == 0x3860F0u) {
        ctx->pc = 0x3860F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3860ECu;
        // 0x3860f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3860F4u;
        goto label_3860f4;
    }
    ctx->pc = 0x3860ECu;
    {
        const bool branch_taken_0x3860ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3860ec) {
            ctx->pc = 0x3860F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3860ECu;
            // 0x3860f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38614Cu;
            goto label_38614c;
        }
    }
    ctx->pc = 0x3860F4u;
label_3860f4:
    // 0x3860f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3860f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3860f8:
    // 0x3860f8: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x3860f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_3860fc:
    // 0x3860fc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3860fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_386100:
    // 0x386100: 0x40f809  jalr        $v0
label_386104:
    if (ctx->pc == 0x386104u) {
        ctx->pc = 0x386104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386100u;
        // 0x386104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386108u;
        goto label_386108;
    }
    ctx->pc = 0x386100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x386108u);
        ctx->pc = 0x386104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386100u;
        // 0x386104: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386100u, 0x386108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386108u;
label_386108:
    // 0x386108: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x386108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38610c:
    // 0x38610c: 0x55000007  bnel        $t0, $zero, . + 4 + (0x7 << 2)
label_386110:
    if (ctx->pc == 0x386110u) {
        ctx->pc = 0x386110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38610Cu;
        // 0x386110: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386114u;
        goto label_386114;
    }
    ctx->pc = 0x38610Cu;
    {
        const bool branch_taken_0x38610c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x38610c) {
            ctx->pc = 0x386110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38610Cu;
            // 0x386110: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38612Cu;
            goto label_38612c;
        }
    }
    ctx->pc = 0x386114u;
label_386114:
    // 0x386114: 0xc0e1232  jal         func_3848C8
label_386118:
    if (ctx->pc == 0x386118u) {
        ctx->pc = 0x386118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386114u;
        // 0x386118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38611Cu;
        goto label_38611c;
    }
    ctx->pc = 0x386114u;
    SET_GPR_U32(ctx, 31, 0x38611Cu);
    ctx->pc = 0x386118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386114u;
    // 0x386118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3848C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3848C8u, 0x386114u, 0x38611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38611Cu;
label_38611c:
    // 0x38611c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38611cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386120:
    // 0x386120: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_386124:
    if (ctx->pc == 0x386124u) {
        ctx->pc = 0x386124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386120u;
        // 0x386124: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386128u;
        goto label_386128;
    }
    ctx->pc = 0x386120u;
    {
        const bool branch_taken_0x386120 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x386124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386120u;
        // 0x386124: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386120) {
            ctx->pc = 0x38614Cu;
            goto label_38614c;
        }
    }
    ctx->pc = 0x386128u;
label_386128:
    // 0x386128: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x386128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_38612c:
    // 0x38612c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38612cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386130:
    // 0x386130: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x386130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_386134:
    // 0x386134: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x386134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_386138:
    // 0x386138: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x386138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_38613c:
    // 0x38613c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x38613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_386140:
    // 0x386140: 0x60f809  jalr        $v1
label_386144:
    if (ctx->pc == 0x386144u) {
        ctx->pc = 0x386144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386140u;
        // 0x386144: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386148u;
        goto label_386148;
    }
    ctx->pc = 0x386140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386148u);
        ctx->pc = 0x386144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386140u;
        // 0x386144: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386140u, 0x386148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386148u;
label_386148:
    // 0x386148: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x386148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38614c:
    // 0x38614c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x38614cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_386150:
    // 0x386150: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x386150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_386154:
    // 0x386154: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x386154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_386158:
    // 0x386158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x386158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38615c:
    // 0x38615c: 0x3e00008  jr          $ra
label_386160:
    if (ctx->pc == 0x386160u) {
        ctx->pc = 0x386160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38615Cu;
        // 0x386160: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386164u;
        goto label_386164;
    }
    ctx->pc = 0x38615Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38615Cu;
        // 0x386160: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38615Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386164u;
label_386164:
    // 0x386164: 0x0  nop
    ctx->pc = 0x386164u;
    // NOP
    ctx->pc = 0x386168u;
}

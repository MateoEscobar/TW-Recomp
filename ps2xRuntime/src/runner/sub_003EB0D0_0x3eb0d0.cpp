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

// Function: sub_003EB0D0
// Address: 0x3eb0d0 - 0x3eb160
void sub_003EB0D0_0x3eb0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB0D0_0x3eb0d0");
#endif

    switch (ctx->pc) {
        case 0x3eb0d0u: goto label_3eb0d0;
        case 0x3eb0d4u: goto label_3eb0d4;
        case 0x3eb0d8u: goto label_3eb0d8;
        case 0x3eb0dcu: goto label_3eb0dc;
        case 0x3eb0e0u: goto label_3eb0e0;
        case 0x3eb0e4u: goto label_3eb0e4;
        case 0x3eb0e8u: goto label_3eb0e8;
        case 0x3eb0ecu: goto label_3eb0ec;
        case 0x3eb0f0u: goto label_3eb0f0;
        case 0x3eb0f4u: goto label_3eb0f4;
        case 0x3eb0f8u: goto label_3eb0f8;
        case 0x3eb0fcu: goto label_3eb0fc;
        case 0x3eb100u: goto label_3eb100;
        case 0x3eb104u: goto label_3eb104;
        case 0x3eb108u: goto label_3eb108;
        case 0x3eb10cu: goto label_3eb10c;
        case 0x3eb110u: goto label_3eb110;
        case 0x3eb114u: goto label_3eb114;
        case 0x3eb118u: goto label_3eb118;
        case 0x3eb11cu: goto label_3eb11c;
        case 0x3eb120u: goto label_3eb120;
        case 0x3eb124u: goto label_3eb124;
        case 0x3eb128u: goto label_3eb128;
        case 0x3eb12cu: goto label_3eb12c;
        case 0x3eb130u: goto label_3eb130;
        case 0x3eb134u: goto label_3eb134;
        case 0x3eb138u: goto label_3eb138;
        case 0x3eb13cu: goto label_3eb13c;
        case 0x3eb140u: goto label_3eb140;
        case 0x3eb144u: goto label_3eb144;
        case 0x3eb148u: goto label_3eb148;
        case 0x3eb14cu: goto label_3eb14c;
        case 0x3eb150u: goto label_3eb150;
        case 0x3eb154u: goto label_3eb154;
        case 0x3eb158u: goto label_3eb158;
        case 0x3eb15cu: goto label_3eb15c;
        default: break;
    }

    ctx->pc = 0x3eb0d0u;

label_3eb0d0:
    // 0x3eb0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3eb0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3eb0d4:
    // 0x3eb0d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3eb0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3eb0d8:
    // 0x3eb0d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3eb0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3eb0dc:
    // 0x3eb0dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3eb0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3eb0e0:
    // 0x3eb0e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb0e4:
    // 0x3eb0e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb0e8:
    // 0x3eb0e8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb0ec:
    // 0x3eb0ec: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb0f0:
    // 0x3eb0f0: 0x40f809  jalr        $v0
label_3eb0f4:
    if (ctx->pc == 0x3EB0F4u) {
        ctx->pc = 0x3EB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0F0u;
        // 0x3eb0f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB0F8u;
        goto label_3eb0f8;
    }
    ctx->pc = 0x3EB0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB0F8u);
        ctx->pc = 0x3EB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB0F0u;
        // 0x3eb0f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB0F0u, 0x3EB0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB0F8u;
label_3eb0f8:
    // 0x3eb0f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3eb0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb0fc:
    // 0x3eb0fc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3eb0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3eb100:
    // 0x3eb100: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3eb100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3eb104:
    // 0x3eb104: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3eb104u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3eb108:
    // 0x3eb108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3eb108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3eb10c:
    // 0x3eb10c: 0xc0e947e  jal         func_3A51F8
label_3eb110:
    if (ctx->pc == 0x3EB110u) {
        ctx->pc = 0x3EB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB10Cu;
        // 0x3eb110: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB114u;
        goto label_3eb114;
    }
    ctx->pc = 0x3EB10Cu;
    SET_GPR_U32(ctx, 31, 0x3EB114u);
    ctx->pc = 0x3EB110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB10Cu;
    // 0x3eb110: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3EB10Cu, 0x3EB114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB114u;
label_3eb114:
    // 0x3eb114: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3eb118:
    if (ctx->pc == 0x3EB118u) {
        ctx->pc = 0x3EB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB114u;
        // 0x3eb118: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB11Cu;
        goto label_3eb11c;
    }
    ctx->pc = 0x3EB114u;
    {
        const bool branch_taken_0x3eb114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB114u;
        // 0x3eb118: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb114) {
            ctx->pc = 0x3EB138u;
            goto label_3eb138;
        }
    }
    ctx->pc = 0x3EB11Cu;
label_3eb11c:
    // 0x3eb11c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3eb120:
    if (ctx->pc == 0x3EB120u) {
        ctx->pc = 0x3EB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB11Cu;
        // 0x3eb120: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB124u;
        goto label_3eb124;
    }
    ctx->pc = 0x3EB11Cu;
    {
        const bool branch_taken_0x3eb11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb11c) {
            ctx->pc = 0x3EB120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB11Cu;
            // 0x3eb120: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB14Cu;
            goto label_3eb14c;
        }
    }
    ctx->pc = 0x3EB124u;
label_3eb124:
    // 0x3eb124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3eb124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eb128:
    // 0x3eb128: 0xc0fab7a  jal         func_3EADE8
label_3eb12c:
    if (ctx->pc == 0x3EB12Cu) {
        ctx->pc = 0x3EB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB128u;
        // 0x3eb12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB130u;
        goto label_3eb130;
    }
    ctx->pc = 0x3EB128u;
    SET_GPR_U32(ctx, 31, 0x3EB130u);
    ctx->pc = 0x3EB12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB128u;
    // 0x3eb12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EADE8u, 0x3EB128u, 0x3EB130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB130u;
label_3eb130:
    // 0x3eb130: 0x10000006  b           . + 4 + (0x6 << 2)
label_3eb134:
    if (ctx->pc == 0x3EB134u) {
        ctx->pc = 0x3EB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB130u;
        // 0x3eb134: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB138u;
        goto label_3eb138;
    }
    ctx->pc = 0x3EB130u;
    {
        const bool branch_taken_0x3eb130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB130u;
        // 0x3eb134: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb130) {
            ctx->pc = 0x3EB14Cu;
            goto label_3eb14c;
        }
    }
    ctx->pc = 0x3EB138u;
label_3eb138:
    // 0x3eb138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3eb13c:
    if (ctx->pc == 0x3EB13Cu) {
        ctx->pc = 0x3EB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB138u;
        // 0x3eb13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB140u;
        goto label_3eb140;
    }
    ctx->pc = 0x3EB138u;
    {
        const bool branch_taken_0x3eb138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB138u;
        // 0x3eb13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb138) {
            ctx->pc = 0x3EB148u;
            goto label_3eb148;
        }
    }
    ctx->pc = 0x3EB140u;
label_3eb140:
    // 0x3eb140: 0xc0fabce  jal         func_3EAF38
label_3eb144:
    if (ctx->pc == 0x3EB144u) {
        ctx->pc = 0x3EB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB140u;
        // 0x3eb144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB148u;
        goto label_3eb148;
    }
    ctx->pc = 0x3EB140u;
    SET_GPR_U32(ctx, 31, 0x3EB148u);
    ctx->pc = 0x3EB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB140u;
    // 0x3eb144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EAF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EAF38u, 0x3EB140u, 0x3EB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB148u;
label_3eb148:
    // 0x3eb148: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3eb148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3eb14c:
    // 0x3eb14c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eb14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb150:
    // 0x3eb150: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3eb150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb154:
    // 0x3eb154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eb154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb158:
    // 0x3eb158: 0x3e00008  jr          $ra
label_3eb15c:
    if (ctx->pc == 0x3EB15Cu) {
        ctx->pc = 0x3EB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB158u;
        // 0x3eb15c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB160u;
        goto label_fallthrough_0x3eb158;
    }
    ctx->pc = 0x3EB158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB158u;
        // 0x3eb15c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb158:
    ctx->pc = 0x3EB160u;
}

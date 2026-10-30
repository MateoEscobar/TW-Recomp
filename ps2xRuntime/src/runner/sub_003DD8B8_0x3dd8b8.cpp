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

// Function: sub_003DD8B8
// Address: 0x3dd8b8 - 0x3dd938
void sub_003DD8B8_0x3dd8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD8B8_0x3dd8b8");
#endif

    switch (ctx->pc) {
        case 0x3dd8b8u: goto label_3dd8b8;
        case 0x3dd8bcu: goto label_3dd8bc;
        case 0x3dd8c0u: goto label_3dd8c0;
        case 0x3dd8c4u: goto label_3dd8c4;
        case 0x3dd8c8u: goto label_3dd8c8;
        case 0x3dd8ccu: goto label_3dd8cc;
        case 0x3dd8d0u: goto label_3dd8d0;
        case 0x3dd8d4u: goto label_3dd8d4;
        case 0x3dd8d8u: goto label_3dd8d8;
        case 0x3dd8dcu: goto label_3dd8dc;
        case 0x3dd8e0u: goto label_3dd8e0;
        case 0x3dd8e4u: goto label_3dd8e4;
        case 0x3dd8e8u: goto label_3dd8e8;
        case 0x3dd8ecu: goto label_3dd8ec;
        case 0x3dd8f0u: goto label_3dd8f0;
        case 0x3dd8f4u: goto label_3dd8f4;
        case 0x3dd8f8u: goto label_3dd8f8;
        case 0x3dd8fcu: goto label_3dd8fc;
        case 0x3dd900u: goto label_3dd900;
        case 0x3dd904u: goto label_3dd904;
        case 0x3dd908u: goto label_3dd908;
        case 0x3dd90cu: goto label_3dd90c;
        case 0x3dd910u: goto label_3dd910;
        case 0x3dd914u: goto label_3dd914;
        case 0x3dd918u: goto label_3dd918;
        case 0x3dd91cu: goto label_3dd91c;
        case 0x3dd920u: goto label_3dd920;
        case 0x3dd924u: goto label_3dd924;
        case 0x3dd928u: goto label_3dd928;
        case 0x3dd92cu: goto label_3dd92c;
        case 0x3dd930u: goto label_3dd930;
        case 0x3dd934u: goto label_3dd934;
        default: break;
    }

    ctx->pc = 0x3dd8b8u;

label_3dd8b8:
    // 0x3dd8b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dd8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3dd8bc:
    // 0x3dd8bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3dd8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3dd8c0:
    // 0x3dd8c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dd8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3dd8c4:
    // 0x3dd8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dd8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3dd8c8:
    // 0x3dd8c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dd8c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd8cc:
    // 0x3dd8cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3dd8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3dd8d0:
    // 0x3dd8d0: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3dd8d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd8d4:
    // 0x3dd8d4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd8d8:
    // 0x3dd8d8: 0x40f809  jalr        $v0
label_3dd8dc:
    if (ctx->pc == 0x3DD8DCu) {
        ctx->pc = 0x3DD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8D8u;
        // 0x3dd8dc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD8E0u;
        goto label_3dd8e0;
    }
    ctx->pc = 0x3DD8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD8E0u);
        ctx->pc = 0x3DD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8D8u;
        // 0x3dd8dc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD8D8u, 0x3DD8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD8E0u;
label_3dd8e0:
    // 0x3dd8e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dd8e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd8e4:
    // 0x3dd8e4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3dd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3dd8e8:
    // 0x3dd8e8: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_3dd8ec:
    if (ctx->pc == 0x3DD8ECu) {
        ctx->pc = 0x3DD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8E8u;
        // 0x3dd8ec: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD8F0u;
        goto label_3dd8f0;
    }
    ctx->pc = 0x3DD8E8u;
    {
        const bool branch_taken_0x3dd8e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8E8u;
        // 0x3dd8ec: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8e8) {
            ctx->pc = 0x3DD900u;
            goto label_3dd900;
        }
    }
    ctx->pc = 0x3DD8F0u;
label_3dd8f0:
    // 0x3dd8f0: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
label_3dd8f4:
    if (ctx->pc == 0x3DD8F4u) {
        ctx->pc = 0x3DD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8F0u;
        // 0x3dd8f4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD8F8u;
        goto label_3dd8f8;
    }
    ctx->pc = 0x3DD8F0u;
    {
        const bool branch_taken_0x3dd8f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dd8f0) {
            ctx->pc = 0x3DD8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD8F0u;
            // 0x3dd8f4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD914u;
            goto label_3dd914;
        }
    }
    ctx->pc = 0x3DD8F8u;
label_3dd8f8:
    // 0x3dd8f8: 0x1000000a  b           . + 4 + (0xA << 2)
label_3dd8fc:
    if (ctx->pc == 0x3DD8FCu) {
        ctx->pc = 0x3DD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8F8u;
        // 0x3dd8fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD900u;
        goto label_3dd900;
    }
    ctx->pc = 0x3DD8F8u;
    {
        const bool branch_taken_0x3dd8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8F8u;
        // 0x3dd8fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8f8) {
            ctx->pc = 0x3DD924u;
            goto label_3dd924;
        }
    }
    ctx->pc = 0x3DD900u;
label_3dd900:
    // 0x3dd900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dd900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd904:
    // 0x3dd904: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3dd904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3dd908:
    // 0x3dd908: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3dd908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3dd90c:
    // 0x3dd90c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3dd910:
    if (ctx->pc == 0x3DD910u) {
        ctx->pc = 0x3DD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD90Cu;
        // 0x3dd910: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD914u;
        goto label_3dd914;
    }
    ctx->pc = 0x3DD90Cu;
    {
        const bool branch_taken_0x3dd90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD90Cu;
        // 0x3dd910: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd90c) {
            ctx->pc = 0x3DD920u;
            goto label_3dd920;
        }
    }
    ctx->pc = 0x3DD914u;
label_3dd914:
    // 0x3dd914: 0xc045c76  jal         func_1171D8
label_3dd918:
    if (ctx->pc == 0x3DD918u) {
        ctx->pc = 0x3DD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD914u;
        // 0x3dd918: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD91Cu;
        goto label_3dd91c;
    }
    ctx->pc = 0x3DD914u;
    SET_GPR_U32(ctx, 31, 0x3DD91Cu);
    ctx->pc = 0x3DD918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD914u;
    // 0x3dd918: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171D8u, 0x3DD914u, 0x3DD91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD91Cu;
label_3dd91c:
    // 0x3dd91c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3dd91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3dd920:
    // 0x3dd920: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3dd920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd924:
    // 0x3dd924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dd924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd928:
    // 0x3dd928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dd928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd92c:
    // 0x3dd92c: 0x3e00008  jr          $ra
label_3dd930:
    if (ctx->pc == 0x3DD930u) {
        ctx->pc = 0x3DD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD92Cu;
        // 0x3dd930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD934u;
        goto label_3dd934;
    }
    ctx->pc = 0x3DD92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD92Cu;
        // 0x3dd930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD934u;
label_3dd934:
    // 0x3dd934: 0x0  nop
    ctx->pc = 0x3dd934u;
    // NOP
    ctx->pc = 0x3dd938u;
}

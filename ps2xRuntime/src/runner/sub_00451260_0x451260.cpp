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

// Function: sub_00451260
// Address: 0x451260 - 0x4512f0
void sub_00451260_0x451260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00451260_0x451260");
#endif

    switch (ctx->pc) {
        case 0x4512a8u: goto label_4512a8;
        case 0x4512bcu: goto label_4512bc;
        case 0x4512c4u: goto label_4512c4;
        default: break;
    }

    ctx->pc = 0x451260u;

    // 0x451260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x451260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x451264: 0x8f828418  lw          $v0, -0x7BE8($gp)
    ctx->pc = 0x451264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x451268: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x451268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x45126c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x45126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x451270: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x451270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x451274: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x451274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x451278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x451278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45127c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x451280: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x451280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x451284: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x451284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x451288: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x451288u;
    {
        const bool branch_taken_0x451288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451288u;
        // 0x45128c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451288) {
            ctx->pc = 0x4512DCu;
            goto label_4512dc;
        }
    }
    ctx->pc = 0x451290u;
    // 0x451290: 0x8c91009c  lw          $s1, 0x9C($a0)
    ctx->pc = 0x451290u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x451294: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x451294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x451298: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x451298u;
    {
        const bool branch_taken_0x451298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x451298u;
        // 0x45129c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x451298) {
            ctx->pc = 0x4512DCu;
            goto label_4512dc;
        }
    }
    ctx->pc = 0x4512A0u;
    // 0x4512a0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x4512a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4512a4: 0x0  nop
    ctx->pc = 0x4512a4u;
    // NOP
label_4512a8:
    // 0x4512a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4512ac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4512ACu;
    {
        const bool branch_taken_0x4512ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4512ac) {
            ctx->pc = 0x4512B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4512ACu;
            // 0x4512b0: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4512C8u;
            goto label_4512c8;
        }
    }
    ctx->pc = 0x4512B4u;
    // 0x4512b4: 0xc123142  jal         func_48C508
    ctx->pc = 0x4512B4u;
    SET_GPR_U32(ctx, 31, 0x4512BCu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4512B4u, 0x4512BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4512BCu;
label_4512bc:
    // 0x4512bc: 0xc123142  jal         func_48C508
    ctx->pc = 0x4512BCu;
    SET_GPR_U32(ctx, 31, 0x4512C4u);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x4512BCu, 0x4512C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4512C4u;
label_4512c4:
    // 0x4512c4: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x4512c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_4512c8:
    // 0x4512c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4512c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4512cc: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x4512ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4512d0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4512D0u;
    {
        const bool branch_taken_0x4512d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4512D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4512D0u;
        // 0x4512d4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4512d0) {
            ctx->pc = 0x4512A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4512a8;
        }
    }
    ctx->pc = 0x4512D8u;
    // 0x4512d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4512d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4512dc:
    // 0x4512dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4512dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4512e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4512e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4512e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4512e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4512e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4512E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4512ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4512E8u;
        // 0x4512ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4512E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4512F0u;
}

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

// Function: sub_004F5848
// Address: 0x4f5848 - 0x4f58b8
void sub_004F5848_0x4f5848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5848_0x4f5848");
#endif

    switch (ctx->pc) {
        case 0x4f5848u: goto label_4f5848;
        case 0x4f584cu: goto label_4f584c;
        case 0x4f5850u: goto label_4f5850;
        case 0x4f5854u: goto label_4f5854;
        case 0x4f5858u: goto label_4f5858;
        case 0x4f585cu: goto label_4f585c;
        case 0x4f5860u: goto label_4f5860;
        case 0x4f5864u: goto label_4f5864;
        case 0x4f5868u: goto label_4f5868;
        case 0x4f586cu: goto label_4f586c;
        case 0x4f5870u: goto label_4f5870;
        case 0x4f5874u: goto label_4f5874;
        case 0x4f5878u: goto label_4f5878;
        case 0x4f587cu: goto label_4f587c;
        case 0x4f5880u: goto label_4f5880;
        case 0x4f5884u: goto label_4f5884;
        case 0x4f5888u: goto label_4f5888;
        case 0x4f588cu: goto label_4f588c;
        case 0x4f5890u: goto label_4f5890;
        case 0x4f5894u: goto label_4f5894;
        case 0x4f5898u: goto label_4f5898;
        case 0x4f589cu: goto label_4f589c;
        case 0x4f58a0u: goto label_4f58a0;
        case 0x4f58a4u: goto label_4f58a4;
        case 0x4f58a8u: goto label_4f58a8;
        case 0x4f58acu: goto label_4f58ac;
        case 0x4f58b0u: goto label_4f58b0;
        case 0x4f58b4u: goto label_4f58b4;
        default: break;
    }

    ctx->pc = 0x4f5848u;

label_4f5848:
    // 0x4f5848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f5848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f584c:
    // 0x4f584c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f5850:
    // 0x4f5850: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f5850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f5854:
    // 0x4f5854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5858:
    // 0x4f5858: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f5858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f585c:
    // 0x4f585c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f585cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f5860:
    // 0x4f5860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f5864:
    // 0x4f5864: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f5868:
    if (ctx->pc == 0x4F5868u) {
        ctx->pc = 0x4F5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5864u;
        // 0x4f5868: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F586Cu;
        goto label_4f586c;
    }
    ctx->pc = 0x4F5864u;
    {
        const bool branch_taken_0x4f5864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5864u;
        // 0x4f5868: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5864) {
            ctx->pc = 0x4F589Cu;
            goto label_4f589c;
        }
    }
    ctx->pc = 0x4F586Cu;
label_4f586c:
    // 0x4f586c: 0xc06454c  jal         func_191530
label_4f5870:
    if (ctx->pc == 0x4F5870u) {
        ctx->pc = 0x4F5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F586Cu;
        // 0x4f5870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5874u;
        goto label_4f5874;
    }
    ctx->pc = 0x4F586Cu;
    SET_GPR_U32(ctx, 31, 0x4F5874u);
    ctx->pc = 0x4F5870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F586Cu;
    // 0x4f5870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191530u, 0x4F586Cu, 0x4F5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5874u;
label_4f5874:
    // 0x4f5874: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f5874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f5878:
    // 0x4f5878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f5878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f587c:
    // 0x4f587c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f587cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f5880:
    // 0x4f5880: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f5880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f5884:
    // 0x4f5884: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f5884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f5888:
    // 0x4f5888: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f588c:
    // 0x4f588c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f588cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5890:
    // 0x4f5890: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5894:
    // 0x4f5894: 0x60f809  jalr        $v1
label_4f5898:
    if (ctx->pc == 0x4F5898u) {
        ctx->pc = 0x4F5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5894u;
        // 0x4f5898: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F589Cu;
        goto label_4f589c;
    }
    ctx->pc = 0x4F5894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F589Cu);
        ctx->pc = 0x4F5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5894u;
        // 0x4f5898: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5894u, 0x4F589Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F589Cu;
label_4f589c:
    // 0x4f589c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f589cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f58a0:
    // 0x4f58a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f58a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f58a4:
    // 0x4f58a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f58a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f58a8:
    // 0x4f58a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f58a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f58ac:
    // 0x4f58ac: 0x3e00008  jr          $ra
label_4f58b0:
    if (ctx->pc == 0x4F58B0u) {
        ctx->pc = 0x4F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58ACu;
        // 0x4f58b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F58B4u;
        goto label_4f58b4;
    }
    ctx->pc = 0x4F58ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F58ACu;
        // 0x4f58b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F58ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F58B4u;
label_4f58b4:
    // 0x4f58b4: 0x0  nop
    ctx->pc = 0x4f58b4u;
    // NOP
    ctx->pc = 0x4f58b8u;
}

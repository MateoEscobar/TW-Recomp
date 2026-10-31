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

// Function: sub_003E6FD8
// Address: 0x3e6fd8 - 0x3e7060
void sub_003E6FD8_0x3e6fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6FD8_0x3e6fd8");
#endif

    switch (ctx->pc) {
        case 0x3e6ff8u: goto label_3e6ff8;
        case 0x3e703cu: goto label_3e703c;
        case 0x3e704cu: goto label_3e704c;
        default: break;
    }

    ctx->pc = 0x3e6fd8u;

    // 0x3e6fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e6fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e6fe0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e6fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e6fe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e6fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6fe8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3e6fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6fec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e6fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e6ff0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6FF0u;
    SET_GPR_U32(ctx, 31, 0x3E6FF8u);
    ctx->pc = 0x3E6FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6FF0u;
    // 0x3e6ff4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6FF0u, 0x3E6FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FF8u;
label_3e6ff8:
    // 0x3e6ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e6ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ffc: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E6FFCu;
    {
        const bool branch_taken_0x3e6ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FFCu;
        // 0x3e7000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ffc) {
            ctx->pc = 0x3E701Cu;
            goto label_3e701c;
        }
    }
    ctx->pc = 0x3E7004u;
    // 0x3e7004: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e7008: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e7008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e700c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3e700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x3e7010: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e7010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e7014: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e7014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x3e7018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e7018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e701c:
    // 0x3e701c: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E701Cu;
    {
        const bool branch_taken_0x3e701c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e701c) {
            ctx->pc = 0x3E7020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E701Cu;
            // 0x3e7020: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7030u;
            goto label_3e7030;
        }
    }
    ctx->pc = 0x3E7024u;
    // 0x3e7024: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e7024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e7028: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3e7028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x3e702c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e702cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e7030:
    // 0x3e7030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7034: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E7034u;
    SET_GPR_U32(ctx, 31, 0x3E703Cu);
    ctx->pc = 0x3E7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7034u;
    // 0x3e7038: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E7034u, 0x3E703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E703Cu;
label_3e703c:
    // 0x3e703c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e7040: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7044: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E7044u;
    SET_GPR_U32(ctx, 31, 0x3E704Cu);
    ctx->pc = 0x3E7048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7044u;
    // 0x3e7048: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E7044u, 0x3E704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E704Cu;
label_3e704c:
    // 0x3e704c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e704cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e7050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7058: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7058u;
        // 0x3e705c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7060u;
}

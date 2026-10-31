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

// Function: sub_00150FC8
// Address: 0x150fc8 - 0x1510c8
void sub_00150FC8_0x150fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150FC8_0x150fc8");
#endif

    switch (ctx->pc) {
        case 0x151008u: goto label_151008;
        case 0x151018u: goto label_151018;
        case 0x151034u: goto label_151034;
        case 0x151044u: goto label_151044;
        case 0x151080u: goto label_151080;
        case 0x151094u: goto label_151094;
        case 0x1510a4u: goto label_1510a4;
        default: break;
    }

    ctx->pc = 0x150fc8u;

    // 0x150fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150fcc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x150fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x150fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x150fd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x150fd8: 0x78402  srl         $s0, $a3, 16
    ctx->pc = 0x150fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x150fdc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x150fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x150fe0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x150fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150fe8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x150fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x150fec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FECu;
    {
        const bool branch_taken_0x150fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FECu;
        // 0x150ff0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fec) {
            ctx->pc = 0x150FFCu;
            goto label_150ffc;
        }
    }
    ctx->pc = 0x150FF4u;
    // 0x150ff4: 0x14e0000a  bnez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x150FF4u;
    {
        const bool branch_taken_0x150ff4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x150FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF4u;
        // 0x150ff8: 0x2e221001  sltiu       $v0, $s1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ff4) {
            ctx->pc = 0x151020u;
            goto label_151020;
        }
    }
    ctx->pc = 0x150FFCu;
label_150ffc:
    // 0x150ffc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x150ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151000: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151000u;
    SET_GPR_U32(ctx, 31, 0x151008u);
    ctx->pc = 0x151004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151000u;
    // 0x151004: 0x2484c6a8  addiu       $a0, $a0, -0x3958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151000u, 0x151008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151008u;
label_151008:
    // 0x151008: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x15100c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15100cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151010: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151010u;
    SET_GPR_U32(ctx, 31, 0x151018u);
    ctx->pc = 0x151014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151010u;
    // 0x151014: 0x2484c6c8  addiu       $a0, $a0, -0x3938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151010u, 0x151018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151018u;
label_151018:
    // 0x151018: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x151018u;
    {
        const bool branch_taken_0x151018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151018u;
        // 0x15101c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151018) {
            ctx->pc = 0x1510A8u;
            goto label_1510a8;
        }
    }
    ctx->pc = 0x151020u;
label_151020:
    // 0x151020: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x151020u;
    {
        const bool branch_taken_0x151020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151020u;
        // 0x151024: 0x2e421001  sltiu       $v0, $s2, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151020) {
            ctx->pc = 0x15104Cu;
            goto label_15104c;
        }
    }
    ctx->pc = 0x151028u;
    // 0x151028: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x15102c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x15102Cu;
    SET_GPR_U32(ctx, 31, 0x151034u);
    ctx->pc = 0x151030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15102Cu;
    // 0x151030: 0x2484c6a8  addiu       $a0, $a0, -0x3958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x15102Cu, 0x151034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151034u;
label_151034:
    // 0x151034: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15103c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x15103Cu;
    SET_GPR_U32(ctx, 31, 0x151044u);
    ctx->pc = 0x151040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15103Cu;
    // 0x151040: 0x2484c6e8  addiu       $a0, $a0, -0x3918 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x15103Cu, 0x151044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151044u;
label_151044:
    // 0x151044: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x151044u;
    {
        const bool branch_taken_0x151044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151044u;
        // 0x151048: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151044) {
            ctx->pc = 0x1510A8u;
            goto label_1510a8;
        }
    }
    ctx->pc = 0x15104Cu;
label_15104c:
    // 0x15104c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15104Cu;
    {
        const bool branch_taken_0x15104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15104Cu;
        // 0x151050: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15104c) {
            ctx->pc = 0x151088u;
            goto label_151088;
        }
    }
    ctx->pc = 0x151054u;
    // 0x151054: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151058: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x151058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15105c: 0x2463c4f0  addiu       $v1, $v1, -0x3B10
    ctx->pc = 0x15105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952176));
    // 0x151060: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x151060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x151064: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x151064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151068: 0x2484c4e8  addiu       $a0, $a0, -0x3B18
    ctx->pc = 0x151068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952168));
    // 0x15106c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x151070: 0xa4510000  sh          $s1, 0x0($v0)
    ctx->pc = 0x151070u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x151074: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x151074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151078: 0xc054432  jal         func_1510C8
    ctx->pc = 0x151078u;
    SET_GPR_U32(ctx, 31, 0x151080u);
    ctx->pc = 0x15107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151078u;
    // 0x15107c: 0xa4720000  sh          $s2, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1510C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1510C8u, 0x151078u, 0x151080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151080u;
label_151080:
    // 0x151080: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151080u;
    {
        const bool branch_taken_0x151080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151080u;
        // 0x151084: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151080) {
            ctx->pc = 0x1510A8u;
            goto label_1510a8;
        }
    }
    ctx->pc = 0x151088u;
label_151088:
    // 0x151088: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x15108c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x15108Cu;
    SET_GPR_U32(ctx, 31, 0x151094u);
    ctx->pc = 0x151090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15108Cu;
    // 0x151090: 0x2484c6a8  addiu       $a0, $a0, -0x3958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x15108Cu, 0x151094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151094u;
label_151094:
    // 0x151094: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151098: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x151098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15109c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x15109Cu;
    SET_GPR_U32(ctx, 31, 0x1510A4u);
    ctx->pc = 0x1510A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15109Cu;
    // 0x1510a0: 0x2484c720  addiu       $a0, $a0, -0x38E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x15109Cu, 0x1510A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510A4u;
label_1510a4:
    // 0x1510a4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1510a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1510a8:
    // 0x1510a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1510a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1510ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1510acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1510b0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1510b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1510b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1510b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1510b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1510B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1510BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510B8u;
        // 0x1510bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1510B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1510C0u;
    // 0x1510c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1510c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1510c4: 0x0  nop
    ctx->pc = 0x1510c4u;
    // NOP
    ctx->pc = 0x1510c8u;
}

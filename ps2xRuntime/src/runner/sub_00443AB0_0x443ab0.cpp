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

// Function: sub_00443AB0
// Address: 0x443ab0 - 0x443b48
void sub_00443AB0_0x443ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443AB0_0x443ab0");
#endif

    switch (ctx->pc) {
        case 0x443ac4u: goto label_443ac4;
        case 0x443af0u: goto label_443af0;
        case 0x443b0cu: goto label_443b0c;
        case 0x443b14u: goto label_443b14;
        case 0x443b1cu: goto label_443b1c;
        case 0x443b2cu: goto label_443b2c;
        default: break;
    }

    ctx->pc = 0x443ab0u;

    // 0x443ab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x443ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x443ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x443ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x443ab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x443ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x443abc: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x443ABCu;
    SET_GPR_U32(ctx, 31, 0x443AC4u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x443ABCu, 0x443AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443AC4u;
label_443ac4:
    // 0x443ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x443ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443ac8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x443ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x443acc: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x443accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x443ad0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x443ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10000000
    // 0x443ad4: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x443ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x443ad8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x443AD8u;
    {
        const bool branch_taken_0x443ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x443ad8) {
            ctx->pc = 0x443AF8u;
            goto label_443af8;
        }
    }
    ctx->pc = 0x443AE0u;
    // 0x443ae0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x443AE0u;
    {
        const bool branch_taken_0x443ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x443AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AE0u;
        // 0x443ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443ae0) {
            ctx->pc = 0x443B30u;
            goto label_443b30;
        }
    }
    ctx->pc = 0x443AE8u;
    // 0x443ae8: 0xc110cc4  jal         func_443310
    ctx->pc = 0x443AE8u;
    SET_GPR_U32(ctx, 31, 0x443AF0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x443AE8u, 0x443AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443AF0u;
label_443af0:
    // 0x443af0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x443AF0u;
    {
        const bool branch_taken_0x443af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443AF0u;
        // 0x443af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443af0) {
            ctx->pc = 0x443B30u;
            goto label_443b30;
        }
    }
    ctx->pc = 0x443AF8u;
label_443af8:
    // 0x443af8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x443af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x443afc: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x443afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x443b00: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x443b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x443b04: 0xc110e4c  jal         func_443930
    ctx->pc = 0x443B04u;
    SET_GPR_U32(ctx, 31, 0x443B0Cu);
    ctx->pc = 0x443B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443B04u;
    // 0x443b08: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443930u, 0x443B04u, 0x443B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443B0Cu;
label_443b0c:
    // 0x443b0c: 0xc111010  jal         func_444040
    ctx->pc = 0x443B0Cu;
    SET_GPR_U32(ctx, 31, 0x443B14u);
    ctx->pc = 0x444040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444040u, 0x443B0Cu, 0x443B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443B14u;
label_443b14:
    // 0x443b14: 0xc110ed2  jal         func_443B48
    ctx->pc = 0x443B14u;
    SET_GPR_U32(ctx, 31, 0x443B1Cu);
    ctx->pc = 0x443B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443B14u;
    // 0x443b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443B48u, 0x443B14u, 0x443B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443B1Cu;
label_443b1c:
    // 0x443b1c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x443B1Cu;
    {
        const bool branch_taken_0x443b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x443B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B1Cu;
        // 0x443b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443b1c) {
            ctx->pc = 0x443B30u;
            goto label_443b30;
        }
    }
    ctx->pc = 0x443B24u;
    // 0x443b24: 0xc110cc4  jal         func_443310
    ctx->pc = 0x443B24u;
    SET_GPR_U32(ctx, 31, 0x443B2Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x443B24u, 0x443B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443B2Cu;
label_443b2c:
    // 0x443b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x443b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_443b30:
    // 0x443b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x443b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x443b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443b38: 0x3e00008  jr          $ra
    ctx->pc = 0x443B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443B38u;
        // 0x443b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443B40u;
    // 0x443b40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x443b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x443b44: 0x0  nop
    ctx->pc = 0x443b44u;
    // NOP
    ctx->pc = 0x443b48u;
}

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

// Function: sub_001BE970
// Address: 0x1be970 - 0x1bea00
void sub_001BE970_0x1be970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE970_0x1be970");
#endif

    switch (ctx->pc) {
        case 0x1be984u: goto label_1be984;
        case 0x1be9a4u: goto label_1be9a4;
        case 0x1be9b8u: goto label_1be9b8;
        case 0x1be9c0u: goto label_1be9c0;
        case 0x1be9c8u: goto label_1be9c8;
        case 0x1be9d0u: goto label_1be9d0;
        default: break;
    }

    ctx->pc = 0x1be970u;

    // 0x1be970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be974: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be97c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1BE97Cu;
    SET_GPR_U32(ctx, 31, 0x1BE984u);
    ctx->pc = 0x1BE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE97Cu;
    // 0x1be980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1BE97Cu, 0x1BE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE984u;
label_1be984:
    // 0x1be984: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1be984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1be988: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1be988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1be98c: 0x2463a4b8  addiu       $v1, $v1, -0x5B48
    ctx->pc = 0x1be98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943928));
    // 0x1be990: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1be990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1be994: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1be994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1be998: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1be99c: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1BE99Cu;
    SET_GPR_U32(ctx, 31, 0x1BE9A4u);
    ctx->pc = 0x1BE9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE99Cu;
    // 0x1be9a0: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1BE99Cu, 0x1BE9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9A4u;
label_1be9a4:
    // 0x1be9a4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1be9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1be9a8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1be9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1be9ac: 0x24639fd0  addiu       $v1, $v1, -0x6030
    ctx->pc = 0x1be9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942672));
    // 0x1be9b0: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x1BE9B0u;
    SET_GPR_U32(ctx, 31, 0x1BE9B8u);
    ctx->pc = 0x1BE9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9B0u;
    // 0x1be9b4: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x1BE9B0u, 0x1BE9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9B8u;
label_1be9b8:
    // 0x1be9b8: 0xc06e3e6  jal         func_1B8F98
    ctx->pc = 0x1BE9B8u;
    SET_GPR_U32(ctx, 31, 0x1BE9C0u);
    ctx->pc = 0x1BE9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9B8u;
    // 0x1be9bc: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8F98u, 0x1BE9B8u, 0x1BE9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9C0u;
label_1be9c0:
    // 0x1be9c0: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1BE9C0u;
    SET_GPR_U32(ctx, 31, 0x1BE9C8u);
    ctx->pc = 0x1BE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9C0u;
    // 0x1be9c4: 0x26040360  addiu       $a0, $s0, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1BE9C0u, 0x1BE9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9C8u;
label_1be9c8:
    // 0x1be9c8: 0xc079ba6  jal         func_1E6E98
    ctx->pc = 0x1BE9C8u;
    SET_GPR_U32(ctx, 31, 0x1BE9D0u);
    ctx->pc = 0x1BE9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE9C8u;
    // 0x1be9cc: 0x26040480  addiu       $a0, $s0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E98u, 0x1BE9C8u, 0x1BE9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE9D0u;
label_1be9d0:
    // 0x1be9d0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1be9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1be9d4: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x1be9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x1be9d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1be9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be9dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9e0: 0x8c648690  lw          $a0, -0x7970($v1)
    ctx->pc = 0x1be9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x598690u));
    // 0x1be9e4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1be9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1be9e8: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x1be9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x1be9ec: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1be9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1be9f0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1be9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1be9f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE9F8u;
        // 0x1be9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEA00u;
}

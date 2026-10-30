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

// Function: sub_004209C0
// Address: 0x4209c0 - 0x420a70
void sub_004209C0_0x4209c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004209C0_0x4209c0");
#endif

    switch (ctx->pc) {
        case 0x4209e4u: goto label_4209e4;
        case 0x4209f8u: goto label_4209f8;
        case 0x420a0cu: goto label_420a0c;
        case 0x420a20u: goto label_420a20;
        case 0x420a34u: goto label_420a34;
        case 0x420a48u: goto label_420a48;
        case 0x420a54u: goto label_420a54;
        default: break;
    }

    ctx->pc = 0x4209c0u;

    // 0x4209c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4209c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4209c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4209c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4209c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4209c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4209cc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4209ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4209d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4209d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4209d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4209d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4209d8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4209d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4209dc: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4209DCu;
    SET_GPR_U32(ctx, 31, 0x4209E4u);
    ctx->pc = 0x4209E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4209DCu;
    // 0x4209e0: 0x248471b8  addiu       $a0, $a0, 0x71B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4209DCu, 0x4209E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4209E4u;
label_4209e4:
    // 0x4209e4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4209e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4209e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4209e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4209ec: 0x24845510  addiu       $a0, $a0, 0x5510
    ctx->pc = 0x4209ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21776));
    // 0x4209f0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4209F0u;
    SET_GPR_U32(ctx, 31, 0x4209F8u);
    ctx->pc = 0x4209F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4209F0u;
    // 0x4209f4: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4209F0u, 0x4209F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4209F8u;
label_4209f8:
    // 0x4209f8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4209f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4209fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4209fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a00: 0x248471c0  addiu       $a0, $a0, 0x71C0
    ctx->pc = 0x420a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29120));
    // 0x420a04: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420A04u;
    SET_GPR_U32(ctx, 31, 0x420A0Cu);
    ctx->pc = 0x420A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420A04u;
    // 0x420a08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420A04u, 0x420A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420A0Cu;
label_420a0c:
    // 0x420a0c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x420a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x420a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a14: 0x24845500  addiu       $a0, $a0, 0x5500
    ctx->pc = 0x420a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21760));
    // 0x420a18: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420A18u;
    SET_GPR_U32(ctx, 31, 0x420A20u);
    ctx->pc = 0x420A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420A18u;
    // 0x420a1c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420A18u, 0x420A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420A20u;
label_420a20:
    // 0x420a20: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x420a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x420a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a28: 0x24845818  addiu       $a0, $a0, 0x5818
    ctx->pc = 0x420a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22552));
    // 0x420a2c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420A2Cu;
    SET_GPR_U32(ctx, 31, 0x420A34u);
    ctx->pc = 0x420A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420A2Cu;
    // 0x420a30: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420A2Cu, 0x420A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420A34u;
label_420a34:
    // 0x420a34: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x420a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x420a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x420a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a3c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x420a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x420a40: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x420A40u;
    SET_GPR_U32(ctx, 31, 0x420A48u);
    ctx->pc = 0x420A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420A40u;
    // 0x420a44: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x420A40u, 0x420A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420A48u;
label_420a48:
    // 0x420a48: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x420a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x420a4c: 0xc10829c  jal         func_420A70
    ctx->pc = 0x420A4Cu;
    SET_GPR_U32(ctx, 31, 0x420A54u);
    ctx->pc = 0x420A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420A4Cu;
    // 0x420a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A70u, 0x420A4Cu, 0x420A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420A54u;
label_420a54:
    // 0x420a54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x420a54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420a58: 0xa20000bc  sb          $zero, 0xBC($s0)
    ctx->pc = 0x420a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 0));
    // 0x420a5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x420a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420a64: 0x3e00008  jr          $ra
    ctx->pc = 0x420A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420A64u;
        // 0x420a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420A6Cu;
    // 0x420a6c: 0x0  nop
    ctx->pc = 0x420a6cu;
    // NOP
    ctx->pc = 0x420a70u;
}

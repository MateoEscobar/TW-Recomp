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

// Function: sub_002E7DA8
// Address: 0x2e7da8 - 0x2e7e68
void sub_002E7DA8_0x2e7da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7DA8_0x2e7da8");
#endif

    switch (ctx->pc) {
        case 0x2e7df4u: goto label_2e7df4;
        case 0x2e7e1cu: goto label_2e7e1c;
        case 0x2e7e4cu: goto label_2e7e4c;
        default: break;
    }

    ctx->pc = 0x2e7da8u;

    // 0x2e7da8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e7dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7db4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e7db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e7db8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e7db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7dbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7dc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2e7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7dc4: 0x92240021  lbu         $a0, 0x21($s1)
    ctx->pc = 0x2e7dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 33)));
    // 0x2e7dc8: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2E7DC8u;
    {
        const bool branch_taken_0x2e7dc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7DC8u;
        // 0x2e7dcc: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7dc8) {
            ctx->pc = 0x2E7E50u;
            goto label_2e7e50;
        }
    }
    ctx->pc = 0x2E7DD0u;
    // 0x2e7dd0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2e7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2e7dd4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2e7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2e7dd8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2e7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2e7ddc: 0x5464001d  bnel        $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E7DDCu;
    {
        const bool branch_taken_0x2e7ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e7ddc) {
            ctx->pc = 0x2E7DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7DDCu;
            // 0x2e7de0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7E54u;
            goto label_2e7e54;
        }
    }
    ctx->pc = 0x2E7DE4u;
    // 0x2e7de4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2e7de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x2e7de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7dec: 0xc089998  jal         func_226660
    ctx->pc = 0x2E7DECu;
    SET_GPR_U32(ctx, 31, 0x2E7DF4u);
    ctx->pc = 0x2E7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7DECu;
    // 0x2e7df0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2E7DECu, 0x2E7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7DF4u;
label_2e7df4:
    // 0x2e7df4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7DF4u;
    {
        const bool branch_taken_0x2e7df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7df4) {
            ctx->pc = 0x2E7DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7DF4u;
            // 0x2e7df8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7E54u;
            goto label_2e7e54;
        }
    }
    ctx->pc = 0x2E7DFCu;
    // 0x2e7dfc: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2e7dfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2e7e00: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2e7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2e7e04: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x2e7e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2e7e08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e7e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e7e0c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e7e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2e7e10: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2e7e10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x2e7e14: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2E7E14u;
    SET_GPR_U32(ctx, 31, 0x2E7E1Cu);
    ctx->pc = 0x2E7E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E14u;
    // 0x2e7e18: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2E7E14u, 0x2E7E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E1Cu;
label_2e7e1c:
    // 0x2e7e1c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7E1Cu;
    {
        const bool branch_taken_0x2e7e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E1Cu;
        // 0x2e7e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7e1c) {
            ctx->pc = 0x2E7E4Cu;
            goto label_2e7e4c;
        }
    }
    ctx->pc = 0x2E7E24u;
    // 0x2e7e24: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2e7e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2e7e28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e7e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e7e2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e7e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e7e30: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2e7e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e7e34: 0x240602a1  addiu       $a2, $zero, 0x2A1
    ctx->pc = 0x2e7e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 673));
    // 0x2e7e38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7e3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2e7e3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2e7e40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e7e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e44: 0xc0be968  jal         func_2FA5A0
    ctx->pc = 0x2E7E44u;
    SET_GPR_U32(ctx, 31, 0x2E7E4Cu);
    ctx->pc = 0x2E7E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7E44u;
    // 0x2e7e48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA5A0u, 0x2E7E44u, 0x2E7E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7E4Cu;
label_2e7e4c:
    // 0x2e7e4c: 0xa2200021  sb          $zero, 0x21($s1)
    ctx->pc = 0x2e7e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 0));
label_2e7e50:
    // 0x2e7e50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e7e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7e54:
    // 0x2e7e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7E5Cu;
        // 0x2e7e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7E64u;
    // 0x2e7e64: 0x0  nop
    ctx->pc = 0x2e7e64u;
    // NOP
    ctx->pc = 0x2e7e68u;
}

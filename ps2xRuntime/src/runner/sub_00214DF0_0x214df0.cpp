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

// Function: sub_00214DF0
// Address: 0x214df0 - 0x214e68
void sub_00214DF0_0x214df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214DF0_0x214df0");
#endif

    switch (ctx->pc) {
        case 0x214e14u: goto label_214e14;
        case 0x214e4cu: goto label_214e4c;
        default: break;
    }

    ctx->pc = 0x214df0u;

    // 0x214df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214df4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x214df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x214df8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214dfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x214e00: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x214e00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x214e04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214e0c: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x214E0Cu;
    SET_GPR_U32(ctx, 31, 0x214E14u);
    ctx->pc = 0x214E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E0Cu;
    // 0x214e10: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x214E0Cu, 0x214E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E14u;
label_214e14:
    // 0x214e14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x214e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x214e18: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x214e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x214e1c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x214e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x214e20: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x214e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214e24: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x214e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
    // 0x214e28: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x214e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
    // 0x214e2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214e30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214e30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e34: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x214e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214e38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214e3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e40: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x214e40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214e44: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x214E44u;
    SET_GPR_U32(ctx, 31, 0x214E4Cu);
    ctx->pc = 0x214E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E44u;
    // 0x214e48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x214E44u, 0x214E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E4Cu;
label_214e4c:
    // 0x214e4c: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x214e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x214e50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214e54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x214E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214E5Cu;
        // 0x214e60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214E64u;
    // 0x214e64: 0x0  nop
    ctx->pc = 0x214e64u;
    // NOP
    ctx->pc = 0x214e68u;
}

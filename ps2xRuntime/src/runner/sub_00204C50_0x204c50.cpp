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

// Function: sub_00204C50
// Address: 0x204c50 - 0x204cd8
void sub_00204C50_0x204c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204C50_0x204c50");
#endif

    switch (ctx->pc) {
        case 0x204c74u: goto label_204c74;
        case 0x204cacu: goto label_204cac;
        default: break;
    }

    ctx->pc = 0x204c50u;

    // 0x204c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x204c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x204c54: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x204c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204c58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x204c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x204c5c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x204c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x204c60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x204c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x204c64: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x204c64u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x204c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x204c6c: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x204C6Cu;
    SET_GPR_U32(ctx, 31, 0x204C74u);
    ctx->pc = 0x204C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204C6Cu;
    // 0x204c70: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x204C6Cu, 0x204C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C74u;
label_204c74:
    // 0x204c74: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x204c78: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x204c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x204c7c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x204c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x204c80: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x204c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x204c84: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x204c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
    // 0x204c88: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x204c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
    // 0x204c8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x204c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204c90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x204c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x204c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x204c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x204c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204c9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x204c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204ca0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x204ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204ca4: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x204CA4u;
    SET_GPR_U32(ctx, 31, 0x204CACu);
    ctx->pc = 0x204CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204CA4u;
    // 0x204ca8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x204CA4u, 0x204CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CACu;
label_204cac:
    // 0x204cac: 0xae22f588  sw          $v0, -0xA78($s1)
    ctx->pc = 0x204cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294964616), GPR_U32(ctx, 2));
    // 0x204cb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x204cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204cb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x204cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x204CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204CBCu;
        // 0x204cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204CC4u;
    // 0x204cc4: 0x0  nop
    ctx->pc = 0x204cc4u;
    // NOP
    // 0x204cc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x204cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x204ccc: 0x0  nop
    ctx->pc = 0x204cccu;
    // NOP
    // 0x204cd0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x204cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x204cd4: 0x0  nop
    ctx->pc = 0x204cd4u;
    // NOP
    ctx->pc = 0x204cd8u;
}

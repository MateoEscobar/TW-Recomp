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

// Function: sub_00311EB8
// Address: 0x311eb8 - 0x311f78
void sub_00311EB8_0x311eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311EB8_0x311eb8");
#endif

    switch (ctx->pc) {
        case 0x311edcu: goto label_311edc;
        case 0x311eecu: goto label_311eec;
        case 0x311f20u: goto label_311f20;
        case 0x311f30u: goto label_311f30;
        default: break;
    }

    ctx->pc = 0x311eb8u;

    // 0x311eb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x311eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x311ebc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x311ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x311ec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x311ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x311ec4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x311ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x311ec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x311ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x311eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x311ed0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x311ed0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ed4: 0xc087502  jal         func_21D408
    ctx->pc = 0x311ED4u;
    SET_GPR_U32(ctx, 31, 0x311EDCu);
    ctx->pc = 0x311ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311ED4u;
    // 0x311ed8: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x311ED4u, 0x311EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EDCu;
label_311edc:
    // 0x311edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ee0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x311ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x311ee4: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x311EE4u;
    SET_GPR_U32(ctx, 31, 0x311EECu);
    ctx->pc = 0x311EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311EE4u;
    // 0x311ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x311EE4u, 0x311EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311EECu;
label_311eec:
    // 0x311eec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x311eecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ef0: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x311EF0u;
    {
        const bool branch_taken_0x311ef0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x311ef0) {
            ctx->pc = 0x311F18u;
            goto label_311f18;
        }
    }
    ctx->pc = 0x311EF8u;
    // 0x311ef8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x311ef8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x311efc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x311efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x311f00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x311F00u;
    {
        const bool branch_taken_0x311f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311f00) {
            ctx->pc = 0x311F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311F00u;
            // 0x311f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F14u;
            goto label_311f14;
        }
    }
    ctx->pc = 0x311F08u;
    // 0x311f08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311f0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x311f10: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x311f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_311f14:
    // 0x311f14: 0xac520040  sw          $s2, 0x40($v0)
    ctx->pc = 0x311f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 18));
label_311f18:
    // 0x311f18: 0xc087502  jal         func_21D408
    ctx->pc = 0x311F18u;
    SET_GPR_U32(ctx, 31, 0x311F20u);
    ctx->pc = 0x311F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F18u;
    // 0x311f1c: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x311F18u, 0x311F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F20u;
label_311f20:
    // 0x311f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x311f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f24: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x311f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x311f28: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x311F28u;
    SET_GPR_U32(ctx, 31, 0x311F30u);
    ctx->pc = 0x311F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311F28u;
    // 0x311f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x311F28u, 0x311F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311F30u;
label_311f30:
    // 0x311f30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x311f30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311f34: 0x462000a  bltzl       $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x311F34u;
    {
        const bool branch_taken_0x311f34 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x311f34) {
            ctx->pc = 0x311F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311F34u;
            // 0x311f38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F60u;
            goto label_311f60;
        }
    }
    ctx->pc = 0x311F3Cu;
    // 0x311f3c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x311f3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x311f40: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x311f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x311f44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x311F44u;
    {
        const bool branch_taken_0x311f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x311f44) {
            ctx->pc = 0x311F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311F44u;
            // 0x311f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x311F58u;
            goto label_311f58;
        }
    }
    ctx->pc = 0x311F4Cu;
    // 0x311f4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311f50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x311f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x311f54: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x311f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_311f58:
    // 0x311f58: 0xac520040  sw          $s2, 0x40($v0)
    ctx->pc = 0x311f58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 18));
    // 0x311f5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x311f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_311f60:
    // 0x311f60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x311f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311f64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x311f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x311f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x311F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311F6Cu;
        // 0x311f70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311F74u;
    // 0x311f74: 0x0  nop
    ctx->pc = 0x311f74u;
    // NOP
    ctx->pc = 0x311f78u;
}

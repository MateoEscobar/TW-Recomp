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

// Function: sub_00432AA8
// Address: 0x432aa8 - 0x432b10
void sub_00432AA8_0x432aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432AA8_0x432aa8");
#endif

    switch (ctx->pc) {
        case 0x432ad0u: goto label_432ad0;
        default: break;
    }

    ctx->pc = 0x432aa8u;

    // 0x432aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x432aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x432aac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x432aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432ab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x432ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x432ab4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x432ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x432ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x432abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x432abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432ac0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x432ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432ac4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x432ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x432ac8: 0xc10ea6c  jal         func_43A9B0
    ctx->pc = 0x432AC8u;
    SET_GPR_U32(ctx, 31, 0x432AD0u);
    ctx->pc = 0x432ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432AC8u;
    // 0x432acc: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A9B0u, 0x432AC8u, 0x432AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432AD0u;
label_432ad0:
    // 0x432ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x432ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432ad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x432ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x432ad8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x432AD8u;
    {
        const bool branch_taken_0x432ad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x432ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432AD8u;
        // 0x432adc: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ad8) {
            ctx->pc = 0x432AE8u;
            goto label_432ae8;
        }
    }
    ctx->pc = 0x432AE0u;
    // 0x432ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x432AE0u;
    {
        const bool branch_taken_0x432ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x432AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432AE0u;
        // 0x432ae4: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x432ae0) {
            ctx->pc = 0x432AF8u;
            goto label_432af8;
        }
    }
    ctx->pc = 0x432AE8u;
label_432ae8:
    // 0x432ae8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x432ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x432aec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x432aecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x432af0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x432af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x432af4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x432af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_432af8:
    // 0x432af8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x432af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x432afc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x432afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432b00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x432b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432b08: 0x3e00008  jr          $ra
    ctx->pc = 0x432B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432B08u;
        // 0x432b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432B10u;
}

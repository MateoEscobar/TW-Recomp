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

// Function: sub_0043AAD0
// Address: 0x43aad0 - 0x43ab30
void sub_0043AAD0_0x43aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043AAD0_0x43aad0");
#endif

    switch (ctx->pc) {
        case 0x43aaf4u: goto label_43aaf4;
        default: break;
    }

    ctx->pc = 0x43aad0u;

    // 0x43aad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43aad4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x43aad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x43aad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43aadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43aadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aae0: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x43aae0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x43aae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43aae8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x43aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aaec: 0xc10f5e6  jal         func_43D798
    ctx->pc = 0x43AAECu;
    SET_GPR_U32(ctx, 31, 0x43AAF4u);
    ctx->pc = 0x43AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43AAECu;
    // 0x43aaf0: 0xae2071d8  sw          $zero, 0x71D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 29144), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D798u, 0x43AAECu, 0x43AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43AAF4u;
label_43aaf4:
    // 0x43aaf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x43aaf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43aaf8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x43aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43aafc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43aafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43ab00: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43AB00u;
    {
        const bool branch_taken_0x43ab00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43ab00) {
            ctx->pc = 0x43AB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AB00u;
            // 0x43ab04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AB18u;
            goto label_43ab18;
        }
    }
    ctx->pc = 0x43AB08u;
    // 0x43ab08: 0x8e2271d8  lw          $v0, 0x71D8($s1)
    ctx->pc = 0x43ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29144)));
    // 0x43ab0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x43AB0Cu;
    {
        const bool branch_taken_0x43ab0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43ab0c) {
            ctx->pc = 0x43AB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43AB0Cu;
            // 0x43ab10: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43AB14u;
            goto label_43ab14;
        }
    }
    ctx->pc = 0x43AB14u;
label_43ab14:
    // 0x43ab14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x43ab14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43ab18:
    // 0x43ab18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x43ab18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ab1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43ab1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43ab20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43ab20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x43AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43AB24u;
        // 0x43ab28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43AB2Cu;
    // 0x43ab2c: 0x0  nop
    ctx->pc = 0x43ab2cu;
    // NOP
    ctx->pc = 0x43ab30u;
}

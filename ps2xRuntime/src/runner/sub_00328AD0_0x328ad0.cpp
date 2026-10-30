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

// Function: sub_00328AD0
// Address: 0x328ad0 - 0x328b40
void sub_00328AD0_0x328ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328AD0_0x328ad0");
#endif

    switch (ctx->pc) {
        case 0x328b08u: goto label_328b08;
        case 0x328b24u: goto label_328b24;
        default: break;
    }

    ctx->pc = 0x328ad0u;

    // 0x328ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x328ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x328ad4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x328ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x328ad8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x328ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x328adc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x328adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x328ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x328ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328ae4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x328ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x328ae8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x328ae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x328af0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x328af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328af4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x328af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x328af8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x328af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x328afc: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x328afcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x328b00: 0xc0ca22a  jal         func_3288A8
    ctx->pc = 0x328B00u;
    SET_GPR_U32(ctx, 31, 0x328B08u);
    ctx->pc = 0x328B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B00u;
    // 0x328b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3288A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3288A8u, 0x328B00u, 0x328B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B08u;
label_328b08:
    // 0x328b08: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x328b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x328b0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x328b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x328b10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x328b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x328b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x328b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x328b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328b1c: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x328B1Cu;
    SET_GPR_U32(ctx, 31, 0x328B24u);
    ctx->pc = 0x328B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328B1Cu;
    // 0x328b20: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x328B1Cu, 0x328B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B24u;
label_328b24:
    // 0x328b24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x328b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328b28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x328b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328b2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328b2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328b30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x328b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328b38: 0x3e00008  jr          $ra
    ctx->pc = 0x328B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B38u;
        // 0x328b3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B40u;
}

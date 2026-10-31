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

// Function: sub_00358AD8
// Address: 0x358ad8 - 0x358b38
void sub_00358AD8_0x358ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358AD8_0x358ad8");
#endif

    switch (ctx->pc) {
        case 0x358af8u: goto label_358af8;
        case 0x358b00u: goto label_358b00;
        case 0x358b14u: goto label_358b14;
        case 0x358b20u: goto label_358b20;
        default: break;
    }

    ctx->pc = 0x358ad8u;

    // 0x358ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358ae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x358ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x358aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358af0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358AF0u;
    SET_GPR_U32(ctx, 31, 0x358AF8u);
    ctx->pc = 0x358AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358AF0u;
    // 0x358af4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358AF0u, 0x358AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AF8u;
label_358af8:
    // 0x358af8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358AF8u;
    SET_GPR_U32(ctx, 31, 0x358B00u);
    ctx->pc = 0x358AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358AF8u;
    // 0x358afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358AF8u, 0x358B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B00u;
label_358b00:
    // 0x358b00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x358b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b0c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358B0Cu;
    SET_GPR_U32(ctx, 31, 0x358B14u);
    ctx->pc = 0x358B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B0Cu;
    // 0x358b10: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358B0Cu, 0x358B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B14u;
label_358b14:
    // 0x358b14: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x358b14u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358b18: 0xc08e00c  jal         func_238030
    ctx->pc = 0x358B18u;
    SET_GPR_U32(ctx, 31, 0x358B20u);
    ctx->pc = 0x358B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B18u;
    // 0x358b1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238030u, 0x358B18u, 0x358B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B20u;
label_358b20:
    // 0x358b20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358b24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358b28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358b30: 0x3e00008  jr          $ra
    ctx->pc = 0x358B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B30u;
        // 0x358b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358B38u;
}

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

// Function: sub_0041CF80
// Address: 0x41cf80 - 0x41cfe8
void sub_0041CF80_0x41cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CF80_0x41cf80");
#endif

    switch (ctx->pc) {
        case 0x41cf9cu: goto label_41cf9c;
        case 0x41cfbcu: goto label_41cfbc;
        default: break;
    }

    ctx->pc = 0x41cf80u;

    // 0x41cf80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41cf84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41cf88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41cf8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41cf8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cf90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41cf94: 0xc08a200  jal         func_228800
    ctx->pc = 0x41CF94u;
    SET_GPR_U32(ctx, 31, 0x41CF9Cu);
    ctx->pc = 0x41CF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CF94u;
    // 0x41cf98: 0x8ca400cc  lw          $a0, 0xCC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x41CF94u, 0x41CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CF9Cu;
label_41cf9c:
    // 0x41cf9c: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x41cf9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x41cfa0: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x41cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x41cfa4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x41cfa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x41cfa8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x41CFA8u;
    {
        const bool branch_taken_0x41cfa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFA8u;
        // 0x41cfac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cfa8) {
            ctx->pc = 0x41CFD4u;
            goto label_41cfd4;
        }
    }
    ctx->pc = 0x41CFB0u;
    // 0x41cfb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41cfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41cfb4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x41CFB4u;
    SET_GPR_U32(ctx, 31, 0x41CFBCu);
    ctx->pc = 0x41CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CFB4u;
    // 0x41cfb8: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41CFB4u, 0x41CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CFBCu;
label_41cfbc:
    // 0x41cfbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41CFBCu;
    {
        const bool branch_taken_0x41cfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFBCu;
        // 0x41cfc0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cfbc) {
            ctx->pc = 0x41CFD4u;
            goto label_41cfd4;
        }
    }
    ctx->pc = 0x41CFC4u;
    // 0x41cfc4: 0x8e020288  lw          $v0, 0x288($s0)
    ctx->pc = 0x41cfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 648)));
    // 0x41cfc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41cfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x41cfcc: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x41cfccu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x41cfd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41cfd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41cfd4:
    // 0x41cfd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41cfd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41cfd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41cfd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41cfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41cfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41cfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x41CFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CFE0u;
        // 0x41cfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41CFE8u;
}

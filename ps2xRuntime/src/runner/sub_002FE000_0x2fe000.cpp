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

// Function: sub_002FE000
// Address: 0x2fe000 - 0x2fe058
void sub_002FE000_0x2fe000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE000_0x2fe000");
#endif

    switch (ctx->pc) {
        case 0x2fe028u: goto label_2fe028;
        default: break;
    }

    ctx->pc = 0x2fe000u;

    // 0x2fe000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe004: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fe004u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fe008: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fe008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fe00c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe014: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2fe014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe018: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fe018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe01c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe020: 0xc0bf70a  jal         func_2FDC28
    ctx->pc = 0x2FE020u;
    SET_GPR_U32(ctx, 31, 0x2FE028u);
    ctx->pc = 0x2FE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE020u;
    // 0x2fe024: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC28u, 0x2FE020u, 0x2FE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE028u;
label_2fe028:
    // 0x2fe028: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x2fe028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x2fe02c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fe02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe030: 0x248430e0  addiu       $a0, $a0, 0x30E0
    ctx->pc = 0x2fe030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12512));
    // 0x2fe034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe038: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2fe038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2fe03c: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2fe03cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fe040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe044: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x2fe044u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x2fe048: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fe048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe04c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE04Cu;
        // 0x2fe050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE054u;
    // 0x2fe054: 0x0  nop
    ctx->pc = 0x2fe054u;
    // NOP
    ctx->pc = 0x2fe058u;
}

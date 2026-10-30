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

// Function: sub_0021B048
// Address: 0x21b048 - 0x21b0b8
void sub_0021B048_0x21b048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B048_0x21b048");
#endif

    switch (ctx->pc) {
        case 0x21b0a8u: goto label_21b0a8;
        default: break;
    }

    ctx->pc = 0x21b048u;

    // 0x21b048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b04c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21b04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b050: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b054: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x21b054u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b058: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21b058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x21b05c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x21b05cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x21b060: 0x84c40092  lh          $a0, 0x92($a2)
    ctx->pc = 0x21b060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x21b064: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21b068: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x21b068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b06c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21b070: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21b070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21b074: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x21b074u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x21b078: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x21b078u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x21b07c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x21b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x21b080: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x21b080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x21b084: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x21b084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x21b088: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B088u;
    {
        const bool branch_taken_0x21b088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B088u;
        // 0x21b08c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b088) {
            ctx->pc = 0x21B0A0u;
            goto label_21b0a0;
        }
    }
    ctx->pc = 0x21B090u;
    // 0x21b090: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x21b090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21b094: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x21b094u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x21b098: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x21b098u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x21b09c: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x21b09cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_21b0a0:
    // 0x21b0a0: 0xc0e8662  jal         func_3A1988
    ctx->pc = 0x21B0A0u;
    SET_GPR_U32(ctx, 31, 0x21B0A8u);
    ctx->pc = 0x21B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B0A0u;
    // 0x21b0a4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1988u, 0x21B0A0u, 0x21B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B0A8u;
label_21b0a8:
    // 0x21b0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x21B0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B0ACu;
        // 0x21b0b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B0B4u;
    // 0x21b0b4: 0x0  nop
    ctx->pc = 0x21b0b4u;
    // NOP
    ctx->pc = 0x21b0b8u;
}

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

// Function: sub_002FE058
// Address: 0x2fe058 - 0x2fe0a8
void sub_002FE058_0x2fe058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE058_0x2fe058");
#endif

    switch (ctx->pc) {
        case 0x2fe08cu: goto label_2fe08c;
        case 0x2fe098u: goto label_2fe098;
        default: break;
    }

    ctx->pc = 0x2fe058u;

    // 0x2fe058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fe058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fe05c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2fe05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2fe060: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fe060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fe064: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2fe064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2fe068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe06c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe070: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2fe070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fe074: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fe074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe078: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fe078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fe07c: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2fe07cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2fe080: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fe080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2fe084: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2FE084u;
    SET_GPR_U32(ctx, 31, 0x2FE08Cu);
    ctx->pc = 0x2FE088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE084u;
    // 0x2fe088: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2FE084u, 0x2FE08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE08Cu;
label_2fe08c:
    // 0x2fe08c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2fe08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2fe090: 0xc0bf71a  jal         func_2FDC68
    ctx->pc = 0x2FE090u;
    SET_GPR_U32(ctx, 31, 0x2FE098u);
    ctx->pc = 0x2FE094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE090u;
    // 0x2fe094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC68u, 0x2FE090u, 0x2FE098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE098u;
label_2fe098:
    // 0x2fe098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fe098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe09c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0A0u;
        // 0x2fe0a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE0A8u;
}

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

// Function: sub_0013B698
// Address: 0x13b698 - 0x13b6f8
void sub_0013B698_0x13b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B698_0x13b698");
#endif

    switch (ctx->pc) {
        case 0x13b698u: goto label_13b698;
        case 0x13b69cu: goto label_13b69c;
        case 0x13b6a0u: goto label_13b6a0;
        case 0x13b6a4u: goto label_13b6a4;
        case 0x13b6a8u: goto label_13b6a8;
        case 0x13b6acu: goto label_13b6ac;
        case 0x13b6b0u: goto label_13b6b0;
        case 0x13b6b4u: goto label_13b6b4;
        case 0x13b6b8u: goto label_13b6b8;
        case 0x13b6bcu: goto label_13b6bc;
        case 0x13b6c0u: goto label_13b6c0;
        case 0x13b6c4u: goto label_13b6c4;
        case 0x13b6c8u: goto label_13b6c8;
        case 0x13b6ccu: goto label_13b6cc;
        case 0x13b6d0u: goto label_13b6d0;
        case 0x13b6d4u: goto label_13b6d4;
        case 0x13b6d8u: goto label_13b6d8;
        case 0x13b6dcu: goto label_13b6dc;
        case 0x13b6e0u: goto label_13b6e0;
        case 0x13b6e4u: goto label_13b6e4;
        case 0x13b6e8u: goto label_13b6e8;
        case 0x13b6ecu: goto label_13b6ec;
        case 0x13b6f0u: goto label_13b6f0;
        case 0x13b6f4u: goto label_13b6f4;
        default: break;
    }

    ctx->pc = 0x13b698u;

label_13b698:
    // 0x13b698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13b69c:
    // 0x13b69c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_13b6a0:
    // 0x13b6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_13b6a4:
    // 0x13b6a4: 0xc04f164  jal         func_13C590
label_13b6a8:
    if (ctx->pc == 0x13B6A8u) {
        ctx->pc = 0x13B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6A4u;
        // 0x13b6a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B6ACu;
        goto label_13b6ac;
    }
    ctx->pc = 0x13B6A4u;
    SET_GPR_U32(ctx, 31, 0x13B6ACu);
    ctx->pc = 0x13B6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6A4u;
    // 0x13b6a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C590u, 0x13B6A4u, 0x13B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6ACu;
label_13b6ac:
    // 0x13b6ac: 0x86020350  lh          $v0, 0x350($s0)
    ctx->pc = 0x13b6acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 848)));
label_13b6b0:
    // 0x13b6b0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x13b6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_13b6b4:
    // 0x13b6b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_13b6b8:
    if (ctx->pc == 0x13B6B8u) {
        ctx->pc = 0x13B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6B4u;
        // 0x13b6b8: 0xae0003cc  sw          $zero, 0x3CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B6BCu;
        goto label_13b6bc;
    }
    ctx->pc = 0x13B6B4u;
    {
        const bool branch_taken_0x13b6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6B4u;
        // 0x13b6b8: 0xae0003cc  sw          $zero, 0x3CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6b4) {
            ctx->pc = 0x13B6E4u;
            goto label_13b6e4;
        }
    }
    ctx->pc = 0x13B6BCu;
label_13b6bc:
    // 0x13b6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b6c0:
    // 0x13b6c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b6c4:
    // 0x13b6c4: 0xa20203e8  sb          $v0, 0x3E8($s0)
    ctx->pc = 0x13b6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1000), (uint8_t)GPR_U32(ctx, 2));
label_13b6c8:
    // 0x13b6c8: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x13b6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_13b6cc:
    // 0x13b6cc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x13b6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_13b6d0:
    // 0x13b6d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x13b6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13b6d4:
    // 0x13b6d4: 0x84640130  lh          $a0, 0x130($v1)
    ctx->pc = 0x13b6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 304)));
label_13b6d8:
    // 0x13b6d8: 0x8c620134  lw          $v0, 0x134($v1)
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
label_13b6dc:
    // 0x13b6dc: 0x40f809  jalr        $v0
label_13b6e0:
    if (ctx->pc == 0x13B6E0u) {
        ctx->pc = 0x13B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6DCu;
        // 0x13b6e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B6E4u;
        goto label_13b6e4;
    }
    ctx->pc = 0x13B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B6E4u);
        ctx->pc = 0x13B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6DCu;
        // 0x13b6e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B6DCu, 0x13B6E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B6E4u;
label_13b6e4:
    // 0x13b6e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13b6e8:
    // 0x13b6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b6ec:
    // 0x13b6ec: 0x3e00008  jr          $ra
label_13b6f0:
    if (ctx->pc == 0x13B6F0u) {
        ctx->pc = 0x13B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6ECu;
        // 0x13b6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B6F4u;
        goto label_13b6f4;
    }
    ctx->pc = 0x13B6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6ECu;
        // 0x13b6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B6F4u;
label_13b6f4:
    // 0x13b6f4: 0x0  nop
    ctx->pc = 0x13b6f4u;
    // NOP
    ctx->pc = 0x13b6f8u;
}

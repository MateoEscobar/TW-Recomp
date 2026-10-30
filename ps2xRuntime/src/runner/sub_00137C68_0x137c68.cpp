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

// Function: sub_00137C68
// Address: 0x137c68 - 0x137cb0
void sub_00137C68_0x137c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137C68_0x137c68");
#endif

    switch (ctx->pc) {
        case 0x137c98u: goto label_137c98;
        default: break;
    }

    ctx->pc = 0x137c68u;

    // 0x137c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137c6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x137c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x137c70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137c74: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x137C74u;
    {
        const bool branch_taken_0x137c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x137C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C74u;
        // 0x137c78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c74) {
            ctx->pc = 0x137C9Cu;
            goto label_137c9c;
        }
    }
    ctx->pc = 0x137C7Cu;
    // 0x137c7c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x137C7Cu;
    {
        const bool branch_taken_0x137c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C7Cu;
        // 0x137c80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c7c) {
            ctx->pc = 0x137CA0u;
            goto label_137ca0;
        }
    }
    ctx->pc = 0x137C84u;
    // 0x137c84: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x137c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x137c88: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x137c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x137c8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x137c90: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x137C90u;
    SET_GPR_U32(ctx, 31, 0x137C98u);
    ctx->pc = 0x137C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C90u;
    // 0x137c94: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x137C90u, 0x137C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C98u;
label_137c98:
    // 0x137c98: 0xe60091d4  swc1        $f0, -0x6E2C($s0)
    ctx->pc = 0x137c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294939092), bits); }
label_137c9c:
    // 0x137c9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_137ca0:
    // 0x137ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x137CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137CA4u;
        // 0x137ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137CACu;
    // 0x137cac: 0x0  nop
    ctx->pc = 0x137cacu;
    // NOP
    ctx->pc = 0x137cb0u;
}

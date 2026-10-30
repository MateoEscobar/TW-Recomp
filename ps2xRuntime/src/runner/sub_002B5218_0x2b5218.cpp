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

// Function: sub_002B5218
// Address: 0x2b5218 - 0x2b5280
void sub_002B5218_0x2b5218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5218_0x2b5218");
#endif

    switch (ctx->pc) {
        case 0x2b5240u: goto label_2b5240;
        case 0x2b5264u: goto label_2b5264;
        default: break;
    }

    ctx->pc = 0x2b5218u;

    // 0x2b5218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b521c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b5220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b5220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b5224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5228: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b522c: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x2b522cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b5230: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B5230u;
    {
        const bool branch_taken_0x2b5230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5230u;
        // 0x2b5234: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5230) {
            ctx->pc = 0x2B5270u;
            goto label_2b5270;
        }
    }
    ctx->pc = 0x2B5238u;
    // 0x2b5238: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x2B5238u;
    SET_GPR_U32(ctx, 31, 0x2B5240u);
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x2B5238u, 0x2B5240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5240u;
label_2b5240:
    // 0x2b5240: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2b5240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2b5244: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b5244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5248: 0x0  nop
    ctx->pc = 0x2b5248u;
    // NOP
    // 0x2b524c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b524cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5250: 0x0  nop
    ctx->pc = 0x2b5250u;
    // NOP
    // 0x2b5254: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5254u;
    {
        const bool branch_taken_0x2b5254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5254) {
            ctx->pc = 0x2B5258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5254u;
            // 0x2b5258: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5274u;
            goto label_2b5274;
        }
    }
    ctx->pc = 0x2B525Cu;
    // 0x2b525c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B525Cu;
    SET_GPR_U32(ctx, 31, 0x2B5264u);
    ctx->pc = 0x2B5260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B525Cu;
    // 0x2b5260: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B525Cu, 0x2B5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5264u;
label_2b5264:
    // 0x2b5264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b5264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5268: 0xa2030015  sb          $v1, 0x15($s0)
    ctx->pc = 0x2b5268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b526c: 0xa2030014  sb          $v1, 0x14($s0)
    ctx->pc = 0x2b526cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 3));
label_2b5270:
    // 0x2b5270: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b5270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5274:
    // 0x2b5274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5278: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5278u;
        // 0x2b527c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5280u;
}

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

// Function: sub_004DC8A0
// Address: 0x4dc8a0 - 0x4dc8f8
void sub_004DC8A0_0x4dc8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC8A0_0x4dc8a0");
#endif

    switch (ctx->pc) {
        case 0x4dc8a0u: goto label_4dc8a0;
        case 0x4dc8a4u: goto label_4dc8a4;
        case 0x4dc8a8u: goto label_4dc8a8;
        case 0x4dc8acu: goto label_4dc8ac;
        case 0x4dc8b0u: goto label_4dc8b0;
        case 0x4dc8b4u: goto label_4dc8b4;
        case 0x4dc8b8u: goto label_4dc8b8;
        case 0x4dc8bcu: goto label_4dc8bc;
        case 0x4dc8c0u: goto label_4dc8c0;
        case 0x4dc8c4u: goto label_4dc8c4;
        case 0x4dc8c8u: goto label_4dc8c8;
        case 0x4dc8ccu: goto label_4dc8cc;
        case 0x4dc8d0u: goto label_4dc8d0;
        case 0x4dc8d4u: goto label_4dc8d4;
        case 0x4dc8d8u: goto label_4dc8d8;
        case 0x4dc8dcu: goto label_4dc8dc;
        case 0x4dc8e0u: goto label_4dc8e0;
        case 0x4dc8e4u: goto label_4dc8e4;
        case 0x4dc8e8u: goto label_4dc8e8;
        case 0x4dc8ecu: goto label_4dc8ec;
        case 0x4dc8f0u: goto label_4dc8f0;
        case 0x4dc8f4u: goto label_4dc8f4;
        default: break;
    }

    ctx->pc = 0x4dc8a0u;

label_4dc8a0:
    // 0x4dc8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dc8a4:
    // 0x4dc8a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dc8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dc8a8:
    // 0x4dc8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc8ac:
    // 0x4dc8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc8b0:
    // 0x4dc8b0: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x4dc8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc8b4:
    // 0x4dc8b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc8b8:
    // 0x4dc8b8: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x4dc8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_4dc8bc:
    // 0x4dc8bc: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x4dc8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_4dc8c0:
    // 0x4dc8c0: 0x60f809  jalr        $v1
label_4dc8c4:
    if (ctx->pc == 0x4DC8C4u) {
        ctx->pc = 0x4DC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC8C0u;
        // 0x4dc8c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC8C8u;
        goto label_4dc8c8;
    }
    ctx->pc = 0x4DC8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC8C8u);
        ctx->pc = 0x4DC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC8C0u;
        // 0x4dc8c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC8C0u, 0x4DC8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC8C8u;
label_4dc8c8:
    // 0x4dc8c8: 0xc6030220  lwc1        $f3, 0x220($s0)
    ctx->pc = 0x4dc8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dc8cc:
    // 0x4dc8cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4dc8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4dc8d0:
    // 0x4dc8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4dc8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc8d4:
    // 0x4dc8d4: 0xc6020228  lwc1        $f2, 0x228($s0)
    ctx->pc = 0x4dc8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dc8d8:
    // 0x4dc8d8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4dc8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4dc8dc:
    // 0x4dc8dc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4dc8dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4dc8e0:
    // 0x4dc8e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dc8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc8e4:
    // 0x4dc8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc8e8:
    // 0x4dc8e8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x4dc8e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4dc8ec:
    // 0x4dc8ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4dc8ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4dc8f0:
    // 0x4dc8f0: 0x3e00008  jr          $ra
label_4dc8f4:
    if (ctx->pc == 0x4DC8F4u) {
        ctx->pc = 0x4DC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC8F0u;
        // 0x4dc8f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC8F8u;
        goto label_fallthrough_0x4dc8f0;
    }
    ctx->pc = 0x4DC8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC8F0u;
        // 0x4dc8f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dc8f0:
    ctx->pc = 0x4DC8F8u;
}

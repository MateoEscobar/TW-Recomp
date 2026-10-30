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

// Function: sub_004DC8F8
// Address: 0x4dc8f8 - 0x4dc950
void sub_004DC8F8_0x4dc8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC8F8_0x4dc8f8");
#endif

    switch (ctx->pc) {
        case 0x4dc8f8u: goto label_4dc8f8;
        case 0x4dc8fcu: goto label_4dc8fc;
        case 0x4dc900u: goto label_4dc900;
        case 0x4dc904u: goto label_4dc904;
        case 0x4dc908u: goto label_4dc908;
        case 0x4dc90cu: goto label_4dc90c;
        case 0x4dc910u: goto label_4dc910;
        case 0x4dc914u: goto label_4dc914;
        case 0x4dc918u: goto label_4dc918;
        case 0x4dc91cu: goto label_4dc91c;
        case 0x4dc920u: goto label_4dc920;
        case 0x4dc924u: goto label_4dc924;
        case 0x4dc928u: goto label_4dc928;
        case 0x4dc92cu: goto label_4dc92c;
        case 0x4dc930u: goto label_4dc930;
        case 0x4dc934u: goto label_4dc934;
        case 0x4dc938u: goto label_4dc938;
        case 0x4dc93cu: goto label_4dc93c;
        case 0x4dc940u: goto label_4dc940;
        case 0x4dc944u: goto label_4dc944;
        case 0x4dc948u: goto label_4dc948;
        case 0x4dc94cu: goto label_4dc94c;
        default: break;
    }

    ctx->pc = 0x4dc8f8u;

label_4dc8f8:
    // 0x4dc8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dc8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dc8fc:
    // 0x4dc8fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dc8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dc900:
    // 0x4dc900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc904:
    // 0x4dc904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc908:
    // 0x4dc908: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x4dc908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc90c:
    // 0x4dc90c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc910:
    // 0x4dc910: 0x84440208  lh          $a0, 0x208($v0)
    ctx->pc = 0x4dc910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 520)));
label_4dc914:
    // 0x4dc914: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x4dc914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_4dc918:
    // 0x4dc918: 0x60f809  jalr        $v1
label_4dc91c:
    if (ctx->pc == 0x4DC91Cu) {
        ctx->pc = 0x4DC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC918u;
        // 0x4dc91c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC920u;
        goto label_4dc920;
    }
    ctx->pc = 0x4DC918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC920u);
        ctx->pc = 0x4DC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC918u;
        // 0x4dc91c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC918u, 0x4DC920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC920u;
label_4dc920:
    // 0x4dc920: 0xc6030220  lwc1        $f3, 0x220($s0)
    ctx->pc = 0x4dc920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dc924:
    // 0x4dc924: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4dc924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4dc928:
    // 0x4dc928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4dc928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc92c:
    // 0x4dc92c: 0xc602022c  lwc1        $f2, 0x22C($s0)
    ctx->pc = 0x4dc92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dc930:
    // 0x4dc930: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4dc930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4dc934:
    // 0x4dc934: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4dc934u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4dc938:
    // 0x4dc938: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dc938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc93c:
    // 0x4dc93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc940:
    // 0x4dc940: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x4dc940u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4dc944:
    // 0x4dc944: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4dc944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4dc948:
    // 0x4dc948: 0x3e00008  jr          $ra
label_4dc94c:
    if (ctx->pc == 0x4DC94Cu) {
        ctx->pc = 0x4DC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC948u;
        // 0x4dc94c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC950u;
        goto label_fallthrough_0x4dc948;
    }
    ctx->pc = 0x4DC948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC948u;
        // 0x4dc94c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dc948:
    ctx->pc = 0x4DC950u;
}

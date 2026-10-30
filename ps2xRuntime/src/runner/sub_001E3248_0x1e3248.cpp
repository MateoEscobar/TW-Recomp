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

// Function: sub_001E3248
// Address: 0x1e3248 - 0x1e32a0
void sub_001E3248_0x1e3248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3248_0x1e3248");
#endif

    switch (ctx->pc) {
        case 0x1e3248u: goto label_1e3248;
        case 0x1e324cu: goto label_1e324c;
        case 0x1e3250u: goto label_1e3250;
        case 0x1e3254u: goto label_1e3254;
        case 0x1e3258u: goto label_1e3258;
        case 0x1e325cu: goto label_1e325c;
        case 0x1e3260u: goto label_1e3260;
        case 0x1e3264u: goto label_1e3264;
        case 0x1e3268u: goto label_1e3268;
        case 0x1e326cu: goto label_1e326c;
        case 0x1e3270u: goto label_1e3270;
        case 0x1e3274u: goto label_1e3274;
        case 0x1e3278u: goto label_1e3278;
        case 0x1e327cu: goto label_1e327c;
        case 0x1e3280u: goto label_1e3280;
        case 0x1e3284u: goto label_1e3284;
        case 0x1e3288u: goto label_1e3288;
        case 0x1e328cu: goto label_1e328c;
        case 0x1e3290u: goto label_1e3290;
        case 0x1e3294u: goto label_1e3294;
        case 0x1e3298u: goto label_1e3298;
        case 0x1e329cu: goto label_1e329c;
        default: break;
    }

    ctx->pc = 0x1e3248u;

label_1e3248:
    // 0x1e3248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e324c:
    // 0x1e324c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e3250:
    // 0x1e3250: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e3254:
    // 0x1e3254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3258:
    // 0x1e3258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e325c:
    // 0x1e325c: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1e325cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_1e3260:
    // 0x1e3260: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1e3264:
    // 0x1e3264: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1e3264u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1e3268:
    // 0x1e3268: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1e3268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1e326c:
    // 0x1e326c: 0x40f809  jalr        $v0
label_1e3270:
    if (ctx->pc == 0x1E3270u) {
        ctx->pc = 0x1E3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E326Cu;
        // 0x1e3270: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3274u;
        goto label_1e3274;
    }
    ctx->pc = 0x1E326Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3274u);
        ctx->pc = 0x1E3270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E326Cu;
        // 0x1e3270: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E326Cu, 0x1E3274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3274u;
label_1e3274:
    // 0x1e3274: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1e3274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3278:
    // 0x1e3278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e327c:
    // 0x1e327c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e327cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3280:
    // 0x1e3280: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1e3280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3284:
    // 0x1e3284: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e3284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e3288:
    // 0x1e3288: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1e3288u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e328c:
    // 0x1e328c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1e328cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_1e3290:
    // 0x1e3290: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e3290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3294:
    // 0x1e3294: 0x3e00008  jr          $ra
label_1e3298:
    if (ctx->pc == 0x1E3298u) {
        ctx->pc = 0x1E3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3294u;
        // 0x1e3298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E329Cu;
        goto label_1e329c;
    }
    ctx->pc = 0x1E3294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3294u;
        // 0x1e3298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E329Cu;
label_1e329c:
    // 0x1e329c: 0x0  nop
    ctx->pc = 0x1e329cu;
    // NOP
    ctx->pc = 0x1e32a0u;
}

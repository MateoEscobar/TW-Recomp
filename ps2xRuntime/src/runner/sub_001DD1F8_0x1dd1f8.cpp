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

// Function: sub_001DD1F8
// Address: 0x1dd1f8 - 0x1dd258
void sub_001DD1F8_0x1dd1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD1F8_0x1dd1f8");
#endif

    switch (ctx->pc) {
        case 0x1dd1f8u: goto label_1dd1f8;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd200u: goto label_1dd200;
        case 0x1dd204u: goto label_1dd204;
        case 0x1dd208u: goto label_1dd208;
        case 0x1dd20cu: goto label_1dd20c;
        case 0x1dd210u: goto label_1dd210;
        case 0x1dd214u: goto label_1dd214;
        case 0x1dd218u: goto label_1dd218;
        case 0x1dd21cu: goto label_1dd21c;
        case 0x1dd220u: goto label_1dd220;
        case 0x1dd224u: goto label_1dd224;
        case 0x1dd228u: goto label_1dd228;
        case 0x1dd22cu: goto label_1dd22c;
        case 0x1dd230u: goto label_1dd230;
        case 0x1dd234u: goto label_1dd234;
        case 0x1dd238u: goto label_1dd238;
        case 0x1dd23cu: goto label_1dd23c;
        case 0x1dd240u: goto label_1dd240;
        case 0x1dd244u: goto label_1dd244;
        case 0x1dd248u: goto label_1dd248;
        case 0x1dd24cu: goto label_1dd24c;
        case 0x1dd250u: goto label_1dd250;
        case 0x1dd254u: goto label_1dd254;
        default: break;
    }

    ctx->pc = 0x1dd1f8u;

label_1dd1f8:
    // 0x1dd1f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1dd1fc:
    // 0x1dd1fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dd200:
    // 0x1dd200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dd204:
    // 0x1dd204: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd208:
    // 0x1dd208: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1dd208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1dd20c:
    // 0x1dd20c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dd20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd210:
    // 0x1dd210: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1dd210u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1dd214:
    // 0x1dd214: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dd214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd218:
    // 0x1dd218: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1dd218u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1dd21c:
    // 0x1dd21c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1dd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1dd220:
    // 0x1dd220: 0x60f809  jalr        $v1
label_1dd224:
    if (ctx->pc == 0x1DD224u) {
        ctx->pc = 0x1DD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD220u;
        // 0x1dd224: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD228u;
        goto label_1dd228;
    }
    ctx->pc = 0x1DD220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD228u);
        ctx->pc = 0x1DD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD220u;
        // 0x1dd224: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD220u, 0x1DD228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD228u;
label_1dd228:
    // 0x1dd228: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1dd228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1dd22c:
    // 0x1dd22c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dd22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1dd230:
    // 0x1dd230: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dd230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dd234:
    // 0x1dd234: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1dd238:
    // 0x1dd238: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1dd238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1dd23c:
    // 0x1dd23c: 0x60f809  jalr        $v1
label_1dd240:
    if (ctx->pc == 0x1DD240u) {
        ctx->pc = 0x1DD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD23Cu;
        // 0x1dd240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD244u;
        goto label_1dd244;
    }
    ctx->pc = 0x1DD23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DD244u);
        ctx->pc = 0x1DD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD23Cu;
        // 0x1dd240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD23Cu, 0x1DD244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD244u;
label_1dd244:
    // 0x1dd244: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd248:
    // 0x1dd248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd24c:
    // 0x1dd24c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1dd24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1dd250:
    // 0x1dd250: 0x3e00008  jr          $ra
label_1dd254:
    if (ctx->pc == 0x1DD254u) {
        ctx->pc = 0x1DD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD250u;
        // 0x1dd254: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD258u;
        goto label_fallthrough_0x1dd250;
    }
    ctx->pc = 0x1DD250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD250u;
        // 0x1dd254: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd250:
    ctx->pc = 0x1DD258u;
}

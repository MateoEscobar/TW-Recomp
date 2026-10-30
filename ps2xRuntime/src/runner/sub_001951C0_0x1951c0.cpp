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

// Function: sub_001951C0
// Address: 0x1951c0 - 0x195238
void sub_001951C0_0x1951c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001951C0_0x1951c0");
#endif

    switch (ctx->pc) {
        case 0x1951c0u: goto label_1951c0;
        case 0x1951c4u: goto label_1951c4;
        case 0x1951c8u: goto label_1951c8;
        case 0x1951ccu: goto label_1951cc;
        case 0x1951d0u: goto label_1951d0;
        case 0x1951d4u: goto label_1951d4;
        case 0x1951d8u: goto label_1951d8;
        case 0x1951dcu: goto label_1951dc;
        case 0x1951e0u: goto label_1951e0;
        case 0x1951e4u: goto label_1951e4;
        case 0x1951e8u: goto label_1951e8;
        case 0x1951ecu: goto label_1951ec;
        case 0x1951f0u: goto label_1951f0;
        case 0x1951f4u: goto label_1951f4;
        case 0x1951f8u: goto label_1951f8;
        case 0x1951fcu: goto label_1951fc;
        case 0x195200u: goto label_195200;
        case 0x195204u: goto label_195204;
        case 0x195208u: goto label_195208;
        case 0x19520cu: goto label_19520c;
        case 0x195210u: goto label_195210;
        case 0x195214u: goto label_195214;
        case 0x195218u: goto label_195218;
        case 0x19521cu: goto label_19521c;
        case 0x195220u: goto label_195220;
        case 0x195224u: goto label_195224;
        case 0x195228u: goto label_195228;
        case 0x19522cu: goto label_19522c;
        case 0x195230u: goto label_195230;
        case 0x195234u: goto label_195234;
        default: break;
    }

    ctx->pc = 0x1951c0u;

label_1951c0:
    // 0x1951c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1951c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1951c4:
    // 0x1951c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1951c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1951c8:
    // 0x1951c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1951c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1951cc:
    // 0x1951cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1951ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1951d0:
    // 0x1951d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1951d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1951d4:
    // 0x1951d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1951d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1951d8:
    // 0x1951d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1951d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1951dc:
    // 0x1951dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1951dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1951e0:
    // 0x1951e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1951e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1951e4:
    // 0x1951e4: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1951e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1951e8:
    // 0x1951e8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1951e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1951ec:
    // 0x1951ec: 0x60f809  jalr        $v1
label_1951f0:
    if (ctx->pc == 0x1951F0u) {
        ctx->pc = 0x1951F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951ECu;
        // 0x1951f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951F4u;
        goto label_1951f4;
    }
    ctx->pc = 0x1951ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1951F4u);
        ctx->pc = 0x1951F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951ECu;
        // 0x1951f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951ECu, 0x1951F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1951F4u;
label_1951f4:
    // 0x1951f4: 0xc10b1c6  jal         func_42C718
label_1951f8:
    if (ctx->pc == 0x1951F8u) {
        ctx->pc = 0x1951F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1951F4u;
        // 0x1951f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1951FCu;
        goto label_1951fc;
    }
    ctx->pc = 0x1951F4u;
    SET_GPR_U32(ctx, 31, 0x1951FCu);
    ctx->pc = 0x1951F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1951F4u;
    // 0x1951f8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x1951F4u, 0x1951FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951FCu;
label_1951fc:
    // 0x1951fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1951fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_195200:
    // 0x195200: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x195200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_195204:
    // 0x195204: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x195204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_195208:
    // 0x195208: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x195208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_19520c:
    // 0x19520c: 0x60f809  jalr        $v1
label_195210:
    if (ctx->pc == 0x195210u) {
        ctx->pc = 0x195210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19520Cu;
        // 0x195210: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195214u;
        goto label_195214;
    }
    ctx->pc = 0x19520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195214u);
        ctx->pc = 0x195210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19520Cu;
        // 0x195210: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19520Cu, 0x195214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195214u;
label_195214:
    // 0x195214: 0xc10b1c6  jal         func_42C718
label_195218:
    if (ctx->pc == 0x195218u) {
        ctx->pc = 0x195218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195214u;
        // 0x195218: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19521Cu;
        goto label_19521c;
    }
    ctx->pc = 0x195214u;
    SET_GPR_U32(ctx, 31, 0x19521Cu);
    ctx->pc = 0x195218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195214u;
    // 0x195218: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x195214u, 0x19521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19521Cu;
label_19521c:
    // 0x19521c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x19521cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_195220:
    // 0x195220: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x195220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_195224:
    // 0x195224: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x195224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_195228:
    // 0x195228: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x195228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19522c:
    // 0x19522c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19522cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_195230:
    // 0x195230: 0x3e00008  jr          $ra
label_195234:
    if (ctx->pc == 0x195234u) {
        ctx->pc = 0x195234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195230u;
        // 0x195234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195238u;
        goto label_fallthrough_0x195230;
    }
    ctx->pc = 0x195230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195230u;
        // 0x195234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195230:
    ctx->pc = 0x195238u;
}

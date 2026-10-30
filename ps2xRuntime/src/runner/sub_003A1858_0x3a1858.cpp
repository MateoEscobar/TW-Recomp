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

// Function: sub_003A1858
// Address: 0x3a1858 - 0x3a18b8
void sub_003A1858_0x3a1858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1858_0x3a1858");
#endif

    switch (ctx->pc) {
        case 0x3a1858u: goto label_3a1858;
        case 0x3a185cu: goto label_3a185c;
        case 0x3a1860u: goto label_3a1860;
        case 0x3a1864u: goto label_3a1864;
        case 0x3a1868u: goto label_3a1868;
        case 0x3a186cu: goto label_3a186c;
        case 0x3a1870u: goto label_3a1870;
        case 0x3a1874u: goto label_3a1874;
        case 0x3a1878u: goto label_3a1878;
        case 0x3a187cu: goto label_3a187c;
        case 0x3a1880u: goto label_3a1880;
        case 0x3a1884u: goto label_3a1884;
        case 0x3a1888u: goto label_3a1888;
        case 0x3a188cu: goto label_3a188c;
        case 0x3a1890u: goto label_3a1890;
        case 0x3a1894u: goto label_3a1894;
        case 0x3a1898u: goto label_3a1898;
        case 0x3a189cu: goto label_3a189c;
        case 0x3a18a0u: goto label_3a18a0;
        case 0x3a18a4u: goto label_3a18a4;
        case 0x3a18a8u: goto label_3a18a8;
        case 0x3a18acu: goto label_3a18ac;
        case 0x3a18b0u: goto label_3a18b0;
        case 0x3a18b4u: goto label_3a18b4;
        default: break;
    }

    ctx->pc = 0x3a1858u;

label_3a1858:
    // 0x3a1858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a1858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a185c:
    // 0x3a185c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a185cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a1860:
    // 0x3a1860: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a1860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a1864:
    // 0x3a1864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a1864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1868:
    // 0x3a1868: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a1868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a186c:
    // 0x3a186c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1870:
    // 0x3a1870: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3a1870u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3a1874:
    // 0x3a1874: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x3a1874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3a1878:
    // 0x3a1878: 0xc0f809  jalr        $a2
label_3a187c:
    if (ctx->pc == 0x3A187Cu) {
        ctx->pc = 0x3A187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1878u;
        // 0x3a187c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1880u;
        goto label_3a1880;
    }
    ctx->pc = 0x3A1878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3A1880u);
        ctx->pc = 0x3A187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1878u;
        // 0x3a187c: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1878u, 0x3A1880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1880u;
label_3a1880:
    // 0x3a1880: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3a1880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a1884:
    // 0x3a1884: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a1884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a1888:
    // 0x3a1888: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3a1888u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a188c:
    // 0x3a188c: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x3a188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_3a1890:
    // 0x3a1890: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3a1890u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1894:
    // 0x3a1894: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a1894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a1898:
    // 0x3a1898: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3a1898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3a189c:
    // 0x3a189c: 0x7e040020  sq          $a0, 0x20($s0)
    ctx->pc = 0x3a189cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 4));
label_3a18a0:
    // 0x3a18a0: 0x7e050010  sq          $a1, 0x10($s0)
    ctx->pc = 0x3a18a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 5));
label_3a18a4:
    // 0x3a18a4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x3a18a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_3a18a8:
    // 0x3a18a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a18a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a18ac:
    // 0x3a18ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a18acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a18b0:
    // 0x3a18b0: 0x3e00008  jr          $ra
label_3a18b4:
    if (ctx->pc == 0x3A18B4u) {
        ctx->pc = 0x3A18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18B0u;
        // 0x3a18b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A18B8u;
        goto label_fallthrough_0x3a18b0;
    }
    ctx->pc = 0x3A18B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18B0u;
        // 0x3a18b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A18B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a18b0:
    ctx->pc = 0x3A18B8u;
}

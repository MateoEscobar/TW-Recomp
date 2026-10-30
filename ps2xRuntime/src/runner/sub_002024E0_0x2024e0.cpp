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

// Function: sub_002024E0
// Address: 0x2024e0 - 0x202538
void sub_002024E0_0x2024e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002024E0_0x2024e0");
#endif

    switch (ctx->pc) {
        case 0x2024e0u: goto label_2024e0;
        case 0x2024e4u: goto label_2024e4;
        case 0x2024e8u: goto label_2024e8;
        case 0x2024ecu: goto label_2024ec;
        case 0x2024f0u: goto label_2024f0;
        case 0x2024f4u: goto label_2024f4;
        case 0x2024f8u: goto label_2024f8;
        case 0x2024fcu: goto label_2024fc;
        case 0x202500u: goto label_202500;
        case 0x202504u: goto label_202504;
        case 0x202508u: goto label_202508;
        case 0x20250cu: goto label_20250c;
        case 0x202510u: goto label_202510;
        case 0x202514u: goto label_202514;
        case 0x202518u: goto label_202518;
        case 0x20251cu: goto label_20251c;
        case 0x202520u: goto label_202520;
        case 0x202524u: goto label_202524;
        case 0x202528u: goto label_202528;
        case 0x20252cu: goto label_20252c;
        case 0x202530u: goto label_202530;
        case 0x202534u: goto label_202534;
        default: break;
    }

    ctx->pc = 0x2024e0u;

label_2024e0:
    // 0x2024e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2024e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2024e4:
    // 0x2024e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2024e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2024e8:
    // 0x2024e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2024e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2024ec:
    // 0x2024ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2024ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2024f0:
    // 0x2024f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2024f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2024f4:
    // 0x2024f4: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x2024f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
label_2024f8:
    // 0x2024f8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2024f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2024fc:
    // 0x2024fc: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x2024fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_202500:
    // 0x202500: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x202500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_202504:
    // 0x202504: 0x40f809  jalr        $v0
label_202508:
    if (ctx->pc == 0x202508u) {
        ctx->pc = 0x202508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202504u;
        // 0x202508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20250Cu;
        goto label_20250c;
    }
    ctx->pc = 0x202504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20250Cu);
        ctx->pc = 0x202508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202504u;
        // 0x202508: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202504u, 0x20250Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20250Cu;
label_20250c:
    // 0x20250c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x20250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_202510:
    // 0x202510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202514:
    // 0x202514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_202518:
    // 0x202518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x202518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20251c:
    // 0x20251c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x20251cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_202520:
    // 0x202520: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x202520u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_202524:
    // 0x202524: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x202524u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_202528:
    // 0x202528: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x202528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20252c:
    // 0x20252c: 0x3e00008  jr          $ra
label_202530:
    if (ctx->pc == 0x202530u) {
        ctx->pc = 0x202530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20252Cu;
        // 0x202530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202534u;
        goto label_202534;
    }
    ctx->pc = 0x20252Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20252Cu;
        // 0x202530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20252Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202534u;
label_202534:
    // 0x202534: 0x0  nop
    ctx->pc = 0x202534u;
    // NOP
    ctx->pc = 0x202538u;
}
